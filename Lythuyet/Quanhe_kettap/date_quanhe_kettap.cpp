#include <bits/stdc++.h>

using namespace std;

class date{
private:
    int ngay, thang, nam;
public:
    void nhap();
    void xuat();
};
void date::nhap(){
     cout << "Nhap ngay, thang, nam: ";
     cin >> ngay >> thang >> nam;
}
void date::xuat(){
    cout << ngay << '/' << thang << '/' << nam << '\n';
}
class hs{
private:
    char hoten[25];
    char gioitinh[4];
    date ngaysinh;
    float diemtb;
public:
    void nhap();
    void xuat();
};

void hs::nhap(){
    cout << "Nhap ho ten: "; fflush(stdin);
    gets(hoten);
    cout << "Nhap gioi tinh: "; fflush(stdin);
    gets(gioitinh);
    cout << "Ngay thang nam sinh:\n";    
    ngaysinh.nhap();
    cout << "Nhap diem tb: ";
    cin >> diemtb;
}
void hs::xuat(){
    cout << "\nHo ten: " << hoten << '\n';
    cout << "Gioi tinh: " << gioitinh << '\n';
    cout << "Ngay sinh: "; 
    ngaysinh.xuat();
    cout << "Diem tb: " << diemtb << '\n';
}

int main(){
    hs hs1;
    hs1.nhap();
    hs1.xuat();
}

