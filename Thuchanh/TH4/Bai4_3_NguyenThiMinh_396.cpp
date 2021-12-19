#include <bits/stdc++.h>

using namespace std;
class HANG;
class DATE{
    private: 
        int D, M, Y;
    public:
        friend class HANG;
        friend void in_2017(HANG *a, int n);
};
class HANG{
    private:
        char Mahang[10], Tenhang[30];
        DATE Ngaysx;
    public:
        void nhap();
        void xuat();
        friend void in_2017(HANG *a, int n);
};
void HANG::nhap(){
    cout << "Nhap ma hang: "; fflush(stdin);gets(Mahang);
    cout << "Nhap ten hang: "; fflush(stdin); gets(Tenhang);
    cout << "Nhap ngay san xuat: " << endl;
    cout << "Nhap ngay: "; cin >> Ngaysx.D;
    cout << "Nhap thang: "; cin >> Ngaysx.M;
    cout << "Nhap nam: "; cin >> Ngaysx.Y;
}
void HANG::xuat(){
    cout << setw(10) << Mahang;
    cout << setw(30) << Tenhang;
    cout << setw(7) << Ngaysx.D << "/" << setw(2) << Ngaysx.M << "/" << setw(4) << Ngaysx.Y << endl;
}
void tieude(){
    cout << setw(10) << "Ma hang";
    cout << setw(30) << "Ten Hang";
    cout << setw(15) << "Ngay sx" << endl;
}
void in_2017(HANG *a, int n){
    for(int i = 0; i < n; i++){
        if(a[i].Ngaysx.Y == 2017){
            a[i].xuat();
        }
    }
}
int main(){
    HANG *a;
    int n;
    do{
        cout << "Nhap so mat hang: "; 
        cin >> n;
    }while(n <= 0);
    a = new HANG[n];
    for(int i = 0; i < n; i++){
        cout << "Nhap mat hang thu " << i +1 << endl;
        a[i].nhap();
    }
    cout << "Danh sach cac mat hang da nhap:" << endl;
    tieude();
    for(int i = 0; i < n; i++){
        a[i].xuat();
    }
    cout << "Danh sach cac mat hang da sx nam 2017:" << endl;
    tieude();
    in_2017(a, n); 
}