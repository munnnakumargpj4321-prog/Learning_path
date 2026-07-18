from tkinter import *
root = Tk()
def show_text():
    written_text = text.get("1.0", "end-1c")
    print(written_text)
def clear_text():
    text.delete("1.0", END)
    text.focus()
root.title("Text Writer")
root.state("zoomed")
root.resizable(True, True)
root.config(background="#DFF6FF")
title_label = Label(
    root,
    text="Simple Text Writer",
    font=("ink free", 22, "bold"),
    fg="#174C66",
    bg="#DFF6FF",
)
title_label.pack(pady=(20, 10))

text = Text(
    root,
    font=("ink free", 35,"bold"),
    fg="#C65D3B",
    bg="white",
    width=45,
    height=10,
    padx=20,
    pady=20,
    relief=GROOVE,
    bd=4,
    wrap=WORD,
)
text.pack()
text.bind("<KeyRelease>")
text.focus()
button_frame = Frame(root, bg="#DFF6FF")
button_frame.pack(pady=8)

show_button = Button(
    button_frame,
    text="Show Text",
    command=show_text,
    font=("Arial", 13, "bold"),
    fg="white",
    bg="#256D85",
    padx=16,
    pady=8,
    activebackground="#47B5FF",
    activeforeground="white",
    cursor="hand2",
)
show_button.pack(side=LEFT, padx=8)

clear_button = Button(
    button_frame,
    text="Clear",
    command=clear_text,
    font=("Arial", 13, "bold"),
    fg="white",
    bg="#FF6B6B",
    padx=16,
    pady=8,
    activebackground="#E8505B",
    activeforeground="white",
    cursor="hand2",
)
clear_button.pack(side=LEFT, padx=8)

root.mainloop()
