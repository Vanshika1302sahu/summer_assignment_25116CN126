//Intersection of Arrays.
#include <stdio.h>

int main() {
    int a[]={1,2,3,4};
    int b[]={3,4,5,6};

    for(int i=0;i<4;i++) {
        for(int j=0;j<4;j++) {
            if(a[i]==b[j])
                printf("%d ",a[i]);
        }
    }
    return 0;
}