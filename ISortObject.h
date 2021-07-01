#pragma once
#include <iostream>
#include <sstream>
#include <fstream>
#include <chrono> 

using namespace std;

template<class Type>
class ISortObject {
public:


	bool LoadData(int size, string fileName, Type table[], Type privateTable[])
	{
		ifstream file;
		file.open(fileName, ios::in);
		if (file.good())
		{
			string tryIf;
			for (int i = 0; i < size; i++)
			{

				getline(file, tryIf);
				stringstream ss(tryIf);
				ss >> table[i];
				privateTable[i] = table[i];

			}
			file.close();
			return true;
		}
		file.close();
		return false;
		
	}

	double Quicksort(Type table[], int size)
	{
		auto start = chrono::high_resolution_clock::now();
		sort(table, table + size, less<Type>());
		auto finish = chrono::high_resolution_clock::now();
		chrono::duration<double> timeInTicks = finish - start;
		return timeInTicks / chrono::milliseconds(1);
	}

	double Selectionsort(Type table[], int size)
	{
		auto start = chrono::high_resolution_clock::now();
		int k;
		for (int i = 0; i < size; i++)
		{
			k = i;
			for (int j = i + 1; j < size; j++)
				if (table[j] < table[k])
					k = j;
			swap(table[k], table[i]);
		}
		auto finish = chrono::high_resolution_clock::now();
		chrono::duration<double> timeInTicks = finish - start;
		return timeInTicks / chrono::milliseconds(1);
	}

	double Insertionsort(Type table[], int size)
	{
		auto start = chrono::high_resolution_clock::now();
		int j;
		Type temp;
		for (int i = 1; i < size; i++)
		{
			temp = table[i];
			for (j = i - 1; j >= 0 && table[j] > temp; j--)
				table[j + 1] = table[j];

			table[j + 1] = temp;
		}
		auto finish = chrono::high_resolution_clock::now();
		chrono::duration<double> timeInTicks = finish - start;
		return timeInTicks / chrono::milliseconds(1);
	}

	void RestoreTable(Type table[], Type privateTable[], int size)
	{
		for (int i = 0; i < size; i++)
			table[i] = privateTable[i];
	}
};
