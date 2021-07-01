#include <iostream>
#include <math.h>

#include "Complex.h"

using namespace std;

void ComplexNumber::UpdateModule()
{
	Module = sqrt((pow(Re, 2) + pow(Im, 2)));
}

ComplexNumber::ComplexNumber(float re, float im)
{
	Re = re;
	Im = im;
	UpdateModule();
}

ComplexNumber::ComplexNumber(const ComplexNumber& complexNumber)
{
	Re = complexNumber.Re;
	Im = complexNumber.Im;
	Module = complexNumber.Module;
}

Complex::Complex(int size)
{
	ComplexNumbers = new ComplexNumber[size];
	privateComplexNumbers = new ComplexNumber[size];
}

Complex::~Complex()
{
//	delete[] ComplexNumbers;
//	delete[] privateComplexNumbers;
}

/*Complex::Complex(const Complex& complex)
{
int length=complex.ComplexNumbers.
}*/


bool Complex::LoadData(int size, string fileName, ComplexNumber table[], ComplexNumber privateTable[])
{
	ifstream file;
	size = 2 * size;
	file.open(fileName, ios::in);
	if (file.good())
	{
		string tryIf1,tryIf2;
		
		for (int i = 0; i < size; i++)
		{

			getline(file, tryIf1);
			getline(file, tryIf2);
			stringstream ss1(tryIf1);
			stringstream ss2(tryIf2);
			ss1 >> table[i].Re;
			ss2 >> table[i].Im;
			table[i].UpdateModule();
			privateTable[i] = table[i];

		}
		file.close();
		return true;
	}
	file.close();
	return false;
}