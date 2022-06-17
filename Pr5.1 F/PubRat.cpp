#include "PubRat.h"
#include <iostream>
#include <sstream>

using namespace std;

PubRat:: PubRat (int a , int b): Pair (a,b)
{
	if ( b==0)
		throw Exception("Can`t cout 0");
}

PubRat::PubRat(const PubRat& p) : Pair(p)
{
	seta( p.geta());
	setb( p.getb());
	
}

PubRat::PubRat(const Pair& p) 
{
	* this = p;
	
}

PubRat& PubRat::operator=(const PubRat& p)
{
	seta( p.geta());
	setb( p.getb());
	return *this;
}

void PubRat:: setpair(Pair& p) throw (Exception)
{
	if ( p.getb()==0)
		throw Exception("Can`t cout 0");
}

PubRat:: operator string () const
{
	stringstream os;
	os << geta() << "/" << getb();
	return os.str();
}

ostream& operator<<(ostream& os, const PubRat& p)
{
	os << p.geta() << "/" << p.getb();
	return os;
}

istream& operator>>(istream& is, PubRat& p)
{
	int a,b;
	cout << "a-";
	cin>> a;
	cout << "b-";
	cin >> b;
	if ( b==0)
		throw Exception("Can`t cout 0");
	p.seta(a);
	p.setb(b);
	return is;
	}

PubRat operator + (const PubRat& p1, const PubRat& p2)
{
	return	PubRat(p1.geta()*p2.getb() + p2.geta()*p1.getb(), p1.getb()*p2.getb());
}

PubRat operator - (const PubRat& p1, const PubRat& p2)
{
	return	PubRat(p1.geta()*p2.getb() - p2.geta()*p1.getb(), p1.getb()*p2.getb());
}

PubRat operator / ( const PubRat& p1, const PubRat& p2)
{
	return	PubRat(p1.geta()*p2.getb(), p1.getb()*p2.geta());
}

bool operator == (const PubRat& p1, const PubRat& p2)
{
	return (p1.geta()*p2.getb() == p2.geta()*p1.getb());
}
