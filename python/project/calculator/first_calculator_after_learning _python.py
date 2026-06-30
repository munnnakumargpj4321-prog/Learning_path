
import tkinter as tk

class Calculator:
    def __init__(self, root):
        self.root = root
        self.root.title("Modern Python Calculator")
        self.root.geometry("380x550")
        self.root.configure(bg="#17171c")
        self.root.resizable(False, False)
        
        self.expression = ""
        
        self.display_frame = tk.Frame(self.root, bg="#17171c", height=50)
        self.display_frame.pack(expand=True, fill="both", padx=15, pady=(15, 5))
        
        self.equation_label = tk.Label(
            self.display_frame, 
            text="", 
            font=("Helvetica", 14), 
            bg="#17171c", 
            fg="#8e8e93", 
            anchor="e"
        )
        self.equation_label.pack(expand=True, fill="both")
        
        self.result_label = tk.Label(
            self.display_frame, 
            text="0", 
            font=("Helvetica", 36, "bold"), 
            bg="#17171c", 
            fg="#ffffff", 
            anchor="e"
        )
        self.result_label.pack(expand=True, fill="both")
        
        self.buttons_frame = tk.Frame(self.root, bg="#17171c")
        self.buttons_frame.pack(expand=True, fill="both", padx=15, pady=(5, 15))
        
        for i in range(5):
            self.buttons_frame.rowconfigure(i, weight=1)
        for i in range(4):
            self.buttons_frame.columnconfigure(i, weight=1)
            
        buttons_layout = [
            ('C', 0, 0, '#4e505f', '#5e6175', 'special'),
            ('(', 0, 1, '#4e505f', '#5e6175', 'special'),
            (')', 0, 2, '#4e505f', '#5e6175', 'special'),
            ('⌫', 0, 3, '#ff3b30', '#ff453a', 'delete'),
                                                 
            ('7', 1, 0, '#2e2f38', '#3e404a', 'digit'),
            ('8', 1, 1, '#2e2f38', '#3e404a', 'digit'),
            ('9', 1, 2, '#2e2f38', '#3e404a', 'digit'),
            ('/', 1, 3, '#ff9f0a', '#ffb03b', 'operator'),
            
            ('4', 2, 0, '#2e2f38', '#3e404a', 'digit'),
            ('5', 2, 1, '#2e2f38', '#3e404a', 'digit'),
            ('6', 2, 2, '#2e2f38', '#3e404a', 'digit'),
            ('*', 2, 3, '#ff9f0a', '#ffb03b', 'operator'),
            
            ('1', 3, 0, '#2e2f38', '#3e404a', 'digit'),
            ('2', 3, 1, '#2e2f38', '#3e404a', 'digit'),
            ('3', 3, 2, '#2e2f38', '#3e404a', 'digit'),
            ('-', 3, 3, '#ff9f0a', '#ffb03b', 'operator'),
            
            ('0', 4, 0, '#2e2f38', '#3e404a', 'digit'),
            ('.', 4, 1, '#2e2f38', '#3e404a', 'digit'),
            ('=', 4, 2, '#34c759', '#30d158', 'equal'),
            ('+', 4, 3, '#ff9f0a', '#ffb03b', 'operator'),
        ]
        
        self.create_buttons(buttons_layout)
        self.bind_keys()
        
    def create_buttons(self, layout):
        for text, row, col, bg_color, hover_color, btn_type in layout:
            btn = tk.Button(
                self.buttons_frame,
                text=text,
                font=("Helvetica", 18, "bold"),
                bg=bg_color,
                fg="#ffffff",
                activebackground=hover_color,
                activeforeground="#ffffff",
                bd=0,
                relief="flat",
                command=lambda t=text: self.on_button_click(t)
            )
            btn.grid(row=row, column=col, sticky="nsew", padx=5, pady=5)
            
            btn.bind("<Enter>", lambda event, b=btn, hc=hover_color: b.config(bg=hc))
            btn.bind("<Leave>", lambda event, b=btn, bc=bg_color: b.config(bg=bc))

    def on_button_click(self, char):
        if char == 'C':
            self.expression = ""
            self.result_label.config(text="0")
            self.equation_label.config(text="")
        elif char == '⌫':
            self.expression = self.expression[:-1]
            self.result_label.config(text=self.expression if self.expression else "0")
        elif char == '=':
            self.calculate()
        else:
            self.expression += str(char)
            self.result_label.config(text=self.expression)
            
    def calculate(self):
        try:
            if not self.expression:
                return
            
            result = str(eval(self.expression))
            
            if '.' in result and result.split('.')[1] == '0':
                result = result.split('.')[0]
                
            self.equation_label.config(text=self.expression + " =")
            self.result_label.config(text=result)
            self.expression = result
        except ZeroDivisionError:
            self.result_label.config(text="Error (Div/0)")
            self.equation_label.config(text=self.expression)
            self.expression = ""
        except Exception:
            self.result_label.config(text="Error")
            self.equation_label.config(text=self.expression)
            self.expression = ""

    def bind_keys(self):
        self.root.bind("<Key>", self.on_key_press)

    def on_key_press(self, event):
        char = event.char
        keysym = event.keysym
        
        if char in '0123456789+-*/().':
            self.on_button_click(char)
        elif keysym == 'Return' or char == '=':
            self.on_button_click('=')
        elif keysym == 'BackSpace':
            self.on_button_click('⌫')
        elif keysym == 'Escape':
            self.on_button_click('C')

if __name__ == "__main__":
    root = tk.Tk()
    app = Calculator(root)
    root.mainloop()