#pragma once
#include <iostream>

#include "ISortObject.h"
#include "SortService.h"

using namespace std;

class Noninteger : public ISortObject<float>
{
	float* privateFloats;

	friend class SortService;
public:
	float* Floats;

	Noninteger(int size);
	~Noninteger();

};