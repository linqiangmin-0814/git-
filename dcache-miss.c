/**
  * ��δ�����Ҫ���ڷ���L1 dcache miss�Ĳ���
  * ������δ����һ��Ч�ʸߣ���Ϊ��C/C++�У�
  * �����ǰ��д洢�ģ�����İ��з��ʿ��Գ�����ó���ľֲ���ԭ���ռ�ֲ��ԣ�
  * ��timeͳ���������ִ�е�ʱ�䣬��real time����
  * ��perf�ɼ�dcache miss���ݣ�perf stat -e L1-dcache-load-misses ./test
  **/


#inlcude <stdio.h>
#inlcude <unistd.h>

#define LOW 1000
#define COL 1000

int main(int argc, char **argv)
{
	int a[LOW][COL] = {0,0};
	if(1 == argv){
		for (int i = 0; i < LOW; i++)
		{
			for(int j = 0; j < COL; j++)
			{
				a[i][j] = 1;
			}
		}
	}
	else {
		for (int j = 0; j < COL; j++)
		{
			for(int i = 0; i < COL; i++)
			{
				a[i][j] = 0;
			}
		}
		
	}

	return 0;
}


