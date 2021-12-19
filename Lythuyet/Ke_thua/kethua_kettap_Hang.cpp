#include<bits/stdc++.h>

class Date{
    private:
        int d, m, y;
    public:
        void nhap();
        void xuat();
};
class NSX{
    private:
        char NSX[30], Diachi[30];
    public:
        void nhap();
        void xuat();
};
class Hang{
    protected:
        char Tenhang[20];
        NSX x;
        long Dongia;
    public:
        Hang(){

        }
        void nhap();
        void xuat();

};
class Tivi: public Hang{
    private:
        float kichthuoc;
        Date Ngaynhap;
    public:
        Tivi(){

        }
        void nhap();
        void xuat();
};
int main(){

}