#include "CalculatorTest.h"

void CalculatorTest::SetUp() {
	calc_1 = new Calculator();
}

void CalculatorTest::TearDown() {
	delete calc_1;
	calc_1 = nullptr;
}


TEST_F(CalculatorTest, Summing){
	const int x=5;
	const int y=29;
	EXPECT_EQ(34, calc.Add(x, y));
	EXPECT_EQ(40, calc.Add(12, 28));
}

TEST_F(CalculatorTest, Subtracting){
	const int x= 10;
	const int y= 3;
	EXPECT_EQ(7, calc.Sub(x, y));
}

TEST_F(CalculatorTest, WithPointer) {
	EXPECT_EQ(50, calc_1->Add(11, 39));
}

TEST_F(CalculatorTest, LocalPointer) {
	Calculator *localClc = new Calculator();

	EXPECT_EQ(50, localClc->Add(11, 39));
	EXPECT_EQ(-6, localClc->Sub(5, 11));

	delete localClc;
	localClc = nullptr;
	EXPECT_TRUE(localClc == nullptr);

}

int main(int argc, char **argv){
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}




