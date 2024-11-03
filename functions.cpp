#include <iostream>
#include <string>
#include "functions.h"

using namespace std;

int menu()
{
	int choice;
	cout << "Menu options" << endl;
	cout << "1. " << endl;
	cout << "2. " << endl;
	cout << "3. " << endl;
	cin >> choice;
	return choice;
}