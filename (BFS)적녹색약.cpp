#define MAX 102

#include <iostream>
#include <queue>
#include <cstring>

using namespace std;
int mark = 0;
bool marked[MAX][MAX] = { 0, };
char map[MAX][MAX] = {0,};

struct mapYX {
	int y;
	int x;
};

 int moveY[4] = {-1, 1, 0, 0 };
 int moveX[4] = {0, 0, -1, 1 };

 void BFS(int y, int x) {
	 mapYX start;
	 mapYX temp;
	 queue<mapYX> q;
	 q.push({y,x});
	 while (!q.empty()) {
		 start = q.front();
		 q.pop();
		 for (int i = 0; i < 4; i++) {
			 temp.y = start.y + moveY[i];
			 temp.x = start.x + moveX[i];

			 if (map[temp.y][temp.x] == map[start.y][start.x] && marked[temp.y][temp.x] == 0) {
				 q.push(temp);
				 marked[temp.y][temp.x] = 1;
			 }
		 }


	 }
 
 }

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;


	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> map[i][j];
		}
	}
	
	for(int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++) {
			if (marked[i][j] == 0) {
				BFS(i,j);
				mark++;
			}
	}
	}
	cout << mark << " ";

	memset(marked, 0, sizeof(marked));


	mark = 0;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			marked[i][j] = 0;
			if (map[i][j] == 'R')
				map[i][j] = 'G';
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (marked[i][j] == 0) {
				BFS(i, j);
				mark++;
			}
		}
	}
	cout << mark;
}
