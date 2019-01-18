#include <stdio.h>
struct student
{
    int yuwen;
    int shuxue;
    int yingyu;
    char xingming[100];
};
int main()
{

    int index = 0;
    struct student arr[10000];
    printf("huanyingjinruxueshengchengjiguanlixitong!\n");

    while (1)
    {
        printf("1---\n");
        printf("2---\n");
        printf("3---\n");
        printf("4---\n");
        printf("5---\n");
        printf("6---\n");
        printf("7---\n");
        printf("8---\n");

        printf("请选择相应功能\n");
        int code;
        scanf("%d", &code);
        if (code == 1)
        {
            printf("aaa\n");
            int yuwen;
            int shuxue;
            int yingyu;
            char xingming;
            scanf("%d", &(arr[index].yuwen));
            scanf("%d", &(arr[index].shuxue));
            scanf("%d", &(arr[index].yingyu));
            scanf("%s", arr[index].xingming);

            printf("aaa\n");
            index++;
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 2)
        {
            printf("bbb\n");
            if (index > 0)
            {
                index--;
                printf("bbb\n");
                char xx;
                scanf("%c", &xx);
                scanf("%c", &xx);
            }
            else
            {
                printf("bbb\n");
                char xx;
                scanf("%c", &xx);
                scanf("%c", &xx);
            }
        }
        if (code == 3)
        {
            printf("ccc\n");
            for (int i = 0; i < index; i++)
            {
                int sum = 0;
                sum = arr[i].yuwen + arr[i].shuxue + arr[i].yingyu;
                printf("%d %s %d %d %d\n", i + 1, arr[i].xingming, arr[i].yuwen, arr[i].shuxue, arr[i].yingyu);
                printf("%d\n", sum);
            }

            printf("ccc\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 4)
        {
            printf("ddd\n");
            for (int i = 0; i < index; i++)
            {
                int sum = 0;
                sum = arr[i].yuwen + arr[i].shuxue + arr[i].yingyu;
                if (sum < 180)
                {
                    printf("%d %s\n", i + 1, arr[i].xingming);
                    printf("buguo\n");
                    char x;
                    scanf("%c", &x);
                    scanf("%c", &x);
                }
                else
                {
                    printf("%d %s\n", i + 1, arr[i].xingming);
                    printf("guo\n");
                    char x;
                    scanf("%c", &x);
                    scanf("%c", &x);
                }
            }
        }
        if (code == 5)
        {
            printf("eee\n");
            for (int i = 0; i < index; i++)
            {
                int sum = 0;
                sum = arr[i].yuwen + arr[i].shuxue + arr[i].yingyu;
                if (arr[i].yuwen < 60)
                {
                    printf("%s yuwen buguo    ", arr[i].xingming);
                }
                if (arr[i].shuxue < 60)
                {
                    printf("%s shuxue buguo    ", arr[i].xingming);
                }
                if (arr[i].yingyu < 60)
                {
                    printf("%s yingyu buguo   ", arr[i].xingming);
                }

                printf("\n");
            }
            printf("eee\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 6)
        {
            printf("fff\n");
            int max = 0;
            for (int i = 0; i < index; i++)
            {
                int sum = 0;
                sum = arr[i].yuwen + arr[i].shuxue + arr[i].yingyu;

                if (max < sum)
                {
                    max = sum;
                }
            }
            printf("%d\n", max);
            printf("fff\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 7)
        {
            printf("ggg\n");
            double average = 0;
            double max = 0.0;
            for (int i = 0; i < index; i++)
            {

                average = ((arr[i].yuwen + arr[i].shuxue + arr[i].yingyu) / 3.0);
                if (max < average)
                {
                    max = average;
                }
            }
            printf("%lf\n", max);
            printf("fff\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 8)
        {
            printf("ggg\n");
            double average = 0;
            double max = 0.0;
            for (int i = 0; i < index; i++)
            {
                if (arr[i].yuwen && arr[i].yingyu && arr[i].shuxue <= 60)
                {
                    average = ((arr[i].yuwen + arr[i].shuxue + arr[i].yingyu) / 3.0);
                    if (max < average)
                    {
                        max = average;
                    }
                }
            }
            printf("%lf\n", max);
            printf("fff\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 9)
        {
            printf("hhh\n");
            break;
        }
    }
    return 0;
}