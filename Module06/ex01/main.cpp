/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 18:46:46 by skelly            #+#    #+#             */
/*   Updated: 2022/02/21 00:03:32 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

struct Data 
{
    int				a1;
	std::string		a2;
	void*			a3;
	long double 	a4;
	unsigned long 	a5;
};
//принимает указатель и преобразует его в целое число без знака типа uintptr_t:
uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}
//принимает целочисленный параметр без знака и преобразует его в указатель на данные:
Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}

int main()
{
	Data array = {42, "hello", NULL, 3.14, 1234567891011121314};
	Data *ptr_full = &array;
	Data *ptr;
   	ptr= new Data;

	std::cout<<"----------------------------1-----------------------------"<<std::endl;
	std::cout << std::setw(30)<<" ptr_full start: " << ptr_full << std::endl;
	std::cout << ptr_full->a1 << std::endl;
	std::cout << ptr_full->a2 << std::endl;
	std::cout << ptr_full->a3 << std::endl;
	std::cout << ptr_full->a4 << std::endl;
	std::cout << ptr_full->a5 << std::endl;
	uintptr_t ser =  serialize(ptr_full) ;
	std::cout<< std::setw(30) <<"ptr_full to uintptr_t: "<< ser << std::endl;
	
	Data *ptr2 =  deserialize(ser);
	std::cout<< std::setw(30) <<"to uintptr_t to ptr_full: " << ptr2 << std::endl;
	
	std::cout << ptr2->a1 << std::endl;
	std::cout << ptr2->a2 << std::endl;
	std::cout << ptr2->a3 << std::endl;
	std::cout << ptr2->a4 << std::endl;
	std::cout << ptr2->a5 << std::endl;
	
	std::cout<<"----------------------------2-----------------------------"<<std::endl;
	
  	std::cout << std::setw(30)<<" ptr start: "<< ptr << std::endl;
	std::cout << std::setw(30)<<"ptr to uintptr_t: "<< serialize(ptr) << std::endl;
	std::cout<< std::setw(30)<<"uintptr_t to point: " << deserialize(serialize(ptr))<< std::endl;
	std::cout<<"---------------------------------------------------------"<<std::endl;
	
	delete ptr;
    
    return (0);
}

// reinterpret_casts применимы в двух сценариях:

// конвертировать целые типы в типы указателей и наоборот
// преобразовать один тип указателя в другой. Общая идея, 
// которую я получаю, заключается в том, что это непереносимо, и его следует избегать.