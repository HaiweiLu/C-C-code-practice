//寻找一个数组的鞍点（saddle point）
#include <stdio.h>
#define N 4
#define M 5

int main()
{
	
	//定义n阶矩阵以及将要用到的变量
	int matrix[N][M];
	int i, j, temp, count, flag=0;

	//读入矩阵中的每一个数
	for(i=0; i<N; i++) {
		for(j=0; j<M; j++) {
			scanf("%d", &temp);
			matrix[i][j]=temp;
		}
	}

	//开始寻找鞍点
	for(i=0; i<N; i++) 
	{	
		//找出每行中的最大的数字
		temp=matrix[i][0];	//用temp与count标识出每行中最大的数字以及位置
		count=0;
		for(j=1; j<M; j++) {
			if(temp<matrix[i][j]) {	
				temp=matrix[i][j];
				count=j;
			}
		}
		//测试一下，此行最大的数字，是否是其所在列的最小数字
		for(j=0; j<M; j++) {
			if(matrix[j][count]<temp) {
				flag++;	//如果有数字小temp，flag就不为零
			}
		}
		if(flag==0) {	//测试flag值，如果为零，证明此数正是要找的鞍点
			printf("%d %d\n", i, count);
			break;
		}
		flag=0;
	}
	//如果没找到鞍数，循环终止，输出“NO”
	if(i==N) {
		printf("NO");
	}
	return 0;
}
