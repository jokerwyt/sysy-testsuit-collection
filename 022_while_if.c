int main()
{
    int a, b = 0;
    a = 1;

    while (a < 10) {
        if (b > 5)
            b = b - 10;
        else
            b = b + a;
        a = a + 1;
    }

    return b;
}