/**
 * _isalpha - checks if a character is an alphabetic character
 *
 * @c: the character to check
 *
 * Return: 1 if c is an alphabetic character, 0 otherwise
 */
int _isalpha(int c)
{
        if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
                return (1);
        else
                return (0);
}
