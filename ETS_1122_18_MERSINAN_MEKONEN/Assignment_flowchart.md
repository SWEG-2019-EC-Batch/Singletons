
# C++ Assignment Flowcharts

This document contains the flowcharts for the three C++ programming assignments.

## 1. Trip Speed and Fuel Cost (trip_speed_fuel_cost.cpp)
```mermaid

graph TD 

    A([Start]) --> B[/Input: distance, hours, minutes, fuel_rate, price/]

    B --> C["total_hours = hours + (minutes / 60.0)"]

    C --> D["average_speed = distance / total_hours"]

    D --> E["fuel_used = (distance / 100.0) * fuel_rate"]

    E --> F["total_cost = fuel_used * price"]

    F --> G[/Output: average_speed, fuel_used, total_cost/]

    G --> H([End])

```

## 2. Monthly Electricity Bill (electricity_bill.cpp)

```mermaid

graph TD 

    A([Start]) --> B[/Input: units/]

    B --> C{units <= 50?}

    C -- Yes --> D["energy_charge = units * 1.50"]

    C -- No --> E["energy_charge = (50 * 1.50) + ((units - 50) * 2.00)"]

    D --> F["total_bill = energy_charge + 10.00"]

    E --> F

    F --> G[/Output: energy_charge, 10.00, total_bill/]

    G --> H([End])

```

## 3. Student Course Total (student_course_total.cpp)

```mermaid

graph TD 

    A([Start]) --> B[/Input: assignment, project, midterm, final/]

    B --> C["total_mark = assignment + project + midterm + final"]

    C --> D[/Output: total_mark/]

    D --> E([End])

```
