#include <bits/stdc++.h>
/*
Cài đặt lớp Hàng Hóa với các thuộc tính: Mã hàng, Tên hàng, 
Đơn giá, Số lượng và các phương thức:  
- NHAP: nhập thông tin của mặt hàng.  
- XUAT: xuất thông tin của mặt hàng lên màn hình 
(dữ liệu xuất trên 1 dòng) kèm theo Thành tiền.   
Viết hàm main nhập vào một danh sách gồm n mặt hàng. 
In danh sách các mặt hàng vừa nhập ra màn hình. 
*/
using namespace std;
class HangHoa{
    private:
        char Mahang[20];
        char Tenhang[50];
        long Dongia;
        int SoLuong;
    public:
        void NHAP();
        void XUAT();
        long THANHTIEN(){
            return Dongia*SoLuong;
        }
};

void HangHoa::NHAP(){
    cout << "Nhap ma hang: "; fflush(stdin);
    gets(Mahang);
    cout << "Nhap ten hang: "; fflush(stdin);
    gets(Tenhang);
    cout << "Nhap don gia: "; cin >> Dongia;
    cout << "Nhap so luong: "; cin >> SoLuong;
}
void HangHoa::XUAT(){
    cout << setw(15) << Mahang;
    cout << setw(20) << Tenhang;
    cout << setw(20)  << Dongia ;
    cout << setw(10)  << SoLuong;
    cout << setw(20)  << THANHTIEN() << endl;
}

int main(){
    int n;
    HangHoa *hh;
    cout << "Nhap so mat hang: "; cin >> n;
    for(int i = 0; i < n; i++){
        cout << "Nhap mat hang thu " << i+ 1 << endl;
        hh[i].NHAP();
    }    
    cout << "\t\t\tDANH SACH CAC MAT HANG" << endl;
    cout << setw(15) << "Ma hang";
    cout << setw(20) << "Ten hang";
    cout << setw(20)  << "Don gia" ;
    cout << setw(10)  << "So luong";
    cout <<  setw(20)  << "Thanh tien\n";
    for(int i = 0; i < n; i++){
        hh[i].XUAT();
    }
}
