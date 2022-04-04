#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include "headers.h"

using namespace std;
//PROBLEMA 1

float operator"" _Kelvin(unsigned long long int x)
{

    return (float)(x - 273.15);
}

float operator"" _Fahrenheit(unsigned long long int x) {
    return((x -32 )/1.8);
}

int main() {


    float a = 300_Kelvin;

    float b = 120_Fahrenheit;

    cout << a << " " << b<<endl;




    //PROBLEMA 2

    Vector<int> a;
	a.push(1);
	a.push(2);
	a.push(3);
	a.push(4);
	a.push(5);

	a.print();

	a.insert(14, 1);
	a.print();
	return 0;
	}
