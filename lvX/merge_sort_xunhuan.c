int a[1000];

/* L = 左边起始位置, R = 右边起始位置, RightEnd = 右边终点位置*/ 
void Merge(int a[],int tmpA[],int L,int R,int RightEnd)
{
	/* 将有序的A[L]~A[R-1]和A[R]~A[RightEnd]归并成一个有序序列 */
	int LeftEnd;
	int tmp;
	
	LeftEnd=R-1;/* 左边终点位置 */
	tmp=L;/* 有序序列的起始位置 */ 
	
	while(L<=LeftEnd&&R<=RightEnd){
		if(a[L]<a[R]){
			tmpA[tmp]=a[L];/* 将左边元素复制到TmpA */
			tmp = tmp+1;
			L = L+1; 
		}
		else{
			tmpA[tmp]=a[R];/* 将右边元素复制到TmpA */
			tmp = tmp+1;
			R = R+1; 
		}	
	} 
	
	while(L<=LeftEnd){
		tmpA[tmp]=a[L];/* 直接复制左边剩下的 */
		tmp = tmp+1;
		L = L+1; 
	}
	while(R<=RightEnd){
		tmpA[tmp]=a[R];/* 直接复制右边剩下的 */
		tmp = tmp+1;
		R = R+1; 
	}
} 

/* length = 当前有序子列的长度*/
void Mergepass(int a[],int tmpA[],int n,int length) 
{/* 两两归并相邻有序子列 */
	int i;
	int j;
	i=0;
	while(i<=n-2*length){
		Merge(a,tmpA,i,i+length,i+2*length-1);
		i = i + 2*length;
	}
	if(i+length<n){/* 归并最后2个子列----剩余的个数够一个length，不够两个length*/
		Merge(a,tmpA,i,i+length,n-1); 
	}
	else{/* 最后只剩1个子列---剩余的个数不够一个length*/
		j = i;
		while(j<n){
			tmpA[j]=a[j];
			j=j+1;
		}
	}	
} 

void MergeSort(int a[],int n)//稳定 
{
	int length;
	int tmpA[1000];
	
	length=1;/* 初始化子序列长度*/
		while(length<n){
			Mergepass(a,tmpA,n,length);
			length=length*2;
			Mergepass(tmpA,a,n,length);
			length=length*2;
		} 
}

int main()
{
	int size;
	int i;
	size = getint();
	i = 0;
	while(i<size){
		a[i] = getint();
		i=i+1;
	} 
	MergeSort(a,size);
	putarray(size,a); 
	putch(10);
	return 0;
}
