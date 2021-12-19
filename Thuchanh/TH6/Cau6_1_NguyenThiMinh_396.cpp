#include <bits/stdc++.h>

using namespace std;

class VECTOR{
    private:
        float x, y;
    public:
        void nhap();
        void xuat();
        VECTOR operator+(VECTOR b);
        VECTOR operator-(VECTOR b);
};
void VECTOR::nhap(){
    cout << "Nhap toa do x: "; cin >> x;
    cout << "Nhap toa do y: "; cin >> y;
}
void VECTOR::xuat(){
    cout << "(" << x << "," << y << ")" << endl;
}
VECTOR VECTOR::operator+(VECTOR b){
    VECTOR c;
    c.x = x + b.x;
    c.y = y + b.y; 
    return c;
}
VECTOR VECTOR::operator-(VECTOR b){
    VECTOR c;
    c.x = x - b.x;
    c.y = y - b.y; 
    return c;

}
int main(){
    VECTOR A, B;
    cout << "Nhap vector A: " << endl;
    A.nhap();
    cout << "Nhap vector B: " << endl;
    B.nhap();
    cout << "Cac vector vua nhap: " << endl;
    cout << "A"; A.xuat();
    cout << "B"; B.xuat();
    VECTOR Tong, Hieu;
    Tong = A+B;
    cout << "Tong hai vector: "; Tong.xuat();
    Hieu = A-B;
    cout << "Hieu hai vector: "; Hieu.xuat();    
}