#include"NVVP.h"


void NVVP::Nhap()
{
	NhanVien::Nhap();
	cout << "Nhap so ngay lam viec: ";
	cin >> songaylamviec;
	cout << "Nhap tro cap: ";
	cin >> trocap;
	cout << setprecision(20);
	cout << "Nhap luong co ban: ";
	cin >> luongcoban;
	cout << "----------------------------------" << endl;
}
void NVVP::Xuat()
{
	NhanVien::Xuat();
	cout << "So ngay lam viec: " << songaylamviec << endl;
	cout << "Tro cap: " << trocap << endl;
	cout << "Luong co ban:" << luongcoban << endl;
	cout << "Luong nhan duoc: " << TinhLuong() << endl;
	cout << "----------------------------------" << endl;
}
double NVVP::TinhLuong()
{
	return NhanVien::TinhLuong() + luongcoban + songaylamviec * 100000 + trocap;
}
