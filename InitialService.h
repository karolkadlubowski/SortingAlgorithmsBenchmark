#pragma once
#include <iostream>

#include "InitialChoice.h"
#include "SortService.h"

using namespace std;

class InitialService
{
	int intIndex, nonintegerIndex, complexIndex, stringIndex;

	

	//friend class SortService;
public:
	DataChoice dataChoice;

	void ShowOptions();

	bool CheckArguments(int argc, char* argv[]);

	
};