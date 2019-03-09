#include <stdio.h>

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    int sum = x*y;
    int ans = 0;
    do {
    ans = 0;
        printf("%d\n",sum);
        while(sum >= 10) {
            ans += sum%10;
            sum /= 10;
            printf("%d\n",sum);
        }
        ans += sum;
        sum = ans;
    } while(ans >= 10);
    printf("%d",ans);
    if(ans%3 == 0) {
        printf(" Yes");
    } else {
        printf(" No");
    }
}
