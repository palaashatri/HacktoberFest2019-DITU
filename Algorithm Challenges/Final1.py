# Project Title : Prime number checker Python Program
# Date : 08/09/2019
# Submitted To : Google Student Community
# Submitted By : Ansh Tyagi, B.Tech CSE AI (1st Year)

from tkinter import *
from tkinter import ttk
from tkinter import messagebox


class App:
    def __init__(self, master):
        self.frame = Frame(master)
        self.frame.config(height=400, width=700, relief='raised', background="#ffffff")
        self.frame.grid()
        self.labelNumber = Label(self.frame, text='Enter any number', background='#ffffff', anchor=E,
                                 font=('Calibri', 10)).grid(row=1, column=0, columnspan=10, rowspan=3, ipady=10, pady=30)
        self.inputNumber = Entry(self.frame, width=35, justify=LEFT,borderwidth=1,relief='solid')
        self.inputNumber.grid(row=3, column=0, ipady=2, ipadx=4, pady=0, padx=30, rowspan=1)
        self.button = Button(self.frame, text='Check!', bg='#000000', fg='#fff', borderwidth=0,
                             command=self.check,font=('Calibri',10)).grid(row=6, column=0, ipadx=15, ipady=5, pady=5)

    # To check a number is prime or not
    def check(self):
        if (len(self.inputNumber.get()) == 0):
            messagebox.showerror(title='Error', message='Please enter a number')
        else:
            number= int(self.inputNumber.get())
            x = 0
            for item in range(2, number // 2 + 1):
                if (number % item == 0):
                    x = x + 1
            if (x <= 0):
                messagebox.showinfo(title='Successful', message="A prime number")
            else:
                messagebox.showwarning(title='Successful', message="Not a prime number")

def main():
    root = Tk()
    root.geometry("300x200+470+210")
    root.title("Prime number checker")
    root.resizable(0, 0)
    root.configure(background='#ffffff')
    app = App(root)
    root.mainloop()


if (__name__ == '__main__'): main()
