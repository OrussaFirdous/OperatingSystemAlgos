#include<stdio.h>
#include<string.h>

int sort(int b[],int n, int head);

int main(){

	int i,diff,thm=0,j,k,n,head,index;
	int b[50],c[25];
	char s[10];

	printf("\nNAME: ORUSSA FIRDOUS\n ROLL NO:17BCS015\n");
   

   printf("\n Enter the I/O requests(press -1 if you want to stop.).\n");
  i=1;
   while(1){
          scanf("%d",&n);

         if( n >=0 && n <= 199){
                b[i]=n;i++;
         }
         else if(n == -1)
         	break;

         else
         	printf("\n\tINVALID INPUT! \tTRY AGAIN!!\n");
   }
   n=i;
 
 printf("\n The I/O request is :");

      for(i=1;i<n;i++)
    	printf("  %d  ",b[i]);
   printf("\n Enterthe r/w head please.\n");
   scanf("%d",&head);
   b[0]=head;
   index=sort(b,n,head);
   printf("\n");

      printf("\n Enter the hardware preferences please(LEFT OR RIGHT).\n");
      scanf("%s",s);
      head=index;
     
     if((strcmp(s,"left")==0) || (strcmp(s,"LEFT")==0)){
         
          index++;
         c[0]=0;j=1;
         for(i=0;i<n;i++){
    	        c[j]=b[i]; j++;
            }n++;
         head=index;
          
          while( i > 0 )
          {  
             
         	i=index-1;
         	diff=c[i]-c[index];
         	  if(diff < 0)
         		thm+=(-1)*diff;
         		printf("( %d - %d )+  ",c[index],c[i]);
             
         	index=i;
          }
             
              head++;
         	   
         	 	thm+=c[head]-c[0];
         		printf("( %d - %d )+  ",c[head],c[0]);
         
          while( i < (n-1) ){
                  
                i=head+1;
                diff=c[i]-c[head];
         		thm+=diff;
         		printf("( %d - %d )+  ",c[i],c[head]);
                head=i;
        }
               printf("\b\b\b");
     }
 
     else{
             i=0;    
     	b[n]=199;

     	while( i < n){
               
               i=head+1;
                diff=b[i]-b[head];
         		thm+=diff;
         		printf("( %d - %d )+  ",b[i],b[head]);
                head=i;

     	}
     	index--;
         thm+=b[n]-b[index];
         printf("( %d - %d )+  ",b[n],b[index] );
     	while( i > 0 ){
             
             i=index-1;
         	  diff=b[i]-b[index];
         	  if(diff < 0)
         		thm+=(-1)*diff;
         		printf("( %d - %d )+  ",b[index],b[i]);
             
         	index=i;

     	}
      
         printf("\b\b\b");
       
       }
     printf("\nTotal head movement = %d",thm);

    return 0;
     
  }

int sort(int b[],int n,int head){

	int i,j,temp,loc;

	for(i=0;i<(n-1);i++){

		for(j=i+1;j<n;j++){

			if(b[i] > b[j]){
				temp=b[i];b[i]=b[j];b[j]=temp;
			}
		}
	}

	for(i=0;i<n;i++){
		if(b[i] == head)
			loc=i;
	}

	return loc;
}