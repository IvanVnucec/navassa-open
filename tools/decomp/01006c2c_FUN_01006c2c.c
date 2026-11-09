
void FUN_01006c2c(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_010071b0 + param_3 * 4;
  if (param_4 == 0) {
    *(undefined4 *)(iVar2 + 0x34) = *(undefined4 *)(iVar2 + 0x44);
    *(undefined4 *)(iVar2 + 0x2c) = *(undefined4 *)(iVar2 + 0x3c);
  }
  else if (param_2 == 0 || param_2 == 4) {
    *(uint *)(iVar2 + 0x2c) = -(uint)(*(int *)(iVar2 + 0x3c) == 0) >> 0x1f;
  }
  else {
    *(uint *)(iVar2 + 0x34) = -(uint)(*(int *)(iVar2 + 0x44) == 0) >> 0x1f;
  }
  switch(param_2) {
  case 0:
  case 4:
    *(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(iVar2 + 0x2c);
    *(undefined4 *)(iVar2 + 0x7c) = 2;
    return;
  case 1:
    *(undefined4 *)(iVar2 + 0x2c) = *(undefined4 *)(iVar2 + 0x34);
    *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(iVar2 + 0x34);
    if (param_1 == 0) {
      uVar1 = 2;
    }
    else {
      uVar1 = *(undefined4 *)(iVar2 + 0x2c);
    }
    break;
  case 2:
    if (param_1 == 0) {
      *(undefined4 *)(iVar2 + 0x5c) = *(undefined4 *)(iVar2 + 0x34);
      uVar1 = 2;
    }
    else {
      *(undefined4 *)(iVar2 + 0x5c) = 2;
      uVar1 = *(undefined4 *)(iVar2 + 0x34);
    }
    *(undefined4 *)(iVar2 + 0x84) = uVar1;
    return;
  case 3:
    *(undefined4 *)(iVar2 + 0x2c) = *(undefined4 *)(iVar2 + 0x34);
    if (param_1 == 0) {
      *(undefined4 *)(iVar2 + 100) = *(undefined4 *)(iVar2 + 0x34);
      uVar1 = 2;
    }
    else {
      *(undefined4 *)(iVar2 + 100) = 2;
      uVar1 = *(undefined4 *)(iVar2 + 0x2c);
    }
    break;
  default:
    goto switchD_01006c64_default;
  }
  *(undefined4 *)(iVar2 + 0x7c) = uVar1;
switchD_01006c64_default:
  return;
}

