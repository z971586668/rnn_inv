    /* verification command: python run.py test.c */
    #include "seahorn/seahorn.h"
    
    int main(void){
      int x = 4;
      int y = 3;
      int n = unknown();
      while (y<n){
        x = x + y;
        y++;
      }

      sassert (x>=y);
   
    }