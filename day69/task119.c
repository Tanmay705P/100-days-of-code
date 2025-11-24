//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>

int main() {
    int n, i, x;
    scanf("%d", &n);
    int a[n], seen[n+1];
    for(i = 0; i <= n; i++) seen[i] = 0;
    for(i = 0; i < n; i++) {
        scanf("%d", &x);
        if(seen[x]) {
            printf("%d", x);
            return 0;
        }
        seen[x] = 1;
    }
    return 0;
}
