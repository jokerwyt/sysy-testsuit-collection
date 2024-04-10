int main()
{
    int a, b, c, d;
    a = 1;
    b = 0;
    c = 13;
    d = 9;

    if (b)
        if (a) {
            c = 29;
        }
    else
        if (b) {
            c = 36;
        } else {
            c = 43;
        }

    if (a)
        if (0) {
            d = 7;
        } else if (b) {
            d = 11;
        }
    else
        if (a) {
            d = c;
        } else {
            d = 8;
        }

    return d;
}
