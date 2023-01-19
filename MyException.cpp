#include "MyException.h"
const std::string& MyException::what() const{
	return _whatStr;
}
void func(int num) {
	MyException myEx;
	if (num == 0)
		throw myEx;
}

