#include "calculator.h"

Calculator::Calculator():m_lastResult(-1) {}
Calculator::~Calculator(){}

int Calculator::Add(int firstNum, int secondNum){
	m_lastResult = firstNum + secondNum;
	return m_lastResult;
}

int Calculator::Sub(int firstNum, int secondNum) {
	m_lastResult = firstNum - secondNum;
	return m_lastResult;
}

int Calculator::GetLastResult() {
	return m_lastResult;
}




