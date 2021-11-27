/*
class mang{
    float *a, int n;
    public:
        friend istream& operator>>(istream& is, Mang &y){
            cout << "Nhap n: ";
            is >> y.n;
            y.a = new float[y.n];
            for(int i = 0; i < n; i++){
                cout << "a[" << i << "] = ";
                is >> u.a[i];
            }
            return is;
        }
        Mang operator++(){
            for(int i = 0; i < n-1; i++){
                for(j = i+1; j < n; j++){
                    if(a[i] > a[j]){
                        float tg = a[i];
                        a[i] = a[j];
                        a[j] = tg;
                    }
                }
            }
            return *this; //mang ẩn
        }
};
*/