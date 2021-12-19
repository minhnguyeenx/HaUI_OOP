#include <bits/stdc++.h>

using namespace std;
class VEHICLE{
    protected:
        char Nhanhieu[20], Hang[20];
        int NamSX;
    public:
        void NHAP();
        void XUAT();
};
void VEHICLE::NHAP(){
    cout << "Nhap nhan hieu: "; fflush(stdin); gets(Nhanhieu);
    cout << "Nhap nam sx: "; cin >> NamSX;
    cout << "Nhap hang: "; fflush(stdin); gets(Hang);
}
void VEHICLE::XUAT(){
    cout << "Nhan hieu: " << Nhanhieu << endl;
    cout << "Nam sx: " << NamSX << endl;
    cout << "Hang: " << Hang << endl;
}
class OTO: public VEHICLE{
    private:
        int Sochongoi;
        float Dungtich;
    public:
        void NHAP();
        void XUAT();
};
void OTO::NHAP(){
    VEHICLE::NHAP();
    cout << "Nhap so cho ngoi: "; cin >> Sochongoi;
    cout << "Nhap dung tich: "; cin >> Dungtich;
}
void OTO::XUAT(){
    VEHICLE::XUAT();
    cout << "So cho ngoi: " << Sochongoi << endl;
    cout << "Dung tich: " << Dungtich << endl;
}
class MOTO: public VEHICLE{
    private:
        int Phankhoi;
    public:
        void NHAP();
        void XUAT();
};
void MOTO::NHAP(){
    VEHICLE::NHAP();
    cout << "Nhap phan khoi: "; cin >> Phankhoi;
}
void MOTO::XUAT(){
    VEHICLE::XUAT();
    cout << "Phan khoi: " << Phankhoi << endl;
}
int main(){
    OTO ot1;
    MOTO mt1;
    cout << "Nhap thong tin oto: " << endl;
    ot1.NHAP();
    cout << "Nhap thong tin moto: " << endl;
    mt1.NHAP();
    cout << "Thong tin oto vua nhap: " << endl;
    ot1.XUAT();
    cout << "Thong tin moto vua nhap: " << endl;
    mt1.XUAT();
}