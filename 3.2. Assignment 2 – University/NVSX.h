#include"NhanVien.h"

class NVSX : public NhanVien {
private:
	int sosanpham;
	double luongcoban;
public:
	void Nhap();

	void Xuat();

	double TinhLuong();

	string Type();
};


