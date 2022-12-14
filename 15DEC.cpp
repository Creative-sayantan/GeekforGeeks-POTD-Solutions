class Solution {
  public:
  
  int digitsum(int n)
  {
      int totalsum = 0 ;
      while(n >0 )
      {
          int ld = n % 10 ;
          totalsum += ld ;
          n = n / 10 ;
      }
      return totalsum ;
  }
    string BalancedString(int N) {
          string sol , sol1  ;
          string str1 ="abcdefghijklmnopqrstuvwxyz" ;
        int m = N ;
        while( N > 26) {
            sol1.append(str1) ;
             N -= 26 ;
        }
        bool check = false ;
       if(m % 2 == 0 )
       {
         while(sol.size() != N )
           {
               // add from front 
              if(check == false )
              {
                  sol.append(str1, 0, N/2 );
                  check = true ;
              }
              else // add from the back  
              {
                  int x = 26 - (N /2 ) ;
                  sol.append(str1 , x, 26) ;
                  check = false ;
              }
           }
       }
       else 
       {
           if( digitsum(m) %2 == 0 )
           {
                 while(sol.size() != N )
           {
               // add from front 
              if(check == false )
              {
                  sol.append(str1, 0, (N + 1)/2 );
                  check = true ;
              }
              else // add from the back  
              {
                  int x = 26 - (N - 1 ) /2 ;
                  sol.append(str1 , x, 26) ;
                   check = false ;
                       }
           }
           }
           else 
           {
                while(sol.size() != N )
           {
               // add from front 
              if(check == false )
              {
                  sol.append(str1, 0, (N - 1)/2 );
                  check = true ;
              }
              else // add from the back  
              {
                  int x = 26 - (N+1 ) /2 ;
                  sol.append(str1 , x, 26) ;
                  check = false ;
              }
           }
           }
       }
      sol1.append(sol) ;
      return sol1 ;
    }
};