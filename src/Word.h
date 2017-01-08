#pragma once
#include <string>

class Word {
    public:
        virtual void print() const = 0;

        /* Getters */
        std::string word() const;
        std::string translation() const;
        bool is_known() const;

        /* Setters */
        void set_translation(const std::string translation);
        void set_is_known(const bool is_known);


    protected:
        std::string _word;
        std::string _translation;
        bool _is_known;
};

inline std::string Word::word() const { return _word; }
inline std::string Word::translation() const { return _translation; }
inline bool Word::is_known() const { return _is_known; }

