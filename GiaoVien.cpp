#include "GiaoVien.h"


void GiaoVien::output()
{
	BanDoc::xuatDB();
	cout << "\tDia chi: " << this->sDiaChi << endl;
	cout << "\tSo dien thoai: " << this->sSoDT << endl;
}

