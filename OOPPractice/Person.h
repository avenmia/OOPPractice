#pragma once
#include <string>
#include <iostream>

class Person
{
private:
	int age;
	std::string name;

public:
	Person(int age, std::string name);
	int getAge();
	std::string getName();
	void setAge(int age);
	void setName(std::string name);
	~Person();
};

