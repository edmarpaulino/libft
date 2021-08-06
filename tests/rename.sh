#! /usr/bin/env	bash

for i in *.c;do
  mv $i ${i//main/test}
done
