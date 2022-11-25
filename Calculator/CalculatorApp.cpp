// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Calculator.h"

using namespace std;

int main()

{
	double x = 0.0;
	double y = 0.0;
	double result = 0.0;
	int procent = 100;


	char oper = '+';
	    cout << "Paddans ?????? \n";
		cout << "Vad vill du räkna idag? \n";

	
		Calculator c;
		while (true)
		{
			cin >> x >> oper >> y;
			if (oper == '/' && y == 0)
			{
				cout << "Du kan inte dela på 0?" << "\n";
				continue;

			}
			else

			{
			result = c.Calculate(x, oper, y, procent);

			}
			cout << "Result is " << result << "\n";

					
		}

		return 0;


}


