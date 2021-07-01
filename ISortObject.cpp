#include <iostream>
#include <fstream>

#include "ISortObject.h"

using namespace std;


/*
template <class Type> bool ISortObject<Type>::LoadData(int size, string fileName, Type table[])
{/*
	ifstream file;
	if (file.open(fileName))
	{
		for (int i = 0; i < size; i++)
		{
			if((file>>table[i]).fail());
			table[i] = 0;
		}
		return true;
	}

	return false;
	
}*/

/*template<class Type> double ISortObject<Type>::Quicksort(Type table[], int size)
{
	auto start = chrono::high_resolution_clock::now();
	sort(table, table + size, less<Type>());
	auto finish = chrono::high_resolution_clock::now();
	chrono::duration<double> timeInTicks = finish - start;
	return timeInTicks / chrono::milliseconds(1);
}*/