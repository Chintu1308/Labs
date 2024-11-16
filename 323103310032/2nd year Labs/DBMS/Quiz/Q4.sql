CREATE OR REPLACE FUNCTION factorial(n IN NUMBER) RETURN NUMBER IS
   fact NUMBER := 1;
BEGIN
   FOR i IN 1..n LOOP
      fact := fact * i;
   END LOOP;
   RETURN fact;
END;
/
-- Call the function
BEGIN
   DBMS_OUTPUT.PUT_LINE('Factorial: ' || factorial(5));
END;
/