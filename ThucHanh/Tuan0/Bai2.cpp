#include <bits/stdc++.h>

using namespace std;

class hinhtron{
private:
    double r;
public:
    void nhap(){
        cout << "Nhap ban kinh hinh tron: ";
        cin >> r;
    }
    double chuvi(){
        return 2*3.14*r;
    }
    double dientich(){
        return 3.14*r*r;
    }
    void xuat(){
        cout << "Chu vi hinh tron la: " << chuvi() << endl;
        cout << "Dien tich hinh tron la: " << dientich();
    }
};
int main(){
	hinhtron a;
    a.nhap();
    a.xuat();
}

