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
        }
        if (code == 3)
        {
            printf("ccc\n");
            for(int i = 0; i < index; i++)
            {
                printf("%d %s %d %d %d\n", i + 1,arr[i].xingming, arr[i].yuwen, arr[i].shuxue, arr[i].yingyu);
            }
            printf("ccc\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 4)
        {
        }
        if (code == 5)
        {
        }
        if (code == 6)
        {
        }
        if (code == 7)
        {
        }
        if (code == 8)
        {
            printf("hhh\n");
            break;
        }
    }
    return 0;
}