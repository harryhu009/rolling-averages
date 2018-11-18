//============================================================================
// Name        : rolling.cpp
// Author      : harry hu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
float rolling_average(float input1, float input2, float input3)
{
	return (input1+input2+input3)/3;
}
#ifndef MARMOSET_TESTING
int main();
#endif

#ifndef MARMOSET_TESTING
int main() {
	float input_number = 0.0;
	float calculated_average = 0.0;
	float input1 = 0.0;
	float input2 = 0.0;
	float input3 = 0.0;

	float num_input = 0.0;
	while (input_number >= 0)
	{
		std::cout << "Enter a number." << std::endl;
		std::cin >> input_number;
		num_input++;
		input1=input2;
		input2=input3;
		input3=input_number;
		if (num_input >= 3)
		{
			calculated_average = rolling_average(input1,input2,input3);
			std::cout << "rolling average is " << calculated_average << std::endl;
		}
	}

	return 0;
}
#endif
