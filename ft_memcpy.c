
void    ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
    size_t i;
    char *char_dest;
    char *char_src;
    
    i = 0;
    char_dest = (char *)dest;
    char_src = (char *)src;
    if (dest == NULL)
        return NULL;
    while (i < n)
    {
        char_dest[i] = char_src[i];
        i++;
    }
    return (dest)
}