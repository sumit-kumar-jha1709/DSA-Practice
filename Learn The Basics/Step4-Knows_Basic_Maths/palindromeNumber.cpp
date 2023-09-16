int reverse(int n)
{
    int reversed_number=0;
    while(n != 0) {
    int remainder = n % 10;
    reversed_number = reversed_number * 10 + remainder;
    n /= 10;
  }

  return reversed_number;
}

bool palindrome(int n)
{
    // Write your code here
    int copy=n;

    int revCopy = reverse(copy);
    
    if(revCopy==n) return true;
    else {
    return false;
    }
}