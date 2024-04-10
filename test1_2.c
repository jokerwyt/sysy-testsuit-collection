int a[1000];
int b[1000];
int c[1000];
int lena;
int lenb;
int lenc;


void add() {  //b=b+a
	int i;
	
	if (lena>lenb) {
		lenc = lena;
	}
	else{
		lenc = lenb;
	}
	i=0;
	while (i<=lenc) {
		c[i] = 0;
		i=i+1;
	}
	i=0;
	while (i<lenc) {
		c[i] = c[i] + (a[i] + b[i]);
		if (c[i] >= 10) {
			c[i+1] = c[i+1] + 1;
			c[i] = c[i] - 10;
		}
		i=i+1;
	}
	if (c[lenc]) {   //有进位 数组c的长度+1 
		lenc = lenc+1;
	}
	//b<-c
	i=0;
	while (i<lenc) {
		b[i] = c[i];
		i=i+1;
	}
	lenb = lenc;
}

 
void mult(int n) {  //a=a*n  n最大50,位数=lena+2 
	int i;
	
	i=0;
	while (i<=lena+2) {
		c[i] = 0;
		i=i+1;
	}	
	lenc = lena;
	i=0;
	while (i<lenc) {
		c[i] = c[i] + a[i] * n;
		if (c[i] >= 10) {
			c[i+1] = c[i+1] + (c[i] / 10);
			c[i] = c[i] % 10;
		}
		i=i+1;
	}
	//最高位的值可能>=10 要展开成多位 
	while (c[lenc] >= 10) {
		c[lenc+1] = c[lenc+1] + (c[lenc] / 10);
		c[lenc] = c[lenc] % 10;
		lenc = lenc+1;
	}
	if (c[lenc]) {  //0<最高位<=10 也要长度+1 
		lenc = lenc+1;
	}
	//a<-c 
	i=0;
	while (i<lenc) {
		a[i] = c[i];
		i=i+1;
	}
	lena = lenc;
}

int main()
{
	int n;
	int i;

	n = getint();
	a[0] = 1;  //a=1
	lena = 1;
	b[0] = 0;  //b=0
	lenb = 1;
	
	i=1;
	while (i<=n) {
		mult(i);  //a=a*i
		add();    //b=b+a
		i=i+1; 
	}
	i=lenb-1;
	while (i>=0) {
		putint(b[i]);
		i=i-1;
	} 
	putch(10);
	return 0; 
}