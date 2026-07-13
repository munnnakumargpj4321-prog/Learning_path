from tkinter import *
root=Tk()
def sumbit():
    username=entry_box.get()
    print("hello",username)
    result_label.config(text=f"Hello, {username}!" if username else "Please enter your name")
def delete():
    entry_box.delete(0,END)
def backspace():
    entry_box.delete(len(entry_box.get())-1)
root.title("Entry Box")
# root.geometry("600x400")
root.resizable(False, False)
icon = PhotoImage(file="logo.png")
root.iconphoto(True, icon)
root.config(background="#DFF6FF")

heading = Label(root,
    text="Welcome!",
    font=("Arial",26,"bold"),
    fg="#1B3A4B",
    bg="#DFF6FF"
)
heading.pack(pady=(35,5))

instruction = Label(root,
    text="Enter your name below",
    font=("Arial",12),
    fg="#256D85",
    bg="#DFF6FF"
)
instruction.pack(pady=(0,15))

entry_box = Entry(root,
    font=("Arial",18),
    fg="#1B3A4B",
    bg="white",
    width=28,
    justify=CENTER,
    relief=SOLID,
    bd=2,
    # show="*",
  
)
# entry_box.insert(0,"enter your name")
entry_box.pack(ipady=8, pady=5)

button_frame = Frame(root, bg="#DFF6FF")
button_frame.pack(pady=18)

sumbit_button=Button(button_frame,
    text="Submit",
    command=sumbit,
    fg="white",
    bg="#256D85",
    activebackground="#47B5FF",
    activeforeground="white",
    font=("Arial",11,"bold"),
    padx=15,
    pady=7,
    cursor="hand2",
    bd=0,
)
sumbit_button.pack(side=LEFT, padx=6)

delete_button=Button(button_frame,
    text="Clear",
    command=delete,
    fg="white",
    bg="#D9534F",
    activebackground="#F06A65",
    activeforeground="white",
    font=("Arial",11,"bold"),
    padx=15,
    pady=7,
    cursor="hand2",
    bd=0,
)
delete_button.pack(side=LEFT, padx=6)

backspace_button=Button(button_frame,
    text="Backspace",
    command=backspace,
    fg="white",
    bg="#5C677D",
    activebackground="#7D8597",
    activeforeground="white",
    font=("Arial",11,"bold"),
    padx=15,
    pady=7,
    cursor="hand2",
    bd=0,
)
backspace_button.pack(side=LEFT, padx=6)

result_label = Label(root,
    text="",
    font=("Arial",14,"bold"),
    fg="#256D85",
    bg="#DFF6FF"
)
result_label.pack(pady=10)

root.mainloop()
