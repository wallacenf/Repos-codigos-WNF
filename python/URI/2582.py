music = {0: 'PROXYCITY',
         1: 'P.Y.N.G.',
         2: 'DNSUEY!',
         3: 'SERVERS',
         4: 'HOST!',
         5: 'CRIPTONIZE',
         6: 'OFFLINE DAY',
         7: 'SALT',
         8: 'ANSWER!',
         9: 'RAR?',
         10: 'WIFI ANTENNAS'
         }
n = int(input())
while n > 0:
    a, b = input().split()
    a = int(a)
    b = int(b)
    c = a+b
    print(music[c])
    n = n-1
