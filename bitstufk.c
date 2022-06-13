#include<stdio.h>

void recive(int arr[],int n)
{
    int rec[100];
    int x=0,cnt=0,flg=0;
    for(int i=7;i<7+n;i++)
    {
        if(arr[i]==0)
        {
            if(cnt==0)
                flg=1;
            else if(cnt>0)
            {
                flg=1;
                cnt=0;
            }
            rec[x]=arr[i];
            x++;
        }
        else{
            if(flg)cnt++;
            rec[x]=arr[i];
            x++;
            if(cnt==5)
            {
                cnt=0;
                i++;
            }
        }
    }
    for(int i=0;i<x;i++)
        printf("%d ",rec[i]);
    printf("\n");
}

int main()
{
    int arr[100],res[100];
    int n;
    printf("enter the number of bits:");
    scanf("%d",&n);
     printf("enter the bits\n:");
    for(int i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);}
    res[0]=0;
    res[1]=1;
    res[2]=1;
    res[3]=1;
    res[4]=1;
    res[5]=1;
    res[6]=0;
    int x=7,flg=0;
    int cnt=0,one=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            if(cnt==0)
                flg=1;
            else if(cnt>0)
            {
                flg=1;
                cnt=0;
            }
            res[x]=arr[i];
            x++;
        }
        else{
            if(flg)cnt++;
            res[x]=arr[i];
            x++;
            if(cnt==5)
            {
                n++;
                cnt=0;
                res[x]=0;
                x++;
            }
        }
    }
    res[x+0]=0;
    res[x+1]=1;
    res[x+2]=1;
    res[x+3]=1;
    res[x+4]=1;
    res[x+5]=1;
    res[x+6]=0;
    x=x+6;
    
    for(int i=0;i<=x;i++)
        printf("%d ",res[i]);
    printf("\n");
    recive(res,n);
}