#include <bits/stdc++.h>

using namespace std;
class HangHoa{
    private:
        int mahang;
        char tenhang[50];
        long dongia;
        int SL;
    public:
        void nhap();
        void xuat();
        long thanhtien(){
            return dongia*SL;
        }
};

void HangHoa::nhap(){
    cout << "Nhap ma hang: "; cin >> mahang;
    cout << "Nhap ten hang: "; fflush(stdin);
    gets(tenhang);
    cout << "Nhap don gia: "; cin >> dongia;
    cout << "Nhap so luong: "; cin >> SL;
}
void HangHoa::xuat(){
    cout << "Ma hang: " << mahang << endl;
    cout << "Ten hang: " << tenhang << endl;
    cout << "Don gia: " << dongia << endl;
    cout << "So luong " << SL << endl;
    cout << "Thanh tien: " << thanhtien() << endl;
}
class PhieuMuaHang{
    private:
        int maphieu;
        char tenkhach[30];
        char dienthoai[11];
        int n;
        HangHoa *a;
    public:
        void nhap();
        void xuat();
};

void PhieuMuaHang::nhap(){
    cout << "Nhap ma phieu: "; cin >> maphieu;
    cout << "Nhap ten khach: "; fflush(stdin);
    gets(tenkhach);
    cout << "Nhap dien thoai: "; fflush(stdin);
    gets(dienthoai);
    cout << "Nhap so luong hang hoa: "; cin >> n;
    for(int i = 0; i < n; i++){
        cout << "Nhap hang hoa thu: " << i+1 << endl;
        a[i].nhap();
    }
}
void PhieuMuaHang::xuat(){
    cout << "Ma phieu: " << maphieu << endl;
    cout << "Ten khach hang: " << tenkhach << endl;
    cout << "Dien thoai: " << dienthoai << endl;
    cout << "So luong hang hoa: " << n << endl << endl;
    for(int i = 0; i < n; i++){
        cout << "Xuat hang hoa thu: " << i+1 << endl;
        a[i].xuat();
    }
}

int main(){
    PhieuMuaHang p1;
    p1.nhap();
    cout << "\nPHIEU MUA HANG\n\n";
    p1.xuat();
}

