// Разложение числа на простые множители (Prime factorization)

#include <iostream>
#include <sstream>

void	prime_factor(int x)
{
	if (x == 0 || x == 1 || x == -1)
	{	
		std::cout << x << " has no prime factorization" << std::endl;
		return;
	}

	std::ostringstream	out;
	
	if (x < 0)
	{
		out << x << " = -1 * ";
		x = -x;
	}
	else	
		out << x << " = ";

	int d = 2;
	while(x != 1)
	{
		if (x % d == 0)
		{
			if (out.tellp() > 0 && out.str().back() != ' ') // tellp - позиция курсора = сколько символов уже записано
				out << " * ";
			out << d;
			x = x / d;
		}
		else
			d++;
	}
	std::cout << out.str() << std::endl;
}

int	main()
{
	int	x;

	std::cout << "X = ";
	std::cin >> x;
	prime_factor(x);

	return 0;
}
