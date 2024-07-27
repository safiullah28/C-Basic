#include <stdio.h>
int main() {
  char a[20000] =
      "life, living matter and, as such, matter that shows certain attributes "
      "that include responsiveness, "
      "growth, "
      "metabolism, energy transformation, and reproduction. Although a noun, "
      "as with other defined entities, "
      "the word life might be better cast as a verb to reflect its essential "
      "status as a process. Life comprises individuals, "
      "living beings, "
      "assignable to groups(taxa). Each individual is composed of one or "
      "more minimal living units, "
      "called cells, "
      "and is capable of transformation of carbon-based and "
      "other compounds(metabolism), "
      "growth, "
      "and participation in reproductive acts. Life forms present on Earth "
      "today "
      "have evolved from ancient common ancestors through the generation "
      "of hereditary variation and "
      "natural selection. The several branches of science that reveal the "
      "common historical, "
      "functional, "
      "and chemical basis of the evolution of all life include electron "
      "microscopy, "
      "genetics, paleobiology (including paleontology), "
      "and molecular biology.";
  int i;
 
  int count[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                     0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};



  // Iterate through the string and count the occurrences of each alphabet
  for (int i = 0; a[i] != '\0'; i++) {
    if ((a[i] >= 'a' && a[i] <= 'z')) {
      count[a[i] - 'a']++;
    } 
    else if (a[i] >= 'A' && a[i] <= 'Z') {
      count[a[i] - 'A']++;
    }
  }

  // Display the counts
  for (int i = 0; i < 26; i++) {
    printf("Count of %c: %d\n", 'a' + i, count[i]);
  }
  int arr1[26],arr2[26];
  for(int i='A';i<='Z';i++)
  {
    arr1[i]=i;
    //printf("%c ",arr1[i]);
  }
  for(int i=0;i<26;i++)
  {
    arr2[i]=count[i];
  }
  int temp;
  for(int i=0;i<26-1;i++)
  {
    for(int j=i;j<26;j++)
    {
      if(count[i]<count[j])
      {
        temp=count[i];
        count[i]=count[j];
        count[j]=temp;

        temp=arr2[i];
        arr2[i]=arr2[j];
        arr2[j]=temp;

      }
    }
  }
  for(int i=0;i<26;i++)
  {
    printf("%d ",arr2[i] );
  }

  printf("\n");
  for (int i = 0; i < 26 - 1; i++) 
  {
    for (int j = i; j < 26; j++) {
      if (count[i] < count[j]) {
        temp = count[i];
        count[i] = count[j];
        count[j] = temp;

        temp = arr1[arr2[i]];
        arr1[arr2[i]] = arr1[arr2[j]];
        arr1[arr2[j]] = temp;
      }
    }
  }

  for(int i=0;i<26;i++)
  {
    printf("%c ",arr1[i]);
  }
  return 0;
}