#include <stdio.h>

int main() {
    int a[10], i, s, lb, ub, mid, flag = 0;

    printf("\nEnter the values into array in ascending order:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    printf("\nEnter the search element: ");
    scanf("%d", &s);

    lb = 0;
    ub = 9;  

    while (lb <= ub) {
        mid = (lb + ub) / 2;
        if (s == a[mid]) {
            flag = 1;
            break;
        } else if (s > a[mid]) {
            lb = mid + 1;
        } else {
            ub = mid - 1;
        }
    }

    if (flag == 1) {
        printf("The search is successful at position %d\n", mid + 1);
    } else {
        printf("Search is not successful\n");
    }

    return 0;
}

