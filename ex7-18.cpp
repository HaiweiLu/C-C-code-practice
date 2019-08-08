//给出年、月、日，计算该日是该年的第几天

#include<stdio.h>

int main()
{
    int year, month, day;
	
	printf("input year, month and day:");
	scanf("%d%d%d", &year, &month, &day );
	
	int m1 = 31, m3 = 31, m5 = 31, m7 = 31, m8 = 31, m10 = 31, m12 = 31;
	int m4 =30, m6 = 30, m9 = 30, m11 = 30;
	int m2 = 28, sum, sum1, sum2, sum3;
	
	if (( year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0 )
	m2 = 29;
	
	sum1 = m1 + m2 + m3 + m4;
	sum2 = sum1 + m5 + m6 + m7;
	sum3 = sum2 + m7 + m8 + m9;
	
	switch( month )
	{
		case 1: sum = day;
		break;
		case 2: sum = m1 + day;
		break;
		case 3: sum = m1 + m2 + day;
		break;
		case 4: sum = m1 + m2 + m3 + day;
		break;
		case 5: sum = sum1 + day;
		break;
		case 6: sum = sum1 + m5 + day;
		break;
		case 7: sum = sum1 + m5 + m6 + day;
		break;
		case 8: sum = sum2 + day;
		break;
		case 9: sum = sum2 + m8 + day;
		break;
		case 10: sum = sum3 + day;
		break;
		case 11: sum = sum3 + m10 + day;
		break;
		case 12: sum = sum3 + m10 + m11 + day;
		break;
		default: printf("enter data error!\n");
	}
	
	printf("这是%d年的第%d天\n", year, sum);
	
	return 0;	
} 
