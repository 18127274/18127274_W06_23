
#include<iostream>
#include<string>
#include<iomanip>
#include<vector>
#include<typeinfo>

using namespace std;

class GiaoVien {
private:
	int magiaovien;
	string hoten;
	float hesoluong;
	double luongcoban;
	int songaynghi;
public:
	virtual void Nhap();

	virtual void Xuat();

	virtual double TinhLuong();

	double LuongGiaoVien();

	int LayMaGV();

	int TimNgayNghi();

	virtual string Type();

	string LayHoTen();
};





