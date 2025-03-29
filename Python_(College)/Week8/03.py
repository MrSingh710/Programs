import sqlite3

def connect_db():
    return sqlite3.connect('College Python/Week8/student.db')

def countRecords():
    conn = connect_db()
    cursor = conn.cursor()
    cursor.execute("SELECT COUNT(*) FROM Students;")
    total_records = cursor.fetchone()[0]  # Fetch the first (and only) value
    conn.close()
    print(f"Total number of records in the Students table: {total_records}")

countRecords()