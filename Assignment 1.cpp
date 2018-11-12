#include<iostream>
#include<string>
#include <stdio.h>
using namespace std;

int main()
{
	bool lastWasLetter = false;
	bool lastWasConnector = false;
	bool lastWasDash = false;
	bool fail = false;
	bool parenthesisFlag = false;

	int letterRepetitionCheck = 0;
	int ConectorRepetionCheck = 0;
	int paranthesisChecker = 0;

	char choice = 'y';

	string input;
	string letters = "ABCDEFGHIJKLMNOPQRSTUWXYZ";
	string connector = "->^v!()";

	do
	{
		cout << "Please enter a WFF statement: ";
		getline(cin, input);
		cout << endl;

		letterRepetitionCheck = 0;
		ConectorRepetionCheck = 0;
		paranthesisChecker = 0;

		for (int i = 0; i < input.length(); i++)
		{
			char c = input[i];

			if (c == ' ')
				continue;

			if (connector.find(c) != string::npos)
			{
				if (c == '!')
				{
					if (lastWasLetter != true)
					{
						cout << "Not a Valid WFF. No letter before '!' found." << endl << endl;
						fail = true;
						break;
					}
				}
				if (c == '-')
				{
					if (lastWasLetter != true)
					{
						cout << "Not a Valid WFF. No letter before '-' found." << endl << endl;
						fail = true;
						break;
					}
					lastWasDash = true;
					ConectorRepetionCheck = 0;
				}
				if (c == '>')
				{
					if (lastWasDash != true)
					{
						cout << "Not a Valid WFF. Incomplete implies-connector." << endl << endl;
						fail = true;
						break;
					}
					ConectorRepetionCheck = 0;
				}
				if (c == '(' || c == ')')
				{
					paranthesisChecker += 1;
					ConectorRepetionCheck = 0;
					parenthesisFlag = true;
				}

				if (ConectorRepetionCheck == 1)
				{
					cout << "Not a Valid WFF. Connector Repetition." << endl << endl;
					fail = true;
					break;
				}
				lastWasConnector = true;
				letterRepetitionCheck = 0;
				if (parenthesisFlag == true)
					ConectorRepetionCheck = 0;
				else if (parenthesisFlag == false)
					ConectorRepetionCheck = 1;

				parenthesisFlag = false;
			}
			else if (letters.find(c) != string::npos)
			{
				if (letterRepetitionCheck == 1)
				{
					cout << "Not a Valid WFF. Letter repetition." << endl << endl;
					fail = true;
					break;
				}
				lastWasLetter = true;
				letterRepetitionCheck = 1;
				ConectorRepetionCheck = 0;
				continue;
			}
		}
		if (paranthesisChecker % 2 != 0 && fail == true)
			cout << "Not a Valid WFF. Unclosed parenthesis." << endl << endl;
		else if (paranthesisChecker % 2 == 0 && fail == false)
			cout << "Valid WFF!" << endl << endl;

		cout << "Would you like to run the program again? ('y/Y' for yes): " << flush;
		cin >> choice;
		cin.ignore();
		system("CLS");
	} while (choice == 'y' || choice == 'Y');

	return 0;
}
