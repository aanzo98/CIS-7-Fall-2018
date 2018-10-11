#include <iostream>
#include <string>
#include <cmath>
#include <chrono>

using namespace std;

bool isValid(int);
int gcd(int, int);

int main()
{

	int a = 0;
	int b = 0;
	int result = 0;
	char choice = 'y';

	while (choice == 'y')
	{
		

		cout << "Enter the first number: ";
		cin >> a;
		while (!isValid(a))
		{
			cout << "Invalid number. Input a positive integer: ";
			cin >> a;
		}
		cout << "Enter the second number: ";
		cin >> b;
		while (!isValid(b))
		{
			cout << "Invalid number. Input a positive integer: ";
			cin >> b;
		}
		auto start = std::chrono::high_resolution_clock::now();

		result = gcd(a, b);

		auto finish = std::chrono::high_resolution_clock::now();
		std::chrono::duration<double> elapsed = finish - start;
		std::cout << "Elapsed time: " << elapsed.count() * 1000 << " ms\n";

		cout << "The GCD is " << result << endl;
		cout << "Would you like to run the program again? ('y' for yes): ";
		cin >> choice;
		cout << endl;
	}

	system("pause");
	return 0;
}

bool isValid(int num)
{
	if (num > 0)
		return true;
	else
		return false;
}

int gcd(int num1, int num2)
{
	int r = 0;

	r = num1 % num2;
	if (r == 0)
		return num2;
	else
		gcd(num2, r);
}
