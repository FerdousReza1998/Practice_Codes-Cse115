#include<stdio.h>
#include<string.h>
 struct player
{
    char name[50];
    int age;
    char country[50];
    int rank;
};

int main()
{
    int n,i,m;

    char flag[50];
    printf("Enter the value:");
    scanf("%d",&n);

    struct player p[n];
    printf("\n\nEnter the information: \n");

    for(i=0;i<n;i++)
    {
        printf("\nplayer:%d \n",i+1);

        printf("Name:");
        scanf("%s",p[i].name);

        printf("Age:");
        scanf("%d",&p[i].age);

        printf("country:");
        scanf("%s",p[i].country);

        printf("Rank:");
        scanf("%d",&p[i].rank);

        fflush(stdin);
    }
    printf("\n\nShowing the information: \n");

    for(i=0;i<n;i++)
    {
        printf("player %d: \n",i+1);
        printf("Name: %s\n",p[i].name);
        printf("Age: %d \n",p[i].age);
        printf("Country: %s \n",p[i].country);
        printf("Rank: %d \n",p[i].rank);
    }
    printf("Enter the player name(search player):\n");
    scanf("%s",flag);

    for(i=0;i<n;i++)
    {
        if(strcmp(p[i].name,flag)==0)
        {
            m=i;
            break;
        }
       /* else
        {
            continue;
        }*/
    }

    if(strcmp(p[i].name,flag)==0)
    {
        printf("Name: %s \n",p[m].name);
        printf("Age: %d \n",p[m].age);
        printf("Country: %s \n",p[m].country);
        printf("Rank: %d \n",p[m].rank);
    }
    else
    {
        printf("Not found");
    }
    return 0;
}
