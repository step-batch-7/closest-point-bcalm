rm -rf *.o
echo '\n'Compiling...
gcc -c *.c
if [ $? == 0 ]
then
  echo '\n'...done
  echo '\n'Linking...
  gcc -o a.out  *.o
  echo ...done
  echo '\n'Executing...'\n'
  ./a.out
  rm -rf *.o
  rm -rf a.out
fi
echo '\n'...done

