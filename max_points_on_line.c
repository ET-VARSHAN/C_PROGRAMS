#include <stdio.h>
#include <stdlib.h>
int maxPoints(int points[][2], int n)
{
    if(n <= 2) return n;

    int max = 0;

    for(int i = 0; i < n; i++)
    {
        int count = 0;

        for(int j = i + 1; j < n; j++)
        {
            int same = 1;
            int dx = points[j][0] - points[i][0];
            int dy = points[j][1] - points[i][1];

            for(int k = j + 1; k < n; k++)
            {
                int dx2 = points[k][0] - points[i][0];
                int dy2 = points[k][1] - points[i][1];

                if(dy * dx2 == dy2 * dx)
                    same++;
            }

            if(same > count)
                count = same;
        }

        if(count + 1 > max)
            max = count + 1;
    }

    return max;
}

int main()
{
    int points[][2] = {{1,1},{2,2},{3,3},{3,4}};
    int n = 4;

    printf("Maximum points on same line: %d", maxPoints(points,n));

    return 0;
}
