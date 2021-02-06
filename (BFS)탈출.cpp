#define MAX 55

#include <iostream>
#include <queue>
#include <vector>
#include <string>
using namespace std;

int main() { 
	char map[MAX][MAX];
	int water[MAX][MAX];
	bool marked[MAX][MAX];

	pair<int, int> s, e;
	vector<pair<int, int>> v;
	int map_x[4] = { 0, 0, -1, 1 };
	int map_y[4] = { -1, 1, 0, 0 };
	int r, c;
	cin >> r >> c;

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			water[i][j] = 999;
		}
	}
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++)
		{
			cin >> map[i][j];
			if(map[i][j] == 'S'){
				s.first = i;
				s.second = j;
			}
			else if(map[i][j] == 'D') {
				e.first = i;
				e.second = j;
			}
			else if (map[i][j] == '*') {
				water[i][j] = 0;
				v.push_back({ i,j });
			}
		}
	}
	pair<int, int> start;
	pair<int, int> point;
	while (!v.empty()) {
		start.first = v.front().first;
		start.second = v.front().second;
		v.pop_back();
		for (int i = 0; i < 4; i++) {
			point.first = start.first + map_y[i];
			point.second = start.second + map_x[i];
			if (point.first >= 0 && point.second >= 0 && point.first < r && point.second < c) {
				if (map[point.first][point.second] == '.') {
					if (water[point.first][point.second] > water[start.first][start.second] + 1) {
						water[point.first][point.second] = water[start.first][start.second] + 1;
						v.push_back({ point.first, point.second });
					}

				}				
			}
		}
	}
	
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << water[i][j];
		}
		cout << endl;
	}
	
	queue<pair<pair<int, int>, int>> Q;
	Q.push({ {start.first, start.second}, 0 });
	marked[start.first][start.second] = 1;

	while (!Q.empty()) {
		start.first = Q.front().first.first;
		start.second = Q.front().first.second;
		int cnt = Q.front().second;
		Q.pop();
		if (start.first == e.first && start.second == e.second) {
			cout << cnt << endl;
			return 0;

		}
		for (int i = 0; i < 4; i++) {
			point.first = start.first + map_y[i];
			point.second = point.second + map_x[i];
			if (point.first >= 0 && point.second >= 0 && point.first < r && point.second < c) {
				if (!marked[point.first][point.second] && map[point.first][point.second] != 'X' && water[point.first][point.second] > cnt + 1)
				{
					marked[point.first][point.second] = 1;
					Q.push({ { point.first, point.second}, cnt + 1 });
				}

			}

		}
	
	}

	cout << "KAKTUS" << endl;
}