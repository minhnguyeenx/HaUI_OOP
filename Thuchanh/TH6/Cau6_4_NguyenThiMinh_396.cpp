#include <bits/stdc++.h>

using namespace std;

class TRINOMIAL{
    private:
        float a, b, c;
    public:
        TRINOMIAL(){
            a = 0;
            b = 0;
            c = 0;
        }
        TRINOMIAL(float A, float B, float C){
            a = A;
            b = B;
            c = C;
        }
        void xuat();
        TRINOMIAL operator-();
        TRINOMIAL operator+(TRINOMIAL y2);
        TRINOMIAL operator-(TRINOMIAL y2);
};
void TRINOMIAL::xuat(){
    cout << a << "x2+";
    if(b<0) cout << "(" << b << ")x";
    else cout << b << "x+";
    if(c < 0) cout << "(" << c << ")" << endl;
    else cout << c << endl;
}
TRINOMIAL TRINOMIAL::operator-(){
    TRINOMIAL z;
    z.a = -a;
    z.b = -b;
    z.c = -c;
    return z;
}
TRINOMIAL TRINOMIAL::operator+(TRINOMIAL y2){
    TRINOMIAL z;
    z.a = a + y2.a;
    z.b = b + y2.b;
    z.c = c + y2.c;
    return z;
}
TRINOMIAL TRINOMIAL::operator-(TRINOMIAL y2){
    TRINOMIAL z;
    z.a = a - y2.a;
    z.b = b - y2.b;
    z.c = c - y2.c;
    return z;
}
int main(){
    TRINOMIAL y1(1, 2, 3), y2(4, 5, 6);
    cout << "Tam thuc y1: "; y1.xuat();
    cout << "Tam thuc y2: "; y2.xuat();
    y1 = -y1; y2 = -y2;
    cout << "Tam thuc y1 da dao dau: "; y1.xuat();
    cout << "Tam thuc y2 da dao dau: "; y2.xuat();
    TRINOMIAL Tong, Hieu;
    Tong = y1+y2;
    Hieu = y1-y2;
    cout << "Tong hai tam thuc: "; Tong.xuat();
    cout << "Hieu hai tam thuc: "; Hieu.xuat();
}