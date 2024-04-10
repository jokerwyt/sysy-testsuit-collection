int main()
{
    int a;
    a = getint();
    int b = 5;
    int c;
    c = getint();
    b = c;
    int d = getint();
    b = getint();

    a = a + c;
    getint();
    b = b + d;
    return a + b;
}