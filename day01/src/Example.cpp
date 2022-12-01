#include "Example.hpp"

Example::Example()
{
    this->phrase = "Hello world!";
};

std::string Example::getPhrase() const
{
    return this->phrase;
};

