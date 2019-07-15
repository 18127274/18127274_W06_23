#include"NhanVien.h"

class NVQL : public NhanVien {
private:
	double luongcoban;
	double hesochucvu;
	double thuong;
public:
	void Nhap();

	void Xuat();

	double TinhLuong();
};

