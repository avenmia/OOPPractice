// OOPPractice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Person.h"
#include <iostream>



int main()
{
	Person* mike = new Person(26, "Mike Avendano");
	
	std::cout << "This person is named " << mike->getName() << " and is " << mike->getAge() << " years old " << std::endl;
	
	system("pause");
    return 0;
}

