
void FUN_01017246(int param_1,int param_2)

{
  byte bVar1;
  
  if (param_1 != 0) {
    if (param_2 == 1) {
      bVar1 = DAT_01017500[1] | 1;
    }
    else {
      bVar1 = DAT_01017500[1] | 2;
    }
    DAT_01017500[1] = bVar1;
    return;
  }
  if (param_2 == 1) {
    bVar1 = *DAT_01017500 | 1;
  }
  else {
    bVar1 = *DAT_01017500 | 2;
  }
  *DAT_01017500 = bVar1;
  return;
}

