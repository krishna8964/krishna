#include<stdio.h>
#include<string.h>
void receiver(int arr[],int x,int pattern[]){
    int result[100];
    int n=x-8;
    int j=0;
    for(int i=8;i<n;i++){
    int k=0;
    int count=0;
    while(arr[i+k==pattern[k]&&k<6 && i+k<n]){
          result[i+k]==arr[i+k];
          k++;
          count++;
    }
    i=i+k;
    if(count==6){
        i++;
    }
    if((i+k)!=n){
      result[j++]==arr[i+k];
    }
    result[j++]=arr[i+k];
    }
    for(int y=0;y<j;x++){
        printf("%d\n",result[y]);
    }
}
void sender()
{
    int n;
    printf("enter the length of the message:\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the message\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int pattern[8];
    pattern[0]=0;
    pattern[1]=1;
    pattern[2]=1;
    pattern[3]=1;
    pattern[4]=1;
    pattern[5]=1;
    pattern[6]=1;
    pattern[7]=0;
    int k=0;
    int index[50];
    int j=0;
    for(int i=0;i<n;i++)
    {
        k=0;
        int count;
       while(arr[i+k]==pattern[k]&& k<5 && i+k<n){
        count++;
        k++;
       }
       if(count==6){
            index[j++]=i+k;
       }
       i=i+k;
    }
    int result[100];
    for(int i=8;i<n;i++){
        result[i]==pattern[i];
    }
    j=0;
    int y=0;
    int x=0;
    for(int i=0;i<n;i++){
        if(i==index[y]&&y<j){
            result[x]=0;
            x++;
            y++;
        }
        result[x++]=arr[i];
    }
    for(int i=0;i<8;i++){
        result[x++]=pattern[i];
    }
    printf("%d\n",x);
    for(int k=0;k<x;k++){
        printf("%d\n",result[k]);
    }

}
int main()
{
    sender();
    return 0;
}