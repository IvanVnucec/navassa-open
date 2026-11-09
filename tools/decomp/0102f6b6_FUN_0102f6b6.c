
/* WARNING: Removing unreachable block (ram,0x0102f782) */
/* WARNING: Removing unreachable block (ram,0x0102f798) */
/* WARNING: Removing unreachable block (ram,0x0102f79e) */
/* WARNING: Removing unreachable block (ram,0x0102f7ce) */

ulonglong FUN_0102f6b6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uStackY_20;
  
  iVar2 = DAT_0102fbbc;
  FUN_0100d7b8(*(undefined4 *)(DAT_0102fbbc + 4),0x1c,param_3,param_4,param_3,param_4);
  uVar1 = FUN_0102f806(5);
  if ((char)(uVar1 >> 0x10) == '\x01') {
    return CONCAT44(uVar1,0x2905);
  }
  iVar2 = *(int *)(iVar2 + 4);
  uVar3 = 0;
  if ((uVar1 & 0xff) != 4) {
    if ((uVar1 & 0xff) != 2) {
      return CONCAT44(uStackY_20,0x2905);
    }
    uVar3 = 1;
  }
  FUN_01016f6e(uVar3);
  FUN_01016eb4(0);
  FUN_01016ec2(0);
  FUN_01015e2c(1);
  FUN_01016ee8(5);
  uVar1 = 0xe107;
  for (iVar4 = 600; iVar4 != 0; iVar4 = iVar4 + -1) {
  }
  iVar4 = FUN_01016f46(5);
  if (iVar4 == 1) {
    uVar1 = 0;
  }
  if (uVar1 == 0) {
    iVar4 = FUN_01016f1c();
    *(short *)(iVar2 + 0x16) = (short)(iVar4 << 4);
    *(undefined1 *)(iVar2 + 0x18) = 1;
    uVar1 = FUN_0102fb42(iVar2 + 0x16,0x800);
    uVar5 = uVar1;
    if (uVar1 != 0) {
      uVar5 = 0;
    }
    if (uVar1 != 0) {
      *(char *)(iVar2 + 0x18) = (char)uVar5;
    }
  }
  FUN_01016ec2(1);
  FUN_01016eb4(1);
  return (ulonglong)uVar1;
}

