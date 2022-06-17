#include "Pair.h"
#include <sstream>
#include <iostream>

using namespace std;

Pair :: Pair( int a, int b)
{
	seta(a);
	setb(b);
}

Pair:: Pair (const Pair& p)
{
	*this = p;
}

Pair& Pair:: operator= (const Pair& p)
{
	a = p.a;
	b = p.b;
	return *this;
		
}

Pair:: operator string () const
{
	stringstream ss;
	ss << "(" << a << "," << b << ")";
	return ss.str();
	}

ostream & operator<< (ostream & os, const Pair & p)
{
	os << "(" << p.a << "," << p.b << ")";
	return os;
}

istream & operator>> (istream & is, Pair & p)
{
 cout << " a - ";
cin>> p.a;
cout << " b - ";
cin>> p.b;

return is;

}

 Pair operator- (const Pair& p1, Pair p2)
{	
	return Pair( p1.a - p2.a, p1.b - p2.b);
}