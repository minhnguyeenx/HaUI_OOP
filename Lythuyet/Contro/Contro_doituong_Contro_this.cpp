#include <bits/stdc++.h>

using namespace std;
class HCN{
	private:
		int dai, rong;
	public:
		void set(){
			cout << "Chieu dai: "; cin >> this->dai;
			cout << "Chieu rong: "; cin >> this->rong;
		}
		friend void tinh(HCN dt);
};
void tinh(HCN dt){
	cout << "Dien tich: " << dt.dai*dt.rong;
}
int main(){
	HCN a;
	a.set();
	tinh(a);
}
