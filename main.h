#ifndef HEADER
#define HEADER

/**
 * struct ptr_to_function - a struct to aid function selection based on
 * c value
 * @c: char to check to return corresponding function
 * @f: function to return
 */
typedef struct ptr_to_function
{
	char c;
	int (*f)(int);
} ptr_f;
int p_char(char c);
int p_string(const char *s);
int p_uint(unsigned int a);
int p_int_d(int a);
int check_string(const char *c);
int check_next_char(const char *c);
int (*get_func_int(char c))(int);
int (*get_func_str())(const char *);
int (*get_func_c())(char);
int _printf(const char *format, ...);

#endif
