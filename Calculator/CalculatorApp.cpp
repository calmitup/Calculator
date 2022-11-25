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
	    cout << "Calculator \n";
		cout << "Please enter format \n";

	
		Calculator c;
		while (true)
		{
			cin >> x >> oper >> y;
			if (oper == '/' && y == 0)
			{
				cout << "Kan ens Matte?" << "\n";
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


