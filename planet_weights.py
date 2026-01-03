# Create a weight conversion program that converts the user's weight on earth to the user's weight on destination planet using if/elif/else.

weight_on_earth=float(input("Enter your weight: "))
planet_number=int(input("Enter the planet number: "))
if planet_number==1:
  destination_weight=weight_on_earth * 0.38
  print("Weight on Mercury is ",destination_weight)
elif planet_number==2:
  destination_weight=weight_on_earth * 0.91
  print("Weight on Venus is ",destination_weight)
elif planet_number==3:
  destination_weight=weight_on_earth * 0.38
  print("Weight on Mars is ",destination_weight)
elif planet_number==4:
  destination_weight=weight_on_earth * 2.53
  print("Weight on Jupiter is ",destination_weight)
elif planet_number==5:
  destination_weight=weight_on_earth * 1.07
  print("Weight on Saturn is ",destination_weight)
elif planet_number==6:
  destination_weight=weight_on_earth * 0.89
  print("Weight on Uranus is ",destination_weight)
elif planet_number==7:
  destination_weight=weight_on_earth * 1.14
  print("Weight on Neptune is ",destination_weight)
else:
  print("Invalid planet number")
