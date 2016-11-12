#include <stdio.h>
#include <iostream>

int checkPrime(int n);

int main()
{
	int n, i, flag = 0;

	do 
	{
		printf("Hello!!! Enter an even natural number greater than 2:\n\n>");
		scanf("%d", &n);
	} 
	while (n % 2 != 0 && n >= 2);

	for (i = 2; i <= n / 2; ++i)
	{
		// condition for i to be a prime number
		if (checkPrime(i) == 1)
		{
			// condition for n-i to be a prime number
			if (checkPrime(n - i) == 1)
			{
				// n = primeNumber1 + primeNumber2
				printf("%d = %d + %d\n", n, i, n - i);
				flag = 1;
			}

		}
	}
	if (flag == 0)
		printf("%d can't be expressed as the sum of two prime numbers.", n);

    system("pause");

	return 0;
	
}

// Function to check prime number

int checkPrime(int n)
{
	int i, flag = 1;

	for (i = 2; i <= n / 2; ++i)
	{
		// Check if n is divisible by any number except itself without a remainder.
		if (n % i == 0) {
			flag = 0;
		}
		// n - not a prime number if it is divisible by i.
	}
	// n - is a prime
	return flag;
}

























