#include <stdio.h>
#include <string.h>

typedef struct {
    char* key;
    int value;
} item;

item* linear_search(item* items, size_t size, const char* key ){
    for(size_t i = 0; i < size; i++){
        if (strcmp(items[i].key, key)== 0){
            return &items[i];
        }
    }
    return (NULL);
}

int main(void){
    item items[] = {{"foo", 10},{"bar", 42},{"bazz", 36},{"buxx", 45},{"age", 36},{"gech", 30},{"kal", 26}};
    size_t num_items = sizeof(items) / sizeof(item);

    item* found = linear_search(items, num_items, "age");
    if (!found){
        return 1;
    }
    printf("linear_search: value of age is %d\n", found->value);
    return 0;
}