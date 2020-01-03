#include <iostream>
#include <cmath>
using namespace std;

int findDivisor(int N){
    int x = 2;
    while(x<=N){
        if(N%x==0){
            return x;
        }
        x++;
    }

}

int main(){
    int num;
    cin >> num;
    cout << findDivisor(num);

}
