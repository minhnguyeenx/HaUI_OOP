#include <bits/stdc++.h>

using namespace std;

class hocsinh{
private:
	char hoten[30];
	char ngaysinh[20];
    char gioitinh[10];
	float diemTB;
	char xeploaiDD[10];
public:
	void nhap(){
		cout << "Nhap ho ten: "; fflush(stdin);
        gets(hoten);
		cout << "Nhap ngay sinh: "; fflush(stdin);
        gets(ngaysinh);
        cout << "Nhap gioi tinh: "; fflush(stdin);
        gets(gioitinh);
		cout << "Nhap diem trung binh: ";
        cin >> diemTB;
		cout << "Nhap xep loai dao duc: "; fflush(stdin);
        gets(xeploaiDD);
	}
	void xuat(){
		cout << "Ho ten: " << hoten << endl;
		cout << "Ngay sinh: " << ngaysinh << endl;
        cout << "Gioi tinh: " << gioitinh << endl;
		cout << "Diem trung binh: " << diemTB << endl;
		cout << "Xep loai dao duc: " << xeploaiDD;
	}
};
int main(){
    hocsinh a;
    a.nhap();
    a.xuat();
}

