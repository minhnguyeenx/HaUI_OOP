#include <bits/stdc++.h>

using namespace std;
class ptb2{
    private:
        //ax^2+ bx+ c = 0
        float a, b, c;
    public:
        ptb2(){
            a = 0; b = 0; c= 0;
        }
        ptb2(float x, float y, float z){
            a = x; b = y; c = z;
        }
        float delta(){
            return b*b - 4*a*c;
        }
        void NHAP();
        void XUAT();
        void GIAI();
};
void ptb2::NHAP(){
    cout << "Nhap a: "; cin >> a;
    cout << "Nhap b: "; cin >> b;
    cout << "Nhap c: "; cin >> c;
}
void ptb2::XUAT(){
    cout << a << "x^2" << "+" << b << "x" << "+" << c << "=0" << endl;
}
void ptb2::GIAI(){
    if(delta() < 0) 
        cout << "PT vo nghiem";
    else if(delta() == 0) 
        cout << "PT co nghiem kep x1 = x2 = " << -b/(2.0*a);
    else {
        float x1 = (-b-sqrt(delta()))/(2.0*a);
        float x2 = (b-sqrt(delta()))/(2.0*a);
        cout << "PT co 2 nghiem phan biet" << endl;
        cout << "\tx1 = " << x1 << endl;
        cout << "\tx2 = " << x2 << endl;  
        }
}

int main(){
    ptb2 P(1, -4, 3), Q;
    cout << endl <<  "Phuong trinh P: " << endl;
    cout << "Phuong trinh: ";
    P.XUAT();
    P.GIAI();
    cout << endl << "Phuong trinh Q: " << endl;
    Q.NHAP();
    cout << "Phuong trinh: ";
    Q.XUAT();
    Q.GIAI();
}