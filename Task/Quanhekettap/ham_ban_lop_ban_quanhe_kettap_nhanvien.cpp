#include <bits/stdc++.h>

using namespace std;
class nhanvien;
class date{
	private:
		int day, month, year;
	public:
        friend class nhanvien;
};
class phongban{
    private:
        int maPb;
        char tenPb[30];
        char truongPhong[10];
        int soNv;
    public:
        friend void in_taichinh(nhanvien a[], int n);    
        friend class nhanvien;
};
class nhanvien{
    private:
        int maNv;
        char hoDem[25];
        char ten[10];
        date ngaySinh;
        phongban phong;
    public:
        void nhap();
        void xuat();
        friend void in_taichinh(nhanvien a[], int n);
        friend void tangdan(nhanvien a[], int n);
        friend void chen(nhanvien a[], int &n);
        friend void xoama(nhanvien a[], int &n);
};
void nhanvien::nhap(){
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
    cout << "Nhap ten truowng phong: "; fflush(stdin); gets(phong.truongPhong);
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
void nhanvien::xuat(){
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
void in_taichinh(nhanvien a[], int n){
    for(int i = 0; i < n; i++){
        if(strcmp(a[i].phong.tenPb, "Tai chinh") == 0){
            a[i].xuat();
        }
    }
}
void tangdan(nhanvien a[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(strcmp(a[i].ten, a[j].ten) > 0){
                nhanvien tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }    
}
void chen(nhanvien a[], int &n){
    int k;
    nhanvien n1;
    cout << "Nhap vi tri can chen: "; cin >> k;
    cout << "Nhap vao nhan vien moi: " << endl;
    n1.nhap();
    a = (nhanvien *) realloc(a, (n+1)*sizeof(nhanvien));
    for(int i = n; i >= k; i--){
        a[i] = a[i-1];
    }
    a[k] = n1;
    n++;
}
void xoama(nhanvien a[], int &n){
    for(int i = 0; i < n; i++){
        while(a[i].maNv == 123){
            for(int j = i; j < n; j++){
                a[j] = a[j+1];
            }
            n--;
            a = (nhanvien *) realloc(a, n*sizeof(nhanvien));
        }
    }
}
int main(){
    nhanvien *a;
    int n;
    do{
        cout << "Nhap so nhan vien: "; 
        cin >> n;
    }
    while(n <= 0);
    a = new nhanvien[n];
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
    cout << "Danh sach nhan vien duocj sap xep: " << endl;
    tieude();
    tangdan(a, n);
    for(int i = 0; i < n; i++){
        a[i].xuat();
    }
    cout << "Chen nhan vien" << endl;
    chen(a, n);
    tieude();
    for(int i = 0; i < n; i++){
        a[i].xuat();
    }
    cout << "Xoa ma 123" << endl;
    xoama(a, n);
    tieude();
    for(int i = 0; i < n; i++){
        a[i].xuat();
    }
}

