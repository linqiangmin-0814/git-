/**
  * 这段代码主要用于分析L1 dcache miss的差异
  * 下面这段代买第一段效率高，因为在C/C++中，
  * 数组是按行存储的，程序的按行访问可以充分利用程序的局部性原理（空间局部性）
  * 用time统计下面程序执行的时间，看real time即可
  * 用perf采集dcache miss数据，perf stat -e L1-dcache-load-misses ./test
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


