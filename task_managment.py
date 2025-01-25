def task():
    task = []
    print("Welcome to the task management app")
    total_task = int(input("Enter the total number of tasks you want to add: "))
    
    for i in range(total_task):
        task_name = input(f"Enter task {i+1}: ")
        task.append(task_name)
    print(f"Today's tasks are: {task}")
    
    while True:
        operation = int(input("Enter 1 - Add\n2 - Update\n3 - Delete\n4 - Show tasks\n5 - Exit\n"))
        
        if operation == 1:
            add = input("Enter the task you want to add: ")
            task.append(add)
            print(f"Task '{add}' has been successfully added...")
        
        elif operation == 2:
            updated_val = input("Enter the task you want to update: ")
            if updated_val in task:
                up = input("Enter new task: ")
                ind = task.index(updated_val)
                task[ind] = up
                print(f"Updated task is: {up}")
            else:
                print("Task not found.")
        
        elif operation == 3:
            del_value = input("Enter the task you want to delete: ")
            if del_value in task:
                task.remove(del_value)
                print(f"Task '{del_value}' has been deleted...")
            else:
                print("Task not found.")
        
        elif operation == 4:
            print(f"Total tasks: {task}")
        
        elif operation == 5:
            print("Closing the program...")
            break
        
        else:
            print("Invalid input.")

task()
