#pragma once

class Word {
    public:
        virtual void print() const = 0;

        /* Getters */
        Word translation() const;
        bool is_known() const;

        /* Setters */
        void set_translation(const Word translation);
        void set_is_known(const bool is_known);


    protected:
        Word _translation;
        bool _is_known;
};

inline Word Word::translation() const { return _translation; }
inline bool Word::is_known() const { return _is_known; }

