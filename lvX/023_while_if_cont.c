int main()
{
    int a = 1;
    int b;
    b = 15;

    while (a <= 10) {
        if (a % 2) {
            a = a + 1;
            continue;
        }
        b = b + a;
        if (b % 2) {
            a = a + 1;
        }
    }

    return b;
}