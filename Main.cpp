#include <iostream>
#include <new>
#include "MyException.h"
int main() {
	setlocale(LC_ALL, "Russian");
	try {
		int** new_data = new int* [10000000];
		for (int i = 0; i < 10000000; i++) new_data[i] = new int[10000000];
	}
	catch (std::bad_alloc& ba)
	{
		std::cerr << "bad_alloc caught: " << ba.what() << std::endl;
	}
	try	{
		func(0);
	}
	catch (const MyException& ex)	{
		std::cerr << ex.what() << std::endl;
		
	}
	return 0;
}