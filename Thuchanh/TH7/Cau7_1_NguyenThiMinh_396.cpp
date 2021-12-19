#include <bits/stdc++.h>

using namespace std;

class Tamgiac{
    private:
        float a, b, c;
    public:
        float chuvi(){
            return (a+b+c);
        }
        friend istream& operator>>(istream &x, Tamgiac &y);
        friend ostream& operator<<(ostream &x, Tamgiac &y);
};
istream& operator>>(istream &x, Tamgiac &y){
    cout << "Nhap canh a: "; x >> y.a;
    cout << "Nhap canh b: "; x >> y.b;
    cout << "Nhap canh c: "; x >> y.c;
    return x;
}
ostream& operator<<(ostream &x, Tamgiac &y){
    x << "Canh a: " << y.a << endl;
    x << "Canh b: " << y.b << endl;
    x << "Canh c: " << y.c << endl;
    x << "Chu vi tam giac: " << y.chuvi() << endl;
    return x;
}
int main(){
   Tamgiac P, Q;
   cout << "Nhap tam giac P: " << endl; cin >> P;
   cout << "Nhap tam giac Q; " << endl; cin >> Q;
   cout << "Tam giac P vua nhap: " << endl << P << endl;
   cout << "Tam giac Q vua nhap: " << endl << Q << endl;
   ofstream f("Tamgiac.txt", ios::out);
   f << "Tam giac P vua nhap: " << endl << P << endl;
   f << "Tam giac Q vua nhap: " << endl << Q << endl;
   f.close();
}