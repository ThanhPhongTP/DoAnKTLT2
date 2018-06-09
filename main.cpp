#include <iomanip>
#include <Windows.h>
#include <list>
#include "GiaoVien.h"
#include "SinhVien.h"
#include "User.h"
#include "PhieuMuon.h"
#include "Sach.h"


//Menu
void menuChinh();
void timThongTin();
void quanLy();
void quanLySach();
void quanLyPhieuMuon();
void quanLyBanDoc();
//User
void docUser(User *U[], int &nSpt);
void xuatUser(User *U[], int nSpt);
void Login(User *U[], int nSpt);
//Ban doc
void docDSBanDoc(BanDoc *BD[], int &nSpt);
void xuatDSBanDoc(BanDoc *BD[], int nSpt);
void timBanDoc(BanDoc *BD[], string sMa);
void themBanDoc(BanDoc *BD[]);
	//bool timkiemBD(BanDoc *BD[], string sMa);
//Sach
void docSach(Sach *S[], int &nSpt);
void XuatSach(Sach *S[], int nSpt);
void themSach(Sach *S[]);
//void capNhatTT(Sach *S[]);
void timSach(Sach *L[], string sMa);
//void xoaSach(Sach *S[],int n);
//Phieu muon
void docPhieuMuon(PhieuMuon *PM[], int &nSpt);
void xuatPhieuMuon(PhieuMuon *PM[], int nSpt);
void taoPhieuMuon(PhieuMuon *PM[], BanDoc *BD[], Sach *S[]);
void xoaSach(Sach *L[],int n);
//thong ke
int demSachConLai(Sach *L[], int n);
int demSachMuon(Sach *L[], int n);
//mau va password
 void SetTeColor(WORD color);
 string password();

void main()
{
	menuChinh();
	/*PhieuMuon *PM[10];
	BanDoc *BD[10];
	Sach *S[10];
	int n = 0;
	docPhieuMuon(PM, n);
	taoPhieuMuon(PM, BD, S);*/
	system("pause");
}


