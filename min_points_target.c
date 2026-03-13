#include<stdio.h>
#include<limits.h>
int minPoints(int points[], int n, int target){
    int dp[target+1];
    dp[0] = 0;
    for(int i=1;i<=target;i++)
        dp[i] = INT_MAX;
    for(int i=1;i<=target;i++){
        for(int j=0;j<n;j++){
            if(points[j] <= i && dp[i - points[j]] != INT_MAX){

                if(dp[i] > 1 + dp[i - points[j]])
                    dp[i] = 1 + dp[i - points[j]];
            }
        }
    }
    return dp[target];
}
int main(){
    int points[] = {1,3,5};
    int n = 3;
    int target = 11;
    printf("Minimum Points = %d", minPoints(points,n,target));
}
