#include <bits/stdc++.h>

using namespace std;

class Bacnhat1an{
//ax+ b = 0
private:
    double a, b;
public:
    void nhap(){
        cout << "Nhap a: "; cin >> a;
        cout << "Nhap b: "; cin >> b;
    }
    void xuat(){
        if(a == 0 && b != 0) cout << "PT vo nghiem";
        else if(b == 0) cout << "PT vo so nghiem";
        else cout << "Phuong trinh cos 1 nghiem x = " << -b/a;
    }
};

int main(){
    Bacnhat1an a;
    a.nhap();
    a.xuat();
}

