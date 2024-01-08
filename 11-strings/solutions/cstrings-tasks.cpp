#include <iostream>
#include <cstring>

// Task 1
void toUpper(char *str)
{
    if (!str)
        return;

    while (*str)
    {
        if (*str >= 'a' && *str <= 'z')
            *str -= 'a' - 'A';
        str++;
    }
}

// Task 2
void reverse(char *str)
{
    int len = strlen(str);

    // Variant 1 - array-like
    // for (int i = 0; i < len/2; i++)
    //     std::swap(str[i], str[len - 1 - i]);

    // Variant 2 - pure pointers
    char *mid = str + len / 2;
    char *end = str + len - 1;
    while (str != mid)
    {
        std::swap(*str, *end);
        str++;
        end--;
    }
}

// Task 3
char* concatenate(const char *s1, const char *s2)
{
    // Allocate enough memory for both strings + the term. 0 ('\0')
    char * result = new (std::nothrow) char[strlen(s1) + strlen(s2) + 1];
    if (!result)
        return nullptr;

    strcpy(result, s1);
    strcat(result, s2);
    return result;
}

// Task 4
bool isPalindrome(const char *str)
{
    int len = strlen(str);
    for (int i = 0; i < len/2; i++)
        if (str[i] != str[len - 1 - i])
            return false;

    return true;
}

// Task 5
int atoi(const char *s)
{
    int result = 0;
    while (*s != '\0')
    {
        if (*s >= '0' && *s <= '9')
        {
            result = result * 10 + (*s - '0');
        }
        else
        {
            break;
        }
    }
    return result;
}

// Task 6
void swap(char *& str1, char *& str2)
{
    char *temp = str1;
    str1 = str2;
    str2 = temp;
}

void sortWords(char **arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (strcmp(arr[j], arr[j + 1]) > 0)
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Task 7
void capitalizeFirstLetter(char *s)
{
    bool newWord = true;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (newWord && s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - ('a' - 'A');
            newWord = false;
        }
        else if (s[i] == ' ')
        {
            newWord = true;
        }
    }
}

// Task 8
const char *replaceWord(const char *str, const char *oldWord, const char *newWord)
{
    int oldWordLen = strlen(oldWord);
    int newWordLen = strlen(newWord);
    int count = 0;

    // Counting the number of times old word occurs in the string
    for (const char *temp = str; temp = strstr(temp, oldWord); temp += oldWordLen)
    {
        count++;
    }

    // Allocating space for the new string
    char *result = new (std::nothrow) char[strlen(str) + count * (newWordLen - oldWordLen) + 1];
    if (!result)
        return nullptr;

    int i = 0;
    while (*str)
    {
        // Compare the substring with the result
        if (strstr(str, oldWord) == str)
        {
            strcpy(result + i, newWord);
            i += newWordLen;
            str += oldWordLen;
        }
        else
        {
            result[i++] = *str++;
        }
    }

    result[i] = '\0';
    return result;
}

// Task 9
char **initLogSystem(unsigned capacity)
{
    char **logStream = new (std::nothrow) char *[capacity];
    if (!logStream)
        return nullptr;

    for (int i = 0; i < capacity; i++)
    {
        logStream[i] = nullptr;
    }
    return logStream;
}

void resizeLogSystem(char **logger, unsigned &size, unsigned &capacity)
{
    int newCapacity = capacity * 2;
    char **newLogger = new (std::nothrow) char *[newCapacity];
    if (!newLogger)
        return;

    for (int i = 0; i < capacity; i++)
    {
        newLogger[i] = logger[i];
    }

    for (int i = capacity; i < newCapacity; i++)
    {
        newLogger[i] = nullptr;
    }

    delete[] logger;
    logger = newLogger;
    capacity = newCapacity;
}

void log(char **logger, unsigned &size, unsigned &capacity, char *message)
{
    if (size >= capacity)
    {
        resizeLogSystem(logger, size, capacity);
    }
    unsigned messageSize = strlen(message);

    logger[size] = new (std::nothrow) char[messageSize];
    if (!logger[size])
        return;

    strncpy(logger[size], message, messageSize - 1);
    logger[size][messageSize - 1] = '\0';
    size++;
}

void displayAndClearLog(const char **logger, unsigned size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << logger[i] << std::endl;
        delete[] logger[i];
    }
    delete[] logger;
}

// Task 10

bool isLetter(char c)
{
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

bool isPunctuation(char c)
{
    return c == '.' || c == ',' || c == '!' || c == '?';
}

void countTextEntities(const char *text, int &wordCount, int &spaceCount, int &letterCount)
{
    wordCount = 0;
    spaceCount = 0;
    letterCount = 0;
    bool inWord = false;

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == ' ' || isPunctuation(text[i]))
        {
            spaceCount++;
            if (inWord)
            {
                wordCount++;
                inWord = false;
            }
        }
        else if (isLetter(text[i]))
        {
            letterCount++;
            inWord = true;
        }
    }

    // Add the last word if the text doesn't end with a space
    if (inWord)
    {
        wordCount++;
    }
}

