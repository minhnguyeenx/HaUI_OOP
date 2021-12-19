#include <bits/stdc++.h>

using namespace std;
class sophuc{
     private:
        double phanthuc, phanao;
    public:
        sophuc(){
            phanthuc = 0, phanao = 0;
        }
        sophuc(double a, double b){
            phanthuc = a;
            phanao = b;
        }
        sophuc operator-();
        void xuat();
};
sophuc sophuc::operator-(){
    sophuc z;
    z.phanthuc = -this->phanthuc;
    z.phanao = -this->phanao;
    // z.phanthuc = -phanthuc;
    // z.phanao = -phanao;
    return z;
}
void sophuc::xuat(){
    cout << phanthuc << " + " << phanao << "i" << endl;
}
int main(){
    //khai bao hai so phuc
    sophuc x(2, 3);
    //doi dau phan tu
    sophuc y = x.operator-();
    //co the viet y = -x;
    cout << "So phuc da doi dau: ";
    y.xuat();
}