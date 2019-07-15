#include"GiaoVien.h"

void GiaoVien::Nhap()
{
	cout << "Nhap ho ten: ";
	cin.ignore();
	getline(cin, hoten);
	cout << "Nhap ma giao vien: ";
	cin >> magiaovien;
	cout << "Nhap he so luong: ";
	cin >> hesoluong;
	cout << setprecision(10);
	cout << "Nhap luong co ban: ";
	cin >> luongcoban;
	cout << "Nhap so ngay nghi: ";
	cin >> songaynghi;
}
void GiaoVien::Xuat()
{
	cout << "Ten giao vien: " << hoten << endl;
	cout << "Ma giao vien: " << magiaovien << endl;
	cout << "He so luong:" << hesoluong << endl;
	cout << "Luong co ban: " << luongcoban << endl;
	cout << "So ngay nghi: " << songaynghi << endl;
	cout << "Luong giao vien: " << LuongGiaoVien() << endl;
}
double GiaoVien::TinhLuong()
{
	return 0;
}
double GiaoVien::LuongGiaoVien() {
	return hesoluong * luongcoban - songaynghi * 100000;
}
int GiaoVien::LayMaGV() {
	return magiaovien;
}
int GiaoVien::TimNgayNghi() {
	return songaynghi;
}
string GiaoVien::Type() {
	return "0";
}
string GiaoVien::LayHoTen() {
	return hoten;
}


