#pragma once
#include <string>
#include "Pair.h"
#include "Exception.h"
using namespace std;

class PubRat : public Pair
{
public:
	PubRat(int a = 1, int b = 1) throw (Exception);
	PubRat(const Pair& p);
	PubRat(const PubRat& r);
	PubRat& operator= (const PubRat& p);

	Pair getpair() const { return *this; }
	void setpair(Pair& p);

	operator string() const;
	friend ostream& operator<< (ostream& os, const PubRat&);
	friend istream& operator>> (istream& is, PubRat&) throw (Exception);

	friend PubRat operator+ (const PubRat&, const PubRat&);
	friend PubRat operator- (const PubRat&, const PubRat&);
	friend PubRat operator/ (const PubRat&, const PubRat&);
	friend bool operator== (const PubRat& p1, const PubRat& p2);

};


