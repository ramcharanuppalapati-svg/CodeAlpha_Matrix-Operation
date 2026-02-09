#include<stdio.h>
int main() {
int a[3][3];
int b[3][3];
int k;
int i;
int j;
int result[3][3];
printf("Enter The elements Of Matrix A:");
for(i=0;i<3;i++) {
    for(j=0;j<3;j++) {
        scanf("%d", &a[i][j]);
    }
    printf("\n");
}
printf("The Matrix A:\n");
for(i=0;i<3;i++) {
    for(j=0;j<3;j++) {
        printf("%d ", a[i][j]);
    }
    printf("\n");
}
printf("Enter The elements Of Matrix B:");
for(i=0;i<3;i++) {
    for(j=0;j<3;j++) {
        scanf("%d", &b[i][j]);
    }
    printf("\n");
}
printf("The Matrix B:\n");
for(i=0;i<3;i++) {
    for(j=0;j<3;j++) {
        printf("%d ", b[i][j]);
    }
    printf("\n");
}
printf("Addition\n");
for(i=0;i<3;i++) {
    for(j=0;j<3;j++) {
        result[i][j]=a[i][j]+b[i][j];
    }
}
printf("The Resultant Matrix Is:");
for(i=0;i<3;i++) {
    for(j=0;j<3;j++) {
        printf("%d ", result[i][j]);
    }
printf("\n");
}
printf("Product");    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
             result[i][j] = 0; 
            for (k = 0; k < 3; k++) {
               result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
printf("The Resultant Matrix:\n");
for(i=0;i<3;i++) {
    for(j=0;j<3;j++) {
        printf("%d ", result[i][j]);
    }
    printf("\n");
}
printf("Transpose of matrix A:");
for(i=0;i<3;i++) {
    for(j=0;j<3;j++) {
        printf("%d ", a[j][i]);
    }
    printf("\n");
}
printf("Transpose of Matrix B:");
for(i=0;i<3;i++) {
    for(j=0;j<3;j++) {
        printf("%d ", b[j][i]);
    }
    printf("\n");
}
return 0;
}
