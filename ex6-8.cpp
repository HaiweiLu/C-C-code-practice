//Ѱ��һ������İ��㣨saddle point��
#include <stdio.h>
#define N 4
#define M 5

int main()
{
	
	//����n�׾����Լ���Ҫ�õ��ı���
	int matrix[N][M];
	int i, j, temp, count, flag=0;

	//��������е�ÿһ����
	for(i=0; i<N; i++) {
		for(j=0; j<M; j++) {
			scanf("%d", &temp);
			matrix[i][j]=temp;
		}
	}

	//��ʼѰ�Ұ���
	for(i=0; i<N; i++) 
	{	
		//�ҳ�ÿ���е���������
		temp=matrix[i][0];	//��temp��count��ʶ��ÿ�������������Լ�λ��
		count=0;
		for(j=1; j<M; j++) {
			if(temp<matrix[i][j]) {	
				temp=matrix[i][j];
				count=j;
			}
		}
		//����һ�£������������֣��Ƿ����������е���С����
		for(j=0; j<M; j++) {
			if(matrix[j][count]<temp) {
				flag++;	//���������Сtemp��flag�Ͳ�Ϊ��
			}
		}
		if(flag==0) {	//����flagֵ�����Ϊ�㣬֤����������Ҫ�ҵİ���
			printf("%d %d\n", i, count);
			break;
		}
		flag=0;
	}
	//���û�ҵ�������ѭ����ֹ�������NO��
	if(i==N) {
		printf("NO");
	}
	return 0;
}
