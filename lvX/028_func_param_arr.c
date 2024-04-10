int foo(int a[])
{
    int b = 2, c;
    c = b;
    b = 3;
    return c;
}

void bar(int b[][8], int c, int d[][11][5])
{
    int a;
    a = c;
    c = 1;
}

int main()
{
    int a = 0;
    int b[10][8] = {1, 2, 3}, c[60][3];
    int d[2][11][5] = {{1, 2, 3, 4, 5}, 6};
    bar(b, a, d);
    int e[105];
    a = foo(e);
    bar(b, 4, d);
    return a;
}