#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
		exit(1);
	}
	if (!(av[1] && av[2] && av[3]))
	{
		std::cout << "Empty <filename> or <s1> or <s2>" << std::endl;
		return 1;
	}
	std::string	s1 = av[2];
	std::string	s2 = av[3];
	std::string filename = av[1];
	std::string	buf;

	std::ifstream in(av[1]);
	if (!in)
	{
		std::cout << "File could not be open" << std::endl;
		return 1;
	}
	std::ofstream out;
	out.open(filename.append(".replace"));
	if (!out.is_open())
	{
		std::cout << "Error output file" << std::endl;
		return 1;
	}
	while (std::getline(in, buf)) ////сччтываем массив символов
	{
		std::size_t pos = 0;
		//npos — статическое константное значение члена с 
		//максимально возможным значением для элемента типа size_t .
		//Это значение при использовании в качестве значения параметра len 
		//(или sublen ) в функциях-членах string означает «до конца строки» .
// 		find не может возвращать -1, поскольку возвращает тип size_t. Но физически string::npos действительно совпадает с -1.
// string::npos == (size_t)-1
		if ((pos = buf.find(s1)) != std::string::npos)
		{

			//iterator erase (iterator starting_position, iterator ending_position);
			// erase () используется для удаления нескольких элементов
			//на основе позиции, указанной в первом и втором аргументах этой функции.
			buf.erase(pos, s1.size());
			//функция insert () используется для вставки значения аргумента value перед позицией элемента ,
			//упомянутого аргументом position. Он возвращает итератор, указывающий на вновь вставленный элемент .
			buf.insert(pos, s2);
		}
		out << buf << std::endl; //// выводим то, что считали в out
	}
	in.close();
	out.close();
	return 0;
}
