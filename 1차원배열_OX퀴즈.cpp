#include <iostream>
using namespace std;

int main() {
	char lit[80];
	int num;
	int index = 0;
	int O_index = 0;
	int point = 0;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cin >> lit;
		index = 0;
		O_index = 0;
		point = 0;
		while (lit[index] != '\0')
		{
			if (lit[index] == 'X')
			{
				lit[index] = 0;
				O_index = 0;
			}
			if (lit[index] == 'O')
			{
				lit[index] = ++O_index;
			}
			point += lit[index];
			index++;
		}
		cout << point << "\n";
	}
}

//#include<iostream> using namespace std; int main() { char input[80]; // OX�� �� ���ڿ� int sum=0; // ����(���) int correct=0; // 'O'�ϋ� �������� int loopTime=0; // �׽�Ʈ Ƚ�� ������ int time; // �ݺ� Ƚ�� cin >> time; // �ݺ� Ƚ�� �Է� while (time>loopTime) { cin >> input; // O X �Է� // ���ڿ� �迭 ����ŭ �ݺ� for (int i = 0; i < strlen(input); i++) { if (input[i] == 'O')// O�϶� { correct++; // �������� ���� sum = sum + correct; // ���տ� �����ֱ� } else // X �ϋ� { correct = 0; // �������� �ʱ�ȭ } } cout << sum << endl; //��� sum = 0; // �հ� �ʱ�ȭ correct = 0; //������ �ʱ�ȭ loopTime++;// �ݺ�Ƚ������ } return 0; }

