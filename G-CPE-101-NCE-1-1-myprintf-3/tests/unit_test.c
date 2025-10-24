/*
** EPITECH PROJECT, 2025
** test
** File description:
** test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <math.h>
#include <stdio.h>
#include "../include/my.h"
#include <limits.h>

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, test_decimal_and_integer, .init = redirect_all_stdout)
{
    my_printf("%d %i", 42, -42);
    cr_assert_stdout_eq_str("42 -42");
}

Test(my_printf, test_unsigned_int, .init = redirect_all_stdout)
{
    my_printf("%u", 4294967295U);
    cr_assert_stdout_eq_str("4294967295");
}

Test(my_printf, test_octal, .init = redirect_all_stdout)
{
    my_printf("%o", 83);
    cr_assert_stdout_eq_str("123");
}

Test(my_printf, test_hex_lower_upper, .init = redirect_all_stdout)
{
    my_printf("%x %X", 255, 255);
    cr_assert_stdout_eq_str("ff FF");
}

Test(my_printf, test_pointer, .init = redirect_all_stdout)
{
    int x = 42;
    my_printf("%p", &x);
    fflush(stdout);
    cr_assert_stdout_neq_str("(nil)");
}

Test(my_printf, test_float, .init = redirect_all_stdout)
{
    my_printf("%f", 3.14);
    cr_assert_stdout_eq_str("3.140000");
}

Test(my_printf, test_scientific, .init = redirect_all_stdout)
{
    my_printf("%e %E", 1234.56, 1234.56);
    cr_assert_stdout_eq_str("1.234560e+03 1.234560E+03");
}

Test(my_printf, test_binary, .init = redirect_all_stdout)
{
    my_printf("%b", 5);
    cr_assert_stdout_eq_str("101");
}

Test(my_printf, test_percent, .init = redirect_all_stdout)
{
    my_printf("%%");
    cr_assert_stdout_eq_str("%");
}

Test(my_printf, test_string, .init = redirect_all_stdout)
{
    my_printf("%s", "Hello");
    cr_assert_stdout_eq_str("Hello");
}

Test(my_printf, test_char, .init = redirect_all_stdout)
{
    my_printf("%c %c", 'A', 'Z');
    cr_assert_stdout_eq_str("A Z");
}

Test(my_printf, test_plus_flag, .init = redirect_all_stdout)
{
    my_printf("%d %d", 5, -5);
    cr_assert_stdout_eq_str("5 -5");
}

Test(my_printf, test_zero_padding, .init = redirect_all_stdout)
{
    my_printf("%d", 42);
    cr_assert_stdout_eq_str("42");
}

Test(my_printf, test_hash_flag_hex, .init = redirect_all_stdout)
{
    my_printf("%#x", 255);
    cr_assert_stdout_eq_str("0xff");
}

Test(my_printf, test_hash_flag_octal, .init = redirect_all_stdout)
{
    my_printf("%#o", 83);
    cr_assert_stdout_eq_str("0123");
}

Test(my_printf, test_extreme_values, .init = redirect_all_stdout)
{
    my_printf("%d %u", -2147483648, 4294967295u);
    cr_assert_stdout_eq_str("-2147483648 4294967295");
}

Test(my_printf, test_short_decimal, .init = redirect_all_stdout)
{
    short s1 = 32767;
    short s2 = -32768;
    my_printf("%hd %hd", s1, s2);
    cr_assert_stdout_eq_str("32767 -32768");
}

Test(my_printf, test_short_unsigned, .init = redirect_all_stdout)
{
    unsigned short u = 65535;
    my_printf("%hu", u);
    cr_assert_stdout_eq_str("65535");
}

Test(my_printf, test_short_hex_lower, .init = redirect_all_stdout)
{
    unsigned short u = 65535;
    my_printf("%hx", u);
    cr_assert_stdout_eq_str("ffff");
}

Test(my_printf, test_short_hex_upper, .init = redirect_all_stdout)
{
    unsigned short u = 65535;
    my_printf("%hX", u);
    cr_assert_stdout_eq_str("FFFF");
}

Test(my_printf, extreme_integers, .init = redirect_all_stdout)
{
    my_printf("%d %d\n", INT_MAX, INT_MIN);
    cr_assert_stdout_eq_str("2147483647 -2147483648\n");
}

Test(my_printf, unsigned_and_octal, .init = redirect_all_stdout)
{
    my_printf("%u %o\n", 4294967295u, 0777);
    cr_assert_stdout_eq_str("4294967295 777\n");
}

Test(my_printf, hexadecimal_lowercase, .init = redirect_all_stdout)
{
    my_printf("%x\n", 3735928559u);
    cr_assert_stdout_eq_str("deadbeef\n");
}

Test(my_printf, float_precision, .init = redirect_all_stdout)
{
    my_printf("%f %e\n", 3.1415926, 0.00123);
    cr_assert_stdout_eq_str("3.141593 1.230000e-03\n");
}

Test(my_printf, float_extremes, .init = redirect_all_stdout)
{
    my_printf("%f %f\n", 1e308, 1e-308);
}

Test(my_printf, null_string, .init = redirect_all_stdout)
{
    my_printf("%s\n", NULL);
    cr_assert_stdout_eq_str("(null)\n");
}

Test(my_printf, pointer_address, .init = redirect_all_stdout)
{
    int x = 123;
    my_printf("%p\n", &x);
}

Test(my_printf, binary_format, .init = redirect_all_stdout)
{
    my_printf("%b\n", 5);
    cr_assert_stdout_eq_str("101\n");
}

Test(my_printf, empty_string_and_zero, .init = redirect_all_stdout)
{
    my_printf("%s %d\n", "", 0);
    cr_assert_stdout_eq_str(" 0\n");
}

Test(my_printf, very_long_string, .init = redirect_all_stdout)
{
    char s[10000];
    memset(s, 'A', 9999);
    s[9999] = '\0';
    my_printf("%s\n", s);
}

Test(my_printf, incomplete_format, .init = redirect_all_stdout)
{
    my_printf("test %");
    cr_assert_stdout_eq_str("test ");
}


Test(my_printf, flag_plus_positive_d, .init = redirect_all_stdout)
{
    my_printf("%+d", 42);
    cr_assert_stdout_eq_str("+42");
}

Test(my_printf, flag_plus_negative_d, .init = redirect_all_stdout)
{
    my_printf("%+d", -42);
    cr_assert_stdout_eq_str("-42");
}

Test(my_printf, flag_space_positive_d, .init = redirect_all_stdout)
{
    my_printf("% d", 42);
    cr_assert_stdout_eq_str(" 42");
}

Test(my_printf, flag_space_negative_d, .init = redirect_all_stdout)
{
    my_printf("% d", -42);
    cr_assert_stdout_eq_str("-42");
}

Test(my_printf, flag_zero_padding_d, .init = redirect_all_stdout)
{
    my_printf("%05d", 42);
    cr_assert_stdout_eq_str("00042");
}

Test(my_printf, flag_zero_padding_negative_d, .init = redirect_all_stdout)
{
    my_printf("%05d", -42);
    cr_assert_stdout_eq_str("-0042");
}

Test(my_printf, flag_minus_left_align_negative_d, .init = redirect_all_stdout)
{
    my_printf("%-5d", -42);
    cr_assert_stdout_eq_str("-42  ");
}

Test(my_printf, flag_plus_and_zero_d, .init = redirect_all_stdout)
{
    my_printf("%+05d", 42);
    cr_assert_stdout_eq_str("+0042");
}

Test(my_printf, flag_plus_and_zero_negative_d, .init = redirect_all_stdout)
{
    my_printf("%+05d", -42);
    cr_assert_stdout_eq_str("-0042");
}

// Test(my_printf, flag_space_and_zero_d, .init = redirect_all_stdout)
// {
//     my_printf("% 05d", 42);
//     cr_assert_stdout_eq_str(" 0042");
// }

Test(my_printf, format_decimal_positive, .init = redirect_all_stdout)
{
    my_printf("%d", 123);
    cr_assert_stdout_eq_str("123");
}

Test(my_printf, format_decimal_negative, .init = redirect_all_stdout)
{
    my_printf("%d", -123);
    cr_assert_stdout_eq_str("-123");
}

Test(my_printf, format_decimal_zero, .init = redirect_all_stdout)
{
    my_printf("%d", 0);
    cr_assert_stdout_eq_str("0");
}

Test(my_printf, format_integer_positive, .init = redirect_all_stdout)
{
    my_printf("%i", 999);
    cr_assert_stdout_eq_str("999");
}

Test(my_printf, format_integer_negative, .init = redirect_all_stdout)
{
    my_printf("%i", -999);
    cr_assert_stdout_eq_str("-999");
}

Test(my_printf, format_unsigned_basic, .init = redirect_all_stdout)
{
    my_printf("%u", 42u);
    cr_assert_stdout_eq_str("42");
}

Test(my_printf, format_unsigned_max, .init = redirect_all_stdout)
{
    my_printf("%u", 4294967295u);
    cr_assert_stdout_eq_str("4294967295");
}

Test(my_printf, format_octal_basic, .init = redirect_all_stdout)
{
    my_printf("%o", 8);
    cr_assert_stdout_eq_str("10");
}

Test(my_printf, format_octal_large, .init = redirect_all_stdout)
{
    my_printf("%o", 511);
    cr_assert_stdout_eq_str("777");
}

Test(my_printf, format_hex_lower_large, .init = redirect_all_stdout)
{
    my_printf("%x", 3735928559u);
    cr_assert_stdout_eq_str("deadbeef");
}

Test(my_printf, format_hex_upper_basic, .init = redirect_all_stdout)
{
    my_printf("%X", 255);
    cr_assert_stdout_eq_str("FF");
}

Test(my_printf, format_hex_upper_large, .init = redirect_all_stdout)
{
    my_printf("%X", 305419896u);
    cr_assert_stdout_eq_str("12345678");
}

Test(my_printf, format_binary_basic, .init = redirect_all_stdout)
{
    my_printf("%b", 5);
    cr_assert_stdout_eq_str("101");
}

Test(my_printf, format_binary_zero, .init = redirect_all_stdout)
{
    my_printf("%b", 0);
    cr_assert_stdout_eq_str("0");
}

Test(my_printf, format_binary_large, .init = redirect_all_stdout)
{
    my_printf("%b", 255);
    cr_assert_stdout_eq_str("11111111");
}

Test(my_printf, format_string_basic, .init = redirect_all_stdout)
{
    my_printf("%s", "Hello");
    cr_assert_stdout_eq_str("Hello");
}

Test(my_printf, format_string_empty, .init = redirect_all_stdout)
{
    my_printf("%s", "");
    cr_assert_stdout_eq_str("");
}

Test(my_printf, format_string_null, .init = redirect_all_stdout)
{
    my_printf("%s", NULL);
    cr_assert_stdout_eq_str("(null)");
}

Test(my_printf, format_char_basic, .init = redirect_all_stdout)
{
    my_printf("%c", 'A');
    cr_assert_stdout_eq_str("A");
}

Test(my_printf, format_char_space, .init = redirect_all_stdout)
{
    my_printf("%c", ' ');
    cr_assert_stdout_eq_str(" ");
}

Test(my_printf, format_char_symbol, .init = redirect_all_stdout)
{
    my_printf("%c", '@');
    cr_assert_stdout_eq_str("@");
}

Test(my_printf, format_percent, .init = redirect_all_stdout)
{
    my_printf("%%");
    cr_assert_stdout_eq_str("%");
}

Test(my_printf, format_multiple_basic, .init = redirect_all_stdout)
{
    my_printf("%d %s %c", 42, "Hi", '!');
    cr_assert_stdout_eq_str("42 Hi !");
}

Test(my_printf, format_float_basic, .init = redirect_all_stdout)
{
    my_printf("%f", 3.14);
    cr_assert_stdout_eq_str("3.140000");
}

Test(my_printf, format_float_negative, .init = redirect_all_stdout)
{
    my_printf("%f", -2.5);
    cr_assert_stdout_eq_str("-2.500000");
}

Test(my_printf, format_float_large, .init = redirect_all_stdout)
{
    my_printf("%f", 123456.789);
    cr_assert_stdout_eq_str("123456.789000");
}

Test(my_printf, format_scientific_lower_basic, .init = redirect_all_stdout)
{
    my_printf("%e", 1234.56);
    cr_assert_stdout_eq_str("1.234560e+03");
}

Test(my_printf, format_scientific_lower_small, .init = redirect_all_stdout)
{
    my_printf("%e", 0.000123);
    cr_assert_stdout_eq_str("1.230000e-04");
}

Test(my_printf, format_scientific_upper_basic, .init = redirect_all_stdout)
{
    my_printf("%E", 1234.56);
    cr_assert_stdout_eq_str("1.234560E+03");
}

Test(my_printf, format_scientific_upper_small, .init = redirect_all_stdout)
{
    my_printf("%E", 0.000123);
    cr_assert_stdout_eq_str("1.230000E-04");
}

Test(my_printf, format_combined_numeric, .init = redirect_all_stdout)
{
    my_printf("%d %u %x %o %b", -5, 42u, 255u, 83u, 7u);
    cr_assert_stdout_eq_str("-5 42 ff 123 111");
}

Test(my_printf, format_mixed_string_number, .init = redirect_all_stdout)
{
    my_printf("%s %d", "Value:", 123);
    cr_assert_stdout_eq_str("Value: 123");
}

Test(my_printf, format_short_decimal, .init = redirect_all_stdout)
{
    short s = 32767;
    my_printf("%hd", s);
    cr_assert_stdout_eq_str("32767");
}

Test(my_printf, format_short_unsigned, .init = redirect_all_stdout)
{
    unsigned short s = 65535;
    my_printf("%hu", s);
    cr_assert_stdout_eq_str("65535");
}

Test(my_printf, format_mixed_with_text, .init = redirect_all_stdout)
{
    my_printf("Result: %d, Hex: %x, Msg: %s", 255, 255, "done");
    cr_assert_stdout_eq_str("Result: 255, Hex: ff, Msg: done");
}

Test(my_printf, format_multiple_percent, .init = redirect_all_stdout)
{
    my_printf("100%% OK %% Done");
    cr_assert_stdout_eq_str("100% OK % Done");
}

Test(my_printf, format_newline_char, .init = redirect_all_stdout)
{
    my_printf("%c\n", 'A');
    cr_assert_stdout_eq_str("A\n");
}

Test(my_printf, format_empty_string_and_zero, .init = redirect_all_stdout)
{
    my_printf("%s %d", "", 0);
    cr_assert_stdout_eq_str(" 0");
}

Test(my_printf, format_extreme_int_values, .init = redirect_all_stdout)
{
    my_printf("%d %d", INT_MAX, INT_MIN);
    cr_assert_stdout_eq_str("2147483647 -2147483648");
}

Test(my_printf, format_multiple_combined, .init = redirect_all_stdout)
{
    my_printf("%d %u %x %o %b %s %c %f", 42, 42u, 42u, 42u, 5u, "ok", '!', 3.14);
    cr_assert_stdout_eq_str("42 42 2a 52 101 ok ! 3.140000");
}

Test(my_printf, format_h_numeric, .init = redirect_all_stdout)
{
    short s = -5;
    unsigned short us = 42;
    my_printf("%hd %hu %hx %ho", s, us, us, us);
    cr_assert_stdout_eq_str("-5 42 2a 52");
}

Test(my_printf, format_hh_numeric, .init = redirect_all_stdout)
{
    signed char sc = -5;
    unsigned char uc = 42;
    my_printf("%hhd %hhu %hhx %hho", sc, uc, uc, uc);
    cr_assert_stdout_eq_str("-5 42 2a 52");
}

Test(my_printf, format_l_numeric, .init = redirect_all_stdout)
{
    long l = -5;
    unsigned long ul = 42;
    my_printf("%ld %lu %lx %lo", l, ul, ul, ul);
    cr_assert_stdout_eq_str("-5 42 2a 52");
}

Test(my_printf, format_h_max, .init = redirect_all_stdout)
{
    short s_max = SHRT_MAX;
    short s_min = SHRT_MIN;
    unsigned short us_max = USHRT_MAX;

    my_printf("%hd %hd %hu %hx %ho", s_max, s_min, us_max, us_max, us_max); 
    cr_assert_stdout_eq_str("32767 -32768 65535 ffff 177777");
}

Test(my_printf, format_h_maxa, .init = redirect_all_stdout)
{
    short s_max = SHRT_MAX;
    short s_min = SHRT_MIN;
    unsigned short us_max = USHRT_MAX;

    my_printf("%hd %hd %hu %hx %ho", s_max, s_min, us_max, us_max, us_max);
    cr_assert_stdout_eq_str("32767 -32768 65535 ffff 177777");
}

Test(my_printf, format_l_max, .init = redirect_all_stdout)
{
    long l_max = LONG_MAX;
    long l_min = LONG_MIN;
    unsigned long ul_max = ULONG_MAX;

    my_printf("%ld %ld %lu %lx %lo", l_max, l_min, ul_max, ul_max, ul_max);
    cr_assert_stdout_eq_str("9223372036854775807 -9223372036854775808 18446744073709551615 ffffffffffffffff 1777777777777777777777");
}

Test(my_printf, format_ll_max_min, .init = redirect_all_stdout)
{
    long long ll_max = LLONG_MAX;
    long long ll_min = LLONG_MIN;

    my_printf("%lld %lld", ll_max, ll_min);
    cr_assert_stdout_eq_str("9223372036854775807 -9223372036854775808");
}

Test(my_printf, format_ull_max, .init = redirect_all_stdout)
{
    unsigned long long ull_max = ULLONG_MAX;

    my_printf("%llu", ull_max);
    cr_assert_stdout_eq_str("18446744073709551615");
}

Test(my_printf, format_ull_hex, .init = redirect_all_stdout)
{
    unsigned long long ull_max = ULLONG_MAX;

    my_printf("%llx", ull_max);
    cr_assert_stdout_eq_str("ffffffffffffffff");
}

Test(my_printf, format_ull_octal, .init = redirect_all_stdout)
{
    unsigned long long ull_max = ULLONG_MAX;

    my_printf("%llo", ull_max);
    cr_assert_stdout_eq_str("1777777777777777777777");
}

Test(my_printf, format_ll_random, .init = redirect_all_stdout)
{
    long long a = 42;
    long long b = -9876543210LL;

    my_printf("%lld %lld", a, b);
    cr_assert_stdout_eq_str("42 -9876543210");
}
