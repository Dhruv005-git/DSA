# Write your MySQL query statement below
SELECT (
    SELECT salary
    FROM (
        SELECT salary,
               ROW_NUMBER() OVER (ORDER BY salary DESC) AS rn
        FROM (
            SELECT DISTINCT salary
            FROM Employee
        ) d
    ) t
    WHERE rn = 2
) AS SecondHighestSalary;