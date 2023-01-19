#pragma once
#include <iostream>
#include <string>
class MyException
{
public:
	MyException() {}
	const std::string& what() const;
private:
	std::string _whatStr = "My eXception";
};
void func(int num);
