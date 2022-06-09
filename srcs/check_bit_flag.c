static int is_flag(const char c)
{
    // formatは strchr "cspdisxX%"で。
    int bit_flag;
    int i;
    const char  *flag_set = "#-+ 0";

    bit_flag = 0;
    i = 0;
    while (i < ft_strlen(flag_set))//strlen("#-+ 0")の意味
    {
        if (flag_set[i] == c)//[0]# [1]- [2]+ [3]' ' [4]0
            bit_flag |= (1 << i); //ビットシフトをiで。
        i++;
    }
    return (bit_flag);
}

static int  check_flags(const char *str)
{
    int bit_flag;
    size_t  j;

    bit_flag = 0;
    j = 0;
    while (str[j] != '\0')
    {
        bit_flag |= is_flag(str[j]);//flag立てる関数
        j++;
    }
    if (bit_flag & (1 << 1))//'-'の場合、
        bit_flag &= ~(1 << 3);//' 'のフラグ折る
    return (bit_flag);
}
