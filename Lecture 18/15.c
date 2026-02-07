// Spiral
#include <stdio.h>

int main()
{
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(i==0)
            {
                printf("%d\n", a[i][j]);
            }
            if(i==0 && j == 2)
            {
                printf("%d\n",a[i+1][j]);
            }
            if(i==1)
            {
                printf("%d\n",a[i+1][i+1-j]);
            }
            if(i==2 && j!=2)
            {
                printf("%d\n",a[i-1][j]);
            }
            
            
        }  
        
    }
    
    return 0;
}