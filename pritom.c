#include <stdio.h>
#include <math.h>

int main(){
    int x;
    double y;

    scanf("%d",&x);

    y = ((x-1)/(x*1.0)) + pow(((x-1)/(x*1.0)), 2)/2 + pow(((x-1)/(x*1.0)), 3)/4 +pow(((x-1)/(x*1.0)),4)/4;


    printf("%lf\n", y);


}
