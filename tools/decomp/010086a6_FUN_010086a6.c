
void FUN_010086a6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  
  iVar5 = DAT_010091f0 + param_1 * 0x60;
  FUN_0100d7b8(iVar5,0x60,DAT_010091f0,param_1 * 0x60,param_4);
  *(undefined1 *)(iVar5 + 0x35) = 0xff;
  *(undefined1 *)(iVar5 + 0x10) = 0;
  uVar4 = *(undefined1 *)(DAT_0100935c + 0x11);
  *(undefined1 *)(iVar5 + 0x48) = uVar4;
  if (param_1 == 3 || param_1 == 4) {
    uVar4 = 0;
  }
  if (param_1 == 3 || param_1 == 4) {
    *(undefined1 *)(iVar5 + 0x48) = uVar4;
  }
  iVar1 = param_1 * 0x10;
  *(undefined4 *)(iVar5 + 0x38) = *(undefined4 *)(&DAT_01015b14 + iVar1);
  *(undefined4 *)(iVar5 + 0x3c) = *(undefined4 *)(&DAT_01015b18 + iVar1);
  *(undefined4 *)(iVar5 + 0x40) = *(undefined4 *)(&DAT_01015b1c + iVar1);
  iVar3 = DAT_01015a28;
  *(undefined *)(iVar5 + 0x44) = (&DAT_01015b20)[iVar1];
  if (param_1 == 2) {
    bVar2 = *(byte *)(iVar3 + 0xe);
  }
  else {
    if (param_1 != 3 && param_1 != 4) {
      uVar4 = (&DAT_01015b21)[iVar1];
      goto LAB_0101560a;
    }
    bVar2 = *(byte *)(iVar3 + 0xf);
  }
  uVar4 = *(undefined1 *)(DAT_01015a2c + (bVar2 & 3));
LAB_0101560a:
  *(undefined1 *)(iVar5 + 0x45) = uVar4;
  *(undefined *)(iVar5 + 0x46) = (&DAT_01015b22)[iVar1];
  *(undefined1 *)(iVar5 + 0x36) = 0;
  return;
}

