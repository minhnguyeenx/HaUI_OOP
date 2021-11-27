#include <bits/stdc++.h>

using namespace std;

class Ptbac2{
//ax^2+ bx+ c = 0
private:
    float a, b, c;
    float x1, x2;
public:
    void nhap(){
        cout << "Nhap a: "; cin >> a;
        cout << "Nhap b: "; cin >> b;
        cout << "Nhap c: "; cin >> c;
    }
    float delta(){
        return b*b- 4*a*c;
    }
    void xuat(){
        if(delta() < 0) 
            cout << "PT vo nghiem";
        else if(delta() == 0) 
            cout << "PT co nghiem kep x1 = x2 = " << -b/(2.0*a);
        else {
            x1 = (-b-sqrt(delta()))/(2.0*a);
            x2 = (b-sqrt(delta()))/(2.0*a);
            cout << "PT co 2 nghiem phan biet\n";
            cout << "\tx1 = " << x1 << '\n';
            cout << "\tx2 = " << x2;  
        }
    }
};

int main(){
	Ptbac2 a;
    a.nhap();
    a.xuat();
}

