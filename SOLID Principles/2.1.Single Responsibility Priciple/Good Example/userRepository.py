from user import User


class UserRepository():
    def __init__(self, db, user, password):
        self.db = db
        self.user = user
        self.password = password
    
    def save_to_database(self, user:User):
        # This is a placeholder for the actual database saving logic.
        print(f"Saving {user.name}'s information to the database.")
    
    def delete_from_database(self, user:User):
        # This is a placeholder for the actual database deletion logic.
        print(f"Deleting {user.name}'s information from the database.")