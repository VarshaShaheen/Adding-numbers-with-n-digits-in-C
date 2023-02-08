//create a class for storing BigIntegers

#include <iostream>
#include <cstdlib>

using namespace std;

class BigInt{
private:
     int *arr, size=0;
public:
   friend istream& operator>>(istream& in, BigInt& a){
        char n;
        int number;
        int i=1;
        a.arr= (int*)malloc( sizeof(int));
        in>>n;
        a.arr[0] = static_cast<int>(n - '0');
        while(n!='\n'){
            a.arr= (int *)(realloc(a.arr, i * sizeof(int)));
            number = static_cast<int>(n - '0');
            a.arr[i-1] = number;
            a.size++;
            i++;
            cin.get(n);
    }
       return in;
   }
    friend ostream& operator<<(ostream& out, BigInt& a) {
        for (int i = 0; i < a.size; i++) {
            out << a.arr[i];
        }
        return out;
    }
   };


int main(){
    BigInt a;
    cin>>a;
    cout<<a;
    return 0;
}
