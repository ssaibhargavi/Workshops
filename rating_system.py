# In a five-star restaurant review system (⭐️⭐️⭐️⭐️⭐️), the stars typically represent the different levels of satisfaction. But what does each of the stars mean?
# Rating system using an if/elif/else statement:

rating=float(input())
if rating>4.5:
  print('Extraordinary')
elif rating>4:
  print('Excellent')
elif rating>3:
  print('Good')
elif rating>2:
  print('Fair')
else:
  print('Poor')
