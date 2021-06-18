/* Enter your solutions in this file */
#include <stdio.h>

int factors(int n, int ret[]){
 int count=0;
 
 for(int i=2;i<n;i){
     if (n%i==0){
       ret[count]=i;
       count++;
       n=n/i;
       printf("count:%i, n:%i , i: %i\n",count,n,i);
     }else{
     i++;}
     if (n==i||n==1){
      ret[count]=i;
      count++;
      printf("count:%i, n:%i , i: %i\n",count,n,i);
      break;
     }
     
  }
 return count;
}



int mode(int arr[], int l){
 int maxcount=0; 
 int val=0;
  for(int i=0;i<l;i++){
     int count=0;
     for(int j=0;j<l;j++){
       if (arr[i]==arr[j])
         count++;
      }
     if (maxcount<count){
       maxcount=count;
       val=arr[i];
       }
        
   }
return val;   
}




float average(int arr[], int l){

float sum=0;
for(int i=0;i<l;i++){
  sum+=arr[i];
 }
//printf("%f",(float)sum/l);
return (float)sum/l;
}


int max(int arr[], int l){
int val=-1000;
for(int i=0;i<l;i++){
  if (arr[i]>val)
     val=arr[i];
  }
return val;   
}



int min(int arr[], int l){
int val=1000;
for(int i=0;i<l;i++){
  if (arr[i]<val)
     val=arr[i];
  }
return val;   
}
