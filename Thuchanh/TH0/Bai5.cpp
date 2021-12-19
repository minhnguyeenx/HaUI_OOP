#include <bits/stdc++.h>

using namespace std;

class Tamgiac{
//tam giac abc
private:
    double a, b, c;
public:
    void nhap(){
        cout << "Nhap canh a: "; cin >> a;
        cout << "Nhap canh b: "; cin >> b;
        cout << "Nhap canh c: "; cin >> c;
    }

    double chuvi(){
        return a+ b+ c;
    }
    double nuachuvi(){
        return chuvi()/2.0;
    }
    double dientich(){
        return sqrt(nuachuvi()*(nuachuvi() - a)*(nuachuvi() - b)*(nuachuvi() - c));
    }
    void xuat(){
        if(a+ b <= c || a+ c <= b || b+ c <= a) 
            cout << "a, b, c khong la canh cua tam giac";
        else {
            cout << "Chu vi cua tam giac la: " << chuvi() << '\n';
            cout << "Dien tich tam giac la: " << dientich();
        }
    }
};

int main(){
	Tamgiac a;
    a.nhap();
    a.xuat();
}

