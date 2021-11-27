#include <bits/stdc++.h>

using namespace std;
class phanso{
    private:
        double tuso, mauso;
    public:
    friend ostream& operator<<(ostream& x, phanso &y);
    friend istream& operator>>(istream& x, phanso &y);

};
//con tror this khong dung o ham ban
//nen phai co du 2 doi
ostream& operator<<(ostream& x, phanso &y){
    x << y.tuso << "/" << y.mauso << endl;
    return x;
}
istream& operator>>(istream& x, phanso &y){
    cout << "\tNhap phan thuc: ";
    x >> y.tuso;
    cout << "\tNhap phan ao: ";
    x >> y.mauso;
    return x;
}
int main(){
    phanso x, y;
    cout << "Phan so x: " << endl; cin >> x;
    cout << "Phan so y: " << endl; cin >> y;
    cout << "Phan vua nhap: "<< endl;
    cout << x << endl << y << endl;
}