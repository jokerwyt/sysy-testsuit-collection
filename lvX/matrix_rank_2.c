const int N = 2000;
int M[N][N];

// gets matrix values from user
void get_matrix (int M[][N],int m, int n)
{
	int i;
	int j;
	i=0;
	while (i<m)
	{
		j=0;
		while (j<n) {
			M[i][j] = getint();
			j=j+1;
		}
		i=i+1;
	}
}
 
// prints matrix of mXn
void print_matrix (int M[][N],int m, int n)
{
	int i;
	int j;
	int temp;
	i=0;
	while (i<m) //go over columns
	{
		j=0;
		while (j<n)  //go over rows
		{
			putint(M[i][j]);
			putch(32);
			j=j+1;
		}
		putch(10);
		i=i+1;
	}
}
 
// swaps 2 rows of the matrix
void swap_rows (int M[][N],int x,int y,int n)
{
	int temp[N];
	int i;
	i=0;
	while (i<n) {
		temp[i] = M[x][i];
		i=i+1;
	}
	i=0;
	while (i<n) {
		M[x][i] = M[y][i];
		i=i+1;
	}
	i=0;
	while (i<n) {
		M[y][i] = temp[i];
		i=i+1;
	}
}

// makes Srow to be a lead row. if not suitable because of zeros,
// row will be swapped with another.
// returns 0 if starting column is all 0, 1 o.w.
int make_lead (int M[][N],int Srow,int Scol,int m,int n)
{
	int initial;
	int flag;
	int alpha;
	
	alpha=0;
	flag=0;
	initial = Srow;
	while (flag==0 && Srow<=(m-1))
	{
		if (M[Srow][Scol]!=0) 
		{
			// divide row by alpha
			alpha=M[Srow][Scol];
			while (Scol<=(n-1))
			{
				M[Srow][Scol] = (M[Srow][Scol] / alpha);
				Scol = Scol+1;
			}
			swap_rows (M,Srow,initial,n); 
			flag=1;
		}
		Srow = Srow+1;
	}
	return flag;
}
 
 
// adds and subtracts values from nearby rows
// in order to create a zero column under lead row.
void zero_col (int M[][N],int LeadRow,int Scol,int m,int n)
{
	int i;
	int j;
	int alpha;
	alpha=0;
	i=0;
	while (i<=(m-1))
	{
		if (i==LeadRow) {
			i=i+1;
			continue;
		}
		alpha = (0 - M[i][Scol]);
		j=Scol;
		while (j<=(n-1))
		{
			M[i][j]= (M[i][j] + (alpha * M[LeadRow][j]));
			j=j+1;
		}
		i=i+1;
	}
 
}
 
// 判断第x行是否全部是0
int  allZero(int M[][N],int n,int m,int x)
{
	int i;
	i=0;
    while(i<n)
    {
        if((M[x][i])!=0)
        {
              return 0;
        }
        i=i+1;
    }
    return 1;
}
 
int  rank(int M[][N],int m,int n)
{
    int ans;
    int i;
	ans=0;
	i=0;
    while(i<m)
    {
      if(!allZero(M,m,n,i)){
      	ans = ans+1;
	  }
       i=i+1;
    }
 
    return ans;
}
 
int main()
{
	int i;
	int j;
	int n;
	int m;
	int no_zero_col;

	m=getint();
	n=getint();

	get_matrix (M,m,n); //get matrix from user
	
	print_matrix(M,m,n); //print matrix
 
	// initiate indexs
	i=0;
	j=0;
 
	// fire algorithm
	while (j<=(n-1) && i<=(m-1))
	{
		no_zero_col=0;
		while (no_zero_col==0 && j<=(n-1))
		{
			no_zero_col=make_lead (M,i,j,m,n);
			if (no_zero_col==0) {
				j=j+1;
			}
		}
		if (no_zero_col==0) {
			break;
		}
		zero_col (M,i,j,m,n);
		j=j+1;
		i=i+1;
	}
	
	print_matrix (M,m,n);
    putint(rank(M,m,n));
	return 0;
}