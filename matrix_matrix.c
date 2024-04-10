int matrix1[100][100];
int matrix2[100][100];
int result[100][100];

void calculate(int n, int m, int k)
{
    int i = 0;
    int j = 0;
    int temp = 0;
    int p = 0;
    while (i < n)
    {
        j = 0;
        while (j < k)
        {
            p = 0;
            temp = 0;
            while (p < m)
            {
                temp = temp + matrix1[i][p] * matrix2[p][j];
                p = p + 1;
            }
            result[i][j] = temp;
            j = j + 1;
        }
        i = i + 1;
    }
    return;
}

int main()
{
    int i = 0;
    int n;
    int m;
    int k;
    n = getint();
    while (i < n)
    {
        m = getarray(matrix1[i]);
        i = i + 1;
    }
    i = 0;
    while (i < m)
    {
        k = getarray(matrix2[i]);
        i = i + 1;
    }
    calculate(n, m, k);
    i = 0;
    while (i < n)
    {
        putarray(k, result[i]);
        i = i + 1;
    }
    return 0;
}