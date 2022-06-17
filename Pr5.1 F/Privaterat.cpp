#include "Privaterat.h"
#include <iostream>
#include <sstream>
using namespace std;

Privaterat::Privaterat(const Pair& p)
{
	seta(p.geta());
	setb(p.getb());
}

Privaterat:: Privaterat(const Privaterat& p)
{
	* this = p;
}

Privaterat&  Privaterat :: operator=(const Privaterat& p)
{
	
		seta(p.geta());
		setb(p.getb());
	return *this;
}

Privaterat :: operator string () const 
{
	stringstream ss;
	ss << "(" << geta() << "," << getb() << ")";
	return ss.str();
}

ostream & operator<<(ostream & os, const Privaterat& p)
{
	os << "(" << p.geta() << "," << p.getb() << ")";
	return os;
}

istream & operator>>(istream & is, Privaterat& p)
{
	int a, b;
	cout << "a- ";
	cin >> a;
	cout << "b- ";
	cin >> b;
	p.seta(a);
	p.setb(b);
	return is;
}

Privaterat operator + (const Privaterat& p1, const Privaterat& p2)
{
	return Privaterat(p1.geta() + p2.geta(), p1.getb() + p2.getb());
}

Privaterat operator - (const Privaterat& p1, const Privaterat& p2)
{
	return Privaterat(p1.geta() - p2.geta(), p1.getb() - p2.getb());
}
Privaterat operator / ( const Privaterat& p1, const Privaterat& p2)
{
	return Privaterat(p1.geta() * p2.getb(), p1.getb() * p2.geta());
}