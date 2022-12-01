#ifndef EXAMPLE_H
#define EXAMPLE_H
#include <string>

class Example
{
public:
    Example();

    // Getter
    std::string getPhrase() const;

private:
    std::string phrase;
};

#endif
