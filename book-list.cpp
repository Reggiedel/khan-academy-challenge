/** Book List rating:
Fiction (3)
Non-Fiction (1)
Sci-Fi (4)
Fantasy (5)
Horror (9)
**/

CREATE TABLE books (id INTEGER PRIMARY KEY, name TEXT, rating INTEGER);

INSERT INTO books VALUES (1, "Fiction", 3);
INSERT INTO books VALUES (2, "Non-Fiction", 1);
INSERT INTO books VALUES (3, "Sci-Fi", 4);
INSERT INTO books VALUES (4, "Fantasy", 5);
INSERT INTO books VALUES (5, "Horror", 9);
SELECT * FROM books;
