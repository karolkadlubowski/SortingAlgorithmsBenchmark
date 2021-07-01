#pragma once
#include <iostream>
#include <string.h>
#include <sstream>

#include "InitialService.h"

using namespace std;

bool InitialService::CheckArguments(int argc, char* argv[])
{
	int i;
	string sign;
	for (i = 1; i < argc - 1; i++)
	{
		sign = argv[i];
		if (sign == "-i")
		{
			intIndex = i;
			i++;
		}
		else if (sign == "-f")
		{
			nonintegerIndex = i;
			i++;
		}
		else if (sign == "-c")
		{
			complexIndex = i;
			i++;
		}
		else if (sign == "-s")
		{
			stringIndex = i;
			i++;
		}
		else return false;
	}
	return i == 9 ? true : false;
}

void InitialService::ShowOptions()
{
	string tryIfInt;
	while(true){
		cout << "Wybierz numer, by wybrac typ danych:\n1. Liczby calkowite\n2. Liczby niecalkowite\n3. Liczby zespolone\n4. Slowa\n" << endl;
		getline(cin, tryIfInt);
		stringstream ss(tryIfInt);
		if (ss >> dataChoice.DataType)
			if (!ss.eof())
				dataChoice.DataType = 0;
		if (dataChoice.DataType < 5 && dataChoice.DataType>0)
			break;
		else
			cout << "Nieprawidlowa wartosc, wybierz ponownie.\n";
	}
	
	while (true) {
		cout << "Wpisz ilosc rekordow do posortowania"<<endl;
		getline(cin, tryIfInt);
		stringstream ss(tryIfInt);
		if (ss >> dataChoice.DataSize)
			if (!ss.eof())
				dataChoice.DataType = 0;
		if (dataChoice.DataSize > 0 && dataChoice.DataSize<1000001)
			break;
		else
			cout << "Nieprawid³owa wartosc, wybierz ponownie.\n";
	}
	this->dataChoice = dataChoice;


	switch (dataChoice.DataType)
	{
	case integer:
		dataChoice.DataType = intIndex;
		break;
	case noninteger:
		dataChoice.DataType = nonintegerIndex;
		break;
	case complex:
		dataChoice.DataType = complexIndex;
		break;
	case word:
		dataChoice.DataType = stringIndex;
		break;
	default:
		throw exception("DataTypeError");
		break;
	}
}







