## Заданы три числа A, B, C, которые обозначают число, месяц и год.
## Найти номер дня с начала года.

import sys

def isleap(yr):
    return 1 if ( yr%400 == 0 or (yr%100 != 0 and yr%4 == 0)) \
    else 0

assert isleap(2000) == 1 and \
       isleap(2007) == 0 and \
       isleap(2008) == 1 and \
       isleap(2001) == 0

def n_yr(a,b,c):
    """returs day number in year a, of date c in month b"""

    days_in_month = [3,0,3,2,3,2,3,3,2,3,2,3]
    leap = isleap(a)

    assert 0 != a  and \
           0 < b   and \
           b <= 12 and \
           0 < c   and \
           c <= 28 + days_in_month[b-1] + leap

    days = 0
    for month in range(b-1):
        addleap = leap if month + 1 == 2 else 0
        days += 28 + days_in_month[month] + addleap
    return days + c

assert n_yr(2000,1,1) == 1
assert n_yr(2001,1,1) == 1
assert n_yr(2000,2,1) == 32
assert n_yr(2001,2,1) == 32
assert n_yr(2000,2,29) == 31+29
assert n_yr(2000,2,14) == 31+14
assert n_yr(2000,3,4)  == 31+29+4
assert n_yr(2008,11,18) == 31+29+31+30+31+30+31+31+30+31+18

if __name__ == "__main__":
    print(n_yr(int(sys.argv[1]), int(sys.argv[2]), int(sys.argv[3])))
