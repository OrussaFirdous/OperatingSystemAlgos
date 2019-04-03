#include<stdio.h>
#include<stdlib.h>

int main(){


     int n1;  /*For the number of memory blocks*/
     int n,i,j,k; /*For the number of processes.*/
     int ir,er;
      printf("\n NAME:ORUSSA FIRDOUS\nROLL NO: 17BCS015");
	printf("\nEnter the no. of processes you want to have.\n");
	
     printf("\nEnter the number of memory  blocks you want to have.");
     scanf("%d",&n1);

     int *a;
     a=(int*)malloc(n1*sizeof(int));

          int *aflag;
     aflag=(int*)malloc(n1*sizeof(int));             /*Flags for memrory blocks*/

       for(i=0;i<n1;i++){
       	aflag[i]=0;
       }


        int *chart;       /* To keep track of the index of the element.*/
     chart=(int*)malloc(n1*sizeof(int));

     printf("\n Enter the size of each block.");
     for(i=0;i<n1;i++){

     	scanf("%d",&a[i]);
     }

     printf("\n Enter the number of processes."); 
     scanf("%d",&n);
     
     int *b;
     b=(int*)malloc(n*sizeof(int)); 

     int *bflag;                    /* Flags for the processes.*/
     bflag=(int*)malloc(n*sizeof(int));

        for(i=0;i<n;i++){
       	bflag[i]=0;
       }

     printf("\n Enter the size of each process.");
     for(i=0;i<n;i++){

     	scanf("%d", &b[i]);
     }
  k=0;ir=0;er=0;
     for(i=0;i<n;i++){

     	   for(j=k;j<n1;j++){
                   
                   if(((a[j]-b[i]) >= 0) && (aflag[j] == 0)){

                   	      aflag[j]=1;
                          chart[j]=i;
                          bflag[i]=1;
                          ir+=a[j]-b[i];

                           if(k==(n1-1))
                           	k=0;
                           else
                            k=j+1; 
                              break;                         
               }
           }
     }                                                             

        for(i=0;i<n1;i++){

        	printf("|\t%d\t|",a[i]);
        	printf("\b");

        }printf("|");

           printf("\n");

                 for(i=0;i<n1;i++){
                         
                         if(aflag[i] == 1){
                          printf("|\tP%d=%d\t|",chart[i],b[chart[i]]);
                            }

                         else
                         	{printf("|\tNA\t|");
                                  er+=a[i];}
                        }printf("\b");

 printf("\n");

 for(i=0;i<n;i++){
 	if(bflag[i] == 0)
 	printf("\n P%d cannot be alloted.",i);
 
 }
 printf("\n The internal fragmentation is: %d",ir);
   
printf("\n The external fragmentation is: %d",er); 


    return 0;

}