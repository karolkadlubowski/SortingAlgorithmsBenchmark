#include <iostream>
#include <algorithm>
#include <functional>

#include "InitialChoice.h"
#include "SortService.h"
#include "InitialService.h"
#include "ISortObject.h"
#include "Integer.h"
#include "Complex.h"
#include "Noninteger.h"
#include "Word.h"

using namespace std;

//SortService::SortService(InitialService& initialService) : InitialService(initialService) {}


SortService::SortService(string fileName, int fileSize)
{
	file = fileName;
	size = fileSize;
}

bool SortService::ProceedSort()
{
	if (file == "int.txt")
		return proceedSortInt();
	else if (file == "float.txt")
		return proceedSortFloat();
	else if (file == "complex.txt")
		return proceedSortComplex();
	else if (file == "string.txt")
		return proceedSortString();
	return false;
}




bool SortService::proceedSortInt()
{
	Integer SortInt(size);
	
	if (SortInt.LoadData(size, file, SortInt.Integers, SortInt.privateIntegers))
	{
		qsortTime = SortInt.Quicksort(SortInt.Integers, size);
		SortInt.RestoreTable(SortInt.Integers, SortInt.privateIntegers, size);

		selectionSortTime = SortInt.Selectionsort(SortInt.Integers, size);
		SortInt.RestoreTable(SortInt.Integers, SortInt.privateIntegers, size);

		insertionSortTime = SortInt.Insertionsort(SortInt.Integers, size);
		return true;
	}
		return false;
}

bool SortService::proceedSortFloat()
{
	Noninteger SortFloat(size);
	if (SortFloat.LoadData(size, file, SortFloat.Floats, SortFloat.privateFloats))
	{
		qsortTime=SortFloat.Quicksort(SortFloat.Floats, size);
		SortFloat.RestoreTable(SortFloat.Floats, SortFloat.privateFloats, size);

		selectionSortTime = SortFloat.Selectionsort(SortFloat.Floats, size);
		SortFloat.RestoreTable(SortFloat.Floats, SortFloat.privateFloats, size);

		insertionSortTime = SortFloat.Insertionsort(SortFloat.Floats, size);
		return true;
	}
	return false;

	
}

bool SortService::proceedSortString()
{
	Word SortWord(size);
	if (SortWord.LoadData(size, file, SortWord.Strings, SortWord.privateStrings))
	{
		qsortTime=SortWord.Quicksort(SortWord.Strings, size);
		SortWord.RestoreTable(SortWord.Strings, SortWord.privateStrings, size);

		selectionSortTime = SortWord.Selectionsort(SortWord.Strings, size);
		SortWord.RestoreTable(SortWord.Strings, SortWord.privateStrings, size);

		insertionSortTime = SortWord.Insertionsort(SortWord.Strings, size);
		return true;
	}
	return false;

	
}

bool SortService::proceedSortComplex()
{
	Complex SortComplex(size);

	if (SortComplex.LoadData(size, file, SortComplex.ComplexNumbers, SortComplex.privateComplexNumbers))
	{
		return true;
	}
	return false;
}

void SortService::DisplayOutcome()
{
	cout << "Czas algorytmu QuickSort to " << qsortTime << " milisekundy." << endl;
	cout << "Czas algorytmu SelectionSort to " << selectionSortTime << " milisekundy." << endl;
	cout << "Czas algorytmu InsertionSort to " << insertionSortTime << " milisekundy." << endl;
}