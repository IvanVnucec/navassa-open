
void FUN_0101be78(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 local_10;
  
  task_enter_critical();
  piVar1 = DAT_0101bf00;
  local_10 = param_3;
  if (DAT_0101bf00[2] == 0) {
    FUN_01035918(DAT_0101bf00 + 5);
    FUN_01035918(piVar1 + 10);
    *piVar1 = (int)(piVar1 + 5);
    piVar1[1] = (int)(piVar1 + 10);
    local_10 = 0;
    iVar2 = FUN_0102ae42(10,0x10,piVar1 + 0x21,piVar1 + 0xf);
    piVar1[2] = iVar2;
    if (iVar2 != 0) {
      FUN_0102b3a2(iVar2,&DAT_0101bf10);
    }
  }
  FUN_0102bf96(local_10,param_4);
  return;
}

