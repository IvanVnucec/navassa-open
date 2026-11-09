
void FUN_0103453c(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  char in_CY;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_01020278(0,DAT_010345dc,param_1,param_2);
  FUN_01012c58(param_1,param_2,0,0);
  if (in_CY == '\0') {
    iVar2 = 0;
    do {
      FUN_01012c10(*(undefined4 *)(param_3 + iVar2 * 8));
      uVar3 = FUN_010345e0();
      FUN_01012c10(*(undefined4 *)(param_4 + iVar2 * 8));
      uVar4 = FUN_01033ce8();
      FUN_010200e0((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),(int)uVar3,
                   (int)((ulonglong)uVar3 >> 0x20));
      uVar1 = FUN_0101f3f4();
      *(undefined4 *)(param_3 + iVar2 * 8) = uVar1;
      FUN_01012c10(*(undefined4 *)(param_3 + 4 + iVar2 * 8));
      uVar3 = FUN_010345e0();
      FUN_01012c10(*(undefined4 *)(param_4 + 4 + iVar2 * 8));
      uVar4 = FUN_01033ce8();
      FUN_010200e0((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),(int)uVar3,
                   (int)((ulonglong)uVar3 >> 0x20));
      uVar1 = FUN_0101f3f4();
      *(undefined4 *)(param_3 + 4 + iVar2 * 8) = uVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x1a);
  }
  return;
}

