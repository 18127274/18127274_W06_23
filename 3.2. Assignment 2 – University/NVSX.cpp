#include"NVSX.h"

void NVSX::Nhap()
{
	NhanVien::Nhap();
	cout << "Nhap so san pham: ";
	cin >> sosanpham;
	cout << setprecision(20);
	cout << "Nhap luong co ban: ";
	cin >> luongcoban;
	cout << "----------------------------------" << endl;
}
void NVSX::Xuat()
{
	NhanVien::Xuat();
	cout << "So ngay lam viec: " << sosanpham << endl;
	cout << "Luong co ban: " << luongcoban << endl;
	cout << "Luong nhan duoc: " << TinhLuong() << endl;
	cout << "----------------------------------" << endl;
}
double NVSX::TinhLuong()
{
	return NhanVien::TinhLuong() + luongcoban + sosanpham * 2000;
}
string NVSX::Type() {
	return "NVSX";
}
