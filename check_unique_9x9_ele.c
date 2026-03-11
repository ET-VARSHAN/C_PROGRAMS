#include<stdio.h>
int check(int a[9][9]){
    int i,j;
    for(i=0;i<9;i++){
        int visited[10]={0};
        for(j=0;j<9;j++){
            int num=a[i][j];
            if(visited[num]==1){
                printf("duplicate in row %d",i+1);
                return 0;
            }
            visited[num]=1;
        }
    }
    for(j=0;j<9;j++){
        int visited[10]={0};
        for(i=0;i<9;i++){
            int num=a[i][j];
            if(visited[num]==1){
                printf("duplicate no. in col %d",j+1);
                return 0;
            }
            visited[num]=1;
        }
    }
    return 1;
}
int main(){
    int a[9][9]={{1,2,3,4,5,6,7,8,9},
              {6,7,8,9,1,2,3,4,5},
              {7,8,9,1,2,3,4,5,6},
              {8,9,1,2,3,4,5,6,7},
              {9,1,2,3,4,5,6,7,8},
              {2,3,4,5,6,7,8,9,1},
              {3,4,5,6,7,8,9,1,2},
              {4,5,6,7,8,9,1,2,3},
              {5,6,7,8,9,1,2,3,4},
    };
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            printf("%d ",a[i][j]);
        }printf("\n");
    }
    if(check(a)){
        printf("\ncorrect");
    }
    else{
        printf("\nnot correct");
    }
}