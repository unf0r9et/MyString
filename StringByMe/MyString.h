#pragma once

#include <cstring>
#include <iostream>

class MyString
{
private:

	int length{ 0 };

	char* string;

	int idOfString;

	static int id;

public:

	MyString(char* string);

	MyString(const char* string);

	MyString(const MyString& other);

	MyString();

	~MyString();

	int lengthS();

	void print();

	void getId();

	MyString operator +(const char* otherstring);

	MyString& operator =(const MyString& otherstring);

	friend int lengthOfString(const MyString& otherstring);

};




