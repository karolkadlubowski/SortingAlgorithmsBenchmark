#pragma once
#include <iostream>

#include "SortService.h"
#include "ISortObject.h"

using namespace std;

class ComplexNumber
{
	float Re = 0;
	float Im = 0;
	float Module = 0;
	friend class Complex;
public:
	ComplexNumber() {}
	ComplexNumber(float re, float im);
	ComplexNumber(const ComplexNumber& complexNumber);
	~ComplexNumber(){}
	void UpdateModule();
};

class Complex : public ISortObject<ComplexNumber>
{
	ComplexNumber* privateComplexNumbers;
	friend class SortService;
public:
	ComplexNumber* ComplexNumbers;

	Complex(int size);
	Complex(const Complex& complex);
	~Complex();

	bool LoadData(int size, string fileName, ComplexNumber table[], ComplexNumber privateTable[]);


};