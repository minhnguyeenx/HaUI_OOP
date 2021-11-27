#include <bits/stdc++.h>

using namespace std;
class Nhanvien;
class Date{
	private:
		int day, month, year;
	public:
        friend class Nhanvien;
};
class Phongban{
    private:
        int maPb;
        char tenPb[30];
        char truongPhong[10];
        int soNv;
    public:
        friend void in_taichinh(Nhanvien a[], int n);    
        friend class Nhanvien;
};
class Nhanvien{
    private:
        int maNv;
        char hoDem[25];
        char ten[10];
        Date ngaySinh;
        Phongban phong;
    public:
        void nhap();
        void xuat();
        friend void in_taichinh(Nhanvien a[], int n);
        friend void tangdan(Nhanvien a[], int n);
        friend void chen(Nhanvien a[], int &n);
        friend void xoama(Nhanvien a[], int &n);
};
void Nhanvien::nhap(){
    cout << "Nhap ma nhan vien: "; cin >> maNv;
    cout << "Nhap ho dem: "; fflush(stdin); gets(hoDem);
    cout << "Nhap ten: "; fflush(stdin); gets(ten);
    cout << "Nhap ngay sinh: " << endl;
    cout << "Nhap ngay: "; cin >> ngaySinh.day;
    cout << "Nhap thang: "; cin >> ngaySinh.month;
    cout << "Nhap nam: "; cin >> ngaySinh.year;
    cout << "Nhap phong ban: " << endl;
    cout << "Nhap ma phong ban: "; cin >> phong.maPb;
    cout << "Nhap ten phong ban: "; fflush(stdin); gets(phong.tenPb);
    cout << "Nhap ten truong phong: "; fflush(stdin); gets(phong.truongPhong);
    cout << "So nhan vien: "; cin >> phong.soNv;
}
void tieude(){
    cout << setw(10) << "Ma Nv";
    cout << setw(25) << "Ho dem";
    cout << setw(10) << "Ten";
    cout << setw(15) << "Ngay sinh";
    cout << setw(10) << "Ma PB";
    cout << setw(30) << "Ten PB";
    cout << setw(10) << "TPB";
    cout << setw(10) << "So NV" << endl;
}
void Nhanvien::xuat(){
    cout << setw(10) << maNv;
    cout << setw(25) << hoDem;
    cout << setw(10) << ten;
    cout << setw(7) << ngaySinh.day << "/" << setw(2) << ngaySinh.month << "/"
                        << setw(4) << ngaySinh.year;
    cout << setw(10) << phong.maPb;
    cout << setw(30) << phong.tenPb;
    cout << setw(10) << phong.truongPhong;
    cout << setw(10) << phong.soNv << endl;
}
void in_taichinh(Nhanvien a[], int n){
    for(int i = 0; i < n; i++){
        if(strcmp(a[i].phong.tenPb, "Tai chinh") == 0){
            a[i].xuat();
        }
    }
}
void tangdan(Nhanvien a[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(strcmp(a[i].ten, a[j].ten) > 0){
                Nhanvien tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }    
}
void chen(Nhanvien a[], int &n){
    int k;
    Nhanvien n1;
    do {
        cout << "Nhap vi tri can chen: "; cin >> k;
    }while(k <= 0 || k >= n);
    cout << "Nhap vao nhan vien moi: " << endl;
    n1.nhap();
    a = (Nhanvien *) realloc(a, (n+1)*sizeof(Nhanvien));
    for(int i = n; i >= k; i--){
        a[i] = a[i-1];
    }
    a[k-1] = n1;
    n++;
}
void xoama(Nhanvien a[], int &n){
    for(int i = 0; i < n; i++){
        while(a[i].maNv == 123){
            for(int j = i; j < n; j++){
                a[j] = a[j+1];
            }
            n--;
            a = (Nhanvien *) realloc(a, n*sizeof(Nhanvien));
        }
    }
}
int main(){
    Nhanvien *a;
    int n;
    do{
        cout << "Nhap so nhan vien: "; 
        cin >> n;
    }
    while(n <= 0);
    a = new Nhanvien[n];
    for(int i = 0; i < n; i++){
        cout << "Nhap nhan vien thu " << i+1 << endl;
        a[i].nhap();
    }
    cout << "Danh sach nhan vien: " << endl;
    tieude();
    for(int i = 0; i < n; i++){
        a[i].xuat();
    }
    cout << "Danh sach nhan vien phong tai chinh: " << endl;
    tieude();
    in_taichinh(a, n);
    cout << "Danh sach nhan vien duoc sap xep: " << endl;
    tieude();
    tangdan(a, n);
    for(int i = 0; i < n; i++){
        a[i].xuat();
    }
    cout << "Danh sach sau khi chen them nhan vien" << endl;
    chen(a, n);
    tieude();
    for(int i = 0; i < n; i++){
        a[i].xuat();
    }
    cout << "Danh sach nhan vien sau khi xoa ma 123" << endl;
    xoama(a, n);
    tieude();
    for(int i = 0; i < n; i++){
        a[i].xuat();
    }
}

