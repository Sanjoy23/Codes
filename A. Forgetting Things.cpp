#include <bits/stdc++.h>
using namespace std;


int main(){

 int a, b;
cin >> a >> b;

if(a == b){
    printf("%d0 %d1\n",a, b);
}
else if(a == 9 && b == 1){
    printf("%d9 %d00\n",a, b);
}else if(a + 1 == b){
    printf("%d %d\n",a, b);
}else{
    cout<<-1<<endl;
}

}
