#include <bits/stdc++.h>

using namespace std;
class DATE{
    private:
        int D, M, Y;
    public:
        void nhap();
        void xuat();
};
void DATE::nhap(){
    cout << "Nhap ngay: "; cin >> D;
    cout << "Nhap thang: "; cin >> M;
    cout << "Nhap nam: "; cin >> Y;
}
void DATE::xuat(){
    cout << D << "/" << M << "/" << Y << endl;
}
class NHANSU{
    private:
        char Manhansu[15];
        char Hoten[30];
        DATE NS;
    public:
        void nhap();
        void xuat();
};
void NHANSU::nhap(){
    cout << "Nhap ma nhan su: "; fflush(stdin); gets(Manhansu);
    cout << "Nhap ho ten: ";fflush(stdin); gets(Hoten);
    cout << "Nhap ngay thang nam: " << endl; NS.nhap();
}
void NHANSU::xuat(){
    cout << "Ma nhan su: " << Manhansu << endl;
    cout << "Ho ten: " << Hoten << endl;
    cout << "Ngay thang nam: "; NS.xuat();
}

int main(){
    NHANSU ns;
    ns.nhap();
    cout << endl << "Thong tin nhan su vua nhap: " << endl;
    ns.xuat();
}