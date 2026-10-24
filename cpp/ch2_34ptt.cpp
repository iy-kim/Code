#include "PPP.h"

int main()
{
	cout << "Please enter your first and second names\n";
	string first;
	string second;
	
	double age;
	
	cin >> first >> second;
	cout << " What is your age?\n";
	cin >> age;
	
	cout << "Hello," << first << " " << second << '\n';
	cout << "Your age as month is about " << age*12 << " months\n";
}
