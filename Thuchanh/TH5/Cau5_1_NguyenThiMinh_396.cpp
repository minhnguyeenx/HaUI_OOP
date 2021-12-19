#include <bits/stdc++.h>

using namespace std;
class PERSON{
    protected:
        char Hoten[30], Ngaysinh[15], Quequan[40];
};
class KISU : public PERSON{
    private:
        char Nganh[30];
        int NamTN;
    public:
        void NHAP();
        void XUAT();
        friend void Totnghiepgannhat(KISU a[], int n);
};
void KISU::NHAP(){
    cout << "Nhap ho ten: "; fflush(stdin); gets(Hoten);
    cout << "Nhap ngay sinh: "; fflush(stdin); gets(Ngaysinh);
    cout << "Nhap que quan "; fflush(stdin); gets(Quequan);
    cout << "Nhap nganh: "; fflush(stdin); gets(Nganh);
    cout << "Nhap nam tot nghiep: "; cin >> NamTN;
}
void KISU::XUAT(){
    cout << setw(30) << Hoten;
    cout << setw(15) << Ngaysinh;
    cout << setw(30) << Quequan;
    cout << setw(30) << Nganh;
    cout << setw(10) << NamTN << endl;
}
void tieude(){
    cout << setw(30) << "Ho ten";
    cout << setw(15) << "Ngay sinh";
    cout << setw(30) << "Que quan";
    cout << setw(30) << "Nganh";
    cout << setw(10) << "NamTN" << endl;
}
void Totnghiepgannhat(KISU a[], int n){
    int maxx = a[0].NamTN;
    for(int i = 1; i < n; i++){
        if(a[i].NamTN > maxx){
            maxx = a[i].NamTN;
        }
    }
    for(int i = 0; i < n; i++){
        if(a[i].NamTN == maxx) {
            a[i].XUAT();
        }
    }
}
int main(){
    KISU *a;
    int n;
    do{
        cout << "Nhap so ki su: "; cin >> n;
    }while(n <= 0);
    a = new KISU[n];
    for(int i = 0; i < n; i++){
        cout << "Nhap ki su thu " << i+1 << endl;
        a[i].NHAP();
    }
    cout << endl << "Danh sach cac ki su vua nhap" << endl;
    tieude();
    for(int i = 0; i < n; i++){
        a[i].XUAT();
    }
    cout << endl << "Danh sach cac ki su tot nghiep gan day nhat: " << endl;
    tieude();
    Totnghiepgannhat(a, n);
}
