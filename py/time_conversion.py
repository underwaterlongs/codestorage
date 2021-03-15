def timeConversion(s):
    char_lst = []

    # accounts for 13 to 23 hrs
    if(s[-2:] == "PM" and s[:2] != "12"):
        char_lst.append(str(int(s[:2])+12))
        char_lst.append(s[2:len(s)-2])
        
    # account for 12 and 24 => if 12am -> 00am, 12pm -> no change
    elif(s[-2:] == "AM" and s[:2] == "12"):
        hour_sign = str(int(s[:2])-12).zfill(2)
        char_lst.append(hour_sign)
        char_lst.append(s[2:len(s)-2])

    # account for 0 to 11am, 0am to 11am remains the same
    else:
        char_lst.append(s[:len(s)-2])
    
    new_str = "".join(char_lst)
    return(new_str)
    print(new_str)
    
timeConversion("10:05:45AM")