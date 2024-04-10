int main()
{
    int a[3] = {};
    int b[4] = {0, 1};
    int c[7] = {2, 8, 6, 3, 9, 1, 5};
    int d[11];
    int e[4] = {101, 56, 24, 79}, f[6], g[9] = {85, 2, 1, 29};

    int i, j;
    i = a[1]; // i = 0
    j = c[i]; // j = 2
    i = g[j]; // i = 1
    j = e[i]; // j = 56
    return j;
}