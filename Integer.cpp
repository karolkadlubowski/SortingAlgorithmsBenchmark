#include <iostream>
#include <fstream>
#include <string>

#include "ISortObject.h"
#include "Integer.h"

using namespace std;

Integer::Integer(int size)
{
	this->Integers = new int[size];
	privateIntegers = new int[size];
}

Integer::~Integer()
{
	delete[] this->Integers;
	delete[] privateIntegers;
}

