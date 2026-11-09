
void FUN_01014d86(byte *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  byte bVar8;
  
  bVar1 = *param_1;
  uVar5 = FUN_01014694(2);
  iVar3 = DAT_01015428;
  iVar2 = DAT_01015280;
  bVar8 = 0;
  do {
    if ((int)(((bVar1 & uVar5) >> (uint)bVar8) << 0x1f) < 0) {
      iVar6 = param_2;
      if (param_2 != 0) {
        iVar6 = 7;
      }
      uVar4 = (undefined1)iVar6;
      if (param_2 == 0) {
        uVar4 = 1;
      }
      *(undefined1 *)(iVar3 + (uint)bVar8 + 0x14) = uVar4;
      thunk_EXT_FUN_20034e0c(bVar8,param_2);
      iVar6 = param_2;
      if (param_2 != 0) {
        iVar6 = 1;
      }
      *(char *)(*(int *)(iVar2 + (uint)bVar8 * 4 + 0x9c) + 0x11) = (char)iVar6;
      FUN_01017f68(bVar8,param_2);
    }
    bVar8 = bVar8 + 1;
  } while (bVar8 < 4);
  if (param_2 == 0) {
    uVar7 = 0x14;
  }
  else {
    uVar7 = 0x12;
  }
  FUN_010153b8(uVar7,0,0,param_4);
  return;
}

