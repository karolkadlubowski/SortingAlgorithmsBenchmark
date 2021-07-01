#include <iostream>

#include "ISortObject.h"

using namespace std;

class Integer : public ISortObject<int>
{
	int* privateIntegers;

	friend class SortService;
public:
	int* Integers;

	Integer(int size);
	~Integer();
	//double Selectionsort(int table[]);
	//bool LoadData(string FileName, type T);
	//bool LoadData(int size, string fileName, int table[]);
};