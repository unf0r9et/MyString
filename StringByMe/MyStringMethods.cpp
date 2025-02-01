
#include "MyString.h"

MyString::MyString(char* string)
{
	this->length = strlen(string);
	this->string = new char[this->length + 1];
	this->string[this->length] = '\0';
	for (int i = 0; i < this->length; i++)
	{
		this->string[i] = string[i];
	}
}

MyString::MyString(const char* string)
{
	this->length = strlen(string);
	this->string = new char[this->length + 1];
	this->string[this->length] = '\0';
	for (int i = 0; i < this->length; i++)
	{
		this->string[i] = string[i];
	}
}

MyString::MyString(const MyString& other) {

	if (this->string != nullptr)
	{
		delete[] string;
	}

	this->length = strlen(other.string) + 1;

	this->string = new char[length];

	for (int i = 0; i < this->length; i++)
	{
		this->string[i] = other.string[i];
	}
	this->string[length] = '\0';
}

MyString::MyString()
{
	this->string = nullptr;
}

MyString::~MyString()
{
	delete[] this->string;
}

int MyString::lengthS()
{
	return this->length;
}

void MyString::print() {
	for (int i = 0; i < this->length; i++)
	{
		std::cout << this->string[i];
	}
}

MyString MyString::operator +(const char* otherstring)
{
	int NewLength = this->length + strlen(otherstring);

	int j = 0;

	MyString NewString;
	NewString.string = new char[NewLength + 1];
	for (int i = 0; i < NewLength; i++)
	{
		NewString.string[i] = this->string[i];
		if (i >= this->length)
		{
			NewString.string[i] = otherstring[j];
			j++;
		}
	}
	NewString.string[NewLength] = '\0';
	return NewString;
}

MyString& MyString::operator =(const MyString& otherstring)
{
	if (this->string != nullptr) {
		delete[] string;
	}
	this->length= strlen(otherstring.string);

	this->string = new char[this->length + 1];

	for (int i = 0; i < this->length; i++) {
		this->string[i] = otherstring.string[i];
	}
	this->string[this->length] = '\0';

	return *this;
}