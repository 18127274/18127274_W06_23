#include"TruongHoc.h"

void TruongHoc::NhapDS() {
	int n;
	int type;
	GiaoVien *p;
	cout << "Nhap so luong giao vien: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Nhap thong tin giao vien thu " << i + 1 << endl;
		cout << "Loai giao vien (1: GVCN), (2:Giao vien khong chu nhiem) ";
		cin >> type;

		p = NULL;

		if (type == 1) {
			p = new GVCN;
		}
		else if (type == 2) {
			p = new GiaoVien;
		}
		p->Nhap();
		a.push_back(p);

	}
}
void TruongHoc::XuatDS() {
	cout << "Danh sach giao vien trong truong hoc:\n";
	cout << "----------------------------------" << endl;
	for (int i = 0;i < a.size();i++)
	{
		cout << "Thong tin giao vien thu " << i + 1 << endl;
		a[i]->Xuat();
		cout << "----------------------------------" << endl;
	}
}
double TruongHoc::TongLuong() {
	double TongLuong = 0;
	for (int i = 0;i < a.size();i++)
	{
		TongLuong += a[i]->TinhLuong() + a[i]->LuongGiaoVien();
	}
	return TongLuong;
}
void TruongHoc::TinhTongLuong() {
	cout << "Tong tien luong phai tra cho giao vien trong truong: " << TongLuong() << endl;
}
void TruongHoc::LuongCaoNhat() {
	double max = a[0]->TinhLuong();
	for (int i = 0;i < a.size();i++)
	{
		if (a[i]->TinhLuong() > max || a[i]->LuongGiaoVien() > max)
		{
			if (a[i]->TinhLuong() > a[i]->LuongGiaoVien())
			{
				max = a[i]->TinhLuong();
			}
			else {
				max = a[i]->LuongGiaoVien();
			}
		}
	}
	cout << "Luong cao nhat: " << max << endl;
}
void TruongHoc::LuongTB() {
	double LuongTB = 0;
	for (int i = 0;i < a.size();i++)
	{
		LuongTB = TongLuong() / a.size();
	}
	cout << "Luong TB: " << LuongTB << endl;
}
void TruongHoc::LietKe() {
	cout << "Thong tin nhung giao vien co luong cao hon muoi trieu dong: " << endl;
	for (int i = 0;i < a.size();i++)
	{
		if (a[i]->TinhLuong() > 10000000 || a[i]->LuongGiaoVien() > 10000000)
		{
			cout << a[i]->LayHoTen() << endl;
		}
	}
}
void TruongHoc::TimMaGV() {
	int ma;
	cout << "Nhap ma giao vien can tim:";
	cin >> ma;
	for (int i = 0;i < a.size();i++)
	{
		if (a[i]->LayMaGV() == ma)
		{
			cout << "Thong tin giao vien co ma can tim la: " << a[i]->LayHoTen() << endl;
		}
	}
}
void TruongHoc::TimGiaoVienNghi() {
	int dem = 0;
	for (int i = 0;i < a.size();i++)
	{
		if (a[i]->TimNgayNghi() > 4)
		{
			dem += 1;
		}
	}
	cout << "So giao vien vien nghi qua 4 ngay trong thang la: " << dem << endl;
}
void TruongHoc::TimTenGV() {
	string ten;
	cout << "Nhap ten giao vien can tim:";
	cin.ignore();
	getline(cin, ten);
	for (int i = 0;i < a.size();i++)
	{
		if (a[i]->LayHoTen() == ten)
		{
			cout << "Ten giao vien vua nhap co trong truong" << endl;
		}
	}
}
void TruongHoc::DemGVCN() {
	int dem = 0;
	for (int i = 0;i < a.size();i++)
	{
		if (a[i]->Type() == "GVCN")
		{
			dem += 1;
		}
	}
	cout << "Tong so GVCN co trong truong la: " << dem << endl;
}
void TruongHoc::DemGVKhongChuNhiem() {
	int dem = 0;
	for (int i = 0;i < a.size();i++)
	{
		if (a[i]->Type() != "GVCN")
		{
			dem += 1;
		}
	}
	cout << "Tong so Giao Vien khong chu nhiem co trong truong la: " << dem << endl;
}




