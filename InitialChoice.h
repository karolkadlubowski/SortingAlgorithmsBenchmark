#pragma once

#include <iostream>
#include <string.h>

using namespace std;

struct DataChoice
{
	int DataType;
	int DataSize;
};

enum  DataType
{
	integer=1,
	noninteger=2,
	complex=3,
	word=4,
	binint=5
};

enum  DataSize
{
	small=1,
	medium=2,
	large=3
};