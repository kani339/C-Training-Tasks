#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>


using namespace std;


//Factorial using function and recursion
//int factorial(int n);

//Fibonaci series using recursion
//int Fibonacci(int n);


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


	/* Reverse Number */
	/*
	int n, reverse = 0;
	cout << "Enter number ot reverse ";
	cin >> n;

	while (n!=0)
	{
	reverse = reverse * 10;
	reverse = reverse + n%10;
	n /= 10;
	}

	cout << "Reversed Number: " << reverse;
	*/

	/* Palindrom number */
	/*
	int n, reverse = 0, temp;
	cout << "Enter number ot check if it is a palindrome: ";
	cin >> n;
	temp = n;

	while (temp != 0)
	{
	reverse = reverse * 10;
	reverse = reverse + temp % 10;
	temp /= 10;
	}

	if (n == reverse) {
	cout << "Number " << n << " is palindrome";
	}
	else {
	cout << "Number " << n << " is not palindrome";
	}
	*/

	/* Prime numbers */
	/*
	int i, n, result;
	cout << "Enter number of prime numbers: ";
	cin >> n;

	bool isPrime = true;

	for (int i = 2; i <= n/2; i++)
	{
	if (n%i == 0) {
	isPrime = false;
	break;
	}
	}

	if (isPrime)
	cout << "This is a prime number";
	else
	cout << "This is not a prime number";

	*/


	/* Find Armstrong number */
	/*
	int n, sum = 0, remainder;
	cout << "Enter number: ";
	cin >> n;
	int temp = n;

	while (n != 0)
	{
	remainder = n % 10;
	sum += remainder * remainder * remainder;
	n /= 10;
	}

	if (sum == temp)
	{
	cout << "Entered number is armstrong number";
	}
	else {
	cout << "Entered number is not armstrong number";
	}
	*/


	/* Factorial using function */
	/*
	int fact = 1, number;
	cout << "Enter number to calculate it's factorial: ";
	cin >> number;
	cout << number << " = " << factorial(number);
	*/


	/* Factorial using recursion */
	/*
	int n, fact;
	cout << "Enter integer to find factorial: ";
	cin >> n;

	if (n < 0) cout << "Negative number is not allowed";
	else {
		fact = factorial(n);
		cout << n << "!=" << fact;
	}
	*/


	/* Fibonacci series using recursion */
	/*
	int n,c = 0;
	cout << "Enter number of terms";
	cin >> n;

	cout << "First " << n << "terms of Fibonacci series are: ";

	for (int i = 0; i < n; i++)
	{
		cout << Fibonacci(i) << "\n";
		c++;
	}
	*/

	/* Print pattern */
	/*
	int row, c, n, temp;
	cout << "Enter the number of rows in pyramid of stars you wish to see: ";
	cin >> n;
	temp = n;
	cout << "\n\n";

	for (row = 1; row <= n; row++)
	{
		for (c =  1; c < temp; c++)
		{
			cout << " ";
		}
		temp--;

		for (c = 1; c <=2*row; c++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	*/

	/* Diamond pattern */

	int row,k, space = 1;
	cout << "Enter numbers of rows: ";
	cin >> row;
	space = row - 1;
	cout << "\n\n";

	for (int i = 1; i <= row; i++)
	{
		for (k = 1; k <= space ; k++)
		{
			cout << " ";
			
		}
		space--;
		for (k = 1; k <= 2*i-1; k++)
		{
			cout << "*";
			
		}
		cout << "\n";
	}

	space = 1;

	//Printing lower part
	for (int i = 1; i <= row; i++)
	{
		for (k = 1; k <= space; k++)
		{
			cout << " ";
		}
		space++;
		for (k = 1; k <= 2*(row-i)-1; k++)
		{
			cout << "*";
		}

		cout << "\n";
	}


	_getch();
	return 0;
}

//Factorial using function
/*
int factorial(int n)
{
int result = 1;
for (int i = 1; i <= n; i++)
{
result = result * i;
}

return result;
}
*/


//Factorial using recursion
/*
int factorial(int n) 
{
	if (n == 0) {
		return 1;
	}
	else {
		return(n*factorial(n - 1));
		// Recursive call to factorial function
	}
}
*/

//Fibonaci series using recursion
/*
int Fibonacci(int n)
{
	if (n == 0) {
		return 0;
	}
	else if(n == 1){
		return 1;
	}
	else {
		return (Fibonacci(n - 1) + Fibonacci(n - 2));
	}
}
*/