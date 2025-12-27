bool isPalindrome(int x) {
    if (x < 0) return false;
    if (x % 10 == 0 && x != 0) return false;

    int rev = 0;
    int tempX = x;

    while (x != 0) {
        int digit = x % 10;

        //2147483647 is INT_MAX
        if (rev > (2147483647 - digit) / 10) {
            return false;
        }

        rev = rev * 10 + digit;
        x /= 10;
    }

    return tempX == rev;
}
