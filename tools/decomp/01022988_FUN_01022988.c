
/* WARNING: Removing unreachable block (ram,0x0102283a) */
/* WARNING: Removing unreachable block (ram,0x0102283e) */
/* WARNING: Removing unreachable block (ram,0x01022842) */
/* WARNING: Removing unreachable block (ram,0x01022844) */
/* WARNING: Removing unreachable block (ram,0x01022848) */
/* WARNING: Removing unreachable block (ram,0x0102284c) */
/* WARNING: Removing unreachable block (ram,0x0102284e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_01022988(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int unaff_r5;
  
  iVar3 = 0;
  if (param_3 == 0) {
    iVar1 = 0x142c;
  }
  else if (param_3 == 1) {
    iVar1 = 0x14dc;
  }
  else {
    iVar1 = 0x158c;
  }
  iVar1 = unaff_r5 * 0x58 + _DAT_01022ae4 + iVar1;
  bVar2 = 0;
  do {
    iVar4 = *(int *)(iVar1 + (uint)bVar2 * 4);
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    iVar3 = iVar4 + iVar3;
    bVar2 = bVar2 + 1;
  } while (bVar2 < 10);
  bVar2 = 0xb;
  do {
    iVar4 = *(int *)(iVar1 + (uint)bVar2 * 4);
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    iVar3 = iVar4 + iVar3;
    bVar2 = bVar2 + 1;
  } while (bVar2 < 0x15);
  return iVar3 == 0;
}

