#ifndef TEXTFORMAT_H
#define TEXTFORMAT_H


#include <QTextCursor>

// This here "TextFormatter" is our abstract class

class TextFormatter {
public:
    virtual ~TextFormatter() {}
    virtual void applyFormatting(QTextCursor &cursor) = 0;
};



#endif // TEXTFORMAT_H