//Menu
void menuChinh()
{
	Sach *S[20];
	User *U[10];
	int nChon;
	int n = 0;
	SetTeColor(15);
e:	cout << "\t-----------MEUNU------------\n";
	SetTeColor(9);
	cout << "\t1. Hien thi thong tin sach.\n";
	cout << "\t2. Tim kiem thong tin.\n";
	cout << "\t3. Quan ly.\n";
	cout << "\t4. Thoat.\n";
	SetTeColor(15);
	cout << "Chon menu: ";
	cin >> nChon;
	system("cls");
	switch(nChon)
	{
	case 1:
		docSach(S, n);
		XuatSach(S,n);
		goto e;
		break;
	case 2:
		timThongTin();
		break;
	case 3:
		Login(U,n);
		break;
	case 4:
		exit(0);
		break;
	default:
		goto e;
	}
}
//b
void timThongTin()
{
	BanDoc *BD[20];
	Sach *S[20];
	string sMa;
	int nChon;
b:	SetTeColor(15);
	cout << "\t------Tim kiem thong tin-------\n";
	SetTeColor(9);
	cout << "\t1. Tim kiem thong tin sach.\n";
	cout << "\t2. Tim kiem thong tin ban doc.\n";
	cout << "\t3. Quay lai.\n";
	SetTeColor(15);
	cout << "Chon menu: ";
	cin >> nChon;
	system("cls");
	switch(nChon)
	{
	case 1:
		timSach(S,sMa);
		goto b;
		break;
	case 2:
		timBanDoc(BD, sMa);
		goto b;
		break;
	case 3:
		menuChinh();
		break;
	default:
		goto b;
	}
}
//a
void quanLy()
{
	BanDoc *BD[20];
	Sach *S[20];
	int n = 0;
	int nChon;
	SetTeColor(15);
d:	cout << "\t--------QUAN LY--------\n";
	SetTeColor(9);
	cout << "\t1. Quan ly phieu muon.\n";
	cout << "\t2. Quan ly sach.\n";
	cout << "\t3. Quan ly ban doc.\n";
	cout << "\t4. Thong ke.\n";
	cout << "\t5. Quay lai.\n";
	SetTeColor(15);
	cout << "Chon menu: ";
	cin >> nChon;
	system("cls");
	switch(nChon)
	{
	case 1:
		quanLyPhieuMuon();
		goto d;
		break;
	case 2:
		quanLySach();
		goto d;
		break;
	case 3:
		themBanDoc(BD);
		goto d;
		break;
	case 4:
		cout << "So Sach con trong thu vien la: " << demSachConLai(S,n) << endl;
		cout << "So Sach da muon la: " << demSachMuon(S,n) << endl;
		goto d;
		break;
	case 5:
		menuChinh();
		break;
	default:
		goto d;
	}
}
void quanLyPhieuMuon()
{
	PhieuMuon *PM[20];
	BanDoc * BD[20];
	Sach *S[20];
	int nChon;
	SetTeColor(15);
p:	cout << "\t----QUAN LY PHIEU MUON----\n";
	SetTeColor(9);
	cout << "\t1. Tao phieu muon moi.\n";
	cout << "\t2. Tra sach.\n";
	cout << "\t3. Quay lai.\n";
	SetTeColor(15);
	cout << "Chon menu: ";
	cin >> nChon;
	system("cls");
	switch(nChon)
	{
	case 1:
		taoPhieuMuon(PM,BD,S);
		goto p;
		break;
	case 2:

		goto p;
		break;
	case 3:
		quanLy();
		break;
	default:
		break;
	}
}
//c
void quanLySach()
{
	Sach *S[20];
	int nChon;
c:	SetTeColor(15);
	cout << "\t---QUAN LY SACH---\n";
	SetTeColor(9);
	cout << "\t1. Them sach moi.\n";
	cout << "\t2. Xoa sach.\n";
	cout << "\t3. Quay lai.\n";
	SetTeColor(15);
	cout << "Chon menu: ";
	cin >> nChon;
	system("cls");
	switch(nChon)
	{
	case 1:
		themSach(S);
		goto c;
		break;
	case 2:

		goto c;
		break;
	case 3:
		quanLy();
		break;
	default:
		break;
	}
}
//User
void docUser(User *U[], int &nSpt)
{
	ifstream file;
	file.open("user.txt",ios::in);
	/*if(file.is_open() == true)
		cout  << "Mo file thanh cong.\n";
	else
		cout << "Mo file khong thanh cong.\n";*/
	string sU, sP;
	int i = 0;
	while(!file.eof())
	{
		getline(file,sU,',');
		getline(file,sP,',');
		U[i] = new User(sU,sP);
		file.ignore(1);
		i++;
	}
	file.close();
	nSpt = i;
}
void Login(User *U[], int nSpt)
{
	
	docUser(U,nSpt);
	string sUser, sPass;
/*a:*/	SetTeColor(15);
	cout << "\tNhap tai khoan: ";
	SetTeColor(14);
	cin >> sUser;
	SetTeColor(15);
	cout << "\tNhap mat khau: ";
	SetTeColor(14);
	sPass = password();
	system("cls");
	for(int i = 0; i < nSpt; i++)
	{
		if(sUser == U[i]->getMaTruyCap() && sPass == U[i]->getPass())
		{
			quanLy();
			//break;
		}
		/*else
		{
			cout << "Ban nhap sai, nhap lai!!!\n";
			goto a;
			return;
		}*/
	}
	
}
//Ban doc
void docDSBanDoc(BanDoc *BD[], int &nSpt)
{
	ifstream file;
	file.open("User_Data.txt",ios::in);
	/*if(file.is_open() == true)
		cout  << "Mo file thanh cong.\n";
	else
		cout << "Mo file khong thanh cong.\n";*/
	string sMaBD, sHoTen, sKhoa, sDiaChi, sSoDT;
	int a, b, c, nKhoaHoc;
	int nMa = 0;
	int i = 0;
	while(!file.eof())
	{
		file >> nMa;
		file.ignore(1);
		getline(file,sMaBD,',');
		getline(file,sHoTen,',');
		getline(file,sKhoa,',');
		file >> a;
		file.ignore(1,',');
		file >> b;
		file.ignore(1,',');
		file >> c;
		file.ignore(1,',');
		if(nMa == 1)
		{
			getline(file,sDiaChi,',');
			getline(file,sSoDT,',');
			BD[i] = new GiaoVien(sMaBD, sHoTen, sKhoa, a, b, c, sDiaChi, sSoDT);
		}
		if(nMa == 2)
		{
			file >> nKhoaHoc;
			file.ignore(1,',');
			BD[i] = new SinhVien(sMaBD, sHoTen, sKhoa, a, b, c, nKhoaHoc);
		}
		i++;
	}
	file.close();
	nSpt = i;
}
void xuatDSBanDoc(BanDoc *BD[], int nSpt)
{
	cout << "\n==========XUAT BAN DOC==========\n";
	for(int i = 0; i < nSpt - 1; i++)
	{
		BD[i]->output();
	}
}
void timBanDoc(BanDoc *BD[], string sMa)
{
	int n = 0;
	int nSpt = 0;
	cout << "nhap ma ban doc: ";
	cin >> sMa;
	system("cls");
	cout << "\tBan doc tim duoc la(Ban doc khong ton tai se khong hien ra man hinh):\n";
	docDSBanDoc(BD,nSpt);
	SetTeColor(9);
	for(int i = 0; i < nSpt; i++)
	{
		if(sMa == BD[i]->getSoBD())
		{
			BD[i]->output();
			break;
		}
	}
	cout << endl;
}
void themBanDoc(BanDoc *BD[])
{
	string sMaBD, sHoTen, sKhoa, sDiaChi, sSoDT;
	int a = 0, b = 0, c = 0, nKhoaHoc;
	int nMa = 0;
	int nSpt = 0;
	cout << "\n-----Them ban doc vao danh sach-------\n";
	cout << "Nhap 1 neu la giao vien, 2 neu la sinh vien: ";
	cin >> nMa;
	cout << "\tNhap ma ban doc: ";
	fflush(stdin);
	getline(cin,sMaBD);
	docDSBanDoc(BD,nSpt);
	for(int i = 0; i < nSpt; i++)
	{
		if(sMaBD == BD[i]->getSoBD())
		{
			cout << "\tNhap ho ten: ";
			getline(cin,sHoTen);
			cout << "\tNhap khoa: ";
			getline(cin,sKhoa);
			cout << "\tNhap ngay dang ky: ";
			cin >> a >> b >> c;
			if(nMa == 1)
			{
				cout << "\tNhap dia chi: ";
				fflush(stdin);
				getline(cin,sDiaChi);
				cout << "\tNhap so dien thoai: ";
				getline(cin,sSoDT);
			}
			else
			{
				cout << "\tNhap Khoa hoc: ";
				cin >> nKhoaHoc;
			}
			break;
		}
		else
		{
			system("cls");
			cout << "Ban doc ton tai!!!\n";
			return;
		}
	}
	system("cls");
	//xuat ra man hinh
	cout << "\n--------Thong tin ban doc vua cap nhat--------\n";
	cout << "\tMa ban doc: " << sMaBD << endl;
	cout << "\tHo ten: " << sHoTen << endl;
	cout << "\tKhoa: " << sKhoa << endl;
	cout << "\tNgay dang ky: " << a << "-" << b << "-" << c << endl;;
	if(nMa == 1)
	{
		cout << "\tDia chi: " << sDiaChi << endl;
		cout << "\tSo dien thoai: " << sSoDT << endl;
	}
	else
	{
		cout << "\tKhoa hoc: " << nKhoaHoc << endl;
	}
	cout << endl;
	//ghi vao file
	ofstream file;
	file.open("User_Data.txt",ios::app);
	file << nMa << "," << sMaBD << "," << sHoTen << "," << sKhoa << "," << a << "," << b << "," << c << ",";
	if(nMa == 1)
		file << sDiaChi << "," << sSoDT << "," << endl; 
	else
		file << nKhoaHoc << "," << endl;
}
//Sach
void docSach(Sach *S[], int &nSpt)
{
	ifstream file;
	file.open("Sach.txt",ios::in);
	/*if(file.is_open() == true)
		cout  << "Mo file thanh cong.\n";
	else
		cout << "Mo file khong thanh cong.\n";*/
	string sMaSach, sTieuDe, sTacGia, sNXB;
	float fGiaBan;
	int nTinhTrang, a, b, c, nNamPhatHanh, nSoTrang;
	int i = 0;
	while(!file.eof())
	{
		getline(file,sMaSach,',');
		getline(file,sTieuDe,',');
		getline(file,sTacGia,',');
		getline(file,sNXB,',');
		file >> nNamPhatHanh;
		file.ignore(1,',');
		file >> fGiaBan;
		file.ignore(1,',');
		file >> nSoTrang;
		file.ignore(1,',');
		file >> a;
		file.ignore(1,',');
		file >> b;
		file.ignore(1,',');
		file >> c;
		file.ignore(1,',');
		file >> nTinhTrang;
		file.ignore(1,',');
		S[i] = new Sach(sMaSach, sTieuDe, sTacGia, sNXB, nNamPhatHanh, fGiaBan, nSoTrang, a, b, c, nTinhTrang);
		i++;
	}
	file.close();
	nSpt = i;
}
void XuatSach(Sach *S[], int nSpt)
{
	cout << "\n\t\t===============XUAT SACH===============\n";
	cout << "MaSach" << setw(10) << "TieuDe " << setw(15) << "Tac Gia " << setw(15) 
		<< "NhaxuatBan" << setw(10) << "GiaBan "<< setw(10) << "So Trang "<< setw(15) << "Ngay Nhap\n";
	for(int i = 0; i < nSpt - 1; i++)
	{
		S[i]->xuatSach();
	}
	
}

