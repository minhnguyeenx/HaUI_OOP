#include <bits/stdc++.h>

using namespace std;
class DATE{
	private:
		int day, month, year;
	public:
		void nhap();
		void xuat();
};
void DATE::nhap(){
	cout << "Nhap ngay: "; cin >> day;
	cout << "Nhap thang: "; cin >> month;
	cout << "Nhap nam: "; cin >> year;
}
void DATE::xuat(){
	cout << day << "/" << month << "/" << year;
}
class NHANSU{
    private:
        char Hoten[30], CMTND[15];
        DATE ns;
    public:
        void nhap();
        void xuat();
        friend void sap_xep(NHANSU a[], int n);
};
void NHANSU::nhap(){
    cout << "Nhap ho ten: "; fflush(stdin); gets(Hoten);
    cout << "Nhap ngay sinh" << endl; ns.nhap();
    cout << "Nhap so CMTND: ";fflush(stdin); gets(CMTND);
}
void NHANSU::xuat(){
    cout << setw(30) << Hoten;  
    cout << setw(15) ; ns.xuat();
    cout << setw(15) << CMTND << endl;    
}
void sap_xep(NHANSU a[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(strcmp(a[i].Hoten, a[j].Hoten) > 0){
                NHANSU tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
}
void tieude(){
    cout << setw(30) << "Ho ten";  
    cout << setw(15) << "Ngay sinh";
    cout << setw(15) << "CMTND" << endl;   
}
int main(){
    NHANSU *a;
    int n;
    do{
        cout << "Nhap so nhan su: ";
        cin >> n;
    }while(n <= 0);
    a = new NHANSU[n];
    cout << "Nhap nhan su" << endl;
    for(int i = 0; i < n; i++){
        cout << "Nhap nhan su thu " << i+1 << endl;
        a[i].nhap();
    }
    cout << "Danh sach nhan su da nhap: " << endl;
    tieude();
    for(int i = 0; i < n; i++){
        a[i].xuat();
    }
    sap_xep(a, n);
    cout << "Danh sach nhan su da sap xep: " << endl;
    tieude();
    for(int i = 0; i < n; i++){
        a[i].xuat();
    }
}