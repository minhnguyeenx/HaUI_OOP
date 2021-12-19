#include <bits/stdc++.h>

using namespace std;

class Benhnhan{
    protected:
        char Hoten[30], Quequan[30];
        int Namsinh;
    public:
        void nhap();
        void xuat();
};
void Benhnhan::nhap(){
    cout << "Nhap ho ten: "; fflush(stdin); gets(Hoten);
    cout << "Nhap que quan: "; fflush(stdin); gets(Quequan);
    cout << "Nhap nam sinh: "; cin >> Namsinh;
}
void Benhnhan::xuat(){
    cout << setw(30) << Hoten;
    cout << setw(30) << Quequan;
    cout << setw(15) << Namsinh;
}
class Benhan: public Benhnhan{
    private:
        char TenBA[30];
        long Tienvienphi;
    public:
        void nhap();
        void xuat();
        int Tuoihientai(){
            return (2021-Namsinh);
        }
        friend void Sapxeptuoi(Benhan a[], int &n);
        friend void Nhohon10(Benhan a[], int n);
        friend void Vienphicaonhat(Benhan a[], int n);
};
void Benhan::nhap(){
    Benhnhan::nhap();
    cout << "Nhap ten benh an: "; fflush(stdin); gets(TenBA);
    cout << "Nhap tien vien phi: "; cin >> Tienvienphi;
}
void Benhan::xuat(){
    Benhnhan::xuat();
    cout << setw(30) << TenBA;
    cout << setw(15) << Tienvienphi;
    cout << setw(15) << Tuoihientai() << endl;
}
void Tieude(){
    cout << setw(30) << "Ho ten";
    cout << setw(30) << "Que quan";
    cout << setw(15) << "Nam sinh";
    cout << setw(30) << "Ten BA";
    cout << setw(15) << "Tienvienphi";
    cout << setw(15) << "Tuoihientai" << endl;
}
void Sapxeptuoi(Benhan a[], int &n){
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(a[i].Tuoihientai() < a[j].Tuoihientai()){
                Benhan tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
}
void Nhohon10(Benhan a[], int n){
    for(int i = 0; i < n; i++){
        if(a[i].Tuoihientai() <= 10){
            a[i].xuat();
        }
    }
}
void Vienphicaonhat(Benhan a[], int n){
    long maxx = a[0].Tienvienphi;
    for(int i = 1; i < n; i++){
        if(a[i].Tienvienphi > maxx) {
            maxx = a[i].Tienvienphi;
        }
    }
    for(int i = 0; i < n; i++){
        if(a[i].Tienvienphi == maxx){
            a[i].xuat();
        }
    }
}
int main(){
    Benhan *a;
    int n;
    do{
        cout << "Nhap so benh an: "; cin >> n;
    }while(n<=0);
    a = new Benhan[n];
    for(int i = 0; i < n; i++){
        cout << "Nhap benh an thu " << i+1 << endl;
        a[i].nhap();
    }
    Sapxeptuoi(a, n);
    cout << endl << "Danh sach benh nhan sap xep theo tuoi giam dan" << endl;
    Tieude();
    for(int i = 0; i < n; i++){
        a[i].xuat();
    }
    cout << endl << "Danh sach benh nhan nho hon hoac bang 10 tuoi: " << endl;
    Tieude();
    Nhohon10(a, n);

    cout << endl << "Benh nhan co tien vien phi cao nhat: " << endl;
    Tieude();
    Vienphicaonhat(a, n);

}