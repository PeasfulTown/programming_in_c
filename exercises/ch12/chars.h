#define IS_UPPERCASE(x)        ((x) >= 'A' && (x) <= 'Z')
#define IS_LOWERCASE(x)        ((x) >= 'a' && (x) <= 'z')
#define IS_ALPHABETIC(x)       (IS_UPPERCASE(x) || IS_LOWERCASE(x))
#define IS_DIGIT(x)            ((x) >= '0' && (x) <= '9')
#define IS_SPECIAL(x)          (!IS_ALPHABETIC(x) && !IS_DIGIT(x))

