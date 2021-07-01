#pragma once
#include <iostream>
#include <fstream>

#include "InitialChoice.h"
#include "InitialService.h"
#include "ISortObject.h"

using namespace std;


class SortService
{
	//template <class Type> ISortObject<Type>* ISortObject;

	double selectionSortTime=0;
	double insertionSortTime=0;
	double qsortTime=0;

	string file;
	int size;
	
	bool proceedSortInt();
	bool proceedSortFloat();
	bool proceedSortComplex();
	bool proceedSortString();
public:
	//SortService(InitialService& initialService);
	SortService(string fileName, int fileSize);
	
	bool ProceedSort();
	void DisplayOutcome();
};