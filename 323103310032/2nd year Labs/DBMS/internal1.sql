create database Charan;
use Charan;

/*Q1 Creating the table*/
CREATE TABLE Customer (Cust_id INT PRIMARY KEY, Cust_name VARCHAR(50) NOT NULL);
 CREATE TABLE Item (Item_id INT PRIMARY KEY, Item_name VARCHAR(50) NOT NULL, Price INT CHECK (Price > 0));
 CREATE TABLE Sale ( Bill_no INT PRIMARY KEY, Bill_date DATE NOT NULL, Cust_id INT, Item_id INT,
 Qty_sold INT CHECK (Qty_sold > 0), FOREIGN KEY (Cust_id) REFERENCES Customer(Cust_id),
 FOREIGN KEY (Item_id) REFERENCES Item(Item_id));
 
 /*Q2 inserting 7 values to every table*/
 INSERT INTO Customer VALUES 
 (1, 'Amar'), (2, 'Bob'), (3,'Charan'), (4, 'Tarun'), (5, 'Tillu'), (6, 'Varun'), (7, 'Ram');
 INSERT INTO Item VALUES 
 (101, 'Laptop', 800), (102, 'Smart Phone', 600), (103, 'Ipad', 300), (104, 'Monitor', 200),
 (105, 'Keyboard', 50), (106, 'Mouse', 25), (107, 'Printer', 150);
 INSERT INTO Sale VALUES 
 (201, '2024-08-13', 1, 101, 1), (202, CURDATE(), 2, 102, 2), (203, CURDATE(), 3, 103, 1), (204, '2024-07-27', 4, 104, 3),
 (205, CURDATE(), 5, 105, 4), (206, '2024-01-18', 6, 106, 5), (207, CURDATE(), 7, 107, 2);
 
  /*Q3 listing customer name and bill detais for CURDATE()*/
  SELECT Sale.Bill_no, Customer.Cust_name, Sale.Item_id FROM Sale 
  JOIN Customer ON Sale.Cust_id = Customer.Cust_id WHERE Sale.Bill_date = CURDATE();
  
  /*Q4 listing the coustamers who bought the products has price>200*/
  SELECT Customer.*
  FROM Customer JOIN Sale ON Customer.Cust_id = Sale.Cust_id JOIN Item ON Sale.Item_id = Item.Item_id
  WHERE Item.Price > 200;
  
  /*Q5 count of how many products bought by each customer*/
  SELECT Cust_id, COUNT(Item_id) AS Product_Count FROM Sale GROUP BY Cust_id;