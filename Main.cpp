#include <iostream>
#include "InitialService.h"
#include "ISortObject.h"
#include "InitialChoice.h"
#include "SortService.h"
#include "Complex.h"


using namespace std;

int main(int argc, char* argv[])
{
	InitialService initialService;
	if (!initialService.CheckArguments(argc, argv))
	{
		cout << "Niepoprawne parametry konsoli" << endl;
		return 0;
	}
	
	{
		initialService.ShowOptions();
		SortService sortService(argv[initialService.dataChoice.DataType+1],initialService.dataChoice.DataSize);
		if (sortService.ProceedSort())
			sortService.DisplayOutcome();
		else
			cout << "Nieprawidlowy plik wejsciowy" << endl;

		
	}
	/*
	float kul[] = { 1,2,3 };
	Complex comp(4);
	comp.LoadData(4, "elo", kul);
	
	Integer boi(10);
	//boi.
	*/
//	_CrtDumpMemoryLeaks();
}

