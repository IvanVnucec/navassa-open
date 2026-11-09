
void FUN_0102e450(int param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_r8;
  
  iVar3 = DAT_0102e4fc;
  iVar4 = *(int *)(DAT_0102e4fc + (uint)(byte)(*(char *)(param_1 + 1) + 2) * 4);
  cVar1 = *(char *)(iVar4 + 0x2d);
  cVar2 = *(char *)(iVar4 + 0x31);
  if (cVar2 != '\0') {
    stream_flag_tail(*DAT_0102e52c,4);
    unaff_r8 = FUN_010232b8();
  }
  if (cVar1 != '\0') {
    FUN_0100378c(*(char *)(param_1 + 1),1,
                 *(undefined4 *)(*(int *)(iVar3 + (uint)*(byte *)(param_1 + 2) * 4) + 0x34),0,
                 *(undefined1 *)
                  (*(int *)(DAT_0102e518 +
                           (uint)*(byte *)(DAT_0102e514 + (uint)(byte)(*(char *)(param_1 + 1) + 2))
                           * 4) + 0x2d));
  }
  *(undefined1 *)(*(int *)(DAT_0102e538 + (uint)*(byte *)(param_1 + 1) * 4) + 0x1b9) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 8);
  if (cVar2 != '\0') {
    stream_flag_tail(*DAT_0102e52c,1);
    restore_priority(unaff_r8);
    return;
  }
  return;
}

