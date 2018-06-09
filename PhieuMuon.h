#pragma once
#include <time.h>
#include "Date.h"
#include "Sach.h"
#include "BanDoc.h"

class Date;
class BanDoc;
class Sach;
class PhieuMuon
{
	BanDoc xBanDoc;
	Sach xSach;
	Date xNgayMuon, xNgayTra;
	int nTongPM;
	int nMaPM;
	int nTrangThai;
public:
	friend Date;
	friend BanDoc;
	friend Sach;
	PhieuMuon(int nMaPM = 0, string sMaBD = "", string sMaSach = "", int a = 0, int b = 0, int c = 0, int d = 0, int e = 0, int f = 0, int nTrangThai = 0):xBanDoc(sMaBD), xSach(sMaSach), xNgayMuon(a,b,c), xNgayTra(d,e,f)
	{
		this->nTongPM++;
		this->nMaPM = this->nTongPM;
		this->nTrangThai = nTrangThai;
	}
	PhieuMuon(string sMaBD = "", string sMaSach = ""):xBanDoc(sMaBD), xSach(sMaSach)
	{
		time_t rawtime;
		struct tm*info;
		time(&rawtime);
		//info = localtime(&rawtime);
		//ngay muon:
		xNgayMuon.setNgay(info->tm_mday);
		xNgayMuon.setThang(info->tm_mon + 1);
		xNgayMuon.setNam(info->tm_year + 1900);
		//ngaytra:
		xNgayTra.setNgay(info->tm_mday + 7);
		xNgayTra.setThang(info->tm_mon + 1);
		xNgayTra.setNam(info->tm_year + 1900);

		this->nTongPM++;
		this->nMaPM = this->nTongPM;
		this->nTrangThai = 1;
	}
	BanDoc getBanDoc();
	Sach getSach();
	Date getNgayMuon();
	Date getNgayTra();
	int getMaPM();
	int getTrangThai();
	void setTrangthai(int a);
	void setSach(Sach S);
	void setBanDoc(BanDoc xBD);
	void xuatPM();
	~PhieuMuon(void){};
};

