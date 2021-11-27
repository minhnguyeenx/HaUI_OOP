#include <bits/stdc++.h>

using namespace std;
class SanPham{
    protected:
        char Masp[10], Tensp[30], Ngaysx[12], Mausac[15];
        float Trongluong;
    public:
        void nhap();
        void xuat(); 
};
void SanPham::nhap(){
    cout << "Nhap ma san pham: "; fflush(stdin); gets(Masp);
    cout << "Nhap ten san pham: "; fflush(stdin); gets(Tensp);
    cout << "Nhap ngay san xuat: "; fflush(stdin); gets(Ngaysx);
    cout << "Nhap trong luong: "; cin >> Trongluong;
    cout << "Nhap mau sac: "; fflush(stdin); gets(Mausac);
}
void SanPham::xuat(){
    cout << setw(10) << left << Masp;
    cout << setw(30) << left << Tensp;
    cout << setw(12) << left << Ngaysx;
    cout << setw(15) << left << Trongluong;
    cout << setw(15) << left << Masp;
}

class HangDienTu : public SanPham{
    protected:
        float Congsuat;
        int Dongdien;
    public:
        void nhap();
        void xuat();
        //tìm các mạt hàng có trọng lượng nhỏ nhất
        friend void Min_TL(HangDienTu a[], int n);
};
void HangDienTu::nhap(){
    SanPham::nhap();
    cout << "Nhap cong suat: "; cin >> Congsuat;
    cout << "Nhap dong dien: "; cin >> Dongdien;
}
void HangDienTu::xuat(){
    //gọi hàm xuất của class SanPham
    SanPham::xuat();
    cout << setw(15) << left << Congsuat;
    cout << setw(15) << left << Dongdien << endl;
}
void Min_TL(HangDienTu a[], int n){
    float Min = a[0].Trongluong;
    for(int i = 1; i < n; i++){
        if(a[i].Trongluong < Min) Min = a[i].Trongluong;
    }
    for(int i = 0; i < n; i++){
        if(a[i].Trongluong == Min) a[i].xuat();
    }
}
void tieude(){
    cout << setw(10) << left << "Ma sp";
    cout << setw(30) << left << "Ten sp";
    cout << setw(12) << left << "Ngay sx";
    cout << setw(15) << left << "Trong luong";
    cout << setw(15) << left << "Ma sp";
    cout << setw(15) << left << "Cong suat";
    cout << setw(15) << left << "Dong dien" << endl;    
}
int main(){
    int n;
    HangDienTu *a;
    do{
        cout << "Nhap so hang dien tu: "; cin >> n;
    }while(n <= 0);
    a = new HangDienTu[n];
    for(int i = 0; i < n; i++){
        cout << "Nhap hang dien tu thu " << i+1 << endl;
        a[i].nhap();
    }
    cout << "Danh sach hang dien tu vua nhap: " << endl;
    tieude();
    for(int i = 0; i < n; i++){
        a[i].xuat();
    }
    cout << "Danh sach mat hang co trong luong thap nhat: " << endl;
    tieude();
    Min_TL(a, n);
}

