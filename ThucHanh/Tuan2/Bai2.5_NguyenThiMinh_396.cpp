#include <bits/stdc++.h>

using namespace std;

class Oto{
	private:
		char MaOto[10];
		double GiaMoi;
		float NamSD;
		float KhauHao;
	public:
		void nhap();
		void xuat();
};
void Oto::nhap(){
	cout << "Nhap ma Oto: "; fflush(stdin); gets(MaOto);
	cout << "Nhap gia mua moi: "; cin >> GiaMoi;
	cout << "Nhap nam su dung: "; cin >> NamSD;
	cout << "Nhap ty le khau hao/nam : "; cin >> KhauHao;
}
void Oto::xuat(){
	cout << left << setw(10) << MaOto;
	cout << left << setw(15) << GiaMoi;
	cout << left << setw(10) << NamSD;
	cout << left << setw(15) << KhauHao;
	double GiaHienTai = GiaMoi;
	for(int i = 0; i < NamSD; i++) {
		GiaHienTai -= GiaHienTai*KhauHao;
	}
	cout << left << setw(15) << GiaHienTai << endl;
	
}
int main(){
	int n;
	do {
		cout << "Nhap so xe oto: ";
		cin >> n;
	}
	while(n <= 0);
	Oto *m;
	m = new Oto[n];
	for(int i = 0; i < n; i++){
		cout << "Nhap oto thu " << i + 1 <<endl;
		m[i].nhap();
	}
	cout << "\t\tDANH SACH CAC XE OTO" << endl;
	cout << left << setw(10) << "Ma oto";
	cout << left << setw(15) << "Gia moi";
	cout << left << setw(10) << "Nam SD";
	cout << left << setw(15) << "Ty le KH/nam";
	cout << left << setw(15) << "Gia hien tai" << endl;
	for(int i = 0; i < n; i++){
		m[i].xuat();
	}
}

