#include <stdio.h>

void main () {
	int num[4][3];
	
	num[0][0] = 11;
	num[0][1] = 12;
	num[0][2] = 13;
	
	num[1][0] = 22;
	num[1][1] = 22;
	num[1][2] = 22;
	
	num[2][0] = 33;
	num[2][1] = 34;
	num[2][2] = 35;
	
	num[3][0] = 44;
	num[3][1] = 45;
	num[3][2] = 46;
	
	for(int i=0; i<4; i++) 
	{
      for(int j=0; j<3;j++) {
         printf("%d ", num[i][j]);
         if(j==2){
            printf("\n");
         }
      }
   }
}
