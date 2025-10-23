/*
*	Решето Эратосфена - алгоритм нахождения всех простых чисел до n
*	Sieve of Eratosthenes / Criba de Eratostenes
*/

#include <iostream>

int	main()
{
	int	n;
	std::cout << "n = ";
	std::cin >> n;

	// начальный массив чисел от 0 до n + 1 из которого будем вычеркивать непростые числа
	bool sieve[n + 1];
	for (int i = 2; i <= n; i++)
		sieve[i] = true;
	
	int x;
	x = 2;
	while (x*x <= n)
	{
		if (sieve[x]) // если не зачёркнуто, т.е. простое
			for (int y = x*x; y <= n; y += x)
				sieve[y] = false; // сложное число
		x++;
	}
	
	// вывод
	for (x = 2; x < n + 1; x++)
		if (sieve[x])
			std::cout << x << '\t';
	std::cout << "\n";
	return (0);
}
