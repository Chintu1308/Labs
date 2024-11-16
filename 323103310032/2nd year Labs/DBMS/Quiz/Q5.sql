BEGIN
   DECLARE
      v_name VARCHAR2(50);
   BEGIN
      SELECT name INTO v_name FROM employees WHERE id = 100;
   EXCEPTION
      WHEN NO_DATA_FOUND THEN
         DBMS_OUTPUT.PUT_LINE('Error: No rows found.');
   END;
END;
/