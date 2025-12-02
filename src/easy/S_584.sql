-- S_584.sql

-- Table creation for context
CREATE TABLE Customer (
    id INT,
    name VARCHAR(25),
    referee_id INT
);

-- Sample data
INSERT INTO Customer (id, name, referee_id) VALUES
(1, 'Will', NULL),
(2, 'Jane', NULL),
(3, 'Alex', 2),
(4, 'Bill', NULL),
(5, 'Zack', 1),
(6, 'Mark', 2);

-- Query to solve the problem
SELECT
    name
FROM
    Customer
WHERE
    referee_id <> 2
    OR referee_id IS NULL;