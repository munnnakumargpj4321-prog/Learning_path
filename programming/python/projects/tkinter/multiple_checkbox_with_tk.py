from tkinter import *

food = ["pizza", "burger", "fries", "pasta", "chicken", "noodles"]
root = Tk()
root.title("Choose Your Food")
root.geometry("720x650")
root.resizable(False, False)
icon = PhotoImage(file="logo.png")
root.iconphoto(True, icon)
root.config(background="#FFF4E6")

heading = Label(root,
                text="Choose Your Favourite Food",
                font=("Arial", 24, "bold"),
                fg="white",
                bg="#C65D3B",
                pady=18)
heading.pack(fill="x")

message = Label(root,
                text="You can select more than one item",
                font=("Arial", 12),
                fg="#5A2D1F",
                bg="#FFF4E6")
message.pack(pady=(15, 8))

food_frame = Frame(root, bg="#FFF4E6")
food_frame.pack()

variables = []
food_images = []

def show_selection():
    selected = [item.title() for item, var in zip(food, variables) if var.get()]
    if selected:
        selection_label.config(text="Selected: " + ", ".join(selected))
    else:
        selection_label.config(text="Select your favourite items")

for index, item in enumerate(food):
    var = IntVar()
    variables.append(var)

    item_image = PhotoImage(file=f"tkinder/{item}.png")
    food_images.append(item_image)

    checkbox = Checkbutton(food_frame,
                           text=item.title(),
                           variable=var,
                           image=item_image,
                           compound=TOP,
                           command=show_selection,
                           font=("Arial", 13, "bold"),
                           fg="#5A2D1F",
                           bg="#FFFCF7",
                           activebackground="#FFFCF7",
                           activeforeground="#C65D3B",
                           selectcolor="#FAD2C1",
                           padx=18,
                           pady=10,
                           width=145,
                           cursor="hand2")
    checkbox.grid(row=index // 3, column=index % 3, padx=10, pady=10)

selection_label = Label(root,
                        text="Select your favourite items",
                        font=("Arial", 12, "bold"),
                        fg="#5A2D1F",
                        bg="#FFF4E6")
selection_label.pack(pady=15)

root.mainloop()
