#include <bits/stdc++.h>
/*
Cài đặt lớp SINHVIEN bao gồm các thuộc tính miêu tả các sinh viên như: 
Mã sinh viên, Họ và tên, tuổi, điểm và các phương thức: 
- NHAP: nhập toàn bộ các thông tin cho sinh viên 
- XUAT: xuất toàn bộ thông tin của sinh viên ra màn hình. 
Cài đặt hàm main khai báo hai đối tượng sinh viên là a và b.
 Sử dụng các phương thức của hai sinh viên để nhập vào thông tin của sinh viên a, b.
 Xuất thông tin của 2 sinh viên ra màn hình.
*/
using namespace std;
class SINHVIEN{
    private:
        char Masv[20];
        char Hoten[30];
        int Tuoi;
        int Diem;
    public:
        void NHAP();
        void XUAT();
};
void SINHVIEN::NHAP(){
    cout << "Nhap ma sinh vien: "; fflush(stdin);
    gets(Masv);
    cout << "Nhap ho va ten: ";  fflush(stdin);
    gets(Hoten);
    cout << "Nhap tuoi: "; cin >> Tuoi;
    cout << "Nhap diem: "; cin >> Diem;
}
void SINHVIEN::XUAT(){
    cout << "\tMa sinh vien: " << Masv << endl;
    cout << "\tHo va ten: " << Hoten << endl;
    cout << "\tTuoi: " << Tuoi << endl;
    cout << "\tDiem: " << Diem << endl;
}
int main(){
    SINHVIEN a;
    SINHVIEN b;
    cout << "Nhap thong tin sinh vien a:" << endl;
    a.NHAP();
    cout << "Nhap thong tin sinh vien b:" << endl;
    b.NHAP();
    cout << "Thong tin sinh vien a:" << endl;
    a.XUAT();
    cout << "Thong tin sinh vien b:" << endl;
    b.XUAT();
}

