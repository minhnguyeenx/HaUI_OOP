#include <bits/stdc++.h>

using namespace std;
class Doanhnghiep;
class Date{
    private:
        int day, month, year;
    public:
        void nhap();
        void xuat();
        friend void dn_2015(Doanhnghiep a[], int n);
        friend void sua_ma(Doanhnghiep a[], int n, int ma);
};
void Date::nhap(){
	cout << "Nhap ngay: "; cin >> day;
	cout << "Nhap thang: "; cin >> month;
	cout << "Nhap nam: "; cin >> year;
}
void Date::xuat(){
	cout << setw(7) << day << "/" << setw(2) <<  month << "/" << setw(4) << year ;
}
class Diachi{
    private:
        char dienThoai[12], phuong[30], quan[30], thanhpho[30];
    public:
        friend class Doanhnghiep;
        friend void in_hanoi(Doanhnghiep a[], int n);
        friend void sua_ma(Doanhnghiep a[], int n, int ma);        
};
class Doanhnghiep{
    private:
        int maDn;
        char tenDn[60];
        Date ngayTl;
        Diachi diaChi;
        char giamDoc[30];
        long doanhThu;
    public:
        void nhap();
        void xuat();
        friend void dn_2015(Doanhnghiep a[], int n);
        friend void in_hanoi(Doanhnghiep a[], int n);
        friend void sua_ma(Doanhnghiep a[], int n, int ma);   
};
void Doanhnghiep::nhap(){
    cout << "Nhap ma doanh nghiep: "; cin >> maDn;
    cout << "Nhap ten doanh nghiep: "; fflush(stdin); gets(tenDn);
    cout << "Nhap ngay thanh lap: " << endl; ngayTl.nhap();
    cout << "Nhap dia chi: " << endl;
    cout << "Nhap dien thoai: "; fflush(stdin); gets(diaChi.dienThoai);
    cout << "Nhap phuong: "; fflush(stdin); gets(diaChi.phuong);
    cout << "Nhap quan: "; fflush(stdin); gets(diaChi.quan);
    cout << "Nhap thanh pho: "; fflush(stdin); gets(diaChi.thanhpho);
    cout << "Nhap ten giam doc: "; fflush(stdin); gets(giamDoc);
    cout << "Nhap doanh thu: "; cin >> doanhThu;
}
void tieude(){
    cout <<setw(10) << "Ma DN";
    cout << setw(30) << "Ten DN";
    cout << setw(15) << "Ngay TL";
    cout << setw(12) << "Dien thoai";
    cout << setw(62) << "Dia chi";
    cout << setw(30) << "Giam doc";
    cout << setw(15) << "Doanh thu" << endl;
}
void Doanhnghiep::xuat(){
    cout << setw(10) << maDn;
    cout << setw(30) << tenDn;
    ngayTl.xuat();
    cout << setw(12) << diaChi.dienThoai;
    cout << setw(20) << diaChi.phuong << "/" << setw(20) << diaChi.quan  << "/" << setw(20) << diaChi.thanhpho ;
    cout << setw(30) << giamDoc;
    cout << setw(15) << doanhThu << endl;
}
void dn_2015(Doanhnghiep a[], int n){
    for(int i = 0; i < n; i++){
        if(a[i].ngayTl.year == 2015){
            a[i].xuat();
        }
    }
}
void in_hanoi(Doanhnghiep a[], int n){
    for(int i = 0; i < n; i++){
        if(strcmp(a[i].diaChi.thanhpho, "Ha Noi") == 0){
            a[i].xuat();
        }
    }
}
void sua_ma(Doanhnghiep a[], int n, int ma){
    for(int i = 0; i < n; i++){
        if(a[i].maDn == ma){
            a[i].nhap();
        }
    }    
}
int main(){
    Doanhnghiep *a;
    int n;
    do{
        cout << "Nhap so doanh nghiep: ";cin >> n;
    }
    while(n <= 0);
    a = new Doanhnghiep[n];
    for(int i = 0; i < n; i++){
        cout << "Nhap doanh nghiep thu " << i +1 << endl;
        a[i].nhap();
    }
    cout << endl << "Doanh nghiep vua nhap: " << endl;
    tieude();
    for(int i = 0; i < n; i++){
        a[i].xuat();
    }
    cout << "Doanh nghiep o Ha Noi" << endl;
    tieude();
    in_hanoi(a, n);
    cout << "Doanh nghiep thanh lap nam 2015" << endl ;
    tieude();
    dn_2015(a, n);
    int ma;
    cout << "Nhap ma doanh nghiep can sua: "; cin >> ma;
    sua_ma(a, n, ma);
    cout << "Danh sach doanh nghiep da sua: " << endl;
    tieude();
    for(int i = 0; i < n; i++){
        a[i].xuat();
    }
}