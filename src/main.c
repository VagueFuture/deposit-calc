
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "deposit.h" 
//#include "deposit.c"

int main()
 {
 	double srok=-1,summ=-1;
////////////////////////////////////////
printf("Vvegite srok vklada \n");
scanf("%lf",&srok);
    provsrok(srok);
////////////////////////////////////////
printf("Vvegite summu vklada MIN 10,000p\n");
scanf("%lf",&summ);
 	provsumm(summ);
/////////////////////////////////////////
 sravnenie(srok,summ);
 
 	
 return(0);	
 }
