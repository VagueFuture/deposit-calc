#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 int main()
 {
 	double srok=-1,summ=-1,itog,prc=0;
////////////////////////////////////////
 	printf("Vvegite srok vklada \n");
 while(srok<0 || srok>365) scanf("%lf",&srok);
 ///////////////////////////////////////
 		printf("Vvegite summu vklada MIN 10000p\n");
 while(summ<10000) scanf("%lf",&summ);	
 ////////////////////////////////////////
if (summ<100000)
{///summ<100000
	if (srok<30)
	{///srok<30
	prc=10%365*srok;
	//printf("%lf \n",prc);
	summ=summ-prc;
	printf("Vash srok %lf < 30 dney vi poluchaete shtraf 10 procentov vasha cymma %lf \n",srok,summ);
	}///srok<30
	
	
		if (srok>30 && srok<=120)
	{///srok<120
	prc=2%365*srok;
	//printf("%lf \n",prc);
	summ=summ+prc;
	printf("Vash srok %lf <= 120 dney vi poluchaete 2 procenta vasha cymma %lf \n",srok,summ);
	}///srok<120
	
	
			if (srok>120 && srok<=240)
	{///srok<240
	prc=6%365*srok;
	//printf("%lf \n",prc);
	summ=summ+prc;
	printf("Vash srok %lf < 240 dney vi poluchaete 6 procentov vasha cymma %lf \n",srok,summ);
	}///srok<240
	
	
				if (srok>240 && srok<366)
	{///srok<365
	prc=12%365*srok;
	//printf("%lf \n",prc);
	summ=summ+prc;
	printf("Vash srok %lf <= 365 dney vi poluchaete 12 procentov vasha cymma %lf \n",srok,summ);
	}///srok<365
	
}///summ<100000


if (summ>=100000)
{///summ>100000
	if (srok<30)
	{///srok<30
	prc=10%365*srok;
	printf("%lf \n",prc);
	summ=summ-prc;
	printf("Vash srok %lf < 30 dney vi poluchaete shtraf 10 procentov vasha cymma %lf \n",srok,summ);
	}///srok<30
	
	
		if (srok>30 && srok<=120)
	{///srok<120
	prc=3%365*srok;
	//printf("%lf \n",prc);
	summ=summ+prc;
	printf("Vash srok %lf <= 120 dney vi poluchaete 3 procenta vasha cymma %lf \n",srok,summ);
	}///srok<120
	
	
			if (srok>120 && srok<=240)
	{///srok<240
	prc=8%365*srok;
	//printf("%lf \n",prc);
	summ=summ+prc;
	printf("Vash srok %lf < 240 dney vi poluchaete 8 procentov vasha cymma %lf \n",srok,summ);
	}///srok<240
	
	
				if (srok>240 && srok<366)
	{///srok<365
	prc=15%365*srok;
	//printf("%lf \n",prc);
	summ=summ+prc;
	printf("Vash srok %lf <= 365 dney vi poluchaete 15 procentov vasha cymma %lf \n",srok,summ);
	}///srok<365
	
}///summ>100000
 return(0);	
 }