void main()
{
    unsigned int a = 2147483647, b = 2147483648;
    unsigned int c = 4294967295;
    unsigned int d = 4294967296;
    unsigned int e = 4294967297, f = -1, g = -2;

    printf("%d %u\n", a, a);
    printf("%d %u\n", b, b);
    printf("%d %u\n", c, c);
    printf("%d %u\n", d, d);
    printf("%d %u\n", e, e);
    printf("%d %u\n", f, f);
    printf("%d %u\n", g, g);
}

