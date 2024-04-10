int map1[110][110], i, j, k, l, m, n, p, vis[110][110], num;
int just[110][110];
int just2[110][110];

int myabs(int a)
{
	if (a >= 0)
		return a;
	else
		return -1 * a;
}

void print(int map[][110], int n) //打印矩阵
{
	int i,j;
	i = 1;
	while (i <= n)
	{
		j = 1;
		while (j < n)
		{
			putint(map[i][j]);
			putch(32);
			//putf("%d ",map[i][j]);
			j = j + 1;
		}
		putint(map[i][j]);
		putch(32);
		//putf("%d ",map[i][j]);
		i = i + 1;
	}
}

void init_vis()
{
	int i = 0;
	int j = 0;
	while (i < 110)
	{
		j = 0;
		while (j < 110)
		{
			vis[i][j] = 0;
			j = j + 1;
		}
		i = i + 1;
	}
}

int slove(int map[][110], int n) //三阶行列式求值，高阶的请自动忽略
{
	init_vis();
	int i, j, ans = 0;
	if (n == 1)
		return map[1][1];
	if (n == 2)
		return map[1][1] * map[2][2] - map[1][2] * map[2][1];
	i = 1;
	while (i <= n)
	{
		int help = 1;
		j = 0;
		while (j < n)
		{
			int cnt = i + j;
			cnt = cnt % n;
			if (cnt == 0)
				cnt = n;
			if (vis[1 + j][cnt] == 0)
			{
				help = help * map[1 + j][cnt];
				vis[1 + j][cnt] = 1;
			}
			else
				break;
			j = j + 1;
		}
		ans = ans + help;
		i = i + 1;
	}
	init_vis();
	i = 1;
	while (i <= n)
	{
		int help = 1;
		j = 0;
		while (j < n)
		{
			int cnt = i + j;
			cnt = cnt % n;
			if (cnt == 0)
				cnt = n;
			if (vis[n - j][cnt] == 0)
			{
				help = help * map[n - j][cnt];
				vis[n - j][cnt] = 1;
			}
			j = j + 1;
		}
		ans = ans - help;
		i = i + 1;
	}
	return ans;
}

void get(int numi, int numj, int map[][110], int n) //得到余子式
{
	int help[110][110], i, j, k, l;
	i = 0;
	while (i < n + 10)
	{
		j = 0;
		while (j < n + 10)
		{
			help[i][j] = 1;
			j = j + 1;
		}
		i = i + 1;
	}

	i = 1;
	while (i <= n - 1)
	{
		j = 1;
		while (j <= n - 1)
		{
			if (i >= numi && j < numj)
			{
				help[i][j] = map[i + 1][j];
			}
			else
			{
				if (i >= numi && j >= numj)
				{
					help[i][j] = map[i + 1][j + 1];
				}
				else
				{
					if (i < numi && j >= numj)
					{
						help[i][j] = map[i][j + 1];
					}
					else
					{
						if (i < numi && j < numj)
						{
							help[i][j] = map[i][j];
						}
					}
				}
			}
			j = j + 1;
		}
		i = i + 1;
	}

	i = 0;
	while (i <= n - 1)
	{
		j = 0;
		while (j <= n - 1)
		{
			just[i][j] = help[i][j];
			j = j + 1;
		}
		i = i + 1;
	}
}

int getans(int nn) //求当前行列式为just时，just的值。
{
	int map[110][110];
	int i, j;
	i = 1;
	while (i <= nn)
	{
		j = 1;
		while (j <= nn)
		{
			map[i][j] = just[i][j];
			j = j + 1;
		}
		i = i + 1;
	}
	if (nn == 2)
		return map[1][1] * map[2][2] - map[1][2] * map[2][1];
	else
	{
		if (nn == 1)
			return map[1][1];
		else
		{
			int cnb = 0;
			int i = 1;
			while (i <= nn)
			{
				get(1, i, map, nn); //得到当前余子式 just
									//	printf("pay attention!\n");
				if (i % 2 == 1)
					cnb = cnb + map[1][i] * getans(nn - 1);
				else
					cnb = cnb - map[1][i] * getans(nn - 1);
				i = i + 1;
			}
			return cnb;
		}
	}
}
int gcd(int m, int n) //求逆矩阵时约分
{
	if (m < n)
		gcd(n, m);
	if (n == 0)
		return m;
	else
		return gcd(n, m % n);
}
void final(int n, int m) //打印当前两个值相除得到的最简分数
{
	if (n * m < 0)
	{
		putch(45);
		final(myabs(n), myabs(m));
		return;
	}
	if (m == 1) {
		putint(n);
		putch(32);
		putch(32);
	}
		//putf("%d  ",n);
	else
	{
		if (n % m == 0) {
		putint(n/m);
		putch(32);
		putch(32);
		//putf("%d  ",n/m);
		}
		else
		{
			if (n < 0 && m < 0)
			{
				n = -n;
				m = -m;
			}
			putint(n / gcd(n, m));
			putch(47);
			putint(m / gcd(n, m));
			putch(32);
			putch(32);
			//putf("%d/%d  ", n / gcd(n, m), m / gcd(n, m));
		}
	}
}
int main()
{
	//freopen("matrix-1.in", "r", stdin);
	//printf("please input the determinant`s size:\n");//输入矩阵的规格
	//scanf("%d", &n);
	n = getint();

	i=0;
	while(i<n+10){
		j=0;
		while(j<n+10){
			map1[i][j] = 1;
			j = j + 1;
		}
		i = i + 1;
	}

	int ans = 0;
	i=1;
	while(i<=n){
		j=1;
		while(j<=n){
			map1[i][j] = getint();
			just[i][j] = map1[i][j];
			j = j + 1;
		}
		i = i + 1;
	}

	//printf("the value of the determinant is:\n");
	int ans1 = getans(n); //矩阵的值
	putint(ans1);
	putch(10);

	int map2[110][110];
	i = 1;
	while(i<=n){
		j = 1;
		while(j<=n){
			map2[i][j] = map1[j][i];
			just[i][j] = map2[i][j];
			j = j + 1;
		}
		i = i + 1;
	}
	int help2 = getans(n);
	if (help2 == 0)
	{
		putch(69);
		// putf("this matrix dont have inverse matrix!!!\n"); //矩阵值为0，无逆矩阵
	}
	int Num = 0;
	i=1;
	while(i<=n)
	{
		j = 1;
		while(j<=n)
		{
			get(i, j, map2, n); //得到当前just
			if ((i + j) % 2 == 0)
				final(getans(n - 1), ans1);
			else
				final(-1 * getans(n - 1), ans1);
			j = j + 1;
		}
		// printf("\n");
		putch(10);
		i = i + 1;
	}
	return 0;
}
