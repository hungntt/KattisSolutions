import datetime

day, month = map(int, input().split())
a = datetime.datetime(2009, month, day)
print(a.strftime("%A"))
