//Union of Array.
#include <stdio.h>

int main() {
    int a[]={1,2,3,4};
    int b[]={3,4,5,6};

    for(int i=0;i<4;i++)
        printf("%d ",a[i]);

    for(int i=0;i<4;i++) {
        int found=0;
        for(int j=0;j<4;j++) {
            if(b[i]==a[j]) found=1;
        }
        if(!found)
            printf("%d ",b[i]);
    }
    return 0;
}