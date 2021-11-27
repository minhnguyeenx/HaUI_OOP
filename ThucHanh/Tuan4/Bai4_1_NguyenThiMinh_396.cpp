#include <bits/stdc++.h>

using namespace std;
class Sinhvien{
    private:
        char Masv[10],Hoten[30];
        float DiemToan, DiemLy, DiemHoa;
    public:
        float TongDiem(){
            return DiemToan + DiemLy + DiemHoa;
        }
        void nhap();
        void xuat();
        friend void sapxep(Sinhvien *a, int n);
};
void Sinhvien::nhap(){
    cout << "Nhap msv: "; fflush(stdin); gets(Masv);
    cout << "Nhap ho ten: "; fflush(stdin); gets(Hoten);
    cout << "Nhap diem toan: "; cin >> DiemToan ;
    cout << "Nhap diem ly: "; cin >> DiemLy ;
    cout << "Nhap diem hoa: "; cin >> DiemHoa ;
}
void Sinhvien::xuat(){
    cout << setw(10) << Masv;
    cout << setw(30) << Hoten;
    cout << setw(12) << DiemToan;
    cout << setw(12) << DiemLy;
    cout << setw(12) << DiemHoa;
    cout << setw(15) << TongDiem() << endl;
}
void sapxep(Sinhvien *a, int n){
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(a[i].TongDiem() > a[j].TongDiem()){
                Sinhvien tg;
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
}
void tieude(){
    cout << setw(10) << "MaSV";
    cout << setw(30) << "Hoten";
    cout << setw(12) << "Diem Toan";
    cout << setw(12) << "Diem Ly";
    cout << setw(12) << "Diem Hoa";
    cout << setw(15) << "Tong Diem" << endl;
}
int main(){
    Sinhvien *sv;
	int n;
	do {
        cout << "Nhap so sinh vien: "; cin >> n;
    }while(n <= 0);
	sv = new Sinhvien[n];
	for(int i = 0; i < n; i++){
		cout << "Nhap sinh vien thu " << i+ 1 << endl;
		sv[i].nhap();
	}
    sapxep(sv, n);
    cout << endl << "\t\t\tThong tin cac sinh vien" << endl;
	tieude();
	for(int i = 0; i < n; i++){
		sv[i].xuat();
	}
}