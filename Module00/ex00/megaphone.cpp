#include <iostream>

int main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 1;
		for(i = 1; i < argc; i++)
		{
			j = -1;
			while(argv[i][++j] != '\0')
			{
				if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
					argv[i][j] -= 32;
			}
			std::cout << argv[i];
		}
		std::cout << std::endl;
	}	
}
