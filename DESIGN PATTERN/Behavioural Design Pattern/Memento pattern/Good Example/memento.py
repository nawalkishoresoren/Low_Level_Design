class Memento:
    def __init__(self,text:str):
        self.__saved_text=text
    
    def get_saved_text(self):
        return self.__saved_text