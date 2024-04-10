int main()
{
    int a = 1;
    const int b = 2;
    const int c = b;
    const int d = c + 1;
    const int e = b + c;
    const int f = d + e, g = 3;
    const int h = 4 + 7;
    int i = h;
    i = f;
    return i;
}