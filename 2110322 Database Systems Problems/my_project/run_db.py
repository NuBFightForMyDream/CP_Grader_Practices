import pandas as pd
import sqlite3
import os

# --- 1. ตั้งค่า Path ---
csv_path = 'my_project/raw_data/students.csv'
db_folder = 'my_project/database'
db_path = os.path.join(db_folder, 'my_data.db')

if not os.path.exists(db_folder):
    os.makedirs(db_folder)

# --- 2. อ่าน CSV แล้วยัดลง SQLite ---
# อ่านไฟล์ CSV มาพักไว้ใน Python (เรียกว่า DataFrame)
df = pd.read_csv(csv_path)

# เชื่อมต่อกับไฟล์ Database
conn = sqlite3.connect(db_path)

# สั่งให้ pandas สร้างตารางชื่อ 'student_table' จากข้อมูลใน CSV
# if_exists='replace' หมายความว่า ถ้าเราแก้ไฟล์ CSV แล้วรันใหม่ มันจะอัปเดตตารางให้ทันที
df.to_sql('student_table', conn, if_exists='replace', index=False)

print("✅ สร้าง Database จาก CSV เรียบร้อยแล้ว!")

# --- 3. ลองเขียน SQL ดึงข้อมูล (Query) ---
cursor = conn.cursor()

# โจทย์: อยากดึงเฉพาะคนที่คะแนน > 80
query = "SELECT name, score FROM student_table WHERE score > 80"
cursor.execute(query)

results = cursor.fetchall()
print("\n--- รายชื่อคนที่คะแนนเกิน 80 ---")
for row in results:
    print(f"ชื่อ: {row[0]} | คะแนน: {row[1]}")

conn.close()