#include <stdio.h>

int x;
int arr[10];
int ans;

void twobit(int n) {
    if(n == x) {
        bool isCorrect = true;
        for(int i=0;i<x;i++) {
            if(i != x-1) {
                if(arr[i] == 1 && arr[i+1] == 1) {
                    isCorrect = false;
                }
            }
            printf("%d ",arr[i]);
        }
        printf("\n");
        if(isCorrect) {
            ans++;
        }
    } else {
        arr[n] = 0;
        twobit(n+1);
        arr[n] = 1;
        twobit(n+1);
    }
}

int main() {
    scanf("%d",&x);
    twobit(0);
    printf("%d",ans);
}
