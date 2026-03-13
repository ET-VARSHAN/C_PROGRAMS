#include <stdio.h>

int largestRectangleArea(int h[], int n)
{
    int stack[n], top = -1;
    int max = 0, i = 0;

    while(i < n)
    {
        if(top == -1 || h[stack[top]] <= h[i])
            stack[++top] = i++;
        else
        {
            int height = h[stack[top--]];
            int width;

            if(top == -1)
                width = i;
            else
                width = i - stack[top] - 1;

            int area = height * width;

            if(area > max)
                max = area;
        }
    }
    while(top != -1)
    {
        int height = h[stack[top--]];
        int width;

        if(top == -1)
            width = i;
        else
            width = i - stack[top] - 1;

        int area = height * width;

        if(area > max)
            max = area;
    }

    return max;
}

int main()
{
    int h[] = {2,4,2,1,2,3};
    int n = 6;

    printf("Largest Rectangle Area = %d",
           largestRectangleArea(h,n));

    return 0;
}
