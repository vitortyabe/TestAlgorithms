SELECT DISTINCT(cats.Nome)
FROM cats
UNION
SELECT DISTINCT(dogs.Nome)
FROM dogs;
