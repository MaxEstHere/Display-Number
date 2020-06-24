
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::underflow_error;
using std::invalid_argument;


void num(int number)
{
	switch (number / 100)
	{
	case 1: cout << "one hundred "; break;
	case 2: cout << "two hundred "; break;
	case 3: cout << "three hundred "; break;
	case 4: cout << "four hundred "; break;
	case 5: cout << "five hundred "; break;
	case 6: cout << "six hundred "; break;
	case 7: cout << "seven hundred "; break;
	case 8: cout << "eight hundred "; break;
	case 9: cout << "nine hundred "; break;
	}
	switch ((number % 100) / 10)
	{
	case 2: cout << "twenty - "; break;
	case 3: cout << "thirty - "; break;
	case 4: cout << "forty - "; break;
	case 5: cout << "fifty - "; break;
	case 6: cout << "sixty - "; break;
	case 7: cout << "seventy - "; break;
	case 8: cout << "eighty - "; break;
	case 9: cout << "ninety - "; break;
	}
	if ((number % 100) >= 10 & (number % 100) < 20) {
		switch (number % 100) {
		case 10: cout << "ten"; break;
		case 11: cout << "eleven"; break;
		case 12: cout << "twelve"; break;
		case 13: cout << "thirteen"; break;
		case 14: cout << "fourteen"; break;
		case 15: cout << "fifteen"; break;
		case 16: cout << "sixteen"; break;
		case 17: cout << "seventeen"; break;
		case 18: cout << "eighteen"; break;
		case 19: cout << "nineteen"; break;
		}
	}
	else {
		switch (number % 10)
		{
		case 0: cout << "zero\n"; break;
		case 1: cout << "one\n"; break;
		case 2: cout << "two\n"; break;
		case 3: cout << "three\n"; break;
		case 4: cout << "four"; break;
		case 5: cout << "five"; break;
		case 6: cout << "six"; break;
		case 7: cout << "seven"; break;
		case 8: cout << "eight"; break;
		case 9: cout << "nine"; break;
		}
	}

}
void test(int);


int main() {
	int n;
	cout << "Enter the number: ";
	cin >> n;
	cout << "Your number: " << " ";
	test(n);
	return 0;
}

void test(int m)
{
	try
	{
		num(m);
	}
	catch (underflow_error err)
	{
		cout << "The number must be greater than 0" << err.what() << endl;
	}
	catch (invalid_argument err)
	{
		cout << "This is not number" << err.what() << endl;
	}
}