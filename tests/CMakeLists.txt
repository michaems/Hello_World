#tests folder

include_directories(
	../calculator/inc
)



add_executable(
	michael_tests
	CalculatorTest.cpp
)

target_link_libraries(
	michael_tests
	calculator_lib
	gtest
)
