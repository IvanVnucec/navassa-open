
void FUN_01016cda(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_01016e54 + param_1 * 4);
  if (param_7 == 1) {
    iVar1 = 0x1016e68;
  }
  else {
    iVar1 = 0x1016e78;
  }
  if (param_5 == 0) {
    iVar2 = iVar2 + 0x30;
  }
  else {
    iVar2 = iVar2 + 0x31;
  }
  if (param_6 != 0) {
    FUN_0100b704(param_6,iVar2,*(undefined1 *)(iVar1 + param_2 * 8 + 4),0x1f);
    return;
  }
  pin_update(iVar2,0x1f);
  return;
}

