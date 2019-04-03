#include<stdio.h>
 
int main(){

    int i=0,j,k,n,thm=0,t;
    int a[50];
    int b[50];

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
        b[0]=head;j=0;
        for(i=1;i<n;i++){
              b[i]=a[j];j++;
        }printf("\n");

        printf("\n");

        for(i=0;i<(n-1);i++){
            j=i+1;
            t=(b[j]-b[i]);
            if(t >= 0){
                thm+=t;printf("( %d - %d )+",b[j],b[i]);
            }
            else{
                thm+=(-1)*t;printf("( %d - %d )+",b[i],b[j]);
            }

        }
        printf("\b\nTOTAL HEAD MOVEMENTS = %d\n",thm);

return 0;
}
