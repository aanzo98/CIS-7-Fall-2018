#include <iostream>
#include <string>
#include <cmath>
#include <chrono>

using namespace std;

void hanoi(int disks, char a, char c, char b);

int main()
{
	int disk = 0;



	cout << "How many disks?: ";
	cin >> disk;

	hanoi(disk, 'A', 'C', 'B');

	system("pause");

	return 0;
}

void hanoi(int disks, char source, char target, char spare)
{
	if (disks > 0)
	{
		hanoi(disks - 1, source, spare, target);

		cout << "move disk " << disks << " from tower " << source << " to tower " << target << endl;

		hanoi(disks - 1, spare, target, source);
	}
}
