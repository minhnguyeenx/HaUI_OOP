#include <bits/stdc++.h>

using namespace std;

class DoanhNghiep{
	private:
		char TenDN[30];
		char DiaChiDN[30];
		int SoNV;
		double DoanhThu;
	public:
		void nhap();
		void xuat();
};
void DoanhNghiep::nhap(){
	cout << "Nhap ten doanh nghiep: "; fflush(stdin); gets(TenDN);
	cout << "Nhap dia chi doanh nghiep: "; fflush(stdin); gets(DiaChiDN);
	cout << "Nhap so nhan vien: "; cin >> SoNV;
	cout << "Nhap doanh thu: "; cin >> DoanhThu;
}
void DoanhNghiep::xuat(){
	cout << left << setw(30) << TenDN;
	cout << left << setw(30) << DiaChiDN;
	cout << left << setw(10) << SoNV;
	cout << left << setw(20) << DoanhThu << endl;
}
int main(){
	int n;
	do {
		cout << "Nhap so doanh nghiep: "; 
		cin >> n;
	}
	while(n <= 0);
	DoanhNghiep *dn;
	dn = new DoanhNghiep[n];
	for(int i = 0; i < n; i++){
		cout << "Nhap doanh nghiep thu " << i + 1 <<endl;
		dn[i].nhap();
	}
	cout << "\t\tDANH SACH CAC DOANH NGHIEP" << endl;
	cout << left << setw(30) << "Ten Doanh nghiep";
	cout << left << setw(30) << "Dia chi Doanh Nghiep";
	cout << left << setw(10) << "So NV";
	cout << left << setw(20) << "Doanh thu" << endl;
	for(int i = 0; i < n; i++){
		dn[i].xuat();
	}
}

