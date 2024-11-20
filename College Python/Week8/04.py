import sqlite3

def connect_db():
    return sqlite3.connect('College Python/Week8/student.db')

def deleteRow():
    conn = connect_db()
    cursor = conn.cursor()
    sno = int(input("Enter the S.No of the record to delete: "))
    cursor.execute("DELETE FROM Students WHERE SNo = ?", (sno,))
    conn.commit()
    
    if cursor.rowcount > 0:
        print(f"Record with S.No {sno} deleted successfully.")
    else:
        print(f"No record found with S.No {sno}.")
    
    conn.close()

deleteRow()