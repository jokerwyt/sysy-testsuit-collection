void QuickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int i = low;
        int j = high;
        int k = arr[low];
        while (i < j)
        {
            while(i < j && arr[j] >= k)    
            {
                j=j-1;
            }
            if(i < j)
            {
                arr[i] = arr[j];
                i=i+1;
            }
            while(i < j && arr[i] < k)      
            {
                i=i+1;
            }
            if(i < j)
            {
                arr[j] = arr[i];
                j=j-1;
            }
        }
        arr[i] = k;
        QuickSort(arr, low, i - 1); 
        QuickSort(arr, i + 1, high);
    }
}



int find(int n,int a[],int l)
{
  int low=0;
  int high=l-1;
  int middle=0;
  while(low<=high)
  {
    middle=(low+high)/2;
    if(n==a[middle])
    {
      return middle;
    }
    else
    {
      if(n>a[middle])
        low=middle+1;
      else
        high=middle-1;
    } 
  }
  return -1;
}

int fun(int arr[], int start, int end, int val)
{
    int mid;
    mid = (start + end) / 2;

    if (arr[mid] == val)
        return mid;
    if (start < end)
    {
        if (arr[mid] > val)
            return fun(arr, start, mid, val);
        else
            return fun(arr, mid + 1, end, val);
    }
    else
        return -1;
}

int main(){
  return 0;
  // int a[23]={2,3,5,6,7,8,9,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60};
  // int b[100];
  // int l1=23;
  // int i=0,n;
// 
  // int l2=getarray(b);
  // QuickSort(b,0,l2-1);
  // putarray(l2,b);
  // putch(10);
  // int op=getint();
  // while(op!=-1){
  //   n=getint();
  //   if(op==0){
  //     int x=find(n,a,l1);
  //     int y=fun(a,0,l1-1,n);
  //     if(x!=y){
  //       return -1;
  //     }
  //     putint(x);
  //   }else{
  //     int x=find(n,b,l2);
  //     int y=fun(b,0,l2-1,n);
  //     if(x!=y){
  //       return -1;
  //     }
  //     putint(x);
  //   }
  //   putch(10);
  //   op=getint();
  // }
  // return 0;
}