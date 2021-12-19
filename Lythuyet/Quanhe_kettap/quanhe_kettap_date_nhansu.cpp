#include <bits/stdc++.h>

using namespace std;

class date{
private:
    int d, m, y;
public:
    void nhap();
    void xuat();
};
void date::nhap(){
     cout << "Nhap ngay, thang, nam: ";
     cin >> d >> m >> y;
}
void date::xuat(){
    cout << d << '/' << m << '/' << y << '\n';
}
class hs{
private:
    char maNS[15];
    char hoTen[25];
    date NS;
public:
    void nhap();
    void xuat();
};

void hs::nhap(){
    cout << "Nhap ma nhan su : "; fflush(stdin);
    gets(maNS);
    cout << "Nhap ho ten: "; fflush(stdin);
    gets(hoTen);
    cout << "Nhap ngay sinh:\n";    
    NS.nhap();
}
void hs::xuat(){
    cout << "Ma nhan su: " << maNS << '\n';
    cout << "Ho ten: " << hoTen << '\n';
    cout << "Ngay sinh: "; 
    NS.xuat();
}

int main(){
    hs ns1;
    ns1.nhap();
    cout << "Thong tin nhan su vua nhap:\n";
    ns1.xuat();
}

