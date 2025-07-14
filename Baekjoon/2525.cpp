#include <iostream>

int main()
{
	using namespace std;

	int hour, minute, cookTime;

	cin >> hour >> minute;
	cin >> cookTime;

	minute += cookTime;

	if ((minute/60) >= 1)	// minute과 cookTIme의 합이 60분을 넘을 때
	{
		hour += minute / 60;
		minute %= 60;
		
	}

	if (hour >= 24)
	{
		hour -= 24;
	}

	cout << hour << " " << minute << endl;

}
