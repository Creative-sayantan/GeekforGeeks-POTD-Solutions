long long maxArea(long long A[], int len)
{
    long long area,area1=0;

   int j=0,k=0;

   int p=len-1;

   int i=0;

  while(i<p){

       

      if(A[i]>A[p]){

       area=min(A[i],A[p])*(p-i);   

          p--;

      }

     else if(A[i]<A[p]){

           area=min(A[i],A[p])*(p-i);  

          i++;

          

      }

      

else{

    

    area=min(A[i],A[p])*(p-i);  

          i++;

          p--;

    

}

 

if(area>area1){

    

    area1=area;

}

   }

 

return area1;
}