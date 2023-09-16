#include <bitset>
long reverseBits(long n) {
    // Write your code here.

    string binary=  bitset<32>(n).to_string();

    reverse(binary.begin(), binary.end());

    long num= bitset<32>(binary).to_ulong();

    return num;
}