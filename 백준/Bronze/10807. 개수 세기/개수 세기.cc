#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int v[101];
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    
    int search;
    scanf("%d", &search);
    
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == search) {
            count++;
        }
    }
    
    printf("%d\n", count);
    return 0;
}
