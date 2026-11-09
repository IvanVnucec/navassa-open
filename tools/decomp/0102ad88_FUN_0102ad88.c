
void FUN_0102ad88(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  switch(param_1) {
  case 0:
    uVar2 = 3;
    break;
  case 1:
    uVar2 = 6;
    break;
  case 2:
    uVar2 = 4;
    break;
  case 3:
    uVar2 = 7;
    break;
  default:
    goto switchD_0102ad90_default;
  }
  FUN_01014498(uVar2);
switchD_0102ad90_default:
  iVar1 = FUN_01006ce2(param_1);
  if (iVar1 == 0) {
    uVar2 = 0xd;
  }
  else {
    if (iVar1 != 1) {
      return;
    }
    uVar2 = 0xf;
  }
  FUN_01014498(uVar2);
  return;
}

