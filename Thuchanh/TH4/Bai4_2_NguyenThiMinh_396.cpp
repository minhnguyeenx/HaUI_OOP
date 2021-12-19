#include <bits/stdc++.h>

using namespace std;
class NSX{
    private:
        char Mansx[10], Tennsx[30], DCNSX[30];
    public:
        friend class Hang;
};
class Hang{
    private:
        char Mahang[10], Tenhang[30];
        double Dongia, Trongluong;
        NSX x;
    public:
        void nhap();
        void xuat();
};
void Hang::nhap(){
    cout << "Nhap ma hang: "; fflush(stdin); gets(Mahang);
    cout << "Nhap ten hang: "; fflush(stdin); gets(Tenhang);
    cout << "Nhap don gia: "; cin >> Dongia;
    cout << "Nhap trong luong: "; cin >> Trongluong;
    cout << "Nhap NSX: " << endl;
    cout << "Nhap ma nha san xuat: "; fflush(stdin); gets(x.Mansx);
    cout << "Nhap ten nha san xuat: "; fflush(stdin); gets(x.Tennsx);
    cout << "Nhap dia chi nha san xuat: "; fflush(stdin); gets(x.DCNSX);
}
void Hang::xuat(){
     cout << "Ma hang: " << Mahang << endl;
    cout << "Ten hang: " << Tenhang << endl;
    cout << "Don gia: " << Dongia << endl;
    cout << "Trong luong: " << Trongluong << endl;
    cout << "Thong tin NSX: " << endl;
    cout << "Ma nha san xuat: " << x.Mansx << endl;
    cout << "Ten nha san xuat: " << x.Tennsx << endl;
    cout << "Dia chi nha san xuat: " << x.DCNSX ;
}
int main(){
    Hang h1;
    h1.nhap();
    cout << endl << "THONG TIN HANG" << endl;
    h1.xuat();
}