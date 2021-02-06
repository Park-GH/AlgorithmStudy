#define MAX 101

#include <iostream>
#include <queue>
using namespace std;
char map[MAX][MAX] = { 0, };
int marked[MAX][MAX];
int map_y[4] = { -1, 1, 0, 0 };
int map_x[4] = { 0, 0, -1, 1 };

struct mapYX {
	int y;
	int x;
};

int main() {

	int n;
	cin >> n;
	for (int i = 0; i < MAX; i++)
		for (int j = 0; j < MAX; j++) {
			marked[i][j] = -2;
		}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> map[i][j];
			marked[i][j] = -1;
		}
	}

	cout << endl;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << map[i][j];
		}
		cout << endl;
	}
	queue<mapYX> q;
	queue<mapYX> block;
	q.push({ 1,1 });
	mapYX start;
	mapYX point;
	marked[0][0] = 0;
	int mark = 0;
		while (!q.empty()) {

			start = q.front();
			q.pop();
			for (int i = 0; i < 4; i++) {
				point.y = start.y + map_y[i];
				point.x = start.x + map_x[i];
				if ((map[start.y][start.x] == map[point.y][point.x]) && (-1 == marked[point.y][point.x])) {
					q.push(point);
					marked[point.y][point.x] = mark;
				}
				else
					block.push(point);
			}
			mark++;
		}
		while (!block.empty()) {
			q.push(block.front());
			block.pop();
			while (!q.empty()) {

				start = q.front();
				q.pop();
				for (int i = 0; i < 4; i++) {
					point.y = start.y + map_y[i];
					point.x = start.x + map_x[i];
					if ((map[start.y][start.x] == map[point.y][point.x]) && (-1 == marked[point.y][point.x])) {
						q.push(point);
						marked[point.y][point.x] = mark;
					}
					else
						block.push(point);
				}



			}
			mark++;
		}
	
	cout << endl;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << marked[i][j];
		}
		cout << endl;
	}
}