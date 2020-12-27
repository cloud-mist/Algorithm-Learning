aName = 'shawn'
age = 20
print('%s is %d years old.' % (aName, age))
# shawn is 20 years old.

print("%+10s is %5.2f years old." % (aName, age))
#      shawn is 20.00 years old.

itemdict = {"name":"shawn", "age":20}
print("%(name)s is %(age)7.1f years old." % itemdict)
# shawn is    20.0 years old.
