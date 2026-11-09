
void FUN_01037fc4(undefined2 param_1)

{
  int unaff_r8;
  
  *(undefined2 *)(unaff_r8 + 0x12) = param_1;
  mailbox_xfer(0x30,*(ushort *)(unaff_r8 + 0x12) + 1);
  return;
}

