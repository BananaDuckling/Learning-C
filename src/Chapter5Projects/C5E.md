# Chapter 5 Exercises

## Exercise 10
What does the follwing program fragment produce? (Assume that i is an integer variable.)
```
i = 1;
switch (i % 3)
    case 0: printf("zero");
    case 1: printf("one");
    case 2: printf("two"); 
```

No `break` so no way for the program to know to step out. The output will print all cases below it:
```
zeroonetwo
```

## Exercise 11
The followign table shows telephone area codes in the state of Georgia along with the largest city in each area:<br>
| <em>Area Code</em> | <em> Major City </em> |
| :---: | :---: |
| 229 | Albany |
| 404 | Atlanta |
| 470 | Atlanta |
| 478 | Macon |
| 678 | Atlanta |
| 706 | Columbus |
| 762 | Columbus |
| 770 | Atlanta |
| 912 | Savannah |

Write a `switch` statement whose controlling expression is the variable `area_code`. If the value of `area_code` is in the table, the `switch` statement will print the corresponding city name. Otherwise, the switch statement will display the message `"Area code not recognized"`. Use the techniques discussed in Section 5.3 to make the switch statement as simple as possible.
```
switch (area_code)
{
    case 404: case 470: case 770: 
    {
        // Step down
        printf("Atlanta\n"); 
        break;
    }
    case 706: case 762:
    {
        //Step down
        printf("Columbus\n");
        break;
    }
    case 229: 
    {
        printf("Albany\n");
        break;
    }
    case 478:
    {
        printf("Macon\n");
        break;
    }
    case 912:
    {
        printf("Savannah\n");
        break;
    }
    default:
    {
        printf("Area code not found\n")
    }
}
