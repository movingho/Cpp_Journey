#include <iostream>

int main()
{
	using namespace std;

	int num1, num2;
	cin >> num1;
	cin >> num2;

	if (num1 > 0 && num2 > 0)
	{
		cout << "1" << endl;
	}
	else if (num1 < 0 && num2 > 0)
	{
		cout << "2" << endl;
	}
	else if (num1 < 0 && num2 < 0)
	{
		cout << "3" << endl;
	}
	else
	{
		cout << "4" << endl;
	}


}
