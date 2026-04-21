class TextEditor:
    def __init__(self):
        self.__text = ""

    def write(self, text:str):
        self.__text += text

    def get_text(self):
        return self.__text
    
text_editor = TextEditor()
text_editor.write("Hello")
text_editor.write(" World!")
text_editor.write(" Goodbye!")
print(text_editor.get_text())  # Output: Hello, World!
#undo
print(text_editor.get_text())  # Output: Hello, World!