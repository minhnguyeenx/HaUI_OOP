#include <bits/stdc++.h>

using namespace std;

class Timminmax{
	private:
		int n;
		float *a;
	public:
		void nhap();
		void xuat();
};
void Timminmax::nhap(){
	do {
		cout << "Nhap so phan tu cua mang: ";
		cin >> n;
	}
	while(n <= 0);
	a = new float[n];
	cout << "Nhap mang co " << n << " phan tu: " << endl;
	for(int i = 0; i < n; i++){
		cout << "\tNhap phan tu thu " << i+ 1 << " : ";
		cin >> a[i];
	}
}
void Timminmax::xuat(){
	float minn = a[0], maxx = a[0];
	for(int i = 1;i < n; i++){
		if(a[i] > maxx) {
			maxx = a[i];
		}
		if(a[i] < minn) {
			minn = a[i];
		}
	}
	cout << "Phan tu lon nhat cua mang la: " << maxx  << endl;
	cout << "Phan tu nho nhat cua mang la: " << minn ;
}
int main(){
	Timminmax m;
	m.nhap();
	m.xuat();
}

