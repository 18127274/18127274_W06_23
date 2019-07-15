#include"NhanVien.h"

void NhanVien::Nhap()
{
	cout << "Nhap ho ten: ";
	cin.ignore();
	getline(cin, hoten);
	cout << "Nhap ma nhan vien: ";
	cin >> manv;
	cout << "Nhap thang sinh:";
	cin >> thangsinh;
	cout << "Nhap nam vao lam: ";
	cin >> namvaolam;
}
void NhanVien::Xuat()
{
	cout << "Ten nhan vien: " << hoten << endl;
	cout << "Ma nhan vien: " << manv << endl;
	cout << "Thang sinh cua sinh vien:" << thangsinh << endl;
	cout << "Nam vao lam: " << namvaolam << endl;
}
double NhanVien::TinhLuong()
{
	return 0;
} 
int NhanVien::LayMaNV() {
	return manv;
}
int NhanVien::TimThang(){
	
	if (thangsinh == 5)
	{
		return 1;
	}
	return 0; 
} 
string NhanVien::Type() {
	return "0";
}
string NhanVien::LayHoTen() {
	return hoten;
}

