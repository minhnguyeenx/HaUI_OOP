#include <bits/stdc++.h>

using namespace std;
class Elec{
    protected:
        float cs;
        int da;
    public:
        Elec(float a, int b){
            cs = a;
            da = b;
        }
};
class MG: public Elec{
    protected:
        int dtich;
        char loai[10];
    public:
        //phương thức khởi tạo kế thừa
        MG(float a, int b, int c, char *d):Elec(a,b){
            dtich = c;
            strcpy(loai, d);
        }
        void xuat();
};
void MG::xuat(){
    cout << "Cong suat: " << cs << endl;
    cout << "Dien ap: " << da << endl;
    cout << "Dung tich may giat: " << dtich << endl;
    cout << "Loai may giat: " << loai << endl; 
}
class TL : public Elec{
    protected:
        int dtich;
        int songan;
    public:
        //phương thức khởi tạo kế thừa
        TL(float a, int b, int c, int d):Elec(a, b){
            dtich = c;
            songan = d;
        }
        void xuat();    
};
void TL::xuat(){
    cout << "Cong suat: " << cs << endl;
    cout << "Dien ap: " << da << endl;
    cout << "Dung tichtu lanh: " << dtich << endl;
    cout << "So ngan tu lanh: " << songan << endl; 
}
int main(){
    MG m1(200, 220, 8, "Cua tren");
    cout << "Thong tin may giat: " << endl;
    m1.xuat();
    TL t1(1800, 220, 10, 2);
    cout << endl << "Thong tin tu lanh: " << endl;
    t1.xuat();
}

