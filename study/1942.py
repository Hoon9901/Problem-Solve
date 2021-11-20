# 2007년 x월 y일의 요일 구하기
x, y = map(int, input().split())
weekWords = ['SUN', 'MON', 'TUE', 'WED', 'THU', 'FRI', 'SAT']
month_day = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

days = 0
for i in range(1, x):
    days += month_day[i-1]

result =  y + days 
print(weekWords[result % 7])