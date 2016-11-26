#include<stdio.h>
int main()
{
    int i,j,d=0,n,s1,x=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
    for(i=0;i<n;i++)
        {
            s1=1;
            if(a[i]!=0)
                {
                    for(j=i+1;j<n;j++)
                        {
                            if(a[i]==a[j])
                                {
                                    s1=s1+1;
                                    a[j]=0;
                                }
                        }
                            if(s1>1)
                                {
                                    if(s1%2==0)
                                        {
                                            d=d+s1/2;
                                        }
                                    if(s1%2==1)
                                        {
                                            d=d+(s1-1)/2;
                                        }
                                }
                    }
        }
    printf("%d",d);
    return 0;
}
