#include <bits/stdc++.h>

using namespace std;

class CanBo{
private:
    char MaCB[30];
    char HoTen[30];
    char NgaySinh[15];
    int Ngaylamviec;
public:
    void nhap(){
        cout << "Nhap ma can bo: "; fflush(stdin);
        gets(MaCB);
        cout << "Nhap ho va ten can bo: "; fflush(stdin);
        gets(HoTen);
        cout << "Nhap ngay sinh can bo: "; fflush(stdin);
        gets(NgaySinh);
        cout << "Nhap so ngay lam viec cua can bo: "; 
        cin >> Ngaylamviec;
    }
    long long tinhluong(){
        return Ngaylamviec*250000;
    }
    void xuat(){
        cout << "Ma can bo: " << MaCB << endl;
        cout << "Ho va ten can bo: " << HoTen << endl;
        cout << "Ngay sinh can bo: " << NgaySinh << endl;
        cout << "So ngay lam viec cua can bo: " << Ngaylamviec << endl;
    }
};
int main(){
    CanBo a;
    a.nhap();
    a.xuat();
    cout << "Luong cua can bo: " << a.tinhluong();
    return 0;
}