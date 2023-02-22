#include<stdlib.h>
#include<cstdio>

int main()
{
    printf("hello world你好\n");
    system("pause");
    return 0;
}
stu findlocate(student *A,int num)
{
   stu p=A;
   while(p)
   {
     if(p->num==num)break;
     p=p->next;
   }
   return p;
}