/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 00:31:16 by skelly            #+#    #+#             */
/*   Updated: 2022/02/20 23:34:15 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include <iomanip>

static void convertToChar(double value)
{
	if ( !isascii(value) || std::isnan(value) || std::isinf(value)  )
	{
		std::cout << "char: impossible" << std::endl;
		return ;
	}
	else if (!std::isprint(value))
		std::cout << "char: Non displayable" << std::endl;
	else	
		std::cout << "char: '" << static_cast < char > (value) << "'" << std::endl;
	return ;
}

static void convertToInt(double value)
{
	if (std::isnan(value) || std::isinf(value) || value > std::numeric_limits < int > ::max() || value < std::numeric_limits<int>::min() )
	{
		std::cout << "int: impossible" << std::endl;
		return ;
	}
	std::cout << "int: " << static_cast < int > (value) << std::endl;
	return ;
}

void convertToFloat( double value)
{
if ( std::isinf(value) )
	{
		std::cout << "float: inff" << std::endl;
		return ;
	}
	if ( -std::isinf(value) )
	{
		std::cout << "float: -inff" << std::endl;
		return ;
	}
	if (value > std::numeric_limits < float > ::max() || value < -std::numeric_limits < float > ::max())
	{
		std::cout << "float: impossible" << std::endl;
		return ;
	}
	std::cout <<"float: "<< static_cast < float > (value) << "f" << std::endl;
}

static void convertToDouble( double value)
{
	if ( std::isinf(value) )
	{
		std::cout << "double: inf" << std::endl;
		return ;
	}
	if ( -std::isinf(value) )
	{
		std::cout << "double: -inf" << std::endl;
		return ;
	}

	std::cout <<"double: "<< static_cast < double > (value) << std::endl;
}

int main (int argc, char **argv)
{
	double value = 0.0;

	if (argc != 2)
	{
		std::cerr << " Usage: ./convert <value>" << std::endl;
		return (1);
	}
	std::cout << std::fixed;
	std::cout.precision(1);
	
	const char *str = argv[1];


	value = std::strtod(str, NULL);
	if (str[1] == '\0' && !isdigit(str[0]) && isprint(str[0]))
		value = static_cast < double > (str[0]);
	try
	{
		convertToChar(value);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		convertToInt(value);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		convertToFloat(value);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		convertToDouble(value);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}

// string to:
// целочисленные :
// char - 0   /   255
// int - -2147483648   /   2147483647
// с плавающей точкой :
// float - min: -3.40282e+038 max: 3.40282e+038
// double -9223372036854775808.0   /   9 223 372 036 854 775 807.0
//The four C++ casting operators are

// static_cast
// dynamic_cast
// reinterpret_cast
// const_cast

// Операция static_cast в языке C++ осуществляет явное допустимое приведение типа данных[1].
// Синтаксис: static_cast < type_to > ( object_from )
// Код скомпилируется, если есть способ преобразования из object_from в type_to.

// Функция strtod.функция языка Си, конвертирующая символ строки 
// в число с плавающей запятой двойной точности. Определение функции имеет вид:
// double strtod ( const char * str, char ** endptr )
// возвращает указатель на область памяти, где хранит саму строку. 

// isprint: Проверяет, является ли ch печатным символом в соответствии с установленным 
// в настоящее время языковым стандартом C. 
// В локали "C" по умолчанию можно печатать следующие символы:
// цифры ( 0123456789 )
// заглавные буквы ( ABCDEFGHIJKLMNOPQRSTUVWXYZ )
// строчные буквы ( abcdefghijklmnopqrstuvwxyz )
// знаки пунктуации ( !"#$%&'()*+,-./:;<=>?@[\]^_`{|}~ )
// пробел ()

// NaN (англ. Not-a-Number, «не число») — одно из особых состояний числа с плавающей запятой.
// NaN не равен ни одному другому значению (даже самому себе). 
// Благодаря этому один из распространённых, однако не очевидных, способов
// проверки результата на NaN — это сравнение полученной величины с самой собой. 
// Более прозрачным и явным способом является вызов функции isNaN().

// isinf, isinff, isinfl - проверка, является ли аргумент бесконечностью.
// Функции isinf, isinff, isinfl отличаются друг от друга типом аргумента.
// Так аргумент функции isinf является числом с плавающей точкой двойной точности 
// (тип double, точность не менее десяти значащих десятичных цифр, разрядность - 64).

// Поведение std::setprecision()отличается в зависимости от выбранного форматирования.

// std::fixedmake std::setprecision()относится к тому, сколько цифр печатается после запятой.
// Прежде чем изменить форматирование по умолчанию на std::fixed, std::defaultfloat
// устанавливается и std::setprecision()задает общее количество печатаемых цифр, 
// включая цифры до и после десятичной точки.

// Шаблон numeric_limits класса предоставляет стандартизированный способ запроса 
// различных свойств арифметических типов (например, наибольшее возможное значение для типа int: 
// std :: numeric_limits < int > :: max ( )).
// Для типов с плавающей запятой с денормализацией min возвращает минимальное ПОЛОЖИТЕЛЬНОЕ нормализованное значение стр.56
