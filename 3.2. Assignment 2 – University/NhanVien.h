#ifndef NhanVien_H
#define NhanVien_H

#include<iostream>
#include<string>
#include<iomanip>
#include<vector>

using namespace std;

class NhanVien {
private:
	string hoten;
	int namvaolam;
	int manv;
	int thangsinh;
public:
	virtual void Nhap();

	virtual void Xuat();

	virtual double TinhLuong();
	
	 int LayMaNV();

	 int TimThang();
	 
	 virtual string Type() ;
	 
	 string LayHoTen();
};

#endif

