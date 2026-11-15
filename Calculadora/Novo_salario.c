#include<stdio.h>
int main(){
int sal, ano_atual ;
float novosal, perc;
printf("Em que ano estamos ?");
scanf("%d", &ano_atual);
sal = 1000;
perc = 1.5/100;
novosal = sal + (perc * sal);
for(int i = 2007 ; i <= ano_atual; i++ ){
    perc = perc * 2;
    novosal = novosal + perc * novosal;
}
printf("%.2f", novosal);

return 0;
}
