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
int main()
{
    return 0;
    // int arr[10];
    // int val;
    // int left;
    // int right;
    // int i = 0;
    // right = getarray(arr);
    // right = right - 1;
    // val=getint();
    // putint(fun(arr, 0, right, val));
    // return 0;
}
