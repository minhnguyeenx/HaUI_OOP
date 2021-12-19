#include <bits/stdc++.h>

using namespace std;
class FRACTION{
    private:
        float tuso, mauso;
    public:
        void nhap();
        void xuat();
        FRACTION operator*(FRACTION y);
        FRACTION operator/(FRACTION y);
        FRACTION operator+(FRACTION y);
        FRACTION operator-(FRACTION y);
        friend float giatri(FRACTION a){
            return (float)(a.tuso/a.mauso);
        }
};
void FRACTION::nhap(){
    cout << "Nhap tu so x: "; cin >> tuso;
    cout << "Nhap tu so y: "; cin >> mauso;
}
void FRACTION::xuat(){
    cout << tuso << "/" << mauso;
}
FRACTION FRACTION::operator*(FRACTION y){
    FRACTION z;
    z.tuso = tuso*y.tuso;
    z.mauso = mauso*y.mauso;
    return z;
}
FRACTION FRACTION::operator/(FRACTION y){
    FRACTION z;
    z.tuso = tuso*y.mauso;
    z.mauso = mauso*y.tuso;
    return z;
}
FRACTION FRACTION::operator+(FRACTION y){
    FRACTION z;
    z.tuso = tuso*y.mauso + mauso*y.tuso;
    z.mauso = mauso*y.mauso;
    return z;
}
FRACTION FRACTION::operator-(FRACTION y){
    FRACTION z;
    z.tuso = tuso*y.mauso - mauso*y.tuso;
    z.mauso = mauso*y.mauso;
    return z;
}
int main(){
    FRACTION x, y;
    cout << "Nhap phan so x: " << endl; x.nhap();
    cout << "Nhap phan so y: " << endl; y.nhap();
    cout << "Phan so x: "; x.xuat(); cout << endl;
    cout << "Phan so y: "; y.xuat(); cout << endl;
    FRACTION Tich, Thuong, Tong, Hieu; 
    Tich = x*y;
    Thuong = x/y;
    Tong = x+y;
    Hieu = x-y;
    cout << "Tich hai phan so: "; Tich.xuat(); cout << " = " << giatri(Tich) << endl;
    cout << "Thuong hai phan so: "; Thuong.xuat(); cout << " = " << giatri(Thuong) << endl;
    cout << "Tong hai phan so: "; Tong.xuat(); cout << " = " << giatri(Tong) << endl;
    cout << "Hieu hai phan so: "; Hieu.xuat(); cout << " = " << giatri(Hieu) << endl;
}