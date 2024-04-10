int main()
{
    int a = 1, b = 2;
    {
        int a;
        a = 3;
        {
            int b = 4;
            a = b;
        }
        b = a;
    }
    a = b;
    return b;
}