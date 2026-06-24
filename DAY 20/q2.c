//Check Symmetric Matrix
#include <stdio.h>

int main() {
    int a[3][3]={{1,2,3},{2,4,5},{3,5,6}};
    int i,j,flag=1;

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            if(a[i][j]!=a[j][i])
                flag=0;

    if(flag) printf("Symmetric");
    else printf("Not Symmetric");

    return 0;
}