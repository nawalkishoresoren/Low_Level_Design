from user import User
from userRepository import UserRepository

user_object = User("John Doe", 25, "john.doe@example.com")
user_repo = UserRepository(db=None, user=None, password=None)

user_object.get_user_info() # Output: This is Name: John Doe, Age: 25, Email: john.doe@example.com

user_repo.save_to_database(user_object) # Output: Saving John Doe's information to the database.