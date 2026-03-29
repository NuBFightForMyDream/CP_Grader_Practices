SELECT 
    room_type, 
    COUNT(*) AS booking_count
FROM 
    booking_sql ; 
WHERE 
    check_in_date >= '2024-01-01' AND check_in_date <= '2024-12-31'
GROUP BY 
    room_type
ORDER BY 
    booking_count DESC, 
    room_type ASC
LIMIT 1;