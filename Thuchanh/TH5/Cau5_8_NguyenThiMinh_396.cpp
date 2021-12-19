#include <bits/stdc++.h>

using namespace std;

class SANPHAM{
    protected:
        char Tensp[30];
        int Namsx;
       long Giathanh;
    public:
        void nhap();
        void xuat();
};
void SANPHAM::nhap(){
    cout << "Nhap ten sp: "; fflush(stdin); gets(Tensp);
    cout << "Nhap nam sx: "; cin >> Namsx;
    cout << "Nhap gia thanh: "; cin >> Giathanh;
}
void SANPHAM::xuat(){
    cout << setw(30) << Tensp << setw(10) << Namsx << setw(15) << Giathanh;
}
class HOADON : public SANPHAM{
    protected:
        int Soluong;
       long Giaban;
    public:
        void nhap();
        void xuat();
       long Thanhtien(){
            return Soluong*Giaban;
        }
       long Thue(){
            return 0.1*Thanhtien();
        }
       long Lai(){
            return ((Giaban-Giathanh)*Soluong);
        }
        friend void Sapxeptheolai(HOADON a[], int n);
        friend void Tongtien(HOADON a[], int n);
        friend void Thuecaonhat(HOADON a[], int n);
};
void HOADON::nhap(){
    SANPHAM::nhap();
    cout << "Nhap so luong: "; cin >> Soluong;
    cout << "Nhap gia ban: "; cin >> Giaban;
}
void HOADON::xuat(){
    SANPHAM::xuat();
    cout << setw(10) << Soluong << setw(15) << Giaban;
    cout << setw(15) << Thanhtien() << setw(15) << Thue() << setw(15) << Lai() << endl;
}
void tieude(){
    cout << setw(30) << "Tensp" << setw(10) << "Namsx" << setw(15) << "Giathanh";
    cout << setw(10) << "Soluong" << setw(15) << "Giaban";
    cout << setw(15) << "Thanhtien" << setw(15) << "Thue(10%)" << setw(15) << "Lai" << endl;
}
void Sapxeptheolai(HOADON a[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(a[i].Lai() < a[j].Lai()){
                HOADON tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
}
void Tongtien(HOADON a[], int n){
   long sum = 0.0;
    for(int i = 0; i < n; i++){
        sum += a[i].Thanhtien();
    }
    cout << "\t\t\tTong hoa don: " << sum << endl;

}
void Thuecaonhat(HOADON a[], int n){
   long maxx = -1.0;
    for(int i = 0; i < n;i++){
        if(a[i].Thue() > maxx) maxx = a[i].Thue();
    }
    // cout << "\nMAXXC " << maxx << endl;
    tieude();
    for(int i = 0; i < n; i++){
        if(a[i].Thue() == maxx){
            a[i].xuat();
        }
    }
}
int main(){
    HOADON *a;
    int n;
    do{
        cout << "Nhap so san pham: "; cin >> n;
    }while(n<= 0);
    a = new HOADON[n];
    cout << "Nhap ca san pham: " << endl;
    for(int i = 0; i < n; i++){
        cout << "Nhap san pham thu " << i+1 << endl;
        a[i].nhap();
    }
    Sapxeptheolai(a, n);
    cout << "Cac san pham da duoc sap xep theo tien lai: " << endl;
    cout << "\t\t\t\t\tHOA DON" << endl;
    tieude();
    for(int i = 0; i < n; i++){
        a[i].xuat();
    }
    Tongtien(a, n);
    cout << "Thong tin hoa don ban san pham co thue cao nhat: " << endl;
    cout << "\t\t\t\t\tHOA DON" << endl;
    Thuecaonhat(a, n);
}