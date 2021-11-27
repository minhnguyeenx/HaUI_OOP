#include <bits/stdc++.h>

using namespace std;
class Date{
    private:
        int day, month, year;
    public:
    friend class PhieukiemkeTS;
};
class Phong{
    private:
        char Tenphong[40], Maphong[10], Truongphong[30];
    public:
        friend class PhieukiemkeTS;
};
class Taisan{
    private:
        char TenTS[30], Tinhtrang[30];
        int Soluong;
    public:
    friend class PhieukiemkeTS;
};
class PhieukiemkeTS{
    private:
        char Maphieu[10], Tennv[40], Chucvu[30];
        Date Ngaykk;
        Phong p1;
        int n;
        Taisan *a;
    public:
        void nhap();
        void xuat();
};
void PhieukiemkeTS::nhap(){
    cout << "Nhap ma phieu: "; fflush(stdin); gets(Maphieu);
    cout << "Nhap ngay kiem ke: " << endl;
    cout << "Nhap ngay: "; cin >> Ngaykk.day;
    cout << "Nhap thang: "; cin >> Ngaykk.month;
    cout << "Nhap nam: "; cin >> Ngaykk.year;
    cout << "Nhap nhan vien kiem ke: "; fflush(stdin); gets(Tennv);
    cout << "Nhap chuc vu: "; fflush(stdin); gets(Chucvu);
    cout << "Nhap phong: " << endl;
    cout << "Nhap phong kiem ke: "; fflush(stdin); gets(p1.Tenphong);
    cout << "Nhap ma phong: "; fflush(stdin); gets(p1.Maphong);
    cout << "Nhap truong phong: "; fflush(stdin); gets(p1.Truongphong);
    do{
        cout << "Nhap so tai san kiem ke: "; cin >> n;
    }while(n <= 0);
    a = new Taisan[n];
    for(int i = 0; i < n; i++){
        cout << "Nhap tai san thu: " << i+1 << endl;
        cout << "Nhap ten tai san: "; fflush(stdin); gets(a[i].TenTS);
        cout << "Nhap ten so luong tai san: "; fflush(stdin); cin >> a[i].Soluong;
        cout << "Nhap ten tinh trang tai san: "; fflush(stdin);gets(a[i].Tinhtrang);
    }
}
void tieude(){
        cout << setw(30) << left << "Ten tai san";
        cout << setw(15) << left << "So luong";
        cout << setw(30) << left << "Tinh trang" << endl;
}
void PhieukiemkeTS::xuat(){
    cout << "Ma phieu: " << Maphieu;
    cout << "\tNgay kiem ke:    " << Ngaykk.day << "/" << Ngaykk.month << "/" << Ngaykk.year << endl;
    cout << "Nhan vien kiem ke: " << Tennv;
    cout << "\tChuc vu:     " << Chucvu << endl;
    cout << "Kiem ke tai phong: " << p1.Tenphong;
    cout << "\tMa phong:  " << p1.Maphong << endl;
    cout << "Truong phong: " << p1.Truongphong << endl;
    tieude();
    for(int i = 0; i < n; i++){
        cout << setw(30) << left << a[i].TenTS;
        cout << setw(15) << left << a[i].Soluong;
        cout << setw(30) << left << a[i].Tinhtrang << endl;
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i].Soluong;
    }
    cout << "So tai san da kiem ke: " << n;
    cout << "\tTong so luong: " << sum;
}
int main(){
    PhieukiemkeTS x;
    x.nhap();
    cout << "\t\t\tPHIEU KIEM KE TAI SAN" << endl;
    x.xuat();
}