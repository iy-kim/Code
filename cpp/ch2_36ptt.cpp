#include "PPP.h"

int main()
{
	cout << " Please enter a floating-point value: ";

	double n = 0;

	cin >> n;

	cout << "n== " << n
		 << "\nn+1 = " << n+1
		 << "\nthree times n == " << 3*n
		 << "\ntwice n == " << n+n
		 << "\nn squared = " <<n*n
		 << "\nhalf of n == " << n/2
		 << "\nsquare root of n == " << sqrt(n)
		 << "\n\n";

	
	int a, b = 0;

	cout << " Please enter a integer: a is : ";
	cin >> a;
	cout << "\n\t\t\t b is : ";
	cin >> b;
	
	cout << " a/b is = " << a/b << '\n';
	cout << " a%b is = " << a%b << '\n';
	cout << " a/b*b+a%b  = " << a/b*b+a%b << " is a" << '\n';
}
