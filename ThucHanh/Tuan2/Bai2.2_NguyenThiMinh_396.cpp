#include <bits/stdc++.h>

using namespace std;

class MangTangDan{
	private:
		int n;
		int *a;
	public:
		void nhap();
		void xuat();
};
void MangTangDan::nhap(){
	do {
		cout << "Nhap so phan tu cua mang: ";
		cin >> n;
	}
	while(n <= 0);
	a = new int[n];
	cout << "Nhap mang co " << n << " phan tu: " << endl;
	for(int i = 0; i < n; i++){
		cout << "\tNhap phan tu thu " << i+ 1 << " : ";
		cin >> a[i];
	}
}
void MangTangDan::xuat(){
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			if(a[i] > a[j]) {
				int tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
		}
	}
	cout << "Mang tang dan: ";
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
}
int main(){
	MangTangDan m;
	m.nhap();
	m.xuat();
}

