from tkinter import *
root=Tk()
root.title("My First Label Project")
# root.geometry("600x450")
root.geometry("600x450")
root.resizable(False, False)
icon = PhotoImage(file="logo.png")
root.iconphoto(True, icon)
root.config(background="#DFF6FF")
lebal = Label(
    root,
    text="Welcome to My First Project\nHope You Like It!",
    font=("Arial", 20, "bold"),
    fg="#1B3A4B",
    bg="white",
    padx=25,
    pady=20,
    relief=RIDGE,
    bd=5,
    image=icon,
    compound=BOTTOM,

)
lebal.pack(padx=35, pady=35)

footer = Label(
    root,
    text="Made with Python and Tkinter",
    font=("Arial", 11, "italic"),
    fg="#256D85",
    bg="#DFF6FF"
)
footer.pack(pady=5)
root.mainloop()
