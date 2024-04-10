void foo()
{
}

void bar()
{
    foo();
    foo();
    foo();
    foo();
    foo();
}

int main()
{
    foo();
    bar();
    bar();
    foo();
    foo();
    bar();
    foo();
    bar();
    foo();
    return 0;
}

void unreachable()
{
    foo();
    bar();
    bar();
    foo();
    bar();
    foo();
    bar();
    bar();
    foo();
    bar();
}