#include "BanDoc.h"


string BanDoc::getSoBD()
{
	return this->sMaBD;
}


void BanDoc::xuatDB()
{
	cout <<"\n\t--------------------------\n";
	cout << "\tSo ban doc: " << this->sMaBD << endl;
	cout << "\tHo ten: " << this->sHoTen << endl;
	cout << "\tKhoa: " << this->sKhoa << endl;
	cout << "\tNgay dang ky: ";
	xNgayDk.xuatNgay();
}

