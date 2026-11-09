
void FUN_0101721e(int param_1,int param_2)

{
  byte bVar1;
  
  if (param_1 != 0) {
    if (param_2 == 1) {
      bVar1 = DAT_01017500[1] & 0xfe;
    }
    else {
      bVar1 = DAT_01017500[1] & 0xfd;
    }
    DAT_01017500[1] = bVar1;
    return;
  }
  if (param_2 == 1) {
    bVar1 = *DAT_01017500 & 0xfe;
  }
  else {
    bVar1 = *DAT_01017500 & 0xfd;
  }
  *DAT_01017500 = bVar1;
  return;
}

