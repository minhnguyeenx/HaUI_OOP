#include <bits/stdc++.h>

using namespace std;
class NSX{
    private:
            char Mansx[15], Tennsx[20], Dcnsx[30];
    public:
        void nhap();
        void xuat();
};
void NSX::nhap(){
    cout << "Nhap ma nha sx: "; fflush(stdin); gets(Mansx);
    cout << "Nhap ten nha sx: "; fflush(stdin); gets(Tennsx);
    cout << "Nhap dia chi nha sx: "; fflush(stdin); gets(Dcnsx);
}
void NSX::xuat(){
    cout << "Ma nha sx: " << Mansx << endl;
    cout << "Ten nha sx: " << Tennsx << endl;
    cout << "Dia chi nha sx: " << Dcnsx; 
}
class HANG{
    private:
        char Mahang[15], Tenhang[30];
        NSX x;
    public:
        void nhap();
        void xuat();
};
void HANG::nhap(){
    cout << "Nhap ma hang: "; fflush(stdin); gets(Mahang);    
    cout << "Nhap ten hang: "; fflush(stdin); gets(Tenhang);  
    cout << "Nhap nha san xuat: " << endl; x.nhap();  
}
void HANG::xuat(){
    cout << "Ma hang: " << Mahang << endl;
    cout << "Ten hang: " << Tenhang << endl;
    cout << "Nha san xuat: " << endl; x.xuat();
}
int main(){
    HANG a;
    a.nhap();
    cout << "-------THONG TIN HANG VUA NHAP------" << endl;
    a.xuat();
}