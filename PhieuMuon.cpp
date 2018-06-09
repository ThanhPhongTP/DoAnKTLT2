#include "PhieuMuon.h"

void PhieuMuon::xuatPM()
{
	cout << "\tSo phieu muon: " << this->nMaPM << endl;
	cout << "\tMa sach: " << xSach.getMASach() << endl;
	cout << "\tMa ban doc: " << xBanDoc.getSoBD() << endl;
	cout << "\tNgay muon: " << xNgayMuon.getNgay() << "-" << xNgayMuon.getThang() << "-" << xNgayMuon.getNam() << endl;
	cout << "\tNgay muon: " << xNgayTra.getNgay() << "-" << xNgayTra.getThang() << "-" << xNgayTra.getNam() << endl;
	cout << "\tTinh Trang: " << this->nTrangThai << endl;
}

BanDoc PhieuMuon::getBanDoc()
{
	return this->xBanDoc;
}
Sach PhieuMuon::getSach()
{
	return this->xSach;
}
Date PhieuMuon::getNgayMuon()
{
	return this->xNgayMuon;
}
Date PhieuMuon::getNgayTra()
{
	return this->xNgayTra;
}
int PhieuMuon::getMaPM()
{
	return this->nMaPM;
}
int PhieuMuon::getTrangThai()
{
	return this->nTrangThai;
}
void PhieuMuon::setTrangthai(int a)
{
	this->nTrangThai = a;
}
void PhieuMuon::setSach(Sach S)
{
	this->xSach = S;
}
void PhieuMuon::setBanDoc(BanDoc xBD)
{
	this->xBanDoc = xBD;
}