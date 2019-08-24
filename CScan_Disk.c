#include <stdio.h>
int sort(int b[],int n,int head);

int main(){
	int i,j,k,l,n,diff,head,index,b[50],thm=0;
	float athm;

	printf("\nNAME: ORUSSA FIRDOUS\n ROLL NO:17BCS015\n");

	printf("\nEnter the I/O request please!");
    i=2;
	
	while(1){
       scanf("%d",&n);
		if(n>=0 && n<=199){
		   b[i]=n;i++;
		}

		else if(n == -1)
			break;

		else
			printf("\nINVALID INPUT!");
	}
	n=i;
    b[n]=199;
	printf("\n Enter the r/w head please.");
	scanf("%d",&head);
    b[1]=head;

     index=sort(b,n,head);
    printf("\n The I/O request is:\n");
     for(i=1;i<n;i++){
     	printf(" %d ",b[i]);
     }printf("\n");

      head=index;
      k=n-index;
      l=index-0;

     if(k > l){
        i=0;
         while(index<n){
         	i=index+1;
         	diff=b[i]-b[index];
         	printf("( %d - %d )+ ",b[i],b[index]);
         	thm+=diff;index=i;
         }
           
             printf("( %d - %d )+ ",b[0],b[n]);
             thm+=b[n]-b[0];
                 index=0;i=0;
           
             while(i < (head-1)){
                   
                  index=i+1;
                  diff=b[index]-b[i];thm+=diff;
                 printf("( %d - %d )+ ",b[index],b[i]);
                 i=index;
             }
     }
   
     else{
           i=index;      
         while(i>0){
         	index=i-1;
         	diff=b[i]-b[index];
         	thm+=diff;
         	printf("( %d - %d )+ ",b[index],b[i]);
             i=index;}

           printf("( %d - %d )+ ",b[n],b[0]);
             thm+=b[n]-b[0];
                 index=0;i=0;

                 index=n;

            while(index >(head+1)){
            	i=index-1;
            	diff=b[index]-b[i];
            	thm+=diff;
            	printf("( %d - %d )+ ",b[i],b[index]);
                index=i;}

     }
      athm=(float)thm/(float)(n-2);
     printf("\nTotal head movement = %d",thm);
     printf("\nAverage Total head movement = %f",athm);

}

int sort(int b[],int n,int head){

	int i,j,k,loc;
	for(i=0;i<(n-1);i++){

		for(j=i+1;j<n;j++){

			if(b[i] > b[j]){
				k=b[i];b[i]=b[j];b[j]=k;
			}
		}
	}


	for(i=0;i<n;i++){
		if(b[i] == head)
			loc=i;
	}

	return loc;
}