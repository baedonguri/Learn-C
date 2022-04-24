void print_multiple_chars(char c, int n_stars, bool print_newline){
    for (int i=0; i < n_stars; ++i)
        printf("%c", c);
    
    if (print_newline)
        printf("\n");
}