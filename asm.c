#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int a[n][n];
    int b[n][n];
    int ans[n][n];
    int ans2[n][n];
    int ans3[n][n];
    int k[n][n];
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &b[i][j]);
        }
    }
    for(int i=0; i<n; i++){                           // addition of matrix
        for(int j=0; j<n; j++){
            ans[i][j] = a[i][j] + b[i][j];
        }
    }   

    for(int i=0; i<n; i++){                           // subtraction of matrix
        for(int j=0; j<n; j++){
            ans2[i][j] = a[i][j] - b[i][j];
        }
    }

    for(int i=0; i<n; i++){                           // multiplication of matrix
        for(int j=0; j<n; j++){
            ans3[i][j] = 0;
            for(int k=0; k<n; k++){
                ans3[i][j] += a[i][k] * b[k][j]; 
            }
        }
    }

    printf("The addition of the matrix is: ");
    printf("\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d", ans[i][j]);
            printf(" ");
        }
        printf("\n");
    }


    printf("The subtraction of the matrix is: ");
    printf("\n");
    for(int i=0; i<n; i++){                         
        for(int j=0; j<n; j++){
            printf("%d", ans2[i][j]);
            printf(" ");
        }
        printf("\n");
    }

    printf("The multiplication of the matrix is: ");
    printf("\n");
    for(int i=0; i<n; i++){                         
        for(int j=0; j<n; j++){
            printf("%d", ans3[i][j]);
            printf(" ");
        }
        printf("\n");
    }
}