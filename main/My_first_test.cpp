#include <iostream>
#include <stdio.h>
#include "calculator.h"


using namespace std;

int main(int argc, char **argv) {
	int first = 10;
	int second = 20;
	Calculator calc;

	int result = calc.Add(first, second);

	cout<<"Numbers added: "<<first<<", "<<second<<endl;
	cout<<"The result: "<<calc.GetLastResult()<<endl;

	return 0;
}
