#include <bits/stdc++.h>
using namespace std;

void foo(int i){
    if(i>1){
        foo(i/2);
        foo(i/2);
    }
    printf("*");

}


int main(){

    foo(4);
    return 0;


}
