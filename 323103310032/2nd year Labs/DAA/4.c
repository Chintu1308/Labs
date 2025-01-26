// Given two strings, find the minimum number of edits required to convert one string to another

#include<stdio.h>
#include<string.h>

int min(int a, int b, int c) {
    if(a < b && a < c) return a;
    if(b < a && b < c) return b;
    return c;
}

int main() {
    char s1[100], s2[100];
    printf("Enter the first string: ");
    scanf("%s", s1);
    printf("Enter the second string: ");
    scanf("%s", s2);
    int n = strlen(s1), m = strlen(s2);
    int dp[n+1][m+1];
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= m; j++) {
            if(i == 0) dp[i][j] = j;
            else if(j == 0) dp[i][j] = i;
            else if(s1[i-1] == s2[j-1]) dp[i][j] = dp[i-1][j-1];
            else dp[i][j] = 1 + min(dp[i-1][j], dp[i][j-1], dp[i-1][j-1]);
        }
    }
    printf("The minimum number of edits required is: %d\n", dp[n][m]);
    return 0;
}