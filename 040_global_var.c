int a;
int b = 2, c;

void foo()
{
    int d;
    d = a;
    a = b;
    b = c;
    a = d;
}

int main()
{
    int b = 1;
    c = 3;
    a = b;
    int c;
    c = 6;
    foo();
    c = 7;
    foo();
    return a;
}