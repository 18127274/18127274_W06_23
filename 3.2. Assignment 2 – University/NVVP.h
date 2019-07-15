#include"NhanVien.h"

class NVVP : public NhanVien {
private:
	int songaylamviec;
	double trocap;
	double luongcoban;
public:
	void Nhap();

	void Xuat();

	double TinhLuong();
};



