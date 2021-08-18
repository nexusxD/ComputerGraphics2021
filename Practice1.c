#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int x1, x2, y1, y2, x, y,  xmax, i, rest1, rest2;
    float pend;
    do{
    	printf("x1 y1:  ");
    	scanf("%d %d", &x1, &y1);
    	printf("x2 y2: ");
    	scanf("%d %d", &x2, &y2);
	} while (x1 <= 0 || x2 <= 0 || y1 >= 100 || y2 >= 100 );
   
    
    if (x1 > x2){
    	x = x2;
    	y = y2;
    	xmax = x1;
	} else{
		x = x1;
		y = y1;	
		xmax = x2;
	}
	printf("X\tY\n");
	for (i = x; i <= xmax; i++){
		printf ("%d\t", i);
		
    	pend=((float)(y2-y1))/((float)(x2-x1));
    
		int res= ((pend*(i-x1))+y1);
	
		printf("%0.2f\n", round(res));
	}
    return 0;
}
