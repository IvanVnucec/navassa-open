
void FUN_0102983c(int param_1)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  
  iVar2 = DAT_01029990;
  puVar1 = DAT_0102998c;
  iVar4 = DAT_01029938;
  uVar5 = *DAT_0102998c;
  if (((param_1 << 0x1f < 0) && (*(char *)(DAT_01029938 + 0x1c6) != *(char *)(DAT_01029990 + 0x15)))
     && (iVar3 = FUN_01011708(0,0), iVar3 == 0)) {
    uVar5 = uVar5 | 0x10;
  }
  if (((param_1 << 0x1e < 0) && (*(char *)(iVar4 + 0x282) != *(char *)(iVar2 + 0x15))) &&
     (iVar4 = FUN_01011708(0,1), iVar4 == 0)) {
    uVar5 = uVar5 | 0x20;
  }
  *puVar1 = uVar5;
  return;
}

