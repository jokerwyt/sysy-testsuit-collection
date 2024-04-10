int main()
{
    int a;
    int b = 2, c = 3;
    a = 0;

    if (b + c > 5) {
        a = a + 0x01;
    }
    if (c + 9 <= b + 8) {
        a = a + 0x02;
    }
    if (4 + 5 + 6 == b + 12 + c) {
        a = a + 0x04;
    }
    if (7 != 2 + c + 2) {
        a = a + 0x08;
    }

    return a;
}