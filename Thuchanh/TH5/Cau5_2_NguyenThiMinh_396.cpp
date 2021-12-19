#include <bits/stdc++.h>

using namespace std;
class PRINTER{
    protected:
        float Trongluong, Tocdo;
        char Hangsx[30];
        int Namsx;
};

class DOTPRINTER : public PRINTER{
    private:
        float Matdokim;
    public:
        void nhap();
        void xuat();
};
void DOTPRINTER::nhap(){
    cout << "Nhap trong luong: "; cin >> Trongluong;
    cout << "Nhap hang sx: "; fflush(stdin); gets(Hangsx);
    cout << "Nhap nam sx: "; cin >> Namsx;
    cout << "nHAP toc do: "; cin >> Tocdo;
    cout << "Nhap mat do kim: "; cin >> Matdokim;
}
void DOTPRINTER::xuat(){
    cout << "Trong luong: " << Trongluong << endl;
    cout << "Hang sx: "  << Hangsx << endl;
    cout << "Nam sx: " << Namsx << endl;
    cout << "Toc do: " << Tocdo << endl;
    cout << "Mat do kim: " << Matdokim << endl;
}
class LASERPRINTER  : public PRINTER{
    private:
        float Dophangiai;
    public:
        void nhap();
        void xuat();
};
void LASERPRINTER::nhap(){
    cout << "Nhap trong luong: "; cin >> Trongluong;
    cout << "Nhap hang sx: "; fflush(stdin); gets(Hangsx);
    cout << "Nhap nam sx: "; cin >> Namsx;
    cout << "nHAP toc do: "; cin >> Tocdo;
    cout << "Nhap do phan giai: "; cin >> Dophangiai;
}
void LASERPRINTER::xuat(){
    cout << "Trong luong: " << Trongluong << endl;
    cout << "Hang sx: "  << Hangsx << endl;
    cout << "Nam sx: " << Namsx << endl;
    cout << "Toc do: " << Tocdo << endl;
    cout << "Do phan giai: " << Dophangiai << endl;
}
int main(){
    DOTPRINTER a;
    LASERPRINTER b;
    cout << "Nhap thong tin  may DOTPRINTER" << endl;
    a.nhap();
    cout << "Nhap thong tin  may LASERPRINTER" << endl;
    b.nhap();
    cout << "Thong tin  may DOTPRINTER" << endl;
    a.xuat();  
    cout << "Thong tin  may LASERPRINTER" << endl;  
    b.xuat();
}