#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    int i = 2;
	for(;;){
        int a=8*i*i;
        double b=64*i*log2(i);
        if(a>b){cout << i << "\n";;break;}//n=44归并大于插入
        else i++;
    }
    return 0;
}
