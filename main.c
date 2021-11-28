#include <stdio.h>
#include "my_mat.h"

int main(){
   int row, column=0;
   char decision;
   int mat[10][10];
   scanf("%c", &decision);
   while(decision != 'D'){
     if(decision == 'A'){
       fillMat(mat);
       for (row=0; row<10; row++){
         for(column=0; column<10; column++){
           printf("%d ", mat[row][column]);
           }
           printf("\n");
       }
       scanf(" %c", &decision);
     }
     if(decision == 'B'){
       int answer = existPath(mat);
       if(answer == 1){
         printf("%s", "True");
         printf("\n");
       }
       else if(answer == 0){
         printf("%s", "False");
         printf("\n");
       }
       scanf(" %c", &decision);
     }
     if(decision == 'C'){
       int answer = shortestPath(mat);
       printf("%d", answer);
       printf("\n");
       scanf(" %c", &decision);
     }
   }
   return 0;
}

