#include <bits/stdc++.h>

using namespace std;

class QUANLY{
    private:
        char Maql[10], Hoten[20];
    public:
        void nhap();
        void xuat();
};
void QUANLY::nhap(){
    cout << "Nhap ma quan ly: ";fflush(stdin); gets(Maql);
    cout << "Nhap ho ten: "; fflush(stdin); gets(Hoten);
}
void QUANLY::xuat(){
    cout << "Ma quan ly: " << Maql << endl;
    cout << "Ho ten: " << Hoten << endl;
}

class MAY{
    private:
        char Mamay[15], Kieumay[20], Tinhtrang[15];
    public:
        void nhap();
        void xuat();
};
void MAY::nhap(){
    cout <<"Nhap ma may: "; fflush(stdin); gets(Mamay);
    cout << "Nhap kieu may: ";fflush(stdin); gets(Kieumay);
    cout << "Nhap tinh trang: "; fflush(stdin); gets(Tinhtrang);    
}
void MAY::xuat(){
    cout << setw(15) << Mamay;
    cout << setw(20) << Kieumay;
    cout << setw(15) << Tinhtrang << endl;
}

class PHONGMAY{
    private:
        char Maphong[15], Tenphong[15];
        float Dientich;
        int n;
        QUANLY x;
        MAY *y;
    public:
        void nhap();
        void xuat();
};
void PHONGMAY::nhap(){
    cout << "Nhap ma phong: "; fflush(stdin); gets(Maphong);
    cout << "Nhap ten phong: ";fflush(stdin); gets(Tenphong);
    cout << "Nhap dien tich: "; cin >> Dientich;
    cout << "Nhap quan ly" << endl; x.nhap();
    do {
        cout << "Nhap so may: "; cin >> n;
    }while(n <= 0);
    y = new MAY[n];
    cout << "Nhap thong tin may: " << endl;
    for(int i = 0; i < n; i++){
        cout << "Nhap may thu " << i+ 1 << endl;
        y[i].nhap();
    }
}
void tieude(){
    cout << setw(15) << "Ma may";
    cout << setw(20) << "Kieu may";
    cout << setw(15) << "Tinh trang" << endl;
}
void PHONGMAY::xuat(){
    cout << "Ma phong: " << Maphong << endl;
    cout << "Ten phong: " << Tenphong << endl;
    cout << "Dien tich: " << Dientich << endl;
    x.xuat();
    cout << "Thong tin cac may: " << endl;
    tieude();
    for(int i = 0; i < n; i++){
        y[i].xuat();
    }
}
int main(){
    PHONGMAY pm1;
    pm1.nhap();
    cout << "----THONG TIN PHONG MAY------" << endl;
    pm1.xuat();
}
