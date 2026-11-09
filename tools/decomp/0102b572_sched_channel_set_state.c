
void sched_channel_set_state(int param_1,uint param_2)

{
  if (*(byte *)(param_1 + 0x1c) != param_2) {
    *(char *)(param_1 + 0x1c) = (char)param_2;
    mailbox_xfer(*(undefined1 *)(param_1 + 0x6d));
    return;
  }
  return;
}

