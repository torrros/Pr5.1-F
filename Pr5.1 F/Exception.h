#pragma once
#include < exception>
using namespace std;

class Exception: public ::exception
{
public:
	Exception(const char* const msg) : exception(msg) {};
};

