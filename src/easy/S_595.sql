-- S_595.sql
SELECT
    World.name,
    World.population,
    World.area
FROM
    World
WHERE
    World.area >= 3000000 OR World.population >= 25000000;
