#include <bits/stdc++.h>

/*
Cài đặt chương trình hướng đối tượng thực hiện các yêu cầu: 
- Thiết kế, cài đặt lớp CanBo bao gồm các thuộc tính: Mã cán bộ, 
họ và tên, ngày sinh,số ngày làm việc trong tháng và các phương thức:  
- Phương thức nhap() để nhập thông tin của cán bộ. 
- Phương thức tinhLuong(): Trả về lương của cán bộ theo công thức 
Lương = Số ngày làm việc trong tháng * 250.000. 
- Phương thức xuat(): hiển thị thông tin của cán bộ ra màn hình. 
- Xây dựng chương trình chính nhập thông tin cho 1 cán bộ. 
Xuất thông tin của cán bộ đó ra màn hình và cho biết 
Lương của cán bộ đó là bao nhiêu.
*/
using namespace std;

class CanBo{
private:
    char MaCB[30];
    char HoTen[30];
    char NgaySinh[15];
    int Ngaylamviec;
public:
    void nhap();
    long tinhluong();
    void xuat();
};
void CanBo::nhap(){
    cout << "Nhap ma can bo: "; fflush(stdin);
    gets(MaCB);
    cout << "Nhap ho va ten can bo: "; fflush(stdin);
    gets(HoTen);
    cout << "Nhap ngay sinh can bo: "; fflush(stdin);
    gets(NgaySinh);
    cout << "Nhap so ngay lam viec cua can bo: "; 
    cin >> Ngaylamviec;
}
long CanBo::tinhluong(){
    return Ngaylamviec*250000;
}
void CanBo::xuat(){
    cout << "Ma can bo: " << MaCB << endl;
    cout << "Ho va ten can bo: " << HoTen << endl;
    cout << "Ngay sinh can bo: " << NgaySinh << endl;
    cout << "So ngay lam viec cua can bo: " << Ngaylamviec << endl;
}
int main(){
    CanBo a;
    a.nhap();
    cout << endl << "Thong tin cua can bo: " << endl;
    a.xuat();
    cout << "Luong cua can bo: " << a.tinhluong();
    return 0;
}