/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:14:37 by skelly            #+#    #+#             */
/*   Updated: 2022/02/25 11:54:24 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	std::cout << "-------------- INT --------------" << std::endl;
	
	MutantStack<int> mstack;
	
	mstack.push(5);//на вершину
	mstack.push(17);
	
	std::cout << mstack.top() << std::endl;
	
	mstack.pop();
	
	std::cout << mstack.size() << std::endl;
	
	mstack.push(3);
	
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << "size of stack: " << s.size() << " its top: " <<  s.top() << std::endl << std::endl;
	
	std::cout << "-------------- FLOAT --------------" << std::endl;
	
	MutantStack<float> ftest;

	ftest.push(1.23);
	ftest.push(2.34);
	ftest.push(3.56);
	ftest.push(5.67);
	ftest.push(-6.78);

	const MutantStack<float> fltest(ftest);

	MutantStack<float>::const_reverse_iterator fit = fltest.rbegin();
	MutantStack<float>::const_reverse_iterator fite = fltest.rend();

	++fit;
	--fit;
	while (fit != fite)
	{
		std::cout << *fit << std::endl;
		fit++;
	}
	std::cout << "size of stack: " << ftest.size() << " its top: " <<  ftest.top() << std::endl << std::endl;

	std::cout << "-------------- DOUBLE --------------" << std::endl;
	
	MutantStack<double> test;

	test.push(3.14);
	test.push(2.545345);
	test.push(2.5455);
	test.push(-2.767676);
	test.push(2.76566);

	const MutantStack<double> ctest(test);

	MutantStack<double>::const_reverse_iterator itDouble = ctest.rbegin();
	MutantStack<double>::const_reverse_iterator iteDouble = ctest.rend();
	++itDouble;
	--itDouble;
	while (itDouble != iteDouble)
	{
		std::cout << *itDouble << std::endl;
		itDouble++;
	}
	std::cout << "size of stack: " << test.size() << " its top: " <<  test.top() << std::endl << std::endl;

	std::cout << "-------------- STRING --------------" << std::endl;
	
	MutantStack<std::string> testStr;

	testStr.push("HI");
	testStr.push("HI!");
	testStr.push("HI!!");
	testStr.push("HI!!!");
	testStr.push("HI!!!");

	MutantStack<std::string>::reverse_iterator  itStr = testStr.rbegin();
	MutantStack<std::string>::reverse_iterator iteStr= testStr.rend();
	++itStr;
	--itStr;
	while (itStr != iteStr)
	{
		std::cout << *itStr << std::endl;
		itStr++;
	}
	std::cout << "size of stack: " << testStr.size() << " its top: " <<  testStr.top() << std::endl << std::endl;

	return 0;
}
