#include<stdio.h>
#include<string.h>
#define max 80
int main()
{
      printf("NAME: ORUSSA FIRDOUS\n");
    printf("ROLL No.- 17BCS015\n");
    char pro[max][max];
    int ready[max],ready1[max],bt[max],at[max],ct[max],rt[max],wt[max],tat[max];
    int i,j,k,l,m=0,n,t,total=0;
    float awt=0,art=0,atat=0;
    printf("enter the no of the processes");
    scanf("%d",&n);
    printf("enter the name of the processes\n");
    for(i=0;i<n;i++)
    {
    scanf("%s",&pro[i]);
    }
    printf("enter the arrival time for the processes\n");
    for(i=0;i<n;i++)
    {
     scanf("%d",&at[i]);
    }
    printf("enter the burst time of the processes\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&bt[i]);
    }
    printf("enter the quantum time of the processes\n");
    scanf("%d",&t);

    for(i=0;i<n;i++){
        ready[i]=bt[i];
    }
    for(i=0;i<max;i++){
        ready1[i]=0;
    }
    for(i=0;i<max;i++){
         rt[i]=-1;
    }
    int flag=1;
    k=0;
    int g=0;
    l=0;
    printf("|%d",at[0]);
    printf("\n\t******GANTT CHART******\n");
    while(m<n)
    {
        if(ready[k]<=t){
          if(rt[k]==-1){
             rt[k]=total;
            }
        total+=ready[k];
        printf("|%s|%d",pro[k],total);
        ready[k]=0;
        ct[k]=total;
        wt[k]= ct[k]-at[k]-bt[k];
        tat[k]=wt[k]+bt[k];
        m++;
    }
    else if(ready[k]>t)
    {
       ready[k]=ready[k]-t;
          if(rt[k]==-1){
            rt[k]=total;
          }
          total+=t;
          printf("|%s|%d",pro[k],total);
    }
    while(at[flag]<=total&&flag<n)
    {
    ready1[g]=flag;
    g++;
    flag++;
    }
    if(ready[k]>0){
         ready1[g]=k;
         g++;
    }
    k=ready1[l];
    l++;
    }
    printf("\n");
    printf("\n");
    printf("pro\tAT\tBT\tRT\tCT\tWT\tTAT\n");
    for(i=0;i<n;i++){
    printf("%s\t%d\t%d\t%d\t%d\t%d\t%d\n",pro[i],at[i],bt[i],rt[i],ct[i],wt[i],tat[i]);
    }
    for(i=0;i<n;i++){
        art+=rt[i],atat+=tat[i],awt+=wt[i];
    }
    printf("\nAverage Waiting Time:.3%f",awt/n);
    printf("\nAverage Response Time:.3%f",art/n);
    printf("\nAverage Turn Around Time:.3%f",atat/n);
         return 0;
}