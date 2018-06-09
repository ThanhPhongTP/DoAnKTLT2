#include "Sach.h"


void Sach::xuatSach()
{
	cout  << this->sMaSach << setw(10) << this->sTieuDe << setw(15) << this->sTacGia 
		<< setw(15) << this->sNXB << setw(10) << this->fGiaBan << setw(10) << this->nSoTrang << setw(10); xNgayNhapKho.xuatNgay(); 
}

string Sach::getMASach() 
{
	return this->sMaSach;
}

int Sach::getTinhTrang()
{
	return this->nTinhTrang;
}

void setTinhTrang(int a)
{

}
