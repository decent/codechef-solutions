#include <stdio.h>
 
int t;
    
int main()
{
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int a[n],i,j,p=1,s=0,count=0;
        for(i=0;i<n;i++)
            scanf("%d", &a[i]);
        
        for(i=0;i<n;i++)
        {
            s=0;p=1;
            for(j=i;j<n;j++)
            {
                s+=a[j];p*=a[j];
                if(s==p)
                count++;
            }
        }
        printf("%d\n", count);
    }
}  
