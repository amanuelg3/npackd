#ifndef COMMANDLINE_H
#define COMMANDLINE_H

#include "qstring.h"
#include "qstringlist.h"
#include "qlist.h"

/**
 * Parses a command line with options. The option names are case-sensitive.
 */
class CommandLine
{
    class Option {
    public:
        QString name;
        QString valueDescription;
        QString description;
        bool multiple;
    };

    class ParsedOption {
    public:
        QString name;
        QString value;
    };

    QList<Option*> options;
    QList<ParsedOption*> parsedOptions;
    QStringList freeArguments;

    Option* findOption(const QString& name);
public:
    /**
     * -
     */
    CommandLine();

    ~CommandLine();

    /**
     * Adds an option.
     *
     * @param name name of the option
     * @param description short description of this option for printing help
     * @param valueDescription description of the value for this option. If "", a value
     *     is not possible.
     * @param multiple true if multiple occurences of this option are allowed
     */
    void add(QString name, QString description, QString valueDescription,
            bool multiple);

    /**
     * Parses program arguments
     *
     * @param argc number of arguments
     * @param argv arguments
     * @return error message or ""
     */
    QString parse(int argc, char *argv[]);

    /**
     * @param name name of the option
     * @return true if the given option is present at least once in the command
     *     line
     */
    bool isPresent(const QString& name);

    /**
     * @param name name of the option
     * @return value of the option or QString::Null if not present
     */
    QString get(const QString& name);

    /**
     * @param name name of the option
     * @return values of the option or an empty list if not present
     */
    QStringList getAll(const QString& name);

    /**
     * Debug-Ausgabe.
     */
    void dump();

    /**
     * @return "free" arguments (those without options)
     */
    QStringList getFreeArguments();
};

#endif // COMMANDLINE_H