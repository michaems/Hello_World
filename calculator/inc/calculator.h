/*calculator.cpp
 *
 * Created on: May 23, 2020
 * Author: michael
 */
#ifndef _CALCULATOR_H_
#define _CALCULATOR_H_

#include <iostream>

using namespace std;

class Calculator {
public:
	Calculator();
	~Calculator();
	int Add(int firstNum, int secondNum);
	int Sub(int firstNum, int secondNum);
	int GetLastResult();

private:
	int m_lastResult;
};

#endif /*_CALCULATOR_H_*/
