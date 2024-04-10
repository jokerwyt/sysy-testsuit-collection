int foo()
{
    int a = 0, b = 1, c = 2;
    if (a) {
        return b;
    }
    if (b)
        return c;
    return a;
}

void bar()
{
    int a = 1, b = 0, c;
    if (b) {
        c = a;
        return;
    }
    b = 2;
    if (a) {
        c = b;
        return;
    }
    a = 3;
    return;
}

int main()
{
    bar();
    bar();
    int a = foo();
    bar();
    a = 159;
    bar();
    bar();
    a = foo();
    bar();
    bar();
    bar();
    return a;
}