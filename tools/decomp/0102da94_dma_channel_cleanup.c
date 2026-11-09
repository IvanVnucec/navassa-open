
undefined8 dma_channel_cleanup(void)

{
  int iVar1;
  undefined4 in_r3;
  int *unaff_r6;
  
  FUN_0102db38();
  iVar1 = FUN_0100b26a();
  *(uint *)(*unaff_r6 + iVar1 * 4) = *(uint *)(*unaff_r6 + iVar1 * 4) & 0xdfffffff;
  iVar1 = 0;
  if (unaff_r6[2] != 0) {
    unaff_r6[2] = unaff_r6[2] + -1;
    iVar1 = FUN_0100b6d6();
    if (iVar1 == 0) {
      iVar1 = FUN_0100b782();
    }
    if (iVar1 != 0) goto LAB_0102dae2;
  }
  FUN_0100b594();
LAB_0102dae2:
  return CONCAT44(in_r3,iVar1);
}

