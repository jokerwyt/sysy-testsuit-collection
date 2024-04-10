int main()
{
    int a;
    int b = 2, c = 3, d = 4, e = 5;

    a = (((b + c) * ((e - c) + (e / b))) % d) + ((4 * 7) - (((255 % d) * 14) / e));

    return a;
}