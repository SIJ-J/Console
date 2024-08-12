#include <iostream>
#include "SLL.h"

using std::cout;
using std::endl;
using std::string;
using std::cin;

int main()
{
	SLL s;

	s.Insert(1);
	s.Insert(2);
	s.Insert(3);
	s.Insert(4);
	s.Insert(5);
	s.Print();
	s.Delete(5);
	s.Print();

	s.Delete(3);
	s.Print();

}