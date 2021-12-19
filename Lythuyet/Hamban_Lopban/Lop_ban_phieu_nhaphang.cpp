#include <bits/stdc++.h>
/*
HangHoa
int maHang;
char tenHang[50];
long tienTra;
*/
/*
PhieuMuaHang
int maPhieu;
char tenKhach[30];
int n;
HangHoa *a;
void nhap();
void xuat();
long tongTienHang();
*/
//Yeu cau nhap thong tin phieu mua hang, hien thi
//thong tin phieu ra man hinh
using namespace std;
class Hanghoa{
	private:
		int mahang;
		char tenhang[30];
		long tientra;
	public:
		friend class Phieumuahang;
};
class Phieumuahang{
	private:
		int maphieu;
		char tenkhach[30];
		long n;
		Hanghoa *a;
	public:
		void nhap();
		void xuat();
};
void Phieumuahang::nhap(){
	cout << "Nhap ma phieu: "; cin >> maphieu;
	cout << "Nhap ten khach: "; fflush(stdin); gets(tenkhach);
	do {
		cout << "Nhap so luong hang hoa: "; cin >>  n;
	}
	while(n <= 0);
	
	a = new Hanghoa[n]; // hay qua la hay
	
	for(int i = 0; i < n; i++){
		cout << "Nhap hang hoa thu " << i+ 1 << endl;
		cout << "Nhap ma hang: "; cin >> a[i].mahang;
		cout << "Nhap ten hang "; fflush(stdin); gets(a[i].tenhang);
		cout << "Nhap tien tra: "; cin >> a[i].tientra;
	}
}
void Phieumuahang::xuat(){
	cout << "Ma phieu: " << maphieu << endl;
	cout << "Ten khach: " << tenkhach << endl;
	cout << "So luong hang hoa: " << n << endl;
	cout << "Danh sach hang hoa\n";
	cout << left << setw(10) << "Ma hang" << setw(20) << "Ten hang" << setw(15) << "Tientra" << endl;
	for(int i = 0; i < n; i++){
		cout << left << setw(10) << a[i].mahang;
		cout << left << setw(20) << a[i].tenhang;
		cout << left << setw(15) << a[i].tientra << endl;
	}
	long sum = 0;
	for(int i = 0; i < n; i++){
		sum += a[i].tientra;
	}
	cout << "\t\tTong tien hang: " << sum;
}
int main(){
	Phieumuahang h;
	h.nhap();
	cout << endl << "\t\t\tTHONG TIN CUA PHIEU" << endl;
	h.xuat();
}