void removeSpacesBeforePunctuation(char *text)
{
    int length = strlen(text);
    int shift = 0;

    for (int i = 0; i < length; ++i)
    {
        if (isPunctuation(text[i]) && i - shift - 1 >= 0 && text[i - shift - 1] == ' ')
        {
            shift++;
        }
        text[i - shift] = text[i];
    }
    text[length - shift] = '\0'; // Null-terminate the adjusted string
}

char toUpperCase(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        return c - 'a' + 'A';
    }
    return c;
}

char toLowerCase(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return c - 'A' + 'a';
    }
    return c;
}

void capitalizeAfterPeriod(char *text)
{
    bool capitalize = true;
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (capitalize && isLetter(text[i]))
        {
            text[i] = toUpperCase(text[i]);
            capitalize = false;
        }
        else if (text[i] == '.')
        {
            capitalize = true;
        }
        else if (isLetter(text[i]))
        {
            text[i] = toLowerCase(text[i]);
        }
    }
}

void replaceWord(char *text, const char *oldWord, const char *newWord)
{
    const unsigned MAX_SIZE = 255;
    char buffer[MAX_SIZE + 1];
    int oldWordLen = strlen(oldWord);
    int newWordLen = strlen(newWord);
    int bufferIdx = 0;

    for (int i = 0; text[i] != '\0';)
    {
        if (strncmp(&text[i], oldWord, oldWordLen) == 0)
        {
            strcpy(&buffer[bufferIdx], newWord);
            bufferIdx += newWordLen;
            i += oldWordLen;
        }
        else
        {
            buffer[bufferIdx++] = text[i++];
        }
    }
    buffer[bufferIdx] = '\0';
    strcpy(text, buffer);
}

void removeConsecutiveDuplicates(char *text)
{
    const unsigned MAX_TEXT_SIZE = 512;
    const unsigned MAX_WORD_SIZE = 128;

    char buffer[MAX_TEXT_SIZE];
    int bufferIdx = 0, textIdx = 0;

    char lastWord[MAX_WORD_SIZE];
    char currentWord[MAX_WORD_SIZE];
    int wordIdx = 0;

    while (text[textIdx] != '\0')
    {
        if (isLetter(text[textIdx]))
        {
            wordIdx = 0;
            while (isLetter(text[textIdx]) && wordIdx < MAX_WORD_SIZE - 1)
            {
                currentWord[wordIdx++] = text[textIdx++];
            }
            currentWord[wordIdx] = '\0';

            if (strcmp(lastWord, currentWord) != 0)
            {
                strcpy(&buffer[bufferIdx], currentWord);
                bufferIdx += wordIdx;
                strcpy(lastWord, currentWord);
            }
        }
        else
        {
            buffer[bufferIdx++] = text[textIdx++];
        }
    }
    buffer[bufferIdx] = '\0';
    strcpy(text, buffer);
}

char **readReplacementPairs(int numOfReplacements)
{
    const unsigned MAX_PAIR_LENGTH = 128;
    char **pairs = new char *[numOfReplacements];
    char pair[MAX_PAIR_LENGTH];

    for (int i = 0; i < numOfReplacements; ++i)
    {
        std::cout << "Enter replacement pair #" << (i + 1) << " (format: oldWord-newWord): ";
        std::cin.getline(pair, MAX_PAIR_LENGTH);

        pairs[i] = new char[strlen(pair) + 1];
        strcpy(pairs[i], pair);
    }

    return pairs;
}

void processReplacements(const char *text, int numOfReplacements, char **pairs)
{
    const int MAX_WORD_LENGTH = 128;
    char oldWord[MAX_WORD_LENGTH];
    char newWord[MAX_WORD_LENGTH];
    char pair[MAX_WORD_LENGTH * 2];

    for (int i = 0; i < numOfReplacements; ++i)
    {
        // Extract oldWord and newWord from pair
        char *token = strtok(pairs[i], "-");
        if (token != NULL)
        {
            strcpy(oldWord, token);
            token = strtok(NULL, "-");
            if (token != NULL)
            {
                strcpy(newWord, token);
                replaceWord(text, oldWord, newWord);
            }
        }
    }
}

void TextEditor()
{
    const int MAX_TEXT_SIZE = 2048;
    char text[MAX_TEXT_SIZE];
    int numOfReplacements;

    std::cout << "Enter the number of replacement pairs: ";
    std::cin >> numOfReplacements;
    std::cin.ignore(); // to ignore the newline after reading number

    char **pairs = readReplacementPairs(numOfReplacements);

    processReplacements(text, numOfReplacements, pairs);

    std::cout << "Enter your text: ";
    std::cin.getline(text, MAX_TEXT_SIZE);

    // Process the text
    removeSpacesBeforePunctuation(text);
    capitalizeAfterPeriod(text);
    removeConsecutiveDuplicates(text);

    // Count and display words, spaces, and letters
    int wordCount, spaceCount, letterCount;
    countTextEntities(text, wordCount, spaceCount, letterCount);

    std::cout << "Processed Text: " << text << std::endl;
    std::cout << "Words: " << wordCount << std::endl;
    std::cout << "Spaces: " << spaceCount << std::endl;
    std::cout << "Letters: " << letterCount << std::endl;

    for (int i = 0; i < numOfReplacements; ++i)
    {
        delete[] pairs[i];
    }
    delete[] pairs;
}

int main()
{

    return 0;
}
