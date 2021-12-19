#include <bits/stdc++.h>

using namespace std;
struct sophuc{
    float phanthuc;
    float phanao;
};
sophuc operator+(sophuc x, sophuc y){
    sophuc tg;
    tg.phanthuc = x.phanthuc + y.phanthuc;
    tg.phanao = x.phanao + y.phanao;
    return tg;
}
int main(){
    //khai bao hai so phuc x va y, tong T
    sophuc x, y, T;
    x.phanthuc = 2; x.phanao = 3;
    y.phanthuc = 3; y.phanao = 5;
    //cong hai phan tu
    T= operator+(x, y);
    //co the viet T = x+y;
    cout << "Ket qua = " << T.phanthuc << " + i*" << T.phanao;
}