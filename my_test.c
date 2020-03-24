    /* verification command: python run.py test.c */
    #include "seahorn/seahorn.h"
    #include <stdio.h>
    #include <stdlib.h>
    extern int __VERIFIER_nondet_int();

 
    int main(void){
      int input = rand() % 10 + 1;
      int current = 0;
      int output = 0;
      int n = unknown();
      current = input;
      int weight [5] = {1,2,3,4,5};
      // for(int i = 0; i < 5; ++i){
      //   weight[i] = i % 5 + 1;
      // }
      double w = 0.40;
      // double ret = tanh(w);
      // weight[0] = ret * 100;
      int i = 1;
      while(input<n){
        int wi = rand() % 2 ;
        for(int k = 0; k < 5; k++){
          if (i % 5 == k){
            current = current * weight[k] + input;
          }
        }
        // current = current * weight[wi] + input;
        input++;
        i++;
      }
      sassert(current >= n);
    }