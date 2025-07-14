#include <iostream>

int main()
{
	using namespace std;

	int inputNum, sum = 0;

	cin >> inputNum;

	for (int i = 1; i <= inputNum; i++)
	{
		sum += i;
	}

	cout << sum << endl;

}
