#include <bits/stdc++.h>

using namespace std;
class NSX{
	private:
		int mansx;
		char tennsx[30], dcnsx[30];	
	public:
		friend class Hang;
};
class Hang{
	private:
		int mahang;
		char tenhang[30];
		long dongia, trongluong;
		NSX x;
	public:
		void nhap();
		void xuat();
};
void Hang::nhap(){
	cout << "Nhap ma hang: "; cin >> mahang;
	cout << "Nhap ten hang: "; fflush(stdin); gets(tenhang);
	cout << "Nhap don gia: "; cin >> dongia;
	cout << "Nhap trong luong: "; cin >> trongluong;
	cout << "Nhap ma msx: "; cin >> x.mansx;
	cout << "Nhap ten nsx: "; fflush(stdin); gets(x.tennsx);
	cout << "Nhap dc nsx: "; fflush(stdin); gets(x.dcnsx);
}
void Hang::xuat(){
	cout << "Ma hang: " << mahang << endl;
	cout << "ten hang: " << tenhang << endl;
	cout << "don gia: " << dongia << endl;
	cout << "trong luong: " << trongluong << endl;
	cout << "Ma nsx: " << x.mansx << endl;
	cout << "Ten nsx: " << x.tennsx << endl;
	cout << "Dc nsx: " << x.dcnsx << endl;
}
int main(){
	Hang h;
	h.nhap();
	h.xuat();
	
}
