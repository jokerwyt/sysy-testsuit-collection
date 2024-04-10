int one()
{
    putint(1);
    return 1;
}

int zero()
{
    putint(0);
    return 0;
}

int main()
{
    if (zero()) {
    }
    putch(10);
    if (one() && zero()) {
    }
    putch(10);
    if (zero() && one()) {
    }
    putch(10);
    if (one() && 1 && zero() && one()) {
    }
    putch(10);
    return 0;
}