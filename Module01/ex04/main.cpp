#include <iostream>
#include <fstream>

//работа с файлами - ofstream, ifstream, getline
//cerr вывод сообщений об ошибках, 

int main(int ac, char **av)
{
//--------------проверки---------------------------------
	if (ac != 4)
	{
		std::cerr << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
		exit(1);
	}
	if (!(av[1] && av[2] && av[3]))
	{
		std::cerr  << "Empty <filename> or <s1> or <s2>" << std::endl;
		return 1;
	}
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string filename = av[1];
	std::string buf;

	std::ifstream in(av[1]);//читаю из файла
	if (!in)
	{
		std::cerr  << "File could not be open" << std::endl;
		return 1;
	}

	std::ofstream out;
	out.open(filename.append(".replace"));//открываю и создаю файл
	if (!out.is_open())//Метод проверки открыт ли файл is_open() 
	{
		std::cout << "Error output file" << std::endl;
		return 1;
	}
//------------------------------------------------
//getline(откуда читаем, куда помещаем)
	while (std::getline(in, buf)) ////считываем массив символов   построчно
	{
		std::size_t word = buf.find(s1);//мусор если не нашлось и индекс если нашлось
		if (word != std::string::npos)//npos - это какбы несуществующая позиция, например find может вернуть npos, если ничего не найдет
		{
			//iterator erase (iterator starting_position, iterator ending_position);
			buf.erase(word, s1.length());//удалить
			buf.insert(word, s2);//вставить
		}
		out << buf << std::endl; //// выводим то, что считали в out
		
	}
	in.close();
	out.close();
	return 0;
}
