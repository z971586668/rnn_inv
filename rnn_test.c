/* verification command: python run.py test.c */
#include "seahorn/seahorn.h"
#include <stdio.h>
#include <stdlib.h>
extern int __VERIFIER_nondet_int();



int main(void){
  // //single metrix
  // int seris_length = unknown() % 10 + 1;
  int seris_length = 20;
  int rnn [seris_length];
  for(int i = 0; i < seris_length; ++i){
    rnn[i] = rand() % 10 + 1;
  }
  int weight [5] = {3,5,4,1,2};
  int b [5] = {1,1,1,1,1};
  int rnn_c [5] = {rnn[0],rnn[1],rnn[2],rnn[3],rnn[4]};
  int rnn_n [5] = {0,0,0,0,0};
  for(int i = 0; i < 5; ++i){
    rnn_c[i] = 0;
  }
  int i = 0;
  int iter = unknown() % 20 + 1;
  while(i<iter){
    for(int j = 0; j < 5; ++j){
      rnn_n[i+j] = rnn_c[j] * weight[j] + rnn[i+j] + b[j];
      rnn_c[i+j] = rnn_n[i+j];
    }
    i = i+5;
  }
  sassert(rnn_n[1] < 10);

  // double metrix
  // int series_length = 60;
  // int batch_size = 4;
  // int state_size = 3;
  // int truncated_backprop_length = 5;
  // int input_series[batch_size][series_length / batch_size];
  // for(int i = 0; i < batch_size; ++i){
  //   for(int j = 0; j < series_length / batch_size; ++j){
  //     input_series[i][j] = rand() % 10 + 1;
  //   }
  // }
  // int init_state [batch_size][state_size];
  // for(int i = 0; i < batch_size; ++i){
  //   for(int j = 0; j < state_size; ++j){
  //     init_state[i][j] = 0;
  //   }
  // }
  // int w1 [state_size + 1][state_size];
  // for(int i = 0 ; i < state_size + 1; ++i){
  //   for(int j = 0; j < state_size; ++j){
  //     w1[i][j] = rand() % 20 + 1;
  //   } 
  // }
  // int b1 [3] = {1,1,1};
  // int w2 [3][3] = {{1,2,4},{1,2,3},{1,2,5}};
  // int b2 [3] = {1,1,1};
  // int current_state [batch_size][state_size + 1];
  // int next_state [batch_size][state_size];
  // for(int i = 0; i < batch_size; ++i){
  //   for(int j = 0; j < state_size + 1; ++j){
  //     current_state[i][j] = 0;
  //     next_state[i][j] = 0;
  //   }
  // }
  // int current_input [1][batch_size];
  // for(int k = 0; k < series_length / batch_size; ++k){
  //   // generate current input
  //   for(int j = 0; j < batch_size; ++j){
  //     current_input[j][0] = input_series[j][k];
  //     current_state[j][0] = input_series[j][k];
  //   }
  // }

  // // sassert(current_state[1][0] == 0);

  // // matmul
  // for(int i = 0; i < state_size + 1; ++i){
  //   for(int j = 0; j < state_size; ++j){
  //     for(int k = 0;  k < state_size + 1; ++k){
  //       next_state[i][j] = current_state[i][k] * w1[k][j];
  //     }
  //   }
  // }

  // for(int i = 0; i< state_size + 1; ++i){
  //   for(int j = 0; j < state_size; ++j){
  //     current_state[i][j] = next_state[i][j];
  //   }
  // }



  // sassert(current_state[0][0] > 0);
}