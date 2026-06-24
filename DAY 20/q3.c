//Row wise Sum
#include <stdio.h>

int main() {
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int i,j,sum;

    for(i=0;i<3;i++) {
        sum=0;
        for(j=0;j<3;j++)
            sum+=a[i][j];
        printf("%d\n",sum);
    }
    return 0;
}