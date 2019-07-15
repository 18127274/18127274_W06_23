#include"CongTy.h"

void CongTy::NhapDS() {
	int n;
	int type;
	NhanVien *p;
	cout << "Nhap so luong nhan vien: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Nhap thong tin nhan vien thu " << i + 1 << endl;
		cout << "Loai nhan vien (1: NVVP; 2: NVSX, 3: NVQL): ";
		cin >> type;

		p = NULL;

		if (type == 1) {
			p = new NVVP; 
		}
		else if (type == 2) {
			p = new NVSX; 
		}
		else if (type == 3) {
			p = new NVQL; 
		}
		p->Nhap(); 
		a.push_back(p); 

	}
}
void CongTy::XuatDS() {
	cout << "Danh sach nhan vien trong cong ty:\n";
	cout << "----------------------------------" << endl;
	for (int i = 0;i < a.size();i++)
	{
		cout << "Thong tin nhan vien thu " << i + 1 << endl;
		a[i]->Xuat();
		cout << "----------------------------------" << endl;
	}
}
double CongTy::TongLuong() {
	double TongLuong = 0;
	for (int i = 0;i < a.size();i++)
	{
		TongLuong += a[i]->TinhLuong();
	}
	return TongLuong;
}
void CongTy::TinhTongLuong() {
	cout << "Tong tien luong phai tra cho nhan vien trong cong ty: " << TongLuong() << endl;
}
void CongTy::LuongCaoNhat() {
	double max = a[0]->TinhLuong();
	for (int i = 0;i < a.size();i++)
	{
		if (a[i]->TinhLuong() > max)
		{
			max = a[i]->TinhLuong();
		}
	}
	cout << "Luong cao nhat: " << max << endl;
}
void CongTy::LuongTB() {
	double LuongTB = 0;
	for (int i = 0;i < a.size();i++)
	{
		LuongTB = TongLuong() / a.size();
	}
	cout << "Luong TB: " << LuongTB << endl;
}
void CongTy::LietKe() {
	cout << "Thong tin nhung nhan vien co luong thap hon ba trieu dong: " << endl;
	for (int i = 0;i < a.size();i++)
	{
		if (a[i]->TinhLuong() < 3000000)
		{
			cout << a[i]->LayHoTen() << endl;
		}
	}
}
void CongTy::TimMaNV() {
	int ma;
	cout << "Nhap ma nhan vien can tim:";
	cin >> ma;
	for (int i = 0;i < a.size();i++)
	{
		if (a[i]->LayMaNV() == ma)
		{
			cout << "Thong tin nhan vien co ma nhan vien can tim la: " << a[i]->LayHoTen() << endl;
		}
	}
}
void CongTy::TimNgaySinh() {
	int dem = 0;
	for (int i = 0;i < a.size();i++)
	{
		if (a[i]->TimThang() == 1)
		{
			dem += 1;
		}
	}
	cout << "So nhan vien sinh trong thang 5 la : " << dem << endl;
}  
void CongTy::TimTenNV() {
	string ten;
	cout << "Nhap ten nhan vien can tim:";
	cin.ignore();
	getline(cin, ten);
	for (int i = 0;i < a.size();i++)
	{
		if (a[i]->LayHoTen() == ten)
		{
			cout << "Ten nhan vien vua nhap co trong cong ty" << endl;
		}
	}
}
void CongTy::DemNVSX() {
	int dem = 0;
	for (int i = 0;i < a.size();i++)
	{
		if (a[i]->Type()=="NVSX")
		{
			dem += 1;
		}
	}
	cout << "Tong so NVSX co trong cong ty la: " << dem << endl;
}
void CongTy::DemNVQL() {
	int dem = 0;
	for (int i = 0;i < a.size();i++)
	{
		if (a[i]->Type() == "NVQL")
		{
			dem += 1;
		}
	}
	cout << "Tong so NVQL co trong cong ty la: " << dem << endl;
}




