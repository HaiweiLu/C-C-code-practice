//输入10个学生5门成绩，分别用函数实现以下功能
//1. 每个学生的平均分
//2. 每门课的平均分
//3. 找出50个成绩最高分对应的学生和课程
//4. 计算平均分方差

#include<stdio.h>
#define N 10
#define M 5

double average_student_sore( int array[][M], double aver1[] );
double average_course( int array[][M], double aver2[] );
int Mix( int array[], int site[] );
double average_variance( double aver1[] );      //求平均分方差 


int main()
{
	int array[N][M], site[2] = {0};
	double aver1[N] = {0}, aver2[M] = {0};
	int i, j;
	
	for ( i = 0; i < N; i++ )
	for ( j = 0; j < M; j++ )
	{
		scanf("%d", &array[i][j]);
	}
	
	average_student_sore( array, aver1 );
	average_course( array, aver2 );
//	Mix( array, site );
	
	
	printf("每个学生的平均分：");
	for ( i = 0; i < 10; i++ )
	{
	printf("%d ", aver1[i]);
    }
    printf("\n");
    
    printf("每门课的平均分：");
    for ( i = 0; i < 5; i++ )
    {
    	printf("%d ", aver2[i]);
	}
	printf("\n");
	
	printf ("数据中最高分对应的课程为 %d，对应同学为 %d\n", site[0], site[1]);
	printf ("平均分方差为：%d\n", average_variance( aver1 ));
	
	return 0;
}


double average_student_sore( int array[][M], double aver1[] )
{
    int i, j;
		
	for ( i = 0; i < N; i++ )
	{
		aver1[i] = 0;
	    for ( j = 0; j < M; j++ )
	    {
	    	aver1[i] = array[i][j] + aver1[i];
		} 
		aver1[i] /= M;
    }	
} 

double average_course( int array[][M], double aver2[] )
{
	int i, j;
	
	for ( j = 0; j < M; j++ )
	{
		aver2[j] = 0;
		for ( i = 0; i < N; i++ )
		{
			aver2[j] = aver2[j] + array[i][j];
		}
		aver2[j] /= N;
	}
}

void Mix( int array[][M], int site[] )
{
	int i, j;
	int row, column;
	int iMax = array[0][0];
	
	for ( i = 0; i < N; i++ )
	for ( j = 0; j < M; j++ )
	{
		if ( array[i][j] > iMax )
		{
			row = i;
			column = j;
			iMax = array[row][column];
		}
	}
	site[0] = row;
	site[1] = column;	
}

double average_variance( double aver1[] )
{
	int sum1 = 0, sum2 = 0;
	int i;
	double S;
	
	for ( i = 0; i < N; i++ )
	{
		sum1 += aver1[i];
		sum2 += aver1[i] * aver1[i];
	}
	
	S = sum2/N - ( sum1 / N ) * ( sum1 / N );
	
	return S; 
}
