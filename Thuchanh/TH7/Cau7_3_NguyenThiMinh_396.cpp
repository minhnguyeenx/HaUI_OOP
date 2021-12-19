#include <bits/stdc++.h>

using namespace std;
class Phieu;
class Bangdiem{
    private:
        char Tenmon[30];
        int Sotrinh;
        float Diem;
    public:
        void nhap();
        void xuat();
        friend class Phieu;
        friend void Tenmhlonhon3(Phieu p);
        friend void chen(Phieu p);
        friend void xoa(Phieu p);
};
void Bangdiem::nhap(){
    cout << "Nhap ten mon: "; fflush(stdin); gets(Tenmon);
    cout << "Nhap so trinh: "; cin >> Sotrinh;
    cout << "Nhap diem: "; cin >> Diem;
}
void tieude(){
    cout << setw(30) << "Ten mon";
    cout << setw(15) << "So trinh";
    cout << setw(15) << "Diem" << endl;
}
void Bangdiem::xuat(){
    cout << setw(30) << Tenmon;
    cout << setw(15) << Sotrinh;
    cout << setw(15) << Diem << endl;
}
class Phieu{
    private:
        char Masv[15], Tensv[30], Lop[15];
        int Khoa;
        Bangdiem *a;
        int n;
    public:
        void nhap();
        void xuat();
        friend void Tenmhlonhon3(Phieu p);
        friend void chen(Phieu p);
        friend void xoa(Phieu p);
};
void Phieu::nhap(){
    cout << "Nhap masv: "; fflush(stdin); gets(Masv);
    cout << "Nhap ten sv: "; fflush(stdin); gets(Tensv);
    cout << "Nhap lop: "; fflush(stdin); gets(Lop);
    cout << "Nhap khoa: "; cin >> Khoa;
    do {
        cout << "Nhap so mon: "; cin >> n;
    }while(n<=0);
    a = new Bangdiem[n];
    for(int i = 0; i < n; i++){
        cout << "Nhap mon thu " << i+1 << endl;
        a[i].nhap();
    }
}
void Phieu::xuat(){
    cout << setw(15) << left << "Ma sinh vien: " << setw(15) << Masv;
    cout << setw(15) << left << "Ten sinh vien: " << setw(30) << Tensv;
    cout << endl << setw(15) << left << "Lop: " << setw(15) << Lop;
    cout << setw(15) << left << "Khoa: " << setw(15) << Khoa;
    cout << endl;
    cout << "Bang diem: " << endl;
    tieude();
    for(int i = 0; i < n; i++){
        a[i].xuat();
    }
    float sum = 0.0;
    for(int i = 0; i < n; i++){
        sum += a[i].Diem;
    }
    float dtb;
    dtb = (float)(sum/n);
    cout << "\t\t\tDiem trung binh: " << dtb << endl;
}
void Tenmhlonhon3(Phieu p){
    int dem = 0;
    for(int i = 0; i < p.n; i++){
        if(p.a[i].Sotrinh > 3) {
            cout << p.a[i].Tenmon << ", ";
            dem++;
        }
    }
    if(dem == 0) cout << "Khong co";
    cout << endl;
}
void chen(Phieu p){
    int k;
    Bangdiem t;
    do {
        cout << "Nhap vi tri can chen: "; cin >> k;
    } while(k >= p.n || k < 0);
    cout << "Nhap mon hoc bat ki: " << endl;
    t.nhap();
    p.a = (Bangdiem*) realloc (p.a, (p.n+1)*sizeof(Bangdiem));
    for(int i = p.n; i >= k; i--){
        p.a[i] = p.a[i-1];
    }
    p.a[k] = t;
    p.n++;
    p.xuat();
}
void xoa(Phieu p){
    //xoa mon co ten la abc
    for(int i = 0; i < p.n; i++){
        while(strcmp(p.a[i].Tenmon, "abc") == 0){
            for(int j = i; j < p.n-1; j++){
                p.a[j] = p.a[j+1];
            }
            cout << p.n << "...\n";
            p.n--;
            p.a = (Bangdiem*) realloc(p.a, p.n*sizeof(Bangdiem));
            cout << p.n << ",,,,\n";
        }
    }
    p.xuat();
}
int main(){
    Phieu p;
    p.nhap();
    cout << endl << "Phieu vua nhap: " << endl;
    cout << "\t\tPHIEU BAO DIEM" << endl;
    p.xuat();
    cout << endl << "Cac mon hoc co so trinh lon hon 3: ";
    Tenmhlonhon3(p);
    // cout << endl << "Chen them mon hoc bat ki vao danh sach cac mon hoc trong phieu: " << endl;
    // chen(p);
    cout << endl << "Xoa mon abc: " << endl;
    xoa(p);
}