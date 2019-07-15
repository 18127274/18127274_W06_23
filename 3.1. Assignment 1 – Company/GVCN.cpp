#include"GVCN.h"

void GVCN::Nhap()
{
	GiaoVien::Nhap();
	cout << "Nhap ten lop chu nhiem: ";
	cin.ignore();
	getline(cin, tenlopchunhiem);
	cout << "----------------------------------" << endl;
}
void GVCN::Xuat()
{
	GiaoVien::Xuat();
	cout << "Ten lop chu nhiem: " << tenlopchunhiem << endl;
	/*cout << "Luong co ban: " << luongcoban << endl;*/
	cout << "Luong nhan duoc: " << TinhLuong() << endl;
	cout << "----------------------------------" << endl;
}
double GVCN::TinhLuong()
{
	return GiaoVien::TinhLuong() + LuongGiaoVien() + 500000;
}
string GVCN::Type() {
	return "GVCN";
}
