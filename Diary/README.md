This is a diary program that allows the user to save, read and search for messages.
Suggested usage is as follows:

    ./diary add <message>
    Adds message to the diary. In case of there being no message provided through command line, the user is prompted with an input request.

    ./diary list <format>
    Lists all messages saved on diary. If no format is informed, messages are printed in accordance to the default format found on the config file.
    Format patterns use %d for date;
                        %t for time;
                        %m for message content.

    ./diary search <message>
    Searches for key provided by the user. If no key is inserted through command line, the user is prompted with an input request.

    ./diary interactive
    Runs the interactive mode of diary, where the user can navigate through the different features of this application via a more user-friendly interface.
    
source code available at: https://github.com/artoop/LP1IMD/tree/master/General


