CREATE OR REPLACE PROCEDURE find_min(x IN NUMBER, y IN NUMBER, min OUT NUMBER) IS
BEGIN
   IF x < y THEN
      min := x;
   ELSE
      min := y;
   END IF;
END;
/
SET SERVEROUTPUT ON;
DECLARE
   result NUMBER;
BEGIN
   find_min(10, 20, result);
   DBMS_OUTPUT.PUT_LINE('Minimum is: ' || result);
END;
/
