#include <bits/stdc++.h>

using namespace std;
class date{
	private:
		int day, month, year;
	public:
		void nhap();
		void xuat();
};
void date::nhap(){
	cout << "Nhap ngay: "; cin >> day;
	cout << "Nhap thang: "; cin >> month;
	cout << "Nhap nam: "; cin >> year;
}
void date::xuat(){
	cout << setw(7) << day << "/" << setw(2) << month << "/" << setw(4) << year;
}
class xehoi{
    private:
        char nhanhieu[15], hangsx[20], kieudang[10], mauson[10], xuatxu[15];
        date namsx;
        long giaban;
    public:
    void nhap();
    void xuat();
    friend void in_toyota(xehoi a[], int n);
    friend void sx_giaban(xehoi a[], int n);
};

void xehoi::nhap(){
    cout << "Nhap nhan hieu: "; fflush(stdin); gets(nhanhieu);
    cout << "Nhap hang san xuat: "; fflush(stdin); gets(hangsx);
    cout << "Nhap kieu dang: "; fflush(stdin); gets(kieudang);
    cout << "Nhap nam san xuat: " << endl; namsx.nhap();
    cout << "Nhap mau son: "; fflush(stdin); gets(mauson);
    cout << "Nhap xuat xu: "; fflush(stdin); gets(xuatxu);
    cout << "Nhap gia ban: "; cin >> giaban;
    
}
void tieude(){
    cout << setw(15)  << "Nhan hieu";
    cout << setw(20)  << "Hang san xuat";
    cout << setw(15)  << "Kieu dang";    
    cout << setw(15)  << "Nam sx";    
    cout << setw(10)  << "Mau son";
    cout << setw(15)  << "Xuat xu";
    cout << setw(15)  << "Gia ban" << endl;    
}
void xehoi::xuat(){
    cout << setw(15) << nhanhieu;
    cout << setw(20) << hangsx;
    cout << setw(15) << kieudang;    
    cout << setw(15) ; namsx.xuat();    
    cout << setw(10) << mauson;
    cout << setw(15) << xuatxu;
    cout << setw(15) << giaban << endl;
}
void sx_giaban(xehoi a[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(a[i].giaban > a[j].giaban){
                xehoi tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
}
void in_toyota(xehoi a[], int n){
    for(int i = 0; i < n; i++){
        if(strcmpi(a[i].hangsx, "toyota") == 0)
            a[i].xuat();
    }
}
int main(){
    xehoi *a;
    int n;
    do{
        cout << "Nhap so xe hoi: "; 
        cin >> n;
    }
    while(n <= 0);
    a = new xehoi[n];
    for(int i = 0; i < n; i++){
        cout << "Nhap xe hoi thu " << i+1 << endl;
        a[i].nhap();
    }
    cout << "Danh sach xe hoi: " << endl;
    tieude();
    for(int i = 0; i < n; i++){
        a[i].xuat();
    }
    cout << "Danh sach xe hoi co hang toyota: " << endl;
    tieude();
    in_toyota(a, n);
    cout << "Danh sach xe hoi duoc sap xep theo gia ban" << endl;
    sx_giaban(a, n);
    tieude();
    for(int i = 0; i < n; i++){
        a[i].xuat();
    }
}

