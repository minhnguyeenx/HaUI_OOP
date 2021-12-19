#include <bits/stdc++.h>

using namespace std;
class Sinhvien{
	private:
		char hoten[30];
		int tuoi;	
	public:
		void nhap();
		void xuat();
};
void Sinhvien::nhap(){
	cout << "Nhap ten: "; fflush(stdin); gets(hoten);
	cout << "Nhap tuoi: "; cin >> tuoi;
}
void Sinhvien::xuat(){
	cout << "Ten: " << hoten << endl;
	cout << "Tuoi: " << tuoi;
}
int main(){
	Sinhvien sv, *p;
	p = &sv;
	p->nhap();
	p->xuat();
}
