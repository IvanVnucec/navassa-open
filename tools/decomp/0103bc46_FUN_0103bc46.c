
void FUN_0103bc46(void)

{
  undefined2 *puVar1;
  undefined4 in_r3;
  int iVar2;
  
  if (*DAT_0103bce0 != '\0') {
    *DAT_0103bce0 = '\0';
    FUN_01017972(0,1);
    puVar1 = DAT_0103bcf0;
    iVar2 = *DAT_0103bce8;
    pin_update(iVar2 + 199,0x7f,(ushort)DAT_0103bcf0[5] - 1 >> 8 & 0x7f);
    *(char *)(iVar2 + 0xc6) = (char)puVar1[5] + -1;
    *(char *)(iVar2 + 0x32) = (char)((ushort)puVar1[6] - 1 >> 8);
    *(char *)(iVar2 + 0x33) = (char)puVar1[6] + -1;
    *(char *)(iVar2 + 5) = (char)*puVar1;
    *(char *)(iVar2 + 6) = (char)((ushort)*puVar1 >> 8);
    FUN_0102ccba(3,1,in_r3);
    return;
  }
  FUN_01028a2a(*DAT_0103bcf4);
  stream_flag_tail(*DAT_0103bcf8,9,in_r3);
  return;
}

