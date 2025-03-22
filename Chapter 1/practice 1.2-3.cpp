#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    int i=1;
    for(;;){
        if(100*i*i < pow(2,i)){cout << i << endl; break;}
        //i=15开始100n2优于2^n
        else i++;
    }
    return 0;
}
