int main()
{
    int a, b;
    a = 0;

    if (a) {
        return 1;
    } else {
        a = 3;
        if (a) {
            b = 2;
            return b;
        }
        return a;
    }

    return 4;
}