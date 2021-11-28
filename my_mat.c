#include <stdio.h>
#include <limits.h>

void fillMat(int array[10][10]){
   for(int i = 0; i < 10; i++){
      for(int j = 0; j < 10; j++){
         scanf("%d", &array[i][j]);
         }
    }
   for(int i = 0; i < 10; i++) {
      for (int j = 0; j < 10; j++) {
         if(array[i][j] == 0){
            if(i != j){
               array[i][j] = (int)(INT_MAX)/3;
                    }
                }
            }
        }
   for(int k = 0; k < 10; k++){
            for(int i = 0; i < 10; i++){
                for(int j = 0; j < 10; j++){
                    int min = array[i][j];
                    if (array[i][k]+array[k][j] < min){
                        min = array[i][k]+array[k][j];
                    }
                    array[i][j] = min;
                }
            }
        }   
    }
    
int existPath(int array[10][10]){
  int first;
  int second;
  scanf("%d", &first);
  scanf("%d", &second);
  if(first == second){
    return 0;
    }
  if(array[first][second] < 3000){
    return 1;
  }
  return 0;
} 

int shortestPath(int array[10][10]){
  int first;
  int second;
  scanf("%d", &first);
  scanf("%d", &second);
  if(first == second){
    return -1;
    }
  else if(array[first][second] < 3000){
    return array[first][second];
    }
  return -1;
}   



