SELECT DISTINCT num AS ConsecutiveNums
FROM 
(
    SELECT 
        num,
        LEAD(num, 1) OVER (ORDER BY id) AS next_num_1,
        LEAD(num, 2) OVER (ORDER BY id) AS next_num_2
    FROM Logs
) 
AS temp
WHERE num = next_num_1 AND num = next_num_2;

-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna