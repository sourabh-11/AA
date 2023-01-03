#include<stdio.h>

optimalMerge(int *arr,int c,int n)
{
    int i = 0,k = 0;
    c[k] = a[i]+a[i+1];
    i =2;
    while(i<n)
	{
    	k++;
    	if((a[k-1]+a[i])<=(a[i]+a[i+1]))
		{
    		c[k]=(a[k-1]+a[i]); 
		}
		else
		 {
		 	 c[k] =(a[i]+a[i+1]);
		  i=i+2;
		  while(i<n)
		  {
		  	    k++;
		    	if((a[k-1]+a[i])<=(a[k-2]+a[i]))
				{
		  	    	c[k] = (a[k-1]+a[i]);
			     }
			  else
			   {
			      [k] = (a[k-2]+a[i]);
	        	}i++;
			   
		  }
		  
     	}i++;
      }k++;
 c[k] = c[k-1]+c[k-2];
  for(int k = 0 ;k<n-1;k++)
  {
  	printf("%d\t",c[k])
  }
  i =0;
   for(int k = 0 ;k<n-1;k++)
  {  
     l = l+c[k];
  	printf("%d\t",c[l])
  }
}
      
int main(){
	int arr[]={1,2,3,4,5,6,7,8,9};
	printf("%d",arr);
	optimalMerge(arr,0,10);
		printf("%d",arr);
	
}  

      
  
  
