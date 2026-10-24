CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  -- Handle offset for LIMIT (needs N - 1)
  DECLARE M INT;
  SET M = N - 1;
  
  RETURN (
      SELECT DISTINCT salary 
      FROM Employee 
      ORDER BY salary DESC 
      LIMIT M, 1
  );
END

-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna