#include <bits/stdc++.h>

using namespace std;

class Hinhthang{
private:
    double daylon, daynho, chieucao;
public:
    void nhap(){
        cout << "Nhap day lon: "; cin >> daylon;
        cout << "Nhap day nho: "; cin >> daynho;
        cout << "Nhap chieu cao: "; cin >> chieucao;
    }
    double dientich(){
        return (daylon + daynho)/2.0 * chieucao;
    }
    void xuat(){
        cout << "Dien tich hinh thang: " << dientich();
    }
};

int main(){
	Hinhthang a;
    a.nhap();
    a.xuat();
}

