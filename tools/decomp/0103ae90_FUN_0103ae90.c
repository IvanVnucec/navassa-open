
longlong FUN_0103ae90(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *(char *)(param_1 + 0x10) = (char)param_2;
  FUN_01006136(*(undefined1 *)(param_1 + 2));
  mailbox_xfer(*(undefined1 *)(param_1 + 0x12),param_2);
  return (ulonglong)param_4 << 0x20;
}

