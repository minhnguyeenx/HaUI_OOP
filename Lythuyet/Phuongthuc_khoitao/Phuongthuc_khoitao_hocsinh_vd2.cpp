#include <bits/stdc++.h>

using namespace std;
class Hocsinh{
	private:
		char Hoten[30], Gioitinh[5];
		int Tuoi;
		float Toan, Ly, Hoa;
	public:	
		Hocsinh(){
			strcpy(Hoten, "Nguyen Thi Minh");
			this->Tuoi = 19;
			this->Toan = 9.5;
			this->Ly = 9.0;
			this->Hoa = 8.5;
		}
		/*Hocsinh(){
			strcpy(Hoten, "Nguyen Thi Minh");
			Tuoi = 19;
			Toan = 9.5;
			Ly = 9.0;
			Hoa = 8.5;
		}*/		
		Hocsinh(char *Hoten, int Tuoi, float Toan, float Ly, float Hoa){
			strcpy(this->Hoten, Hoten);
			this->Tuoi = Tuoi;
			this->Toan = Toan;
			this->Ly = Ly;
			this->Hoa = Hoa;			
		}
		/*Hocsinh(char *hoten, int tuoi, float toan, float ly, float hoa){
			strcpy(Hoten, Hoten);
			Tuoi = tuoi;
			Toan = toan;
			Ly = ly;
			Hoa = hoa;			
		}*/
		void xuat(){
			cout << "\tHo va ten: " << Hoten << endl;
			cout << "\tTuoi: " << Tuoi << endl;
			cout << "\tDiem Toan :" << Toan << endl;
			cout << "\tDiem Ly :" << Ly << endl;
			cout << "\tDiem Hoa :" << Hoa << endl;
		}
};
int main(){
	Hocsinh hs1, hs2("Nguyen Minh", 19, 7.5, 8.5, 6.5);
	cout << "Diem hoc sinh 1: " << endl;
	hs1.xuat();
	cout << "Diem hoc sinh 2: " << endl;
	hs2.xuat();
}
