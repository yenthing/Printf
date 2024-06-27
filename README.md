# Overview - ft_printf

The project involves recoding the printf() function in C, allowing us to improve our programming skills by working with variadic functions.

The goal is to create a library, libftprintf.a, containing a custom ft_printf() function that mimics the original printf() in functionality but not in buffer management.

The project is designed to enhance programming skills and involves strict adherence to coding standards and proper memory management.

The function must handle various conversions, including characters, strings, pointers, integers, and percentages. Strict adherence to coding standards and proper 
memory management is required. Additionally, students can implement bonus features for extra credit, provided the mandatory requirements are perfectly met. 

The custom ft_printf() function must support various format specifiers such as %c, %s, %p, %d, %i, %u, %x, %X, and %%.

To create a comprehensive test suite for `ft_printf()`, we need to cover all mandatory and optional features described in the project. Here are the relevant test cases for each format specifier and combination of flags:

## Mandatory Test Cases:

1. **Single Character `%c`**:
    - `ft_printf("Character: %c\n", 'A');` should print `Character: A`.

2. **String `%s`**:
    - `ft_printf("String: %s\n", "Hello");` should print `String: Hello`.

3. **Pointer `%p`**:
    - `ft_printf("Pointer: %p\n", (void *)1234);` should print the pointer address in hexadecimal.

4. **Decimal Integer `%d` and `%i`**:
    - `ft_printf("Decimal: %d\n", 1234);` should print `Decimal: 1234`.
    - `ft_printf("Integer: %i\n", -1234);` should print `Integer: -1234`.

5. **Unsigned Decimal Integer `%u`**:
    - `ft_printf("Unsigned: %u\n", 1234);` should print `Unsigned: 1234`.

6. **Hexadecimal Integer `%x` and `%X`**:
    - `ft_printf("Hex (lowercase): %x\n", 1234);` should print `Hex (lowercase): 4d2`.
    - `ft_printf("Hex (uppercase): %X\n", 1234);` should print `Hex (uppercase): 4D2`.

7. **Percent `%%`**:
    - `ft_printf("Percent: %%\n");` should print `Percent: %`.

## Bonus Test Cases 

  ### FYI: I did not do the bonus at that point but there are some tests, which can help you much 🌝

1. **Flags `-0.` and Field Width**:
    - Left-justify: `ft_printf("Left-justify: %-10d!\n", 123);` should print `Left-justify: 123       !`.
    - Zero-padding: `ft_printf("Zero-padding: %010d!\n", 123);` should print `Zero-padding: 0000000123!`.
    - Precision: `ft_printf("Precision: %.5d!\n", 123);` should print `Precision: 00123!`.

2. **Flags `# +`**:
    - Alternate form: `ft_printf("Alternate form: %#x!\n", 123);` should print `Alternate form: 0x7b!`.
    - Space: `ft_printf("Space: % d!\n", 123);` should print `Space:  123!`.
    - Sign: `ft_printf("Sign: %+d!\n", 123);` should print `Sign: +123!`.

## Additional Considerations:
- **Handling NULL strings**:
    - `ft_printf("NULL string: %s\n", NULL);` should print `NULL string: (null)`.

- **Edge cases**:
    - Zero value: `ft_printf("Zero: %d %x %u\n", 0, 0, 0);` should print `Zero: 0 0 0`.
    - Large numbers: `ft_printf("Large number: %u\n", UINT_MAX);` should print the maximum unsigned int value.

By covering these test cases, you ensure that your `ft_printf()` implementation correctly handles all specified functionalities and edge cases.

## LUCK be with you in THESE TESTS 🙈
