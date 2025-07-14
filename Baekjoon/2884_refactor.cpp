#include <iostream>

int main()
{
	using namespace std;

	int hour, minute;

	cin >> hour >> minute;

	minute -= 45;	// 일단 45 빼고 시작

	if (minute < 0)	// minute < 45 일 때
	{
		minute += 60;	
		hour -= 1;
	}

	if (hour < 0)	// 시작 hour = 0, minute < 45 인 경우
	{
		hour += 24;  
	}

	cout << hour << " " << minute << endl;

}
