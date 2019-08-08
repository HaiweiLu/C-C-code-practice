#include<stdio.h>

int main()
{
//	struct student{
//		char *name;
//		int student_n;
//		char grade;
//	};
//	struct student temp, *p = &temp;
//	temp.name = "chou";
//	printf("%p\n", p->name);
//	printf("%c\n", *p->name);
//	printf("%s\n", p->name);
//	printf("%c\n", *p->name);
//	printf("%c\n", *p->name+2);
//	printf("%c\n", *(p->name+2));

//    char a = 'h';
//    char a1[] = "abc";

    struct test1{ char m1;
    int m2;
    double m3;
	}myaa;
	printf("%d\n", sizeof(struct test1));
	    struct test2{ 
		char m1;
    double m2;
    int m3;
	}mya;
	printf("%d\n", sizeof(struct test2));
	return 0;
 } 
