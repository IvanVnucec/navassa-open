
/* WARNING: Removing unreachable block (ram,0x0102f7d8) */
/* WARNING: Removing unreachable block (ram,0x0102f7f2) */
/* WARNING: Removing unreachable block (ram,0x0102f7f4) */

ulonglong FUN_0102f6f0(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 local_20;
  
  uVar1 = FUN_0102f806(6);
  if ((char)(uVar1 >> 0x10) == '\x01') {
    return CONCAT44(uVar1,0x2905);
  }
  iVar6 = *(int *)(DAT_0102fbbc + 4);
  uVar2 = 0;
  if ((uVar1 & 0xff) != 4) {
    if ((uVar1 & 0xff) != 2) {
      return CONCAT44(local_20,0x2905);
    }
    uVar2 = 1;
  }
  FUN_01016f6e(uVar2);
  FUN_01016eb4(0);
  FUN_01016ec2(0);
  FUN_01015e2c(1);
  FUN_01016ee8(6);
  uVar7 = 0xe107;
  for (iVar3 = 600; iVar3 != 0; iVar3 = iVar3 + -1) {
  }
  iVar3 = FUN_01016f46(6);
  if (iVar3 == 1) {
    uVar7 = 0;
  }
  if (uVar7 == 0) {
    iVar3 = FUN_01016f2e();
    iVar4 = FUN_01016f34();
    iVar5 = FUN_01016f10();
    uVar7 = ((uint)(iVar4 + iVar3) >> 1) - iVar5;
    if (uVar7 == 0) {
      return 0x2906;
    }
    *(undefined2 *)(iVar6 + 0x14) =
         (short)(((*(uint *)(DAT_0102fbc0 + 0xc) / (DAT_0102fbc4 * (uVar1 & 0xff))) * 0x111) / uVar7
                );
    *(undefined1 *)(iVar6 + 0x19) = 1;
    uVar7 = FUN_0102fb42((undefined2 *)(iVar6 + 0x14),0x100);
    if (uVar7 != 0) {
      *(undefined1 *)(iVar6 + 0x19) = 0;
    }
  }
  FUN_01016ec2(1);
  FUN_01016eb4(1);
  return (ulonglong)uVar7;
}

