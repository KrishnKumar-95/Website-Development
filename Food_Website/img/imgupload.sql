-- phpMyAdmin SQL Dump
-- version 4.9.7
-- https://www.phpmyadmin.net/
--
-- Host: localhost:3306
-- Generation Time: Oct 24, 2021 at 01:13 AM
-- Server version: 10.3.31-MariaDB-cll-lve
-- PHP Version: 7.3.30

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `indiand1_beddata202123`
--

-- --------------------------------------------------------

--
-- Table structure for table `imgupload`
--

CREATE TABLE `imgupload` (
  `id` int(255) NOT NULL,
  `username` varchar(255) DEFAULT NULL,
  `fathername` varchar(255) DEFAULT NULL,
  `mothername` varchar(255) DEFAULT NULL,
  `dob` date DEFAULT NULL,
  `gender` varchar(255) DEFAULT NULL,
  `castecategory` varchar(255) DEFAULT NULL,
  `whatsappno` bigint(15) DEFAULT NULL,
  `email` varchar(100) DEFAULT NULL,
  `address` varchar(255) DEFAULT NULL,
  `sboard` varchar(255) DEFAULT NULL,
  `sroll` varchar(255) DEFAULT NULL,
  `spassyear` varchar(255) DEFAULT NULL,
  `sobtain` varchar(255) DEFAULT NULL,
  `stotal` varchar(255) DEFAULT NULL,
  `ssboard` varchar(255) DEFAULT NULL,
  `ssroll` varchar(255) DEFAULT NULL,
  `sspassyear` varchar(255) DEFAULT NULL,
  `ssobtain` varchar(255) DEFAULT NULL,
  `sstotal` varchar(255) DEFAULT NULL,
  `ugcourse` varchar(255) DEFAULT NULL,
  `uguniversity` varchar(255) DEFAULT NULL,
  `ugroll` varchar(255) DEFAULT NULL,
  `ugpassyear` varchar(255) DEFAULT NULL,
  `ugobtain` varchar(255) DEFAULT NULL,
  `ugtotal` varchar(255) DEFAULT NULL,
  `ugcgpa` varchar(255) DEFAULT NULL,
  `pgcourse` varchar(255) DEFAULT NULL,
  `pguniversity` varchar(255) DEFAULT NULL,
  `pgroll` varchar(255) DEFAULT NULL,
  `pgpassyear` varchar(255) DEFAULT NULL,
  `pgobtain` varchar(255) DEFAULT NULL,
  `pgtotal` varchar(255) DEFAULT NULL,
  `pgcgpa` varchar(255) DEFAULT NULL,
  `image` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `imgupload`
--

INSERT INTO `imgupload` (`id`, `username`, `fathername`, `mothername`, `dob`, `gender`, `castecategory`, `whatsappno`, `email`, `address`, `sboard`, `sroll`, `spassyear`, `sobtain`, `stotal`, `ssboard`, `ssroll`, `sspassyear`, `ssobtain`, `sstotal`, `ugcourse`, `uguniversity`, `ugroll`, `ugpassyear`, `ugobtain`, `ugtotal`, `ugcgpa`, `pgcourse`, `pguniversity`, `pgroll`, `pgpassyear`, `pgobtain`, `pgtotal`, `pgcgpa`, `image`) VALUES
(13, 'krishn', 'lalbahdfsjk', 'jhbkjknlk', '1995-02-22', 'Male', 'General', 9518297071, 'krishn@gmail.com', 'vishkarma colony', 'hbse', '2210805623', '2011', '483', '500', 'hbse', '2210805623', '2013', '480', '500', 'General', 'kuk', '2210805623', '2019', '483', '500', '8.3', 'General', 'kuk', '2210805623', '2021', '483', '500', '8.3', 'upload/smm.png'),
(14, 'Krishan Kumar', 'Lal bahadur', 'Sangeeta Devi', '1995-10-25', 'Male', 'General', 9518297071, 'krishnkumar180895@gmail.com', '2310/A Vishkarma Colony Jagadhri', 'Haryana Board', '2210805623', '2011', '483', '500', 'Haryana Board', '2210805623', '2013', '480', '500', 'General', 'urukshetra University', '2210805623', '2019', '483', '500', '8.3', 'General', 'kuk', '2210805623', '2021', '483', '500', '8.3', 'upload/smm.png'),
(15, 'Krishan Kumar', 'Lal bahadur', 'Sangeeta Devi', '1995-10-25', 'Male', 'General', 9518297071, 'krishnkumar180895@gmail.com', '2310/A Vishkarma Colony Jagadhri', 'Haryana Board', '2210805623', '2011', '483', '500', 'Haryana Board', '2210805623', '2013', '480', '500', 'General', 'urukshetra University', '2210805623', '2019', '483', '500', '8.3', 'General', 'kuk', '2210805623', '2021', '483', '500', '8.3', 'upload/smm.png'),
(16, 'Krishan Kumar', 'Lal bahadur', 'Sangeeta Devi', '1995-10-25', 'Male', 'General', 9518297071, 'krishnkumar180895@gmail.com', '2310/A Vishkarma Colony Jagadhri', 'Haryana Board', '2210805623', '2011', '483', '500', 'Haryana Board', '2210805623', '2013', '480', '500', 'General', 'Kurukshetra University', '2210805623', '2019', '483', '500', '8.3', 'General', 'Kurukshetra University', '2210805623', '2021', '483', '500', '8.3', 'upload/clipart668567.png'),
(17, 'Krishan Kumar', 'Lal bahadur', 'Sangeeta Devi', '1995-10-25', 'Female', 'SCorST', 9518297071, 'krishnkumar180895@gmail.com', 'vishkarma colony', 'hbse', '2210805623', '2011', '480', '500', 'hbse', '2210805623', '2013', '480', '500', 'BCA', 'kurukshetra University', '2210805623', '2019', '480', '500', '8.3', 'mca', 'Kurukshetra University', '2210805623', '2021', '480', '500', '8.3', 'upload/fb.jpg'),
(18, 'Krishan Kumar', 'Lal bahadur', 'Sangeeta Devi', '1995-10-25', 'Female', 'SCorST', 9518297071, 'krishnkumar180895@gmail.com', 'vishkarma colony', 'hbse', '2210805623', '2011', '480', '500', 'hbse', '2210805623', '2013', '480', '500', 'BCA', 'kurukshetra University', '2210805623', '2019', '480', '500', '8.3', 'mca', 'Kurukshetra University', '2210805623', '2021', '480', '500', '8.3', 'upload/12th.jpg');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `imgupload`
--
ALTER TABLE `imgupload`
  ADD PRIMARY KEY (`id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `imgupload`
--
ALTER TABLE `imgupload`
  MODIFY `id` int(255) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=19;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
