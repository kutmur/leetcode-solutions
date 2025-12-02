-- S_1757.sql

-- Query to find product_ids of eco-friendly (low fat and recyclable) products
SELECT
    product_id
FROM
    Products
WHERE
    low_fats = 'Y' AND recyclable = 'Y';
