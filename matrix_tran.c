int main()
{
    int n[3][3]={1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i, j, temp;
    i=0;
    while( i<3)
    {
      j=0;
      while(j<3){
        putint(n[i][j]);
        putch(32);
        j=j+1;
      }
        putch(10);
        i=i+1;
    }
        i=0;
    while( i<3)
    {
      j=0;
      while(j<3){
            if (j>i)
            {  
                temp=n[i][j];
                n[i][j]=n[j][i];
                n[j][i]=temp;
            }
            j=j+1;
      }
        i=i+1;
    }

    i=0;
    while( i<3)
    {
      j=0;
      while(j<3){
        putint(n[i][j]);
        putch(32);
        j=j+1;
      }
        putch(10);
        i=i+1;
    }
    return 0;
}