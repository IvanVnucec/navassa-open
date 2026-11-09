
undefined8 FUN_0101a4ba(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  if ((int)((uint)*(byte *)(param_1 + 3) << 0x1f) < 0) {
    FUN_01017972(2,1);
  }
  if ((int)((uint)*(byte *)(param_1 + 3) << 0x1e) < 0) {
    FUN_01017972(3,1);
  }
  if ((int)((uint)*(byte *)(param_1 + 8) << 0x1f) < 0) {
    FUN_01017972(0,1);
  }
  if ((int)((uint)*(byte *)(param_1 + 8) << 0x1e) < 0) {
    FUN_01017972(1,1);
  }
  iVar2 = DAT_0101a564;
  iVar1 = DAT_0101a554;
  uVar4 = 0;
  do {
    if (((uint)*(byte *)(param_1 + 3) & 1 << (uVar4 & 0xff)) == 0) goto LAB_0101a526;
    iVar3 = FUN_01017c44(uVar4 + 2 & 0xff,*(undefined1 *)(uVar4 * 0xbc + iVar1 + 0xb0));
    do {
      if (iVar3 == 0) {
LAB_0101a526:
        if (((uint)*(byte *)(param_1 + 8) & 1 << (uVar4 & 0xff)) != 0) {
          iVar3 = FUN_01017c44(uVar4 & 0xff,
                               *(undefined1 *)(*(int *)(*(int *)(iVar2 + uVar4 * 4) + 0xc) + 0x8c));
        }
      }
      uVar4 = uVar4 + 1;
      if (1 < (int)uVar4) {
        return CONCAT44(param_4,iVar3);
      }
    } while (iVar3 != 0);
  } while( true );
}

