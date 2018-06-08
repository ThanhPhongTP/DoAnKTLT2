#pragma once
#include "Date.h"
class Date;
class BanDoc
{
protected:
	string sMaBD, sHoTen, sKhoa;
	Date xNgayDk;
public:
	friend Date;
	virtual void output(){};
	void xuatDB();
	string getSoBD();
	BanDoc(string sMaBD = "", string sHoTen = "", string sKhoa = "", int nNgay = 0, int nThang = 0, int nNam = 0):xNgayDk(nNgay, nThang, nNam)
	{
		this->sMaBD = sMaBD;
		this->sHoTen = sHoTen;
		this->sKhoa = sKhoa;
	}
	~BanDoc(void){};
};

