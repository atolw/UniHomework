-- 1. Створення бази даних
CREATE DATABASE HospitalDB;
GO

USE HospitalDB;
GO

-- ===========================================
--  ТАБЛИЦЯ 1: Відділення (Departments)
-- ===========================================
CREATE TABLE Departments (
    Id INT IDENTITY(1,1) PRIMARY KEY,
    Building INT NOT NULL CHECK (Building BETWEEN 1 AND 5),
    Financing MONEY NOT NULL CHECK (Financing >= 0) DEFAULT(0),
    Floor INT NOT NULL CHECK (Floor >= 1),
    Name NVARCHAR(100) NOT NULL UNIQUE CHECK (LEN(Name) > 0)
);
GO

-- ===========================================
--  ТАБЛИЦЯ 2: Захворювання (Diseases)
-- ===========================================
CREATE TABLE Diseases (
    Id INT IDENTITY(1,1) PRIMARY KEY,
    Name NVARCHAR(100) NOT NULL UNIQUE CHECK (LEN(Name) > 0),
    Severity INT NOT NULL CHECK (Severity >= 1) DEFAULT(1)
);
GO

-- ===========================================
--  ТАБЛИЦЯ 3: Лікарі (Doctors)
-- ===========================================
CREATE TABLE Doctors (
    Id INT IDENTITY(1,1) PRIMARY KEY,
    Name NVARCHAR(MAX) NOT NULL CHECK (LEN(Name) > 0),
    Surname NVARCHAR(MAX) NOT NULL CHECK (LEN(Surname) > 0),
    Phone CHAR(10) NOT NULL,
    Premium MONEY NOT NULL CHECK (Premium >= 0) DEFAULT(0),
    Salary MONEY NOT NULL CHECK (Salary > 0)
);
GO

-- ===========================================
--  ТАБЛИЦЯ 4: Обстеження (Examinations)
-- ===========================================
CREATE TABLE Examinations (
    Id INT IDENTITY(1,1) PRIMARY KEY,
    Name NVARCHAR(100) NOT NULL UNIQUE CHECK (LEN(Name) > 0),
    DayOfWeek INT NOT NULL CHECK (DayOfWeek BETWEEN 1 AND 7),
    StartTime TIME NOT NULL CHECK (StartTime >= '08:00' AND StartTime <= '18:00'),
    EndTime TIME NOT NULL 
);
GO

-- ===========================================
--  ТАБЛИЦЯ 5: Палати (Wards)
-- ===========================================
CREATE TABLE Wards (
    Id INT IDENTITY(1,1) PRIMARY KEY,
    Building INT NOT NULL CHECK (Building BETWEEN 1 AND 5),
    Floor INT NOT NULL CHECK (Floor >= 1),
    Name NVARCHAR(20) NOT NULL UNIQUE CHECK (LEN(Name) > 0)
);
GO

-- ===========================================
-- Додавання даних
-- ===========================================

-- Departments
INSERT INTO Departments (Building, Financing, Floor, Name) VALUES
(1, 50000, 2, N'Кардіологія'),
(2, 40000, 1, N'Педіатрія'),
(3, 60000, 3, N'Онкологія'),
(4, 45000, 1, N'Неврологія'),
(5, 30000, 2, N'Офтальмологія'),
(1, 70000, 3, N'Хірургія'),
(2, 20000, 1, N'Терапія'),
(3, 25000, 2, N'Інфекційне'),
(4, 35000, 4, N'Дерматологія'),
(5, 27000, 1, N'Стоматологія'),
(1, 22000, 2, N'Ортопедія'),
(2, 33000, 3, N'Урологія'),
(3, 41000, 4, N'Ендокринологія'),
(4, 38000, 2, N'Пульмонологія'),
(5, 29000, 1, N'Гінекологія');
GO

-- Diseases
INSERT INTO Diseases (Name, Severity) VALUES
(N'Грип', 2),
(N'Пневмонія', 4),
(N'Бронхіт', 3),
(N'COVID-19', 5),
(N'Діабет', 4),
(N'Гастрит', 2),
(N'Гіпертонія', 3),
(N'Мігрень', 2),
(N'Астма', 4),
(N'Алергія', 1),
(N'Рак легенів', 5),
(N'Ревматизм', 3),
(N'Анемія', 2),
(N'Гепатит', 4),
(N'Отит', 2);
GO

-- Doctors
INSERT INTO Doctors (Name, Surname, Phone, Premium, Salary) VALUES
(N'Олександр', N'Іваненко', '0671234567', 1000, 15000),
(N'Марія', N'Петренко', '0509876543', 1500, 17000),
(N'Ігор', N'Шевченко', '0635551122', 500, 12000),
(N'Олена', N'Коваль', '0682223344', 2000, 18000),
(N'Сергій', N'Мельник', '0974445566', 800, 14000),
(N'Андрій', N'Бондар', '0669990001', 1000, 16000),
(N'Світлана', N'Лисенко', '0931112233', 1200, 14500),
(N'Катерина', N'Данилюк', '0957778899', 500, 11000),
(N'Віктор', N'Гончар', '0731239876', 700, 13000),
(N'Інна', N'Романюк', '0966543210', 900, 12500),
(N'Наталія', N'Савчук', '0994321987', 1100, 15500),
(N'Михайло', N'Ткаченко', '0675557777', 300, 10000),
(N'Юлія', N'Черненко', '0638889999', 1800, 17500),
(N'Дмитро', N'Сидоренко', '0503334444', 700, 13500),
(N'Тетяна', N'Кравчук', '0681112222', 950, 14200);
GO

-- Examinations
INSERT INTO Examinations (Name, DayOfWeek, StartTime, EndTime) VALUES
(N'Загальний огляд', 1, '08:00', '08:30'),
(N'Рентген', 2, '09:00', '09:45'),
(N'Кардіограма', 3, '10:00', '10:30'),
(N'УЗД черевної порожнини', 4, '11:00', '11:40'),
(N'Аналіз крові', 5, '08:15', '08:45'),
(N'Огляд офтальмолога', 6, '09:30', '10:00'),
(N'Неврологічне обстеження', 7, '10:30', '11:15'),
(N'Флюорографія', 1, '11:30', '12:00'),
(N'Тест на алергію', 2, '08:45', '09:30'),
(N'ЕКГ', 3, '09:00', '09:30'),
(N'МРТ голови', 4, '12:00', '12:45'),
(N'Денситометрія', 5, '13:00', '13:40'),
(N'Гастроскопія', 6, '10:15', '11:00'),
(N'Психологічне тестування', 7, '14:00', '14:30'),
(N'Отоларингологічне обстеження', 1, '15:00', '15:30');
GO

-- Wards
INSERT INTO Wards (Building, Floor, Name) VALUES
(1, 1, N'Палата №101'),
(1, 2, N'Палата №201'),
(2, 1, N'Палата №102'),
(2, 2, N'Палата №202'),
(3, 1, N'Палата №103'),
(3, 2, N'Палата №203'),
(4, 1, N'Палата №104'),
(4, 2, N'Палата №204'),
(5, 1, N'Палата №105'),
(5, 2, N'Палата №205'),
(1, 3, N'Палата №301'),
(2, 3, N'Палата №302'),
(3, 3, N'Палата №303'),
(4, 3, N'Палата №304'),
(5, 3, N'Палата №305');
GO