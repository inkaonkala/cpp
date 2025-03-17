#include <iostream>
#include "BitcoinExhange.hpp"


void parseFile(char *file)
{
	/*
	Each line in this file must use the following format: "date | value".
	• A valid date will always be in the following format: Year-Month-Day.
	• A valid value must be either a float or a positive integer, between 0 and 1000.	
	*/
}

int main(int arc, char **arv)
{
	if (arc == 2)
	{
		parseFile(arv[1]);
	}
	else
	{
		std::cout << "Give me a file to work with!" << std::endl;
	}
	return (0);
}