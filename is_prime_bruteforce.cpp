// Проверка простоты числа методом полного перебора (грубой силы - bruteforce)

#include <iostream>

bool	is_prime(int x)
{
	if (x < 2)					// 0 и 1 - не простые
		return false;

	for (int d = 2; d < x; ++d) // перебираем все от 2 до х-1.
	{							// оптимизация - до d*d <= x (sqrt(x))
		if (x % d == 0)			// если есть делитель, значит х - не простое
			return false;
	}
	return true;
}

int	main()
{
	int		x;

	std::cout << "X = ";
	std::cin >> x;

	if (x < 0)
	{
		std::cout << "\nТребуется положительное число" << std::endl;
		return 1;
	}
	if (x == 0 || x == 1)
	{
		std::cout << "\n0 и 1 - не простые и не составные числа" << std::endl;
		return 1;
	}
	if (is_prime(x))
		std::cout << "\nX - простое число" << std::endl;
	else
		std::cout << "\nX - составное число" << std::endl;
	return 0;
}
