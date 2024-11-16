CREATE OR REPLACE PROCEDURE insert_into_table(emp_id IN NUMBER, emp_name IN VARCHAR2) IS
BEGIN
   INSERT INTO employees (id, name) VALUES (emp_id, emp_name);
END;
/
SET SERVEROUTPUT ON;
BEGIN
   insert_into_table(1, 'Charan');
END;
/
