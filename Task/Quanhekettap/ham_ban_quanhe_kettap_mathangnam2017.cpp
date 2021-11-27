#include <bits/stdc++.h>

using namespace std;
/*
date
int day, month, year;
//không có nhập, xuất -> phải dùng lớp bạn
*/
/*
HANG
char manhang[10];
char tenhang[15]
date ngaysx;
void nhap();
void xuat();
*/
//Cài đặt main nhập một danh sách các mặt hàng. In ra các mặt hàng 
//sản xuất năm 2017
class hang; //HAYYYYYYYYYYYYY
//tại vì ở hàm xuatmh trong lớp date class hang ở sau lớp date chưa được định nghĩa
//nên phải cho cái dòng này
class date{
	private:
		int day, month, year;
	public:
		friend class hang;
        friend void xuatmh(hang a[], int n); //HAYYYYYYYYYYY
        //vì hàm xuatmh không truy cập được phần tử year trong lớp date
        //nên phải cho hàm bạn này vào
};
class hang{
    private:
        char mahang[10];
        char tenhang[15];
        date ngaysx;
    public:
        void nhap();
        void xuat();
        friend void xuatmh(hang a[], int n);
};
void hang::nhap(){
    cout << "Nhap ma hang: "; fflush(stdin); gets(mahang);
    cout << "Nhap ten hang: ";fflush(stdin); gets(tenhang);
    cout << "Nhap ngay san xuat" << endl;
    cout << "Nhap ngay: "; cin >> ngaysx.day;
    cout << "Nhap thang: "; cin >> ngaysx.month;
    cout << "Nhap nam: "; cin >> ngaysx.year;
}
void hang::xuat(){
    cout << setw(10) << mahang;
    cout << setw(15) << tenhang;
    cout << setw(15) << ngaysx.day << '/' << ngaysx.month << '/' << ngaysx.year << endl;
}
void xuatmh(hang a[], int n){
    for(int i = 0; i < n; i++){
        if(a[i].ngaysx.year == 2017)
            a[i].xuat();
    }
}
void tieude(){
    cout << setw(10) << "Ma hang";
    cout << setw(15) << "Ten hang";
    cout << setw(15) << "Ngay sx" << endl;
}
int main(){
    hang *a;
    int n;
    do {
        cout << "Nhap so mat hang: ";
        cin >> n;
    }
    while(n <= 0);
    a = new hang[n];
    for(int i = 0; i < n; i++){
        cout << "Nhap mat hang thu " << i+1 << endl;
        a[i].nhap();
    }
    cout << "Danh sach vua nhap: " << endl;
    tieude();
    for(int i = 0; i < n; i++){
        a[i].xuat();
    }
    cout << "Danh sach mh sx nam 2017" << endl;
    tieude();
    xuatmh(a, n);
}

