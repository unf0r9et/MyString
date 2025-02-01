#pragma once

#include <cstring>
#include <iostream>

class MyString
{
private:

	int length{ 0 };
	char* string;

public:

	MyString(char* string);

	MyString(const char* string);

	MyString(const MyString& other);

	MyString();


	~MyString();

	int lengthS();

	void print();

	MyString operator +(const char* otherstring);

	MyString& operator =(const MyString& otherstring);

};

