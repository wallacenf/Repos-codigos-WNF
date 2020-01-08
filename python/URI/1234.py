while True:
    try:
        dance = input()
        new = ""
        mode = True
        for l in dance:
            if l.isdigit() or l.isspace():
                new += l
            elif (mode == True and l.isalpha()):
                new += l.upper()
                mode = False
            elif (mode == False and l.isalpha()):
                new += l.lower()
                mode = True
        print(new)
    except:
        break
