#include <bits/stdc++.h>

using namespace std;

class ELECTRONIC{
    protected:
        float Congsuat;
        int Dienap;
    public:
        ELECTRONIC(float a, int b){
            Congsuat = a;
            Dienap = b;
        }
};
class MAYGIAT: public ELECTRONIC{
    protected:
        int Dungtich;
        char loai[10];
    public:
        //phương thức khởi tạo kế thừa
        MAYGIAT(float a, int b, int c, char *d):ELECTRONIC(a,b){
            Dungtich = c;
            strcpy(loai, d);
        }
        void xuat();
};
void MAYGIAT::xuat(){
    cout << "Cong suat: " << Congsuat << endl;
    cout << "Dien ap: " << Dienap << endl;
    cout << "Dung tich may giat: " << Dungtich << endl;
    cout << "Loai may giat: " << loai << endl; 
}
class TULANH : public ELECTRONIC{
    protected:
        int Dungtich;
        int Songan;
    public:
        //phương thức khởi tạo kế thừa
        TULANH(float a, int b, int c, int d):ELECTRONIC(a, b){
            Dungtich = c;
            Songan = d;
        }
        void xuat();    
};
void TULANH::xuat(){
    cout << "Cong suat: " << Congsuat << endl;
    cout << "Dien ap: " << Dienap << endl;
    cout << "Dung tichtu lanh: " << Dungtich << endl;
    cout << "So ngan tu lanh: " << Songan << endl; 
}
int main(){
    MAYGIAT a(200, 220, 8, "Cua tren");
    cout << "Thong tin may giat: " << endl;
    a.xuat();
    TULANH b(1800, 220, 10, 2);
    cout << endl << "Thong tin tu lanh: " << endl;
    b.xuat();
}

