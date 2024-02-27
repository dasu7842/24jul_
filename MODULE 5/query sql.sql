-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Feb 26, 2024 at 12:49 PM
-- Server version: 10.4.32-MariaDB
-- PHP Version: 8.2.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `assiment`
--

-- --------------------------------------------------------

--
-- Table structure for table `customer`
--

CREATE TABLE `customer` (
  `pk_cnm` int(11) DEFAULT NULL,
  `cname` varchar(20) DEFAULT NULL,
  `city` varchar(30) DEFAULT NULL,
  `rating` int(11) DEFAULT NULL,
  `fk_sno` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `customer`
--

INSERT INTO `customer` (`pk_cnm`, `cname`, `city`, `rating`, `fk_sno`) VALUES
(201, 'hoffman', 'london', 100, 1001),
(202, 'giovanne', 'roe', 200, 1003),
(203, 'liu', 'san jose', 300, 1002),
(204, 'grass', 'barcelona', 100, 1002),
(206, 'clemens', 'london', 300, 1007),
(207, 'pereira', 'roe', 100, 1004);

-- --------------------------------------------------------

--
-- Table structure for table `employee`
--

CREATE TABLE `employee` (
  `employeeid` int(10) DEFAULT NULL,
  `first_name` varchar(20) DEFAULT NULL,
  `last_name` varchar(30) DEFAULT NULL,
  `salary` int(10) DEFAULT NULL,
  `joining_date` varchar(35) DEFAULT NULL,
  `department` varchar(50) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `employee`
--

INSERT INTO `employee` (`employeeid`, `first_name`, `last_name`, `salary`, `joining_date`, `department`) VALUES
(1, 'john', 'abraham', 1000000, '1-jan-13 12:00 am', 'banking'),
(2, 'michael', 'clarke', 800000, '1-jan-13 12:00 am', 'insurance'),
(3, 'roy', 'thomas', 700000, '1-feb-13 12:00 am', 'banking'),
(4, 'tom', 'jose', 600000, '1-feb-13 12:00 am', 'insurance'),
(5, 'jerry', 'pinto', 650000, '1-feb-13 12:00 am', 'insurance'),
(6, 'philip', 'mathew', 750000, '1-jan-13 12:00 am', 'services'),
(7, 'tastname1', '123', 650000, '1-jan-13 12:00am', 'services'),
(8, 'testname2', 'lname%', 600000, '1-feb-13 12:00am', 'insurance');

--
-- Triggers `employee`
--
DELIMITER $$
CREATE TRIGGER `inserts` AFTER INSERT ON `employee` FOR EACH ROW begin insert into employee_detail set skill = new.last_name;
end
$$
DELIMITER ;

-- --------------------------------------------------------

--
-- Table structure for table `exam`
--

CREATE TABLE `exam` (
  `rollno` int(11) DEFAULT NULL,
  `s_code` varchar(20) DEFAULT NULL,
  `marks` int(11) DEFAULT NULL,
  `p_code` varchar(30) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `exam`
--

INSERT INTO `exam` (`rollno`, `s_code`, `marks`, `p_code`) VALUES
(1, 'cs11', 50, 'cs'),
(1, 'cs12', 60, 'cs'),
(2, 'ec101', 66, 'ec'),
(2, 'ec102', 70, 'ec'),
(3, 'ec101', 45, 'ec'),
(3, 'ec102', 50, 'ec');

-- --------------------------------------------------------

--
-- Table structure for table `incentive`
--

CREATE TABLE `incentive` (
  `employee_ref_id` int(11) DEFAULT NULL,
  `incentive_date` varchar(40) DEFAULT NULL,
  `incentive_amount` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `incentive`
--

INSERT INTO `incentive` (`employee_ref_id`, `incentive_date`, `incentive_amount`) VALUES
(1, '1-feb-13', 5000),
(2, '1-feb-13', 3000),
(3, '1-feb-13', 4000),
(1, '1-jan-13', 4500),
(2, '1-jan-13', 3500);

-- --------------------------------------------------------

--
-- Table structure for table `item_mast`
--

CREATE TABLE `item_mast` (
  `pro_id` int(20) DEFAULT NULL,
  `pro_name` varchar(25) DEFAULT NULL,
  `pro_price` double DEFAULT NULL,
  `pro_com` int(20) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `item_mast`
--

INSERT INTO `item_mast` (`pro_id`, `pro_name`, `pro_price`, `pro_com`) VALUES
(101, 'Mother Board', 3200, 15),
(102, 'Key Board', 450, 16),
(103, 'ZIP drive', 250, 14),
(104, 'Speaker', 550, 16),
(105, 'Monitor', 5000, 11),
(106, 'DVD drive', 900, 12),
(107, 'CD drive', 800, 12),
(108, 'Printer', 2600, 13),
(109, 'Refill cartridge', 350, 13),
(110, 'Mouse', 250, 12);

-- --------------------------------------------------------

--
-- Table structure for table `orders`
--

CREATE TABLE `orders` (
  `order_no` int(20) DEFAULT NULL,
  `purch_amount` double DEFAULT NULL,
  `order_date` varchar(30) DEFAULT NULL,
  `customer_id` int(20) DEFAULT NULL,
  `salesman_id` int(25) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `orders`
--

INSERT INTO `orders` (`order_no`, `purch_amount`, `order_date`, `customer_id`, `salesman_id`) VALUES
(70001, 150.5, '2012-10-05', 3005, 5002),
(70009, 270.65, '2012-09-10', 3001, 5005),
(70002, 65.26, '2012-10-05', 3002, 5001),
(70004, 110.5, '2012-08-17', 3009, 5003),
(70007, 948.5, '2012-09-10', 3005, 5002),
(70005, 2400.6, '2012-07-27', 3007, 5001),
(70008, 5760, '2012-09-10', 3002, 5001),
(70010, 1983.43, '2012-10-10', 3004, 5006),
(70003, 2480.4, '2012-10-10', 3009, 5003),
(70012, 250.45, '2012-06-27', 3008, 5002),
(70011, 75.29, '2012-08-17', 3003, 5007),
(70013, 3045.6, '2012-04-25', 3002, 5001);

-- --------------------------------------------------------

--
-- Table structure for table `salespeople`
--

CREATE TABLE `salespeople` (
  `salesman_id` int(20) DEFAULT NULL,
  `name` varchar(30) DEFAULT NULL,
  `city` varchar(40) DEFAULT NULL,
  `commission` float DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `salespeople`
--

INSERT INTO `salespeople` (`salesman_id`, `name`, `city`, `commission`) VALUES
(5001, 'james hoog', 'new york', 0.15),
(5002, 'nail knite', 'paris', 0.13),
(5005, 'pit alex', 'london', 0.11),
(5006, 'mc lyon', 'paris', 0.14),
(5007, 'paul adam', 'rome', 0.13),
(5003, 'lauson hen', 'san jose', 0.12);

-- --------------------------------------------------------

--
-- Table structure for table `salseperson`
--

CREATE TABLE `salseperson` (
  `pk_sno` int(11) DEFAULT NULL,
  `sname` varchar(30) DEFAULT NULL,
  `city` varchar(20) DEFAULT NULL,
  `comm` float DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `salseperson`
--

INSERT INTO `salseperson` (`pk_sno`, `sname`, `city`, `comm`) VALUES
(1001, 'peel', 'london', 0.12),
(1002, 'serres', 'san jose', 0.13),
(1004, 'motika', 'londan', 0.11),
(1007, 'rafkin', 'barcelona', 0.15),
(1003, 'axelrod', 'new york', 0.1);

-- --------------------------------------------------------

--
-- Table structure for table `student`
--

CREATE TABLE `student` (
  `rollno` int(11) NOT NULL,
  `name` varchar(20) DEFAULT NULL,
  `branch` varchar(20) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `student`
--

INSERT INTO `student` (`rollno`, `name`, `branch`) VALUES
(1, 'jay', 'computer science'),
(2, 'suhani', 'electronic and com'),
(3, 'kriti', 'electronic and com');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `student`
--
ALTER TABLE `student`
  ADD PRIMARY KEY (`rollno`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
