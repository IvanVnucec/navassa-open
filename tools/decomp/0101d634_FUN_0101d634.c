
char * FUN_0101d634(void)

{
  uint *puVar1;
  uint uVar2;
  char *unaff_r7;
  
  if (*DAT_0101d874 != '\x01') {
    return DAT_0101d874;
  }
  puVar1 = (uint *)(*(int *)(DAT_0101d878 + 4) + 0x40);
  uVar2 = *puVar1;
  if ((uVar2 & 0x90000000) != 0) {
    if ((uVar2 & 0x80000000) == 0) {
      if ((uVar2 & 0x10000000) != 0) {
        *puVar1 = uVar2 & 0x10000000;
      }
    }
    else {
      *puVar1 = uVar2 & 0x80000000;
    }
    unaff_r7 = (char *)0x0;
    sched_state_op_B(*DAT_0101d87c,&stack0xfffffff8);
    *DAT_0101d880 = 1;
  }
  return unaff_r7;
}

