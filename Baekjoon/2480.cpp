#include <iostream>

int main()
{
	using namespace std;

	int dice1, dice2, dice3, box, prize;

	cin >> dice1 >> dice2 >> dice3;

	if (dice1 < dice3)  // 크기 순으로 정렬
	{
		box = dice1;
		dice1 = dice3;
		dice3 = box;
	}

	if (dice1 < dice2) 
	{
		box = dice1;
		dice1 = dice2;
		dice2 = box;
	}

	if (dice2 < dice3)
	{
		box = dice2;
		dice2 = dice3;
		dice3 = box;
	}
	
	
	if (dice1 == dice3)  // dice1과 dice3이 같으면 세 수가 모두 같음
	{
		prize = 10000 + (dice1 * 1000);
	}

	else if (dice1 == dice2 || dice2 == dice3)  // 두 수가 같다면 dice2는 무조건 포함
	{
		prize = 1000 + (dice2 * 100);
	}

	else  // 가장 큰 수는 항상 dice1
	{
		prize = dice1 * 100;
	}


	cout << prize << endl;
}
