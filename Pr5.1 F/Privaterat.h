#pragma once
#include <string>
#include "Pair.h"
using namespace std;

class Privaterat: Pair
{
public :
	Privaterat (int a = 0, int b = 0) : Pair(a, b) {};
	Privaterat(const Pair& p);
	Privaterat ( const Privaterat& r);
	~Privaterat() {};
	Privaterat& operator=(const Privaterat& r);
	
	Pair getpair () const { return * this; }
	void setpair (Pair p) { *this = p; }
	
	operator string() const;
	friend ostream& operator<<(ostream& os, const Privaterat& r);
	friend istream& operator>>(istream& is, Privaterat& r);

	friend Privaterat operator+(const Privaterat& r1, const Privaterat& r2);
	friend Privaterat operator-(const Privaterat& r1, const Privaterat& r2);
	friend Privaterat operator/(const Privaterat& r1, const Privaterat& r2);
};

