int     ft_str_is_alpha(char *str)
{
        int size = 0;
        int i = 0;
        int j = 0;

        while (str[size])
        {
          size++;
        }
        while(str[i] != '\0')
        {
          if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
          {
            j++;
            i++;
          }
          else
          {
            return (0);
          }
        }
          if (size == 0 || j == size)
            return (1);
          else
              return (0);
}
int main(void)
{
        ft_str_is_alpha("by74mpo");
}
