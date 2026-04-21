from history import History
from memento import Memento
from text_editor import TectEditor

text_editor=TectEditor()
history=History()

text_editor.write("Hello")
text_editor.write(" World!")
print(text_editor.get_text())  # Output: Hello, World!

#save
history.save_text(text_editor.save())

text_editor.write(" Goodbye!")
print(text_editor.get_text())  # Output: Hello, World! Goodbye!
history.save_text(text_editor.save())
history.get_history()
text_editor.restore(history.undo())
print(text_editor.get_text())  # Output: Hello, World!
text_editor.restore(history.undo())
print(text_editor.get_text())  # Output: " "