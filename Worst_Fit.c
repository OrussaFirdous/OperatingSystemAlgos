#include<stdio.h>
#include<stdlib.h>
int main(){

	int n1;/*Number of memory blocks.*/
	int n,i,j,k;/*Number of processes.*/
    int lowest=-99999,difference;
    int ir=0,er=0;
printf("NAME: ORUSSA FIRDOUS\n");
    printf("ROLL No.- 17BCS015\n");
   printf("\nEnter the number of memory blocks you want to have.");
   scanf("%d",&n1);

	int *a;
	a=(int*)malloc(n1*sizeof(int));

    static	int *aflag; /*Flag for the memory block*/
	aflag=(int*)malloc(n1*sizeof(int));

      printf("\n Enter the size of each memory block.");
      
      for(i=0;i<n1;i++){
      	scanf("%d",&a[i]);aflag[i]=0;
      }


    printf("\nEnter the number of processes.");
    scanf("%d",&n);

	int *b; /*for processes*/
	b=(int*)malloc(n*sizeof(int));

	static int *bflag;/*for processes*/
	bflag=(int*)malloc(n*sizeof(int));

        int *chart;       /* To keep track of the index of the element.*/
     chart=(int*)malloc(n1*sizeof(int));

      printf("\n Enter the size of each process.");
      
      for(i=0;i<n;i++){
      	scanf("%d",&b[i]);
      	bflag[i]=0;
      }

         for(i=0;i<n1;i++){

        	printf("|\t%d\t|",a[i]);
        	printf("\b");

        }printf("|");

           printf("\n");


	 for(i=0;i<n;i++){
           for(j=0;j<n1;j++){
                
                difference=a[j]-b[i];
                if(difference >=0 && aflag[j] == 0){

                  if(lowest < difference){
                	chart[i]=j;bflag[i]=1;
                	lowest=difference;
                  }           
                    
                }    
            }aflag[chart[i]]=1; lowest=-999999;
                 
}

    for(i=0;i<n1;i++){
                         
                         if(aflag[i] == 1){
                          ir+=a[i]-b[chart[i]];
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
