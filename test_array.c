int arr[2];
int arr1[3];
int arr2[3][4];
int arr3[3][4][2];
int arr4[2][2][2][3];

void getarr1()
{
    int i = 0, n;
    getarray(arr1);
    return;
}

int testarr1(int arr[], int correct[])
{
    getarr1();
    int i = 0;
    while (i < 3)
    {
        if (arr[i] != correct[i])
        {
            return -1;
        }
        i = i + 1;
    }
    return 0;
}

void getarr2()
{
    int i = 0, n, j = 0;
    while (j < 3)
    {
        getarray(arr2[j]);
        j = j + 1;
    }
    return;
}

int testarr2(int arr[][4], int correct[][4])
{
    getarr2();
    int i = 0, j = 0;
    while (j < 3)
    {
        i = 0;
        while (i < 4)
        {
            if (arr[j][i] != correct[j][i])
            {
                return -1;
            }
            i = i + 1;
        }
        j = j + 1;
    }
    return 0;
}

void getarr3()
{
    int i = 0, n, j = 0, k = 0;
    while (j < 3)
    {
        k = 0;
        while (k < 4)
        {
            getarray(arr3[j][k]);
            k = k + 1;
        }
        j = j + 1;
    }
    return;
}

int testarr3(int arr[][4][2], int correct[][4][2])
{
    getarr3();
    int i = 0, j = 0, k = 0;
    while (j < 3)
    {
        i = 0;
        while (i < 4)
        {
            k = 0;
            while (k < 2)
            {
                if (arr[j][i][k] != correct[j][i][k])
                {
                    return -1;
                }
                k = k + 1;
            }
            i = i + 1;
        }
        j = j + 1;
    }
    return 0;
}

void getarr4()
{
    int i = 0, n, j = 0, k = 0, m = 0;
    while (j < 2)
    {
        k = 0;
        while (k < 2)
        {
            m = 0;
            while (m < 2)
            {
                getarray(arr4[j][k][m]);
                m = m + 1;
            }
            k = k + 1;
        }
        j = j + 1;
    }
    return;
}

int testarr4(int arr[][2][2][3], int correct[][2][2][3])
{
    getarr4();
    int i = 0, j = 0, k = 0, m = 0;
    while (j < 2)
    {
        i = 0;
        while (i < 2)
        {
            k = 0;
            while (k < 2)
            {
                m = 0;
                while (m < 3)
                {
                    if (arr[j][i][k][m] != correct[j][i][k][m])
                    {
                        return -1;
                    }
                    m = m + 1;
                }
                k = k + 1;
            }
            i = i + 1;
        }
        j = j + 1;
    }
    return 0;
}

int main()
{
    int n, i = 0, j = 0, k = 0, m = 0;
    arr[0] = 8;
    arr[1] = 9;
    int right1[3] = {1, 2, 3};
    int right2[3][4] = {{1, 2, 3, 4}, {11, 12, 13, 14}, {21, 22, 23, 24}};
    int right3[3][4][2] = {{{arr[0], arr[1]}, {arr[0] + 10, 10 + arr[1]}, {20 + arr[0], 20 + arr[1]}, {30 + arr[0], 30 + arr[1]}}, {{40 + arr[0], 40 + arr[1]}, {50 + arr[0], 50 + arr[1]}, {60 + arr[0], 60 + arr[1]}, {arr[0] + 70, 70 + arr[1]}}, {{arr[0], arr[1]}, {arr[0], arr[1]}, {arr[0], arr[1]}, {arr[0], arr[1]}}};
    int right4[2][2][2][3] = {{{{11, 12, 13}, {right1[0], right1[1], right1[2]}}, {{4, 5, 6}, {right2[1][3], 15, 16}}}, {{{21, 22, 23}, {30 + right1[0], 30 + right1[1], 30 + right1[2]}}, {{}, {}}}};
    putint(testarr1(arr1,right1));
    putint(testarr2(arr2,right2));
    putint(testarr3(arr3,right3));
    putint(testarr4(arr4,right4));
    //putf("%d %d %d %d",testarr1(arr1,right1),testarr2(arr2,right2),testarr3(arr3,right3),testarr4(arr4,right4));
    return 0;
}