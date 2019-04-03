#include<stdio.h>

int main(){

    int i=0,j,n,count=0,lowest=99999,diff,t,tbh=0;
    int a[50],index;
    int b[50],bflag[50];
     printf("\n NAME: ORUSSA FIRDOUS\n ROLL NO: 17BCS015");
 

    printf("\nEnter the I/O requests.(press -1 to stop).\n");
    while(1){
        scanf("%d",&n);
        if(n>=0 && n<= 199){
            a[i]=n;i++;
        }
        else if(n == -1)
        break;

        else
            printf("\nEnter a valid input.\n");
    }

    n=i;printf("\n");
    printf("\nThe I/O request is:");
    for(i=0;i<n;i++)
        printf("  %d  ",a[i]);
        int head;
        printf("\nEnter the r/w head.");
        scanf("%d",&head);
        n=n+1;
        b[0]=head;j=0;bflag[0]=0;
        for(i=1;i<n;i++){
              b[i]=a[j];j++;bflag[i]=0;
        }printf("\n");
 index=0;
        while(count != n){i=index;
            lowest = 99999;
               for(j=0;j<n;j++){
                    if(bflag[j] != 1 && j != i){
                  diff=b[j]-b[i];
                  if(diff >= 0)
                    {diff=diff;}

                  else
                    diff=(-1)*diff;

                  if(lowest > diff){
                    lowest = diff;index=j;
                  }
                }
               }count++;bflag[i]=1;
               if(count != n){
                t=b[index]-b[i];
                if(t>=0){
                    tbh+=t; printf("( %d - %d )+",b[index],b[i]);

                }
                else{
                    tbh+=(-1)*t;printf("( %d - %d )+",b[i],b[index]);
                }
                }
        }printf("\b\b");
        printf("\n TOTAL HEAD MOVEMENT = %d ",tbh);

return 0;}
