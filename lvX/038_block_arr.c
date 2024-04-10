int main()
{
    int a;
    a = 1;
    int b = 2;
    {
        int a[4][5];
        int c;
        c = 3;
        a[c][1] = 6;
        {
            int a = 7;
            b = a;
        }
        c = a[c][1];
    }
    int c = 8;
    return b;
}