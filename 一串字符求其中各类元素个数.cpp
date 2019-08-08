//输入一行文字，找出其包含的大写字母、小写字母、空格、数字的个数以及其他字符的多少

#include<stdio.h>
int main()
{
	int bchar = 0, schar = 0, space = 0, number = 0, other = 0, i = 0;
	char *p, c[36];
	
	printf ("input string:\n");
	while ((c[i] = getchar()) != '\n')   //逐个字符读取，使其单个成为数组元素 
		i++;
		
	p = &c[0];   //指针指向字符数组 c 的首个元素的地址 
	
	while (*p != '\n') {
		if (('A' <= *p) && (*p <= 'Z'))
		bchar++;
		else if (('a' <= *p) && (*p <= 'z'))
		schar++;
		else if (*p == ' ')
		space++;
		else if (('0' <= *p) && (*p <= '9'))
		number++;
		else 
		other++;
		p++;       // 指针加一，指向下一个数组元素 
	}
	printf ("大写字母：%d\n小写字母：%d\n空格：%d\n", bchar, schar, space);
	printf ("数字：%d\n其他：%d\n", number, other);
	return 0; 
 } 
