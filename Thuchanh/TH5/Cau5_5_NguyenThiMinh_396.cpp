#include <bits/stdc++.h>

using namespace std;

class Sanpham{
    protected:
        char Masp[15], Tensp[30], Ngaysx[15], Mausac[15];
        float Trongluong;
    public:
        void nhap();
        void xuat();
};
void Sanpham::nhap(){
    cout << "Nhap ma sp: "; fflush(stdin); gets(Masp);
    cout << "Nhap ten sp: "; fflush(stdin); gets(Tensp);
    cout << "Nhap ngay sx: "; fflush(stdin); gets(Ngaysx);
    cout << "Nhap mau sac: "; fflush(stdin); gets(Mausac);
    cout << "Nhap trong luong: "; cin >> Trongluong;
}
void Sanpham::xuat(){
    cout << setw(15) << Masp;
    cout << setw(30) << Tensp;
    cout << setw(15) << Ngaysx;
    cout << setw(15) << Mausac;
    cout << setw(15) << Trongluong;
}
class Hangdientu: public Sanpham{
    private:
        float Congsuat;
        int Dongdiensd;
    public:
        void nhap();
        void xuat();
        friend void TLthapnhat(Hangdientu a[], int n);
};
void Hangdientu::nhap(){
    Sanpham::nhap();
    cout << "Nhap cong suat: "; cin >> Congsuat;
    cout << "Dong dien sd: "; cin >> Dongdiensd;
}
void Hangdientu::xuat(){
    Sanpham::xuat();
    cout << setw(15) << Congsuat;
    cout << setw(15) << Dongdiensd << endl;
}
void tieude(){
    cout << setw(15) << "Ma sp";
    cout << setw(30) << "Ten sp";
    cout << setw(15) << "Ngay sx";
    cout << setw(15) << "Mau sac";
    cout << setw(15) << "Trong luong";
    cout << setw(15) << "Cong suat";
    cout << setw(15) << "Dongdiensd" << endl;
}
void TLthapnhat(Hangdientu a[], int n){
    float minn = a[0].Trongluong;
    for(int i = 1; i < n; i++){
        if(a[i].Trongluong < minn){
            minn = a[i].Trongluong;
        }
    }
    for(int i = 0; i < n; i++){
        if(a[i].Trongluong == minn){
            a[i].xuat();
        }
    }
}
int main(){
    Hangdientu *a;
    int n;
    do{
        cout << "Nhap so hang dien tu: "; cin >> n;
    }while(n<=0);
    a = new Hangdientu[n];
    for(int i = 0; i < n; i++){
        cout << "Nhap hang dien tu thu " << i+1 << endl;
        a[i].nhap();
    }
    cout << endl << "Danh sach cac hang dien tu vua nhap:" << endl;
    tieude();
    for(int i = 0; i < n; i++){
        a[i].xuat();
    }
    cout << endl << "Mat hang co trong luong thap nhat: " << endl;
    tieude();
    TLthapnhat(a, n);
}