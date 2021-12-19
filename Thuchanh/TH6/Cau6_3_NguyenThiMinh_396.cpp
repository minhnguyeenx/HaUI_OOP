#include <bits/stdc++.h>

using namespace std;

class COMPLEX_NUMBER{
    private:
        float thuc, ao;
    public:
        COMPLEX_NUMBER(){
            thuc = 0;
            ao = 0;
        }
        COMPLEX_NUMBER(float a, float b){
            thuc = a;
            ao = b;
        }
        void xuat();
        COMPLEX_NUMBER operator+(COMPLEX_NUMBER y);
        COMPLEX_NUMBER operator-(COMPLEX_NUMBER y);
};
void COMPLEX_NUMBER::xuat(){
    cout << thuc;
    if(ao < 0) cout << "+i*(" << ao << ")" << endl;
    else cout << "+i*" << ao << endl;
}
COMPLEX_NUMBER COMPLEX_NUMBER::operator+(COMPLEX_NUMBER y){
    COMPLEX_NUMBER z;
    z.thuc = thuc + y.thuc;
    z.ao = ao + y.ao;
    return z;
}
COMPLEX_NUMBER COMPLEX_NUMBER::operator-(COMPLEX_NUMBER y){
    COMPLEX_NUMBER z;
    z.thuc = thuc - y.thuc;
    z.ao = ao - y.ao;
    return z;
}
int main(){
    COMPLEX_NUMBER x(1, 2), y(3, 4);
    cout << "So thuc x: ";x.xuat();
    cout << "So thuc y: ";y.xuat();
    COMPLEX_NUMBER Tong, Hieu;
    Tong = x+y;
    Hieu = x-y;
    cout << "Tong hai so phuc: "; Tong.xuat();
    cout << "Hieu hai so phuc: "; Hieu.xuat();
}