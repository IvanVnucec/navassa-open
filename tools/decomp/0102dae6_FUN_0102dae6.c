
void FUN_0102dae6(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint in_r3;
  int *unaff_r6;
  undefined8 uVar3;
  uint uVar4;
  
  uVar4 = in_r3;
  uVar3 = FUN_0102db38();
  uVar2 = *(undefined4 *)((int)((ulonglong)uVar3 >> 0x20) + (int)uVar3 * 4);
  if ((unaff_r6[2] != 0) && (in_r3 < unaff_r6[2] - 1U)) {
    for (uVar1 = in_r3 + 2; uVar1 < (uint)unaff_r6[2]; uVar1 = uVar1 + 1) {
      *(undefined4 *)(*unaff_r6 + uVar1 * 4) = *(undefined4 *)(*unaff_r6 + uVar1 * 4 + -4);
    }
    uVar2 = FUN_0100b8ce(uVar2,7,uVar2,unaff_r6[2],uVar4);
    *(undefined4 *)(*unaff_r6 + (in_r3 + 1) * 4) = uVar2;
  }
  FUN_0100b5f4();
  return;
}

