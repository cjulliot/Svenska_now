#pragma once

#include <string>
#include "Word.h"

class Verb : public Word {
    private:
        string _base;
        string _present;
        string _past;
};
