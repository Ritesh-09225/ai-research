class BankAccount:
    def __init__(self,name,balance=0):
        self.name = name
        self.__balance = balance

    @property
    def balance(self):
        return self.__balance

    @balance.setter
    def balance(self,amount):
        if not isinstance(amount,(int,float)):
            raise ValueError("Balance must be a number")
        elif amount < 0:
            raise ValueError("Balance can't be negative")   
        else:
            self.__balance = amount 

    def deposit(self,amount):
        if amount>0:
            self.balance +=amount
            print(f"Deposited")
        else:
            print("Invalid Amount")

    def withdraw(self,amount):
        if self.balance >= amount >0:
            self.balance-=amount
            print("Withdrawn")
        else:
            print("Invalid")
    
    def get_balance(self):
        return self.balance
    
    
acc1 = BankAccount("John",1000)
acc1.deposit(500)
acc1.withdraw(200)
print(acc1.get_balance())
print(acc1.balance)

        