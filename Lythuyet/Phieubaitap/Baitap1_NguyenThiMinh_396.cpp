#include <bits/stdc++.h>

using namespace std;
class Date{
    private:
        int day, month, year;
    public:
        void nhap();
        void xuat();
};
void Date::nhap(){
    cout << "Nhap ngay: "; cin >> day;
    cout << "Nhap ngay: "; cin >> month;
    cout << "Nhap ngay: "; cin >> year;
}
void Date::xuat(){
    cout << day << "/" << month << "/" << year << endl;
}
class Hang{
    private:
        char Tenhang[30];
        float Dongia;
        int Soluong;
    public:
        float Thanhtien(){
            return Dongia*Soluong;
        }
        void nhap();
        void xuat();
};
void Hang::nhap(){
    cout << "Nhap ten hang: "; fflush(stdin); gets(Tenhang);
    cout << "Nhap don gia: "; cin >> Dongia;
    cout << "Nhap so luong: "; cin >> Soluong;
}
void tieude(){
    cout << setw(30) << left << "Ten hang";
    cout << setw(15) << left << "Don gia";
    cout << setw(15) << "So luong";
    cout << setw(15) << "Thanh tien" << endl;
}
void Hang::xuat(){
    cout << setw(30) << left << Tenhang;
    cout << setw(15) << left << Dongia;
    cout << setw(15) << left << Soluong;
    cout << setw(15) << left << Thanhtien() << endl;
}
class Phieunhaphang{
    private:
        char Maphieu[10], MaNCC[10], TenNCC[30], Diachi[50]; 
        Date NgayLap;
        int n;
        Hang *a;
    public:
        void nhap();
        void xuat();
};
void Phieunhaphang::nhap(){
    cout << "Nhap ma phieu: "; fflush(stdin); gets(Maphieu);
    cout << "Nhap ngay lap: " << endl; NgayLap.nhap();
    cout << "Nhap ma nha cung cap: "; fflush(stdin); gets(MaNCC);
    cout << "Nhap ten nha cung cap: "; fflush(stdin); gets(TenNCC);
    cout << "Nhap dia chi: "; fflush(stdin); gets(Diachi);
    do{
        cout << "Nhap so mat hang: "; cin >> n;
    }while(n<=0);
    a = new Hang[n];
    for(int i = 0; i < n; i++){
        cout << "Nhap mat hang thu " << i+1 << endl;
        a[i].nhap();
    }
}
void Phieunhaphang::xuat(){
    cout << "Ma phieu:  " << Maphieu;
    cout << "\tNgay lap:    "; NgayLap.xuat();
    cout << "Ma NCC:    " << MaNCC;
    cout << "\tTen NCC:     " << TenNCC << endl;
    cout << "Dia chi:   " << Diachi << endl;
    tieude();
    for(int i = 0; i < n; i++){
        a[i].xuat();
    } 
    float sum = 0.0;
    for(int i = 0; i < n; i++){
        sum += a[i].Thanhtien();
    }
    cout << "\t\t\tCong thanh tien: " << sum;
}
int main(){
    Phieunhaphang p1;
    p1.nhap();
    cout << "\t\t\tPHIEU NHAP HANG" << endl;
    p1.xuat();
}