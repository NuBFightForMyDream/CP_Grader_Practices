# import library 
import pandas as pd
import sqlite3
import os 

# define path for showing db
rawdata = 'Booking Database db_booking/raw_data/db_booking_example_data.csv'
db_folder = 'Booking Database db_booking/database'
db_path = os.path.join(db_folder, 'booking_db.db')

# read csv then connect with sqlite3
dataframe = pd.read_csv(rawdata) 
conn = sqlite3.connect(db_path)

# change format to sql 
dataframe.to_sql('booking_sql', conn, if_exists='replace', index=False)

# query data with this command
cursor = conn.cursor() # 
query = """
SELECT room_type FROM booking_sql ; 
"""
cursor.execute(query)

results = cursor.fetchall()
for row in results:
    print(row[0])

conn.close()