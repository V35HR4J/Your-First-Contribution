# import date library
import datetime
currentDate = datetime.date.today()

# get name from user
name = input("enter name : ")

# create a list of existing name and password and account balance
nameDatabase = ['paul', 'peter', 'emile', 'nico']
passwordDatabase = ['paulpass', 'peterpass','emilepass', 'nicopass']
accountBalance= [ 20000, 20000, 20000, 20000] # an example  of initial accountbalance of various persons


# comparing name with name in list
if(name in nameDatabase):
    passoword = input('enter password: ')

    # nesting if condition to check for password if valid name is used  and also making sure the existing n
    # ame correspond to the index of the passwordDatabse list so that existing user uses only their password to login

    realPass = nameDatabase.index(name)
    if passoword == passwordDatabase[realPass]:

        # print the date after successful login
        currentBalance = accountBalance[realPass]
        print(currentDate.strftime('%d %b, %Y'))

        # output the user with options to do either withdraw deposit or complain
        try: #this line is used to catch errors for example if the user enters a character instead of an interger
            option = int(input('enter\n 1: withdraw\n 2:deposit\n 3:complaint\n'))


# this option checks the option input and deducts the withdraw cash from accountBalance
            if option == 1:
                withdraw = int(input('how much will you like to withdraw'))
                currentBalance = currentBalance - withdraw
                accountBalance[realPass] = currentBalance
                print('take your cash %d' % withdraw)
                print(f'ACCOUNT BALANCE is {currentBalance}')

# this block checks the option input and add the deposit to the accountBalance
            elif option == 2:

                deposit = int(input('how much will you like to deposit?'))
                currentBalance = currentBalance + deposit
                accountBalance[realPass] = currentBalance
                print('successfully deposit into accountbalance is')
                print(currentBalance)


# this option ask checks the option input and produce a complaint
            elif option == 3:
                complaint = input('what issue will you like to report?')
                print('thank you for contacting us')


        except ValueError: # this is an alternative message if an error ValueError occurs
            print('error please try again, enter an interger in option')

    else:
         print('wrong password please try again')

else:
    print('user does not exit please input a valid username')




#for index in accountBalance:
   # print(index)

