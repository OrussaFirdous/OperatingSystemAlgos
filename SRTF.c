#include <stdio.h>
#include <stdlib.h>

struct sjf{

	int at;int bt; int wt;int ct;int id;int tat;int rt; 

}p[50];

int main(){

	int i,j,k,t;
	int n,smallest,end,swt=0,count =0,stat=0;
    float awt,atat;
    printf("\n NAME:ORUSSA FIRDOUS\nROLL NO: 17BCS015");
	printf("\nEnter the no. of processes you want to have.\n");
	scanf("%d",&n);

	int arrival[n],burst[n];

	printf("\nEnter the c process id ,arrival time and burst time for the process.\n");
	for(i=0;i<n;i++){
		scanf("%d%d%d",&p[i].id,&p[i].at,&p[i].bt);
        
         arrival[i]=p[i].at;burst[i]=p[i].bt;
	}
	
	
	 p[9].bt=9999; 
      for(t=0;count !=n;t++){
         
              smallest=9;
              for(i=0;i<n;i++){
              	if(p[i].at <= t &&  p[i].bt< p[smallest].bt && p[i].bt > 0)
              		smallest =i;
              }p[smallest].bt--;
 
          
                     if(p[smallest].bt == 0){
                            
                            count++;
                            end=t+1;
                            p[smallest].ct=end;p[smallest].wt=end-p[smallest].at-burst[smallest];
                            p[smallest].tat=end - p[smallest].at;p[smallest].rt=p[smallest].ct-arrival[smallest];
                     }   
             
           }

           printf("\nPid \tAT\tBT\tCT\tTAT\tWT\tRT\n");
           for(i=0;i<n;i++){

           	printf(" %d\t %d\t %d\t %d\t %d\t %d\t %d",p[i].id,p[i].at,burst[i],p[i].ct,p[i].tat,p[i].wt,p[i].rt);
           	swt+=p[i].wt;
           	stat+=p[i].tat;
           	printf("\n");
           }

              awt=(float)swt/(float)(n);
              atat=(float)stat/(float)(n);
           printf("\n Average waiting time = %f\n Average Turn Around Time = %f\n",awt,atat);

}
