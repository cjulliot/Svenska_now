CREATE TABLE Dictionary (
    Id          INTEGER     PRIMARY KEY AUTOINCREMENT NOT NULL,
    Word        TEXT        NOT NULL,
    Nature      TEXT        NOT NULL REFERENCES NatureType(Nature),
    Translation TEXT        NOT NULL,
    IsKnown     INTEGER     NOT NULL DEFAULT (0),
    Theme       TEXT        NOT NULL,
    Gender      TEXT        REFERENCES GenderType(Gender),
    Definite    TEXT,
    Plural      TEXT,
    DefPlural   TEXT,
    Present     TEXT,
    Past        TEXT
);

CREATE TABLE NatureType (
    Nature      TEXT        PRIMARY KEY NOT NULL,
    Seq         INTEGER     NOT NULL
);

CREATE TABLE GenderType (
    Gender      TEXT        PRIMARY KEY NOT NULL,
    Seq         INTEGER     NOT NULL
);

INSERT INTO NatureType(Nature, Seq) VALUES ("VERB", 0);
INSERT INTO NatureType(Nature, Seq) VALUES ("NOUN", 1);

INSERT INTO GenderType(Gender, Seq) VALUES ("UTRUM", 0);
INSERT INTO GenderType(Gender, Seq) VALUES ("NEUTRUM", 1);

INSERT INTO Dictionary(Word, Nature, Translation, Theme, Present, Past)
    VALUES ("vara", "VERB", "be", "verbs1", "är", "var");
