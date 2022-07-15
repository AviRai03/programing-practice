#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Hour_Glass_Sum(int input_array[6][6])
{

    int Values[16];
    for(int i =0; i<16; i++)
    {
        for (int r = 0; r < 4; r++)
       {
        for (int c = 0; c < 4; c++)
        {
            Values[i]=input_array[r][c]+input_array[r+1][c]+input_array[r+2][c]+input_array[r+1][c+1]+input_array[r][c+2]+input_array[r+1][c+2]+input_array[r][c+2];
        }   
       }   
    }
    int temp;
    for (int i = 0; i < 16; i++)
    {
        if (temp<Values[i])
        {
            temp=Values[i];
        }
    }
    printf("%d",temp);
}
int main()
{
    int input_array[6][6];
    for (int r = 0; r < 6; r++)
    {
        for (int c = 0; c < 6; c++)
        {
            scanf("%d",input_array[r][c]);
        }
    }
    Hour_Glass_Sum(input_array);

}
 46  
jyt6jsj6sd.c
@@ -0,0 +1,46 @@
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() 
{

    int n;
    scanf("%d", &n);
    int length=2*n-1;
    int start=0;
    int end=length-1;
    int ary[length][length];
    while(n!=0)
    {
      for(int i=start; i<=end; i+=1)
      {
          for( int j=start; j<=end; j+=1)
          {
              if(i==start||i==end||j==start||j==end)
              {
                  ary[i][j]=n;

              }
          } 
      }
              start++;
              end--;
              n--;

          }
          for(int i=0; i<=length; i+=1)
          {
               for( int j=0; j<=length; j+=1)
               {
                   printf("%d",ary[i][j]);

               }

                   printf("\n");
          }       
        return 0;  
      }
