# Simple program that calculates how much each person needs to pay, including the tip.

print("Bill Split Calculator")
bill_amount = float(input())
tip_percentage = float(input())
tip_amount = (tip_percentage / 100) * bill_amount
total_amount = bill_amount + tip_amount
print(f"Total (including tip): ${total_amount}")
people = int(input())
person_amount = total_amount / people
print(f"Each person pays: ${person_amount}")
