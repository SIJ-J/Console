
//Recursive

#include <iostream>

int factorial(int n)
{
	if (n <= 1)return 1;

	//Àç±Í ´Ü°è : n*(n-1)ÀÇ ÆÑÅä¸®¾ó
	return n * factorial(n - 1);
	//3* factorial(2)
	//factorial(2)
	//factorial(1)
}
//3* factorial(2)
//3*2*factorial(1) 
//3*2*1

using std::cout;
using std::endl;
using std::cin;
using std::string;


int main()
{
	int res = factorial(3); //3*2*1
	cout << res << endl;
}