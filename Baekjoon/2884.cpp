#include <iostream>

int main()
{
	using namespace std;

	int hour, minute;

	cin >> hour >> minute;

		if (minute < 45)
		{
			if (hour > 0)
			{
				hour -= 1;
				minute = 60 - (45 - minute);
			}
			else
			{
				hour = 23;
				minute = 60 - (45 - minute);

			}
			
		}
		else
		{
			minute -= 45;
		}

		cout << hour << " " << minute << endl;
	}

