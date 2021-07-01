#pragma once

#include <iostream>
#include <string.h>

#include "ISortObject.h"

using namespace std;

class Word : public ISortObject<string>
{
	string* privateStrings;

	friend class SortService;
public:
	string* Strings;

	Word(int size);
	~Word();


};