#include <bits/stdc++.h>

using namespace std;
class hinh{
    protected:
        float dai, rong;
    public:
        void nhap();
        void xuat();
};
void hinh::nhap(){
    cout << "Nhap chieu dai, rong: ";
    cin >> dai >> rong;
}
void hinh::xuat(){
    cout << "Chieu dai: " << dai << endl;
    cout << "Chieu rong: " << rong << endl;
}
//kế thừa kiểu public
class HCN: public hinh{
    public:
        float chuvi(){
            return 2.0*(dai+rong);
        }
        float dientich(){
            return dai*rong;
        }
};
int main(){
    HCN a;
    a.nhap();
    a.xuat();
    cout << "Chu vi hcn: " << a.chuvi() << endl;
    cout << "Dien tich hcn: " << a.dientich() << endl;
}

