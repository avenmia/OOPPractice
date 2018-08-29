#include "stdafx.h"
#include "Person.h"


Person::Person(int age, std::string name)
{
	this->age = age;
	this->name = name;
}

int Person::getAge() {
	return this->age;
}

std::string Person::getName() {
	return this->name;
}

void Person::setAge(int age) {
	this->age = age;
}

void Person::setName(std::string name) {
	this->name = name;
}

Person::~Person()
{
}
