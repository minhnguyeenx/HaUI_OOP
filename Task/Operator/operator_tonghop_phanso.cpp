#include <bits/stdc++.h>

using namespace std;
class phanso{
     private:
        double tuso, mauso;
    public:
        phanso (){
            tuso = 0; mauso = 0;
        }
        phanso(double a, double b){
            tuso = a;
            mauso = b;
        }
        phanso operator-(); //doi dau 2 phan so
        phanso operator+(phanso y); //cong hai phan so, phan so x dang this
        phanso operator-(phanso y); //tru hai phan so, phan so x dang this
        phanso operator*(phanso y); //nhan hai phan so, phan so x dang this
        phanso operator/(phanso y); //chia hai phan so, phan so x dang this
        phanso operator>(phanso y); 
        phanso operator<(phanso y); 
        phanso operator==(phanso y); 
        phanso operator!=(phanso y); 
        phanso operator__(phanso y);
};
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
 
}