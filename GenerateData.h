#include <iostream>
#include <string.h>

using namespace std;

class Generation
{
	template <class Type> bool GenerateInt(string fileName,int size)
	{
		ifstream file;
		file.open(fileName, ios::out);
		if (file.good())
		{
			Type record;
			for (int i = 0; i < size; i++)
			{
				record=
			}
		}
		return false;
		
	}
};