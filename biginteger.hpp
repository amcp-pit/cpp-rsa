#ifndef BIG_INTEGER_HPP
#define BIG_INTEGER_HPP
#include <string>

enum class biginteger_base { dec=10, hex=16 };

class BigInteger;

std::string to_string(const BigInteger&);
std::string to_hex(const BigInteger&);

#endif
