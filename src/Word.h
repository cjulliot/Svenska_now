#pragma once
#include <string>

class Word {
    public:
        virtual void print() const = 0;

        /* Getters */
        string word() const;
        string translation() const;
        bool is_known() const;

        /* Setters */
        void set_translation(const Word translation);
        void set_is_known(const bool is_known);


    protected:
        string _word;
        string _translation;
        bool _is_known;
};

inline string Word::word() const { return _word; }
inline string Word::translation() const { return _translation; }
inline bool Word::is_known() const { return _is_known; }

