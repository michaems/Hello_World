#ifndef TESTS_CALCULATORTEST_H_
#define TESTS_CALCULATORTEST_H_

#include "gtest/gtest.h"
#include "calculator.h"

class CalculatorTest: public testing::Test {
protected:
	Calculator calc;
	Calculator *calc_1;

	virtual void SetUp();

	virtual void TearDown();
};

#endif /* TESTS_CALCULATORTEST_H_ */
