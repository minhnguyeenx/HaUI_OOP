#include <bits/stdc++.h>

using namespace std;

class PTB2{
	private:
		float a, b, c;
	public:
		void nhap();
		void xuat();
};
void PTB2::nhap(){
	cout << "Nhap a: "; cin >> a;
	cout << "Nhap b: "; cin >> b;
	cout << "Nhap c: "; cin >> c;
}
void PTB2::xuat(){
	if(a == 0){
		if(b == 0){
			if(c == 0) cout << "PT vo so nghiem";
			else cout << "PT vo nghiem";
		}
		else cout << "Phuong trinh co 1 nghiem x = " << -c/b;
	}
	else {
		float x1, x2;
		float delta = b*b - 4*a*c;
		if(delta < 0) 
            cout << "PT vo nghiem";
        else if(delta == 0) 
            cout << "PT co nghiem kep x1 = x2 = " << -b/(2.0*a);
        else {
            x1 = (-b-sqrt(delta))/(2.0*a);
            x2 = (b-sqrt(delta))/(2.0*a);
            cout << "PT co 2 nghiem phan biet" << endl;
            cout << "\tx1 = " << x1 << endl;
            cout << "\tx2 = " << x2;  
        }
	}
}

int main(){
	PTB2 pt;
	pt.nhap();
	pt.xuat();
}

