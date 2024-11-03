#include <iostream>
#include <string>
#include "functions.h"

using namespace std;

int main()
{
	bool notDone = true;
	while (notDone)
	{
		int option = menu();
		switch (option)
		{
		case 1: calcBMI();
			break;
		case 2: leapYear();
			break;
		default: notDone = false;		
		}
	}

	return 0;
}