
undefined4
FUN_0100c7cc(undefined4 param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0101f06a(param_1,*param_2);
  uVar3 = 0;
  if (iVar1 == 0) {
    if (*(char *)(*(int *)(param_2 + 0xc) + 0xc) == '\x01') {
      if (*(char *)(*(int *)(param_2 + 0xc) + 9) == '\x02') {
        uVar3 = 0x2104;
      }
      else {
        uVar3 = 0x2105;
      }
    }
    else {
      uVar3 = 0x2103;
    }
  }
  else {
    uVar2 = FUN_0101f078(param_1,*param_2,param_3,param_4);
    *(undefined4 *)(param_2 + 8) = uVar2;
  }
  return uVar3;
}

