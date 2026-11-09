
undefined8 FUN_01003418(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined4 uStack_c;
  
  uVar2 = 0;
  local_10 = param_3;
  if (*(char *)(param_2 + 4) == '\x05') {
    uStack_c = param_4;
    iVar1 = FUN_0100344c(param_1,&local_10);
    if (iVar1 == 0) {
      uVar2 = 0x4107;
    }
    else {
      if ((char)local_10 != '\0') {
        FUN_01003388(0);
      }
      if (local_10._1_1_ != '\0') {
        FUN_01003388(1);
      }
    }
  }
  return CONCAT44(local_10,uVar2);
}

