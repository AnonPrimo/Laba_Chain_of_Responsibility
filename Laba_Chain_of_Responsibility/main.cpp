#include <iostream>
#include <string>
using namespace std;

class SignUp
{
	SignUp *next;
public:
	SignUp() { next = 0; }
	void SetNext(SignUp *n)
	{
		next = n;
	}
	virtual void H(string s)
	{
		next->H(s);
	}
};

class Log : public SignUp
{
public:
	void H(string s)
	{
		for (int i = 0; i < s.length; ++i)
		{
			if (s[i] >= 0 && s[i] <= 47 || s[i] >= 58 && s[i] <= 64 || s[i] >= 91 && s[i] <= 96 || s[i] >= 123 && s[i] <= 0)
				SignUp::H(s);
		}
	}
};

class Email : public SignUp
{
	int c = 0;
public:
	void H(string s)
	{
		for (int i = 0; i < s.length; ++i)
		{
			if (s[i] == '@') c++;
			if (s[i] >= 0 && s[i] <= 47 || s[i] >= 58 && s[i] < 64 || s[i] >= 91 && s[i] <= 96 || s[i] >= 123 && s[i] <= 0)
				SignUp::H(s);
		}
		if (c != 1)
			SignUp::H(s);
	}
};

class Phone : public SignUp
{
public:
	void H(string s)
	{
		if (s.length != 10)
			SignUp::H(s);
		for (int i = 0; i < s.length; ++i)
		{
			if (s[i] != (s[i] >= '0' && s[i] <= '9'))
				SignUp::H(s);
		}
	}
};

int main() 
{



	system("pause");
}