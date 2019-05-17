
int readArray[100];

int InitArray()
{
  readArray[1] = 0;
}

int mock_readHWRegister(int regId, int num_calls)
{
  if(regId<100)
  {
    if(regId == 1)
    {
      readArray[regId] = num_calls%2;
    }

    return readArray[regId];
  }
  else
  {
    return 0;        
  }
}

int mock_writeHWRegister(int regId, int num_calls)
{
  return 0;
}