void themSach(Sach *S[])
{
	int n = 0;
	ofstream file;
	file.open("Sach.txt",ios::app);
	string sMaSach = "", sTieuDe = "", sNXB = "", sTacGia = "";
	float fGia = 0.0;
	int namPH = 0, nSoTrang = 0, ngay = 0, thang = 0, nam = 0, tinhTrang = 0, i = 0;
	file << endl;
	a1:
	cout << " nhap ma sach ";
	fflush(stdin);
	cin >> sMaSach;
	for (int i = 0; i < n; i++)
	{
		if(S[i]->getMASach() != sMaSach)
		{
			file << sMaSach;
		}
		else
		{
			cout << "nhap lai";
			goto a1;
		}
	}
		file << ',';
		cout << " nhap tieu de ";
		fflush(stdin);
		cin >> sTieuDe;
		file << sTieuDe;
		file << ',';
		cout << " nhap nha xuat ban ";
		fflush(stdin);
		cin >> sNXB;
		file << sNXB;
		file << ',';
		cout << " nhap tac gia ";
		fflush(stdin);
		cin >> sTacGia;
		file << sTacGia;
		file << ',';
		cout << " nhap gia ";
		cin >> fGia;
		file << fGia;
		file << ',';
		cout << " nhap nam phat hanh ";
		cin >> namPH;
		file << namPH;
		file << ',';
		cout << " nhap so trang ";
		cin >> nSoTrang;
		file << nSoTrang;
		file << ',';
		cout << " nhap ngay xuat kho ";
		cin >> ngay;
		file << ngay;
		file << ',';
		cout << " nhap thang xuat kho ";
		cin >> thang;
		file << thang;
		file << ',';
		cout << " nhap nam xuat kho ";
		cin >> nam;
		file << nam;
		file << ',';
		tinhTrang = 0;
		file << tinhTrang;
		file << '\n';
}
void timSach(Sach *L[],string sMa)
{
	int nSpt = 0;
	cout << " nhap ma sach ";
	cin >> sMa;
	docSach(L,nSpt);
	cout << "Sach tim duoc la:\n";
	SetTeColor(9);
	for (int i = 0; i < nSpt; i++)
	{
		if(L[i]->getMASach() == sMa)
		{
			L[i]->xuatSach();
		}
	}
}


