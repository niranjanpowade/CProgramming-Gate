void strcpy(*a, *b)
{
    while (*a++ = *b++)
        ;
    // The last elemnt of the array is null so the expression will break at that point.
}