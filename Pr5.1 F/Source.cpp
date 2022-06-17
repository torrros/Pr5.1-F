#include <iostream>
#include "PubRat.h"
#include "Privaterat.h"
using namespace std;

int main()
{
	try
	{
		PubRat pr, p{ 1,8 };
		cin >> pr;

		cout << pr / p << endl;
		cout << pr + p << endl;
		cout << pr - p << endl;

		if ( pr == p )
			cout << "pr == p" << endl;
		else
			cout << "pr != p" << endl;
		
	}
	catch (const exception& e)
	{
		cout << e.what() << endl;
	}
	return 0;
}