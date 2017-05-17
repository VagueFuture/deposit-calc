#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "deposit.h" 

double provsrok (double a)
{
		
 while(a<0 || a>365) return(0);
 	return (1);
	}
	
	double provsumm (double b)
	{
     while(b<10000) return(0);
 	return (1);
	}
	
		
	 
	double sravnenie(double a,double b) 
	{
		double prc=0;
	
	if (b<100000)
{///summ<100000
	if (a<30)
	{///srok<30
	prc=10%365*a;
	//printf("%lf \n",prc);
	b=b-prc;
	printf("Vash srok %lf < 30 dney vi poluchaete shtraf 10 procentov vasha cymma %lf \n",a,b);
	return (b);
	}///srok<30
	
	
		if (a>30 && a<=120)
	{///srok<120
	prc=2%365*a;
	//printf("%lf \n",prc);
	b=b+prc;
	printf("Vash srok %lf <= 120 dney vi poluchaete 2 procenta vasha cymma %lf \n",a,b);
	return (b);
	}///srok<120
	
	
			if (a>120 && a<=240)
	{///srok<240
	prc=6%365*a;
	//printf("%lf \n",prc);
	b=b+prc;
	printf("Vash srok %lf < 240 dney vi poluchaete 6 procentov vasha cymma %lf \n",a,b);
	return (b);
	}///srok<240
	
	
				if (a>240 && a<366)
	{///srok<365
	prc=12%365*a;
	//printf("%lf \n",prc);
	b=b+prc;
	printf("Vash srok %lf <= 365 dney vi poluchaete 12 procentov vasha cymma %lf \n",a,b);
	return (b);
	}///srok<365
	
}///summ<100000


if (b>=100000)
{///summ>100000
	if (a<30)
	{///srok<30
	prc=10%365*a;
	//printf("%lf \n",prc);
	b=b-prc;
	printf("Vash srok %lf < 30 dney vi poluchaete shtraf 10 procentov vasha cymma %lf \n",a,b);
	return (b);
	}///srok<30
	
	
		if (a>30 && a<=120)
	{///srok<120
	prc=3%365*a;
	//printf("%lf \n",prc);
	b=b+prc;
	printf("Vash srok %lf <= 120 dney vi poluchaete 3 procenta vasha cymma %lf \n",a,b);
return (b);
	}///srok<120
	
	
			if (a>120 && a<=240)
	{///srok<240
	prc=8%365*a;
	//printf("%lf \n",prc);
	b=b+prc;
	printf("Vash srok %lf < 240 dney vi poluchaete 8 procentov vasha cymma %lf \n",a,b);
	return (b);
	}///srok<240
	
	
				if (a>240 && a<366)
	{///srok<365
	prc=15%365*a;
	//printf("%lf \n",prc);
	b=b+prc;
	printf("Vash srok %lf <= 365 dney vi poluchaete 15 procentov vasha cymma %lf \n",a,b);
	return (b);
	}///srok<365
	
}///summ>100000

return(0);
}
