#include <stdio.h>
#include <stdlib.h>

struct one
{
    char code[100],name[100];
    float value;

};

int main()
{

    int r,i;
    float g[100],c[100],m,sum=0,gpa;
    struct one s;



    printf("Enter student name : ");
    gets(s.name);
    printf("Enter student roll : ");
    scanf("%d",&r);



    getchar();

    for(i=0;i<9;i++)
    {
        if(i==0)
        {printf("Course is AVE 4201\n");c[i]=3;}
        if(i==1)
        {printf("Course is CSE 4201\n");c[i]=3;}
        if(i==2)
        {printf("Course is HUM 4203\n");c[i]=3;}
        if(i==3)
        {
            printf("Course is MATH 4203\n");
            c[i]=3;
        }
        if(i==4)
        {
            printf("Course is CHEM 4201\n");
            c[i]=3;
        }
        if(i==5)
        {
            printf("Course is CSE 4202\n");
            c[i]=1.5;
        }
        if(i==6)
        {
            printf("Course is AVE 4202\n");
            c[i]=0.75;
        }
        if(i==7)
        {
            printf("Course is CHEM 4202\n");
            c[i]=0.75;
        }
        if(i==8)
        {
            printf("Course is ASE 4202\n");
            c[i]=1.5;
        }


      printf("Enter course marks : ");
      scanf("%f",&s.value);



    if(s.value>=80&&s.value<=100)
        printf("Grade point is 4.00 \n");
    else if(s.value>=75&&s.value<80)
        printf("Grade point is 3.75 \n");
    else if(s.value>=70&&s.value<75)
        printf("Grade point is 3.50 \n");
    else if(s.value>=65&&s.value<70)
        printf("Grade point is 3.25 \n");
    else if(s.value>=60&&s.value<65)
        printf("Grade point is 3.00 \n");
    else if(s.value>=55&&s.value<60)
        printf("Grade point is 2.75 \n");
    else if(s.value>=50&&s.value<55)
        printf("Grade point is 2.50 \n");
    else if(s.value>=45&&s.value<50)
        printf("Grade point is 2.25 \n");
    else if(s.value>=40&&s.value<45)
        printf("Grade point is 2.00 \n");
    else if(s.value>=0&&s.value<40)
        printf("Grade point is 0.00 \n");


        if(s.value>=80&&s.value<=100)
        g[i]=4;
    else if(s.value>=75&&s.value<80)
        g[i]=3.75;
    else if(s.value>=70&&s.value<75)
        g[i]=3.5;
    else if(s.value>=65&&s.value<70)
        g[i]=3.25;
    else if(s.value>=60&&s.value<65)
        g[i]=3;
    else if(s.value>=55&&s.value<60)
        g[i]=2.75;
    else if(s.value>=50&&s.value<55)
        g[i]=2.5;
    else if(s.value>=45&&s.value<50)
        g[i]=2.25;
    else if(s.value>=40&&s.value<45)
        g[i]=2;
    else if(s.value>=0&&s.value<40)
        g[i]=0;




     m = g[i]*c[i];

     sum = sum + m;

        getchar();


    }

    printf("Total credit is 19.50\n");



    gpa = sum/19.50;

    printf("GPA is %f",gpa);


    return 0;
}
