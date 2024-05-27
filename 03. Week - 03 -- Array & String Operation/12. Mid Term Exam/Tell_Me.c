/**
 *
 * Problem Statement

You will given an integer array A and the size N. You will also be given an integer value X. You need to tell if X was appeared in the array. If X has appeared then print "YES", otherwise print "NO".

Input Format

    First line will contain T, the number of test cases.
    First line of each test case will contain N.
    Second line of each test case will contain the integer array A.
    Third line of each test case will contain X.

Constraints

    1 <= T <= 1000
    1 <= N <= 10000
    0 <= A[i] <= 10^9; Here 0 <= i < N
    0 <= X <= 10^9

Output Format

    Output "YES" or "NO" according to the question.
*/

#include <stdio.h>
int main()
{

    int t, n, x;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        int a[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }

        scanf("%d", &x);

        // printf("%d %d %d \n", t, n, x);
        int ans;

        for (int k = 0; k < n; k++)
        {
            if (a[k] == x)
            {
                ans = 1;
                break;
            }
            else
            {
                ans = 0;
            }
        }
        if (ans == 1)
        {
            printf("YES\n");
        }
        else if (ans == 0)
        {
            printf("NO\n");
        }
    }

    return 0;
}