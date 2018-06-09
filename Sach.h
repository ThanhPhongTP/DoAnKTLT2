#pragma once
#include "Date.h"
#include <iomanip>

class Date;
class Sach
{
	string sMaSach, sTieuDe, sTacGia, sNXB;
	float fGiaBan;
	int nNamPhatHanh, nSoTrang;
	Date xNgayNhapKho;
	int nTinhTrang; // tinh trang la 1 thi dang muon
public:
	friend Date;
	Sach(string sMaSach = "", string sTieuDe = "", string sTacGia ="", string sNXB = "",int nNamPhatHanh = 0, float fGiaBan = 0.0, int nSoTrang = 0, int nNgay = 0, int nThang = 0, int nNam = 0, int nTinhTrang = 0):xNgayNhapKho(nNgay, nThang,nNam)
	{
		this->sMaSach = sMaSach;
		this->sTieuDe = sTieuDe;
		this->sTacGia = sTacGia;
		this->sNXB = sNXB;
		this->fGiaBan = fGiaBan;
		this->nNamPhatHanh = nNamPhatHanh;
		this->nSoTrang = nSoTrang;
		this->nTinhTrang = nTinhTrang;
	}
	string getMASach();
	int getTinhTrang();
	void setTinhTrang(int a);
	void xuatSach();
	~Sach(void){};
};

