import sqlite3

def connect_db():
    return sqlite3.connect('student.db')  # Replace 'student.db' with your database name

def listTables():
    conn = connect_db()
    cursor = conn.cursor()
    cursor.execute("SELECT name FROM sqlite_master WHERE type='table';")
    tables = cursor.fetchall()
    conn.close()
    
    if tables:
        print("Tables in the database:")
        for table in tables:
            print(table[0])
    else:
        print("No tables found in the database.")

listTables()