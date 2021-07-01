#include <iostream>
#include <string.h>

#include "Word.h"

using namespace std;

Word::Word(int size)
{
	Strings = new string[size];
	privateStrings = new string[size];
}

Word::~Word()
{
	delete[] Strings;
	delete[] privateStrings;
}