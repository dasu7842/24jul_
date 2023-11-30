
// WAP to 3x3 matrix using 2D array
// WAP to store student id using 1D array in c.
#include <stdio.h>
int main()
{
    int rollno[1][5];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter the number of students: "); // Input no.of students from user
            scanf("%d", &rollno[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(" %d", rollno[i][j]);
        }
        printf("\n");
    }
    return 0;
}

