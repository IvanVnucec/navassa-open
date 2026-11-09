
void FUN_01006748(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = DAT_01007348;
  iVar1 = DAT_010071a8;
  uVar4 = 0;
  do {
    if ((param_2 & 1 << (uVar4 & 0xff)) != 0) {
      if ((int)uVar4 < 2) {
        iVar3 = *(int *)(iVar2 + uVar4 * 4) + 0x1ab;
      }
      else {
        iVar3 = *(int *)(iVar1 + uVar4 * 4) + 0x1b6;
      }
      pin_update(iVar3,3,param_1);
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 4);
  return;
}

