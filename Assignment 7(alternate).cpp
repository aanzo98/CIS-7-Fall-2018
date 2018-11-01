#include <iostream>
#include <string>
#include <cmath>
#include <chrono>

using namespace std;

int factorial(int n);

int main()
{
	int number = 0;
	int result = 0;

	cout << "Enter an integer: ";
	cin >> number;

	result = factorial(number);
	cout << result << endl;

	system("pause");

	return 0;
}

int factorial(int n)
{
	int answer = 0;

	if (n == 1)
		return n;
	else
		answer = n * factorial(n - 1);
	
	return answer;
}
