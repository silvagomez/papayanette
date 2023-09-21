#include "papaya_lib"

void    test_ft_put_fd(void)
{
    /*
    The order in which the characters are displayed in the terminal 
    depends on the behavior of the output stream. By default, 
    the standard output stream (stdout) is line-buffered, 
    which means that the characters are stored in a buffer until 
    a newline character ('\n') is encountered or the buffer is full. 
    When either of these conditions is met, the buffer is flushed 
    and the contents are displayed.

    As a result, the characters 'O' and 'K' are displayed immediately 
    without being buffered, while the label "ft_putchar_fd" 
    is still in the buffer.

    The fflush(stdout) call forces the buffer to be flushed immediately, 
    ensuring that "ft_putchar_fd\t\t" is displayed before 
    the subsequent ft_putchar_fd calls.
    */
    printf("ft_putchar_fd\t\t");
    fflush(stdout);
    ft_putchar_fd('O', 1);
    ft_putchar_fd('K', 1);
    printf("\n");

    printf("ft_putstr_fd\t\t");
    fflush(stdout);
    ft_putstr_fd("OK", 1);
    printf("\n");
    
    printf("ft_putendl_fd\t\t");
    fflush(stdout);
    ft_putendl_fd("OK", 1);

    printf("ft_putnbr_fd\t\t");
    fflush(stdout);
    ft_putnbr_fd(42, 1);
    printf(GREEN ".OK" RESET);
    printf("\n");
}
