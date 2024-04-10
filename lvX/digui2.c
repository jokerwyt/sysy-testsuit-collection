int n;
int a[10];
int v[10];

void DFS(int p)
{
	int i=0;
	if(p==n){//边界 
		putarray(n, a);
		putch(10);
		return;
	}
	while (i<n) { //枚举0->n-1(实际是1->n)这些数 v[i]标志这个数是否被访问过 
		if(v[i]==1) {
			i = i+1;
			continue;
		}
		v[i]=1;
		a[p]=i;//p代表位置 每次给一个位置找值 
		DFS(p+1);
		v[i]=0;//回溯 
		i = i+1;
	}
}

int main()
{
	int i;
	while(1){
		n = getint();
		if(n==0) {
			break;
		}
		i=0;
		while (i<10){
			v[i]=0;
			i=i+1;
		}
		DFS(0);
	}
	return 0;
}
