#include <stdio.h>

int main(void) {
    int taget, cnt=1, l=1, r=1, sum= 1;
    scanf("%d", &taget);
    
    while (r != taget) {
        if (sum==taget) { // 부분합이 m과 같은 경우
            cnt++;r++;sum+=r;
            
        } else if (sum>taget) { // 부분합이 m보다 큰 경우
            sum-=l;l++;
            
        } else { // 부분합이 m보다 작은경우우
            r++;sum+=r;
            
        }
    }
    
    printf("%d", cnt);
    return 0;
}
