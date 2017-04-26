#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>


using namespace std;


int main()
{


	/* Summ digits of integer number */
	/*
	int n, sum = 0, remainder;
	cout << "Enter Integer: ";
	cin >> n;

	while (n != 0)
	{
		remainder = n % 10;
		sum += remainder;
		n /= 10;
	}

	cout << "Sum of Digits is: " << sum;
	*/

	/* Greatest of 3 numbers */
	/*
	int a, b, c;
	cout << "Enter any of three numbers:\n";
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "Enter c: ";
	cin >> c;


	if (a > b && a > c) {
		cout << "A is gretest: " << a;
	}
	else if (b > a && b > c) {
		cout << "B is gretest: " << b;
	}
	else {
		cout << "C is gretest: " << c;
	}
	*/


	/* Swapping two numbers */
	/*
	int a, b, temp;
	cout << "Enter number a: ";
	cin >> a;
	cout << "Enter number b: ";
	cin >> b;

	temp = a;
	a = b;
	b = temp;

	cout << "Numbers After Swapping:\n";
	cout << "A = " << a << "\n";
	cout << "B =  " << b;
	*/

	/* Calculate Percentage */
	/*
	int a, b, c, d, e, sum, total = 500;
	float percent;
	cout << "Ener marks of 5 subjects:\n";
	cin >> a >> b >> c >> d >> e;

	sum = a + b + c + d + e;
	cout << "Sum: " << sum << endl;

	percent = (sum * 100) / 500;
	cout << "Percentage: " << percent;
	*/

	/* Calcuale Gross Salary */
	/*
	int gross_salary, basic, da, ta;
	cout << "Enter basic salary: ";
	cin >> basic;

	da = (10 * basic) / 100;
	ta = (12 * basic) / 100;

	gross_salary = basic + da + ta;
	cout << "\nGross Salary: " << gross_salary;
	*/



	_getch();
	return 0;
}