BEGIN
   DECLARE
      num NUMBER := 10;
      denom NUMBER := 0;
      result NUMBER;
   BEGIN
      result := num / denom;
   EXCEPTION
      WHEN ZERO_DIVIDE THEN
         DBMS_OUTPUT.PUT_LINE('Error: Division by zero is not allowed.');
   END;
END;
/
