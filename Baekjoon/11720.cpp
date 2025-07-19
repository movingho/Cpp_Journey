#include <iostream>
#include <string>

using namespace std;

int main()
{
	int num_size;
	int sum = 0;
	string num_string;
	cin >> num_size >> num_string;

	for (int i = 0; i < num_size; i++)
	{
		sum += (num_string[i] - '0');
	}

	cout << sum << endl;



	return 0;
}