//Phieu muon
void docPhieuMuon(PhieuMuon *PM[], int &nSpt)
{
	ifstream file;
	file.open("Phieumuon.txt",ios::in);
	/*if(file.is_open() == true)
		cout  << "Mo file thanh cong.\n";
	else
		cout << "Mo file khong thanh cong.\n";*/
	int nMaPM, a, b, c, d, e, f, nTrangThai;
	string sMaBD, sMaSach;
	int i = 0;
	
	while(!file.eof())
	{
		file >> nMaPM;
		file.ignore(1);
		getline(file,sMaBD,',');
		getline(file,sMaSach,',');
		file >> a;
		file.ignore(1,',');
		file >> b;
		file.ignore(1,',');
		file >> c;
		file.ignore(1,',');
		file >> d;
		file.ignore(1,',');
		file >> e;
		file.ignore(1,',');
		file >> f;
		file.ignore(1,',');
		file >> nTrangThai;
		file.ignore(1,',');
		PM[i] = new PhieuMuon(nMaPM, sMaBD, sMaSach, a, b, c, d, e, f, nTrangThai);
		i++;
	}
	file.close();
	nSpt = i;
}
void xuatPhieuMuon(PhieuMuon *PM[], int nSpt)
{
	for(int i = 0; i < nSpt; i++)
	{

	}
}
void taoPhieuMuon(PhieuMuon *PM[], BanDoc *BD[], Sach *S[])
{
	string sMaBD, sMaSach;
	int nSpt = 0;
p1:	cout << "Nhap ma ban doc can muon sach: ";
	cin >> sMaBD;
	system("cls");
	cout << "Phieu muon vua duoc tao:\n";
	for(int i = 0; i < nSpt; i++)
	{
		if(sMaBD == BD[i]->getSoBD())
		{
			cout << "Nhap ma sach muon muon: ";
			cin >> sMaSach;	
			if(sMaSach == S[i]->getMASach())
			{
				PM[i]->xuatPM();
			}
		}
	}
}
//Thong ke
int demSachConLai(Sach *L[], int n)
{
	int nDem = 0;
	docSach(L,n);
	for (int i = 0; i < n - 1; i++)
	{
		if (L[i]->getTinhTrang() == 0)
			nDem++;
	}
	return nDem;
}
int demSachMuon(Sach *L[], int n)
{
	int nDem = 0;
	docSach(L,n);
	for (int i = 0; i < n - 1; i++)
	{
		if (L[i]->getTinhTrang() != 0)
			nDem++;
	}
	return nDem;
}













