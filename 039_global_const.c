const int a = 100;

const int b = 200, c = 300;

int main()
{
    int a;
    a = b;
    const int b = c;
    a = c;
    int c;
    return b;
}