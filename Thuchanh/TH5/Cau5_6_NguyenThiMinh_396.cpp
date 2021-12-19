#include <bits/stdc++.h>

using namespace std;

class SINHVIEN{
    protected:
        char Hoten[30], SBD[15] ;
    public:
        void nhap();
        void xuat();
};
void SINHVIEN::nhap(){
    cout << "Nhap ho ten: "; fflush(stdin); gets(Hoten);
    cout << "Nhap so bao danh: "; fflush(stdin); gets(SBD);
}
void SINHVIEN::xuat(){
    cout << setw(15) << SBD << setw(30) << Hoten;
}
class DIEMTHI : public SINHVIEN{
    protected:
        float KqMon1, KqMon2;
    public:
        void nhap();
        void xuat();
};
void DIEMTHI::nhap(){
    SINHVIEN::nhap();
    cout << "Nhap ket quan mon 1: "; cin >> KqMon1;
    cout << "Nhap ket quan mon 2: "; cin >> KqMon2;
}
void DIEMTHI::xuat(){
    SINHVIEN::xuat();
    cout << setw(15) << KqMon1 << setw(15) << KqMon2;
}
class KETQUA : public DIEMTHI{
    public:
        float Tongdiem(){
            return KqMon1+KqMon2;
        }
        void xuat();
};
void KETQUA::xuat(){
    DIEMTHI::xuat();
    cout << setw(15) << Tongdiem() << endl;
}
void tieude(){
    cout << setw(15) << "SBD "<< setw(30) << "Hoten";   
    cout << setw(15) << "KqMon1" << setw(15) << "KqMon2"; 
    cout << setw(15) << "Tongdiem" << endl;
}
int main(){
    KETQUA *a;
    int n;
    do{
        cout << "Nhap so sinh vien: ";cin >> n;
    }while(n<= 0 || n > 100);
    a = new KETQUA[n];
    cout << "Nhap casc sinh vien " << endl;
    for(int i = 0; i < n; i++){
        cout << "Nhap sinh vien thu " << i+1 << endl;
        a[i].nhap();
    }
    cout << endl << "\t\t\t\t\tKET QUA " << endl;
    tieude();
    for(int i = 0; i < n; i++){
        a[i].xuat();
    }
}