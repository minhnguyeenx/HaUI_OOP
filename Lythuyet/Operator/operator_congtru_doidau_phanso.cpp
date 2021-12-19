#include <bits/stdc++.h>

using namespace std;
class phanso{
     private:
        double tuso, mauso;
    public:
        void nhap();
        void xuat();
        phanso operator+(phanso y); //cong hai phan so, phan so x dang this
        phanso operator-(phanso y); //tru hai phan so, phan so x dang this
        phanso operator-(); //doi dau 2 phan so
};
void phanso::nhap(){
    cout << "Nhap tu so: "; cin >> tuso;
    cout << "Nhap mau so: "; cin >> mauso;
}
void phanso::xuat(){
    cout << tuso << "/" << mauso << endl;
}
phanso phanso::operator+(phanso y){
    phanso z;
    z.tuso = tuso*y.mauso + mauso*y.tuso; //tuso/mauso = x
    z.mauso = mauso*y.mauso;          //x o dang this, nen bi an
    return z;
}
phanso phanso::operator-(phanso y){
    phanso z;
    z.tuso = tuso*y.mauso - mauso*y.tuso;
    z.mauso = mauso*y.mauso;
    return z;
}
phanso phanso::operator-(){
    phanso z;
    z.tuso = -tuso;
    z.mauso = mauso;
    return z;
}
int main(){
    phanso x, y;
    cout << "Nhap phan so x" << endl; x.nhap();
    cout << "Nhap phan so y" << endl; y.nhap();
    cout << "Phan so x: "; x.xuat();
    cout << "Phan so y: "; y.xuat();
    phanso t = x+y;
    cout << "x+y = "; t.xuat();
    phanso h = x-y;
    cout << "x-y = "; h.xuat();
    h = -h;
    cout << "Phan so sau khi doi dau: ";h.xuat(); 
    // cout << "Phan so sau khi doi dau: ";-h.xuat();
}