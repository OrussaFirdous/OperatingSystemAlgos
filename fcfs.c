
#include<stdio.h>
#include<stdlib.h>

struct fcfs{

	int pid;
	int at;
	int bt;
	int ct;
	int tat;
	int wt;
	int rt;
}process[10];

int main(){

    int i,j,t,t1,t2,t3,sct=0,stat=0,swt=0;
     float awt ,atat;
     printf("NAME: ORUSSA FIRDOUS\n");
    printf("ROLL No.- 17BCS015\n");
	printf("\nEnter the number of processes you want to have.");
	scanf("%d",&t);

     printf("\n Enter the process_no. , arrival time and burst time one by one.");
     
     for(i=0;i<t;i++){

     	scanf("%d%d%d",&process[i].pid,&process[i].at,&process[i].bt);
      }
        
    for(i=0;i<(t-1);i++){
      	for(j=i+1;j<t;j++){

      		if(process[i].at > process[j].at){
      			t1=process[i].pid;process[i].pid=process[j].pid;process[j].pid=t1;
      		    t1=process[i].at;process[i].at=process[j].at;process[j].at=t1;
      		    t1=process[i].bt;process[i].bt=process[j].bt;process[j].bt=t1;
      		}
      	}
    }          
        process[0].ct=0;
     for(i=0;i<t;i++){
     	if(i == 0){
     		process[0].rt=0;
     	}
     	else
            process[i].rt=process[i-1].ct-process[i].at;
         
            sct+=process[i].bt;
            process[i].ct+=sct;
            process[i].wt=process[i].rt;
            process[i].tat=process[i].wt+process[i].bt;
}
        printf("\nProcess\t AT \tBT \tCT \tTAT \tWT \tRT\n\n");
      for(i=0;i<t;i++){
      	printf("P%d\t%d\t%d\t%d\t%d\t%d\t%d\n",process[i].pid,process[i].at,process[i].bt,process[i].ct,process[i].tat,process[i].wt,process[i].rt);
      swt+=process[i].wt;stat=stat+process[i].tat;}

printf("\n");

  for(i=0;i<t;i++){
    printf("|--P%d--%d",process[i].pid,process[i].ct);
}    

   awt=(float)swt/(float)(t);
              atat=(float)stat/(float)(t);
           printf("\n Average waiting time = %f\n Average Turn Around Time = %f\n",awt,atat);

}
