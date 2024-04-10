int main()
{
    int a = 0;
    int b = 2, c = 3, d = 3, e = 4;

    if (b > c) {
        a = a + 0x1;
    }
    if (b < d) {
        a = a + 0x02;
    }
    if (d >= e) {
        a = a + 0x04;
    }
    if (c <= d) {
        a = a + 0x08;
    }
    if (c == d) {
        a = a + 0x10;
    }
    if (c != d) {
        a = a + 0x20;
    }
    if (e > -5) {
        a = a + 0x40;
    }
    if (7 != 6) {
        a = a + 0x80;
    }

    return a;
}