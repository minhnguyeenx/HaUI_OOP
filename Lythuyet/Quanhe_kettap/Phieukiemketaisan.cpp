#include <bits/stdc++.h>

using namespace std;
class nhanvien{
    private:
        char nhanvienKK[30];
        char chucvu[30];
    public:
        void nhap();
        void xuat();
};
void nhanvien::nhap(){
    cout << "Nhap nhan vien kiem ke: "; fflush(stdin);
    gets(nhanvienKK);
    cout << "Nhap chuc vu: "; fflush(stdin);
    gets(chucvu);
}
void nhanvien::xuat(){
    cout << "Nhan vien kiem ke: " << nhanvienKK <<'\t';
    cout << "Chuc vu: " << chucvu << endl;
}
class phong{
    private:
        char maphong[30];
        char tenphong[30];
    public:
        void nhap();
        void xuat();
};
void phong::nhap(){
    cout << "Nhap ma phong: "; fflush(stdin);
    gets(maphong);
    cout << "Nhap tenphong: "; fflush(stdin);
    gets(tenphong);
}
void phong::xuat(){
    cout << "Ma phong: " << maphong <<"\t";
    cout << "Ten phong: " << tenphong << endl;
}
class Taisan{
    private:
        char tentaisan[50];
        int SL;
        char tinhtrang[30];
    public:
        void nhap();
        void xuat();
        long getSL(){
            return SL;
        }
};
void Taisan::nhap(){
    cout << "Nhap ten tai san: "; fflush(stdin);
    gets(tentaisan);
    cout << "Nhap so luong: "; cin >> SL;
    cout << "Nhap tinh trang: "; fflush(stdin);
    gets(tinhtrang);
}
void Taisan::xuat(){
    cout << left;
    cout << setw(20) << tentaisan;
    cout << setw(15)  << SL;
    cout << setw(20)  << tinhtrang << endl;
}
class phieu{
    private:
        char maphieu[20];
        char ngaysx[10];
        int n;
        nhanvien a;
        phong b;
        Taisan *c;
    public:
        void nhap();
        void xuat();
};

void phieu::nhap(){
    cout << "Nhap ma phieu: "; fflush(stdin);
    gets(maphieu);
    cout << "Nhap ngay san xuat: "; fflush(stdin);
    gets(ngaysx);
    a.nhap();
    b.nhap();
    cout << "So luong tai san: "; cin >> n;
    for(int i = 0; i < n; i++){
        cout << "Nhap tai san thu " << i+ 1 << endl;
        c[i].nhap();
    }
}
void phieu::xuat(){
    cout << "Ma phieu: " << maphieu << "\t";
    cout << "Ngay san xuat: " << ngaysx << endl;
    a.xuat();
    b.xuat();
    cout << endl;
    cout << left;
    cout << setw(20) << "Ten tai san";
    cout << setw(15)  << "So luong: ";
    cout << setw(20)  << "Tinh trang" << endl;
    for(int i = 0; i < n; i++){
        c[i].xuat();
    }
    long sum = 0;
    for(int i = 0; i < n; i++){
        sum += c[i].getSL();
    }
    cout << "\n\tTong so luong: " << sum;
}

int main(){
    phieu p1;
    p1.nhap();
    cout << "\n\tPHIEU KIEM KE TAI SAN\n\n";
    p1.xuat();
}