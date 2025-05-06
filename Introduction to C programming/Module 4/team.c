#include <stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d", &d);
    int ques_answered = 0;
    for (int i = 1; i <= d; i++)
    {
        scanf("\n%d %d %d", &a, &b, &c);
        int chk = a + b + c;
        if (chk >= 2)
        {
            ques_answered = ques_answered + 1;
        }
    }
    printf("%d", ques_answered);
    return 0;
}