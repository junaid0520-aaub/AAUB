#include <stdio.h>
struct one
{
   char name[100],institution[100];
   int age ,roll;

};


int main()
{
    int i,n;

    printf("Enter the number of students : ");
    scanf("%d",&n);
    getchar();

    struct one student[n];

    printf("Enter information : \n");

    for(i=0;i<n;i++)
    {
        printf("Enter name : ");
        gets(student[i].name);

        printf("Enter institution name : ");
        gets(student[i].institution);

        printf("Enter roll : ");
        scanf("%d",&student[i].roll);

        printf("Enter age : ");
        scanf("%d",&student[i].age);
        getchar();
    }

    for(i=0;i<n;i++)
    {
        printf(" Name : %s \n",student[i].name);


        printf(" Institution name : %s \n",student[i].institution);


        printf(" Roll : %d \n",student[i].roll);


        printf(" Age : %d \n",student[i].age);

    }

    return 0;

}
