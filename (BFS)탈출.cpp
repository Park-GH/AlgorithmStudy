#define MAX 55

#include <iostream>
#include <queue>
#include <vector>
#include <string>
using namespace std;

int map[MAX][MAX] = {0,};
int water[MAX][MAX];
int marked[MAX][MAX];
int map_x[4] = { 0, 0, -1, 1 };
int map_y[4] = { -1, 1, 0, 0 };

struct mapYX {
	int y;
	int x;
};

void printmark(int r, int c) {
	cout << endl << endl;
	for (int i = 0; i <= r + 1; i++) {
		for (int j = 0; j <= c + 1; j++) {
			cout << marked[i][j];
		}
		cout << endl;
	}
}
void printmap(int r, int c) {
	cout << endl << endl;
	for (int i = 0; i <= r + 1; i++) {
		for (int j = 0; j <= c + 1; j++) {
			cout << map[i][j];
		}
		cout << endl;
	}
}

void BFS(mapYX s, mapYX e) {
	queue<mapYX> q;
	mapYX start, point;
	marked[s.y][s.x] = 1;
	q.push(s);
	
	while (!q.empty()) {
		start = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			point.y = start.y + map_y[i];
			point.x = start.x + map_x[i];
			if (marked[point.y][point.x] == 0) {
				marked[point.y][point.x] = 1;
				map[point.y][point.x] = map[start.y][start.x] + 1;
				q.push({ point.y, point.x });
			}
		}

	}
}
void waterBFS(mapYX s, mapYX e, int cnt) {
	queue<mapYX> q;
	mapYX start, point;
	marked[s.y][s.x] = cnt;
	q.push(s);

	while (!q.empty()) {
		start = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			point.y = start.y + map_y[i];
			point.x = start.x + map_x[i];
			if (marked[point.y][point.x] == cnt - 1) {
				marked[point.y][point.x] = cnt;
				map[point.y][point.x] = map[start.y][start.x] + 1;
				q.push({ point.y, point.x });
			}
		}

	}
}


int main() { 
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	mapYX s, e;
	queue<mapYX> waterr;
	

	int r, c;
	
	cin >> r >> c;
	for (int i = 0; i <= r + 1; i++) {
		marked[i][0] = -1;
		marked[i][c + 1] = -1;
	}
	for (int i = 0; i <= c + 1; i++) {
		marked[0][i] = -1;
		marked[r+1][i] = -1;
	}
	

	for (int i = 1; i <= r; i++) {
		for (int j = 1; j <= c; j++) {
			char ch;
			cin >> ch;
			if (ch == 'S') {
				s = { i,j };
				map[i][j] = 0;
			}
			else if (ch == 'D')
				e = { i,j };
			else if (ch == '*')
				waterr.push({ i, j });
			else if (ch == 'X')
				marked[i][j] = -1;
		}
	}
	int cnt = 1;
	BFS(s, e);
	while (!waterr.empty()){
		cnt++;
		waterBFS(waterr.front(), e, cnt);
		waterr.pop();
	}
	printmap(r, c);
	printmark(r, c);

}