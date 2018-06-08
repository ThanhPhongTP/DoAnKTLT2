#include "User.h"


string User::getMaTruyCap()
{
	return this->sMaTruyCap;
}
string User::getPass()
{
	return this->sPass;
}
void User::setMaTruyCap(string a)
{
	this->sMaTruyCap = a;
}
void User::setPass(string b)
{
	this->sPass = b;
}
