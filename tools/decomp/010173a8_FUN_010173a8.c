
byte FUN_010173a8(int param_1)

{
  byte bVar1;
  
  if (param_1 == 0) {
    bVar1 = *DAT_0101750c;
  }
  else {
    bVar1 = DAT_0101750c[1];
  }
  return bVar1 & 1;
}

