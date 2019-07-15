#include"NVQL.h"

void NVQL::Nhap()
{
	NhanVien::Nhap();
	cout << setprecision(20);
	cout << "Nhap luong co ban: ";
	cin >> luongcoban;
	cout << "Nhap he so chuc vu: ";
	cin >> hesochucvu;
	cout << "Nhap tien thuong: ";
	cin >> thuong;
	cout << "----------------------------------" << endl;
}
void NVQL::Xuat()
{
	NhanVien::Xuat();
	cout << "Luong co ban: " << luongcoban << endl;
	cout << "He so chuc vu: " << hesochucvu << endl;
	cout << "Thuong: " << thuong << endl;
	cout << "Luong nhan duoc: " << TinhLuong() << endl;
	cout << "----------------------------------" << endl;
}
double NVQL::TinhLuong()
{
	return NhanVien::TinhLuong()*hesochucvu + luongcoban + thuong;
}
