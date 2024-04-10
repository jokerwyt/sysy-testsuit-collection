void foo(int a)
{
    int b;
    b = a;
    a = b;
    int c = b;
    a = b;
    c = a;
}

int bar(int a, int b)
{
    int c;
    c = b;
    foo(c);
    a = b;
    b = c;
    foo(27);
    return c;
}

int dummy()
{
    int a;
    a = 16;
    foo(a);
    int b = 97, c;
    c = bar(a, b);
    foo(c);
    foo(a);
    b = bar(c, a);
    return c;
}

int main()
{
    int a;
    a = dummy();
    return a;
}