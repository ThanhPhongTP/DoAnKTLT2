#pragma once
#include "bandoc.h"
class GiaoVien :
	public BanDoc
{
private:
	string sDiaChi, sSoDT;
public:
	GiaoVien(string sMaBD = "", string sHoTen = "", string sKhoa = "", int nNgay = 0, int nThang = 0, int nNam = 0, string sDiaChi = "", string sSoDT = ""):BanDoc(sMaBD, sHoTen, sKhoa, nNgay, nThang, nNam)
	{
		this->sDiaChi = sDiaChi;
		this->sSoDT = sSoDT;
	}
	void output();
	
	~GiaoVien(void){};
};

