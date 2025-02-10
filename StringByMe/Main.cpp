#include <iostream>

#include "MyString.h"

using namespace std;
	

int main() 
{
	setlocale(LC_ALL, "ru");

	MyString string1("|I love you|");
	MyString string2("|Я люблю тебя|");
	MyString string3("|143|");

	string1.print();
	cout << endl;
	string2.print();
	cout << endl;
	string3.print();

	cout << "\n\n";

	cout << "\nLength of first string - " << lengthOfString(string1);
	cout << "\nLength of second string - " << lengthOfString(string2);
	cout << "\nLength of third string - " << lengthOfString(string3);

	cout << "\n\n";

	string1.getId();
	string2.getId();
	string3.getId();

	return 0; 
}