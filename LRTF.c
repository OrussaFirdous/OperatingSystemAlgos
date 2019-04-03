#include<stdio.h>
int main()
{
     printf("NAME: ORUSSA FIRDOUS\n");
    printf("ROLL No.- 17BCS015\n");
     int gant[40],gant1[40];
     int tbt=0,max=-99,pos,l=0,k=0,n=0;
     float awt=0,atat=0,art=0;
     printf("enter the number of process\n");
     scanf("%d",&n);
     int bt[n],btc[n],at[n],wt[n],ct[n],tat[n],rt[n];
     for (int i = 0; i < n; ++i)
     {
       printf("enter arrival time arrival of p%d: ",i+1);
       scanf("%d",&at[i]);
       printf("enter the burst time of p%d: ",i+1);
       scanf("%d",&bt[i]);
       btc[i]=bt[i];
       tbt+=bt[i];
       rt[i]=-1;
     }
     for (int i = 0; i < tbt;)
     {
             for (int j=0;j<n;j++)
             {
                  if(at[j]<=i&&bt[j]!=0)
                  {
                    if(max <bt[j])
                    {
                         max=bt[j];
                         pos=j;
                    }
                  }
             }
             if(rt[pos]==-1){
                rt[pos]=i-at[pos];
             }
             gant1[k++]=i;
             gant[l++]=pos;
             bt[pos]--;
             i++;
             if(bt[pos]==0){
                    ct[pos]=i;
                    wt[pos]=ct[pos]-(btc[pos]+at[pos]);
                    tat[pos]=wt[pos]+btc[pos];
          }
             max=-99;
     }
     printf("\n\t*****GANTT CHART******\n");
     for (int i = 0; i < k; ++i)
     {
            printf("%d|p%d|",gant1[i],gant[i]+1);
     }
      printf("%d\n\n",tbt);
     printf("pro.\tbt\tat\tct\twt\ttat\trt\n");
     for (int i = 0; i < n; i++)
     {
          awt+=wt[i],art+=rt[i],atat+=tat[i];
          printf("p%d\t%d\t%d\t%d\t%d\t%d\t%d\n",i+1,btc[i],at[i],ct[i],wt[i],tat[i],rt[i]);
     }
     printf("\nAverage Waiting Time: %5.2f",awt/n);
    printf("\nAverage Response Time: %5.2f",art/n);
    printf("\nAverage Turn Around Time: %5.2f",atat/n);
}