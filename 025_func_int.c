int get_zero()
{
    int a;
    int b = 2;
    a = 3;
    return 0;
}

int get_one()
{
    int a = 1;
    int b;
    b = a;
    a = 0;
    return b;
}

int get_three()
{
    int a = 3;
    get_one();
    int b;
    b = get_zero();
    b = a;
    a = 2;
    get_zero();
    return b;
}

int main()
{
    int a;
    a = get_one();
    int b;
    a = get_three();
    int c;
    c = get_one();
    get_one();
    return a;
}