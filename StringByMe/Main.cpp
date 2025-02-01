#include <iostream>

#include "MyString.h"

using namespace std;
	

int main() 
{

	MyString hello("hello");

	hello.print();

	MyString ha;

	ha =hello + "hahah";

	return 0; 
}