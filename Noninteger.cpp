#include <iostream>

#include "Noninteger.h"

using namespace std;

Noninteger::Noninteger(int size)
{
	Floats = new float[size];
	privateFloats = new float[size];
}

Noninteger::~Noninteger()
{
	delete[] Floats,privateFloats;
}