(select distinct(CITY) from STATION where CITY like 'a%') union (select distinct(CITY) from STATION where CITY like 'e%') ;
(select distinct(CITY) from STATION where CITY like 'i%') union (select distinct(CITY) from STATION where CITY like 'o%') ;
(select distinct(CITY) from STATION where CITY like 'u%');