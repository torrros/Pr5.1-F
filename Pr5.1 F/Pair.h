#pragma once
#include <iostream>
#include <string>

using namespace std;

class Pair
{
	int a;
	int b;
	public:
		Pair(int a = 0,int b = 0);
		int geta()const { return a; }
		int getb() const {return b;}
		void seta(int a){ this->a = a; }
		void setb(int b){ this->b = b; }

		Pair ( const Pair &);
		Pair &operator=(const Pair &);
		operator string () const;
		friend ostream &operator<<(ostream &os, const Pair &p);
		friend istream &operator>>(istream &is, Pair &p);
		friend Pair operator-(const Pair &p1, const Pair p2);
};

