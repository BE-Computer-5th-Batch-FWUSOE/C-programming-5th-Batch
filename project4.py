menu={
      "pizza":40,
      "coffe":60,
      "alpino":240,
      "coffe late":450}
print("welcome to restaurent!")
print("pizza :40 \n coffe:60 \n alpino:240 \n coffi late:450")
order_total=0
item1=input("your order please!\n:")
if item1 in menu:
    order_total +=menu[item1]
    print("your item has been added to order")
else:
    print("sorry! this is not available now,\n order somehting  that we can serve")
item2=input("do you want anything else?")
if item2=="yes":
  another_oder=input("your another dish?")
  if another_oder in menu:
      order_total +=menu[another_oder]
      print(f"you {another_oder} has been added")
  else:
      print(f"{another_oder} is not available!")
print(f"the total amount to item is {order_total}")
      