#include <bits/stdc++.h>
#include <string.h>
using namespace std;

class hs{
    private:
        char hoten[30];
        float dtb;
    public:
        float getdtb(){
            return dtb;
        }
        void setdtb(float d1){
            dtb = d1;
        }
        char *gethoten(){
            return hoten;
        }
        void sethoten(char *ht) {
            strcpy(hoten, ht);
        }
};

int main(){
    hs hs1;
    hs1.sethoten("Hoang Van Dung");
    cout << "Ho ten: " << hs1.gethoten() << '\n';
    hs1.setdtb(9.5);
    cout << "DTB = " << hs1.getdtb();
}

