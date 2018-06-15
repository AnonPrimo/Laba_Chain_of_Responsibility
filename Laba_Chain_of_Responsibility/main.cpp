#pragma once
#include <iostream>
#include <string>
using namespace std;

class Base
{
	Base* next;
public:
	Base() { next = 0; }
	void Add(Base* n) 
	{
		if (next)
			next->Add(n);
		else
			next = n;
	}
	
	virtual void h1(string s)
	{
		next->h1(s);
	}

	virtual void h2(int i)
	{
		next->h2(i);
	}
};


class Cl : public Base
{
	int i = 0;
	string s = "";
public:
	Cl(int i1) { i = i1; }
	Cl(string i1) { s = i1; }
	Cl() { i = 0; s = ""; }

	virtual void H1()
	{
		cout << s << endl;
	}

	virtual void H2()
	{
		cout << i << endl;
	}

	void Check()
	{
		if (s != "")
		{
			H1();
			h1(s);
		}
		else
			if (i != 0)
			{
				H2();
				h2(i);
			}
	}
};

class Log
{
	int i = 0;
	string s = "";
public:
	Log(int i1) { i = i1; }
	Log(string i1) { s = i1; }
	Log() { i = 0; s = ""; }

	virtual void H1()
	{
		cout << s << endl;
	}

	virtual void H2()
	{
		cout << i << endl;
	}

	void Check()
	{
		if (s != "")
		{
			for (int j = 0; j <= s.length; j++)
			{
				if (s[j] == '-' || s[j] >= '0' && s[j] <= '9' || s[j] >= 'A' && s[j] <= 'Z' || s[j] >= 'a' && <= 'z')
					continue;
				else
				{
					cout << "You input incorrect data"; 
					break;
				}///xjfzj;
			}

		}
		else
			if (i != 0)
			{
				H2();
			}
	}
};


void main()
{



	cin.get();
	cin.get();
}