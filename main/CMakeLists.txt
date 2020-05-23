#main subdirectory

include_directories(
	../calculator/inc
) 

add_executable(
	my_first_test
	My_first_test.cpp
)

target_link_libraries(
	my_first_test 
	calculator_lib
)