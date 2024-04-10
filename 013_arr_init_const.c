int main()
{
    const int a = 1;
    const int b = 2;
    int c[b];

    const int d = 5, e = 4;
    const int f[e][d] = {};
    const int g[b + e][d + b] = {};

    const int i = 2, j = 1;
    int p[i + 4][j + 2][3 + 5];
    const int q[20] = {j, i + 3, 257, 0, e + b};
    const int r[1][5 + i] = {};

    return 0;
}