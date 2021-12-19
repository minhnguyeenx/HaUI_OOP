#include <bits/stdc++.h>

using namespace std;
class Phieu;
class Date{
    private:
        int d, m, y;
    public:
        void nhap();
        void xuat();
        friend class Phieu;
};
void Date::nhap(){
    cout << "Nhap ngay:"; cin >> d;
    cout << "Nhap thang:"; cin >> m;
    cout << "Nhap nam:"; cin >> y;
}
void Date::xuat(){
    cout << d << "/" << m << "/" << y << endl;
}
class Sanpham{
    private:
        char Masp[10], Tensp[30];
        long Soluong, Dongia;
    public:
        void nhap();
        void xuat();
        long Thanhtien(){
            return Soluong*Dongia;
        }
        friend class Phieu;
        friend void SLnhohon80(Phieu p);
};
void Sanpham::nhap(){
    cout << "Nhap ma san pham: "; fflush(stdin); gets(Masp);
    cout << "Nhap ma ten sp: "; fflush(stdin); gets(Tensp);
    cout << "Nhap so luong: "; cin >> Soluong;
    cout << "Nhap don gia: "; cin >> Dongia;
}
void Sanpham::xuat(){
    cout << setw(10) << left << Masp;
    cout << setw(10) << left << Tensp;
    cout << setw(15) << left << Soluong;
    cout << setw(15) << left << Dongia;
    cout << setw(15) << left << Thanhtien() << endl;
}
class Phieu{
    private:
        char Maphieu[10], Mancc[10], Tenncc[30], Diachi[30], Sdt[15];
        Date Ngaylap;
        Sanpham *a;
        int n;
    public:
        void nhap();
        void xuat();
        void Sapxeptangdan();
        friend void SLnhohon80(Phieu p);
        // friend void Sapxeptangdan(Phieu p);
};
void Phieu::nhap(){
    cout << "Nhap ma phieu: "; fflush(stdin); gets(Maphieu);
    cout << "Nhap ngay lap: " << endl; Ngaylap.nhap();
    cout << "Nhap ma nha cc: "; fflush(stdin); gets(Mancc);
    cout << "Nhap ten ncc: "; fflush(stdin); gets(Tenncc);
    cout << "Nhap dia chi: "; fflush(stdin); gets(Diachi);
    cout << "Nhap so dien: "; fflush(stdin); gets(Sdt);
    cout << "Nhap san pham: " << endl;
    do{
        cout << "Nhap so san pham: ";cin >> n;
    }while(n<=0);
    a = new Sanpham[n];
    for(int i = 0; i < n; i++){
        cout << "Nhap san pham thu: " << i+1 << endl;
        a[i].nhap();
    }
}
void tieude(){
    cout << setw(10) << left << "Ma sp";
    cout << setw(10) << left << "Ten sp";
    cout << setw(15) << left << "So luong";
    cout << setw(15) << left << "Don gia";
    cout << setw(15) << left <<  "Thanh tien" << endl;
}
void Phieu::xuat(){
    cout << "Ma phieu: " << Maphieu << "\t\t" << "Ngay lap: ";Ngaylap.xuat();
    cout << "Ma nha cung cap: " << Mancc << "\t\t" << "Ten nha cung cap: " << Tenncc << endl;
    cout << "Dia chi: " << Diachi << "\t\t" << "So dien thoai: " << Sdt <<endl;
    tieude();
    for(int i = 0; i < n; i++){
        a[i].xuat();
    }
}
void SLnhohon80(Phieu p){
    int dem = 0;
    for(int i = 0; i < p.n; i++){
        if(p.a[i].Soluong < 80) dem++;
    }
    cout << dem;
}
void Phieu::Sapxeptangdan(){
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(a[i].Dongia > a[j].Dongia){
                Sanpham tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
}
int main(){
    Phieu p;
    p.nhap();
    cout << "Phieu vua nhap:" << endl;
    cout << "Dai hoc Victory: " << endl;
    cout << "\t\t\t\t PHIEU NHAP VAN PHONG PHAM" << endl;
    p.xuat();
    cout << "Hieu truong\t\tPhong tai chinh\t\tNguoilap" << endl;
    cout << endl << "So san pham co so luong nho hon 80: ";SLnhohon80(p);
    cout << endl;
    p.Sapxeptangdan();
    cout << "Phieu vua sap xep:" << endl;
    cout << "Dai hoc Victory: " << endl;
    cout << "\t\t\t\t PHIEU NHAP VAN PHONG PHAM" << endl;
    p.xuat();
    cout << "Hieu truong\t\tPhong tai chinh\t\tNguoilap" << endl;

}