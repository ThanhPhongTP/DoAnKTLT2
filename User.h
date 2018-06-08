#pragma once
#include <iostream>
#include <string>
using namespace std;

class User
{
	string sMaTruyCap, sPass;
public:
	string getMaTruyCap();
	string getPass();
	void setMaTruyCap(string a);
	void setPass(string b);
	User(string sMaTruyCap = "", string sPass = "")
	{
		this->sMaTruyCap = sMaTruyCap;
		this->sPass = sPass;
	}
	~User(void){};
};

