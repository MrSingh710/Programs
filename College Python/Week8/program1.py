import sqlite3

def connect_db():
    return sqlite3.connect('student.db')


def addTable():
    conn = connect_db()
    conn.execute('''
        CREATE TABLE IF NOT EXISTS Students (
            SNo INTEGER PRIMARY KEY,
            SName TEXT NOT NULL,
            ContactNo INTEGER
        )
    ''')
    conn.commit()
    conn.close()
    print("Table created.")

def addRecords():
    conn = connect_db()
    sno = int(input("Enter S.No: "))
    sname = input("Enter Name: ")
    contact = int(input("Enter Contact No: "))
    conn.execute('INSERT INTO Students (SNo, SName, ContactNo) VALUES (?, ?, ?)', (sno, sname, contact))
    conn.commit()
    conn.close()
    print("Record added.")

def viewRecords():
    conn = connect_db()
    records = conn.execute('SELECT * FROM Students').fetchall()
    conn.close()
    if records:
        for record in records:
            print(record)
    else:
        print("No records found.")

def updateRecord():
    conn = connect_db()
    sno = int(input("Enter S.No to update: "))
    sname = input("Enter new Name: ")
    contact = int(input("Enter new Contact No: "))
    conn.execute('UPDATE Students SET SName = ?, ContactNo = ? WHERE SNo = ?', (sname, contact, sno))
    conn.commit()
    conn.close()
    print("Record updated.")

while True:
    print("\n1. Create Table\n2. Add Record\n3. View Records\n4. Update Record\n5. Exit")
    choice = input("Enter your choice: ")
    if choice == "1":
        addTable()
    elif choice == "2":
        addRecords()
    elif choice == "3":
        viewRecords()
    elif choice == "4":
        updateRecord()
    elif choice == "5":
        print("Exiting...")
        break
    else:
        print("Invalid choice. Try again.")