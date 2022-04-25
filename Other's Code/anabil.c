#include <stdio.h>
#include <math.h>
int main(void){
double degree=15;
double cream,paste,ata;

for(;degree<=90;degree=degree+15){
     cream=degree*(3.14/180);
     paste=sin(cream);
     ata=cos(cream);

    printf("angle %.2lf sin %.2lf cos %.2lf\n",degree,paste,ata);
}
return 0;
}
