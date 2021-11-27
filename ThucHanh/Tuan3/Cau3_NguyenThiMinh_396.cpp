#include <bits/stdc++.h>

using namespace std;
class HANG{
    private:
        char Mahang[15], Tenhang[30];
        long Dongia;        
    public:
        void nhap();
        void xuat();
};
void HANG::nhap(){
    cout << "Nhap ma hang: "; fflush(stdin); gets(Mahang);    
    cout << "Nhap ten hang: "; fflush(stdin); gets(Tenhang); 
    cout << "Nhap don gia: "; cin >> Dongia;    
}
void HANG::xuat(){
    cout << setw(15) << left << Mahang;
    cout << setw(30) << left << Tenhang;
    cout << setw(15) << left << Dongia << endl;
}
class PHIEU{
    private:
        char Maphieu[15];
        HANG *a;
        int n;
    public:
        void nhap();
        void xuat();
};
void PHIEU::nhap(){
    cout << "Nhap ma phieu: "; fflush(stdin); gets(Maphieu);
    do{
        cout << "Nhap so mat hang: "; cin >> n;
    }while(n <= 0);
    a = new HANG[n];
    cout << "Nhap ca mat hang: " << endl;
    for(int i = 0; i < n; i++){
        cout << "Nhap mat hang thu "<< i+1 << endl;
        a[i].nhap();
    }
}
void tieude(){
    cout << setw(15) << left << "Ma hang";
    cout << setw(30) << left << "Ten hang";
    cout << setw(15) << left << "Don gia" << endl;
}
void PHIEU::xuat(){
    cout << "Ma phieu: " << Maphieu << endl;
    cout << "Danh sach cac mat hang: " << endl;
    tieude();
    for(int i = 0; i < n; i++){
        a[i].xuat();
    }
}
int main(){
    PHIEU p1;
    p1.nhap();
    cout << "--------PHIEU MAT HANG---------" << endl;
    p1.xuat();
}