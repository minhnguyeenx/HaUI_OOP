#include <bits/stdc++.h>
/*
Cài đặt lớp Sách bao gồm các thuộc tính: Mã sách, Tên sách, 
Nhà xuất bản, Số trang, Giá tiền và các phương thức:  
- NHAP: nhập vào các thông tin của sách.  
- XUAT: xuất thông tin của sách ra màn hình (trên 1 dòng).   
Viết hàm main nhập vào một danh sách gồm n cuốn sách. 
In danh sách ra màn hình
*/
using namespace std;
class Sach{
    private:
        char Masach[20];
        char Tensach[50];
        char Nhaxuatban[30];
        int Sotrang;
        int Sotien;
    public:
        void NHAP();
        void XUAT();
};

void Sach::NHAP(){
    cout << "Nhap ma sach: "; fflush(stdin);
    gets(Masach);
    cout << "Nhap ten sach: "; fflush(stdin);
    gets(Tensach);
    cout << "Nhap nha xuat ban: "; fflush(stdin);
    gets(Nhaxuatban);
    cout << "Nhap so trang: "; cin >> Sotrang;
    cout << "Nhap so tien: "; cin >> Sotien;
}
void Sach::XUAT(){
    cout << setw(15) << Masach;
    cout << setw(20) << Tensach;
    cout << setw(20)  << Nhaxuatban;
    cout << setw(10)  << Sotrang;
    cout << setw(20)  << Sotien << endl;
}

int main(){
    int n;
    Sach *ss;
    cout << "Nhap so cuon sach: "; cin >> n;
    for(int i = 0; i < n; i++){
        cout << "Nhap cuon sach thu " << i+ 1 << endl;
        ss[i].NHAP();
    }    
    cout << "\t\t\tDANH SACH CAC CUON SACH" << endl;
    cout << setw(15) << "Ma sach";
    cout << setw(20) << "Ten sach";
    cout << setw(20)  << "Nha xuat ban" ;
    cout << setw(10)  << "So trang";
    cout <<  setw(20)  << "Gia tien\n";
    for(int i = 0; i < n; i++){
        ss[i].XUAT();
    }
}
