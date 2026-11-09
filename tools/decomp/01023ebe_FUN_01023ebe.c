
void FUN_01023ebe(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_010232b8();
  iVar2 = FUN_010289ba(param_2);
  FUN_0102353c(param_1,*(undefined4 *)(iVar2 + 4),0);
  stream_flag_tail(param_1,1);
  restore_priority(uVar1);
  return;
}

