
int main()
{
    int x;
    int y;

    y = 1;
    if (y > 0)
    {
        int x; //This is fine
    }

    if (y == 1)
    {
        int x; // This is also fine
        y = 2; // This too
        int z;
    }
}

