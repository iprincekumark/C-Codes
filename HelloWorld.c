#include <stdio.h>

int main(void) {
	int D1,V1,D2,V2,P,d,TV=0,j, bd,i,min;
	scanf("%d", &D1);
	scanf("%d", &V1);
	scanf("%d", &D2);
	scanf("%d", &V2);
	scanf("%d", &P);
	fflush(stdin);
	if((0<D1 && D1<101)&&(0<V1 && V1<101)&&(0<D2 && D2<101)&&(0<V2 && V2<101)&&(0<P && P<1001))
	{
	    min = (D1) < (D2) ? D1 : D2;
	    if(min==D1)
	    {
	        for(i=D1;i<D2;i++)
	        {
	            TV=TV+V1;
	            if(TV >= P)
	            {
	                bd=i;
	                break;
	            }
	        }
	    }
	    else
	    {
	        for(i=D2;i<D1;i++)
	        {
	            TV=TV+V2;
	            if(TV >= P)
	            {
	                bd=i;
	                break;
	            }
	        }
	    }
	    fflush(stdin);
        j=(D1) > (D2) ? D1 : D2;
	    for(i=j;i<10000000;i++)
	    {
	        TV=TV+(V1+V2);
	        if(TV >= P)
	        {
	            d=i;
	            break;
	        }
	    }
	    printf("%d",d);
	    return 0;
	}
	else
	return 0;
}