//Mau sac:
 void SetTeColor(WORD color)
{
	HANDLE hConsoleOutput;
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
	GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);
	WORD wAttributes = screen_buffer_info.wAttributes;
	color &= 0x000f;
	wAttributes &= 0xfff0; wAttributes |= color;
	SetConsoleTextAttribute(hConsoleOutput, wAttributes);
}
 //ma hoa password
  string password()
{
	string result;
	// Set the console mode to no-echo, not-line-buffered input
	DWORD mode, count;
	HANDLE ih = GetStdHandle( STD_INPUT_HANDLE  );
	HANDLE oh = GetStdHandle( STD_OUTPUT_HANDLE );
	if (!GetConsoleMode( ih, &mode ))
		throw runtime_error(
		"getpassword: You must be connected to a console to use this program.\n"
		);
	SetConsoleMode( ih, mode & ~(ENABLE_ECHO_INPUT | ENABLE_LINE_INPUT) );

	// Get the password string
	char c;
	while (ReadConsoleA( ih, &c, 1, &count, NULL) && (c != '\r') && (c != '\n'))
	{
		if (c == '\b')
		{
			if (result.length())
			{
				WriteConsoleA( oh, "\b \b", 3, &count, NULL );							
				result.erase( result.end() -1 );
			}
		}
		else
		{
			WriteConsoleA( oh, "*", 1, &count, NULL );
			result.push_back( c );
		}
	}
	// Restore the console mode
	SetConsoleMode( ih, mode );
	return result;
}


//void capNhatTT(Sach *S[])
//  {
//		int a;
//		cout << " nhap tinh trang sach ";
//		cin >> a;
//	   int i = 0;
//	   while(S[i]->getTinhTrang() == 0)
//	   {
//		   S[i]->setTinhTrang(a);
//	   }
//  }
//
//void xoaSach(Sach *S[],int n)
//{
//	string sMa;
//	cout << " nhap ma sach can xoa ";
//	cin >> sMa;
//	for (int i = 0; i < n; i++)
//	{
//		if (S[i]->getMASach() == sMa && S[i]->getTinhTrang() == 0)
//		{
//			swap(S[i],S[i-1]);
//			delete S[i - 1];
//		}
//	}
//}
//
