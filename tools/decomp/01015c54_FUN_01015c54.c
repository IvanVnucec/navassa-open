
void FUN_01015c54(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_01015e8c;
  iVar1 = DAT_01015e84;
  if (*(char *)(DAT_01015e84 + param_1 * 0xc) != '\0') {
    *DAT_01015e88 = s_gpt_c_01015ee0;
    *puVar2 = 0x50;
    boot_msg(1,0xff11,3);
  }
  *(undefined1 *)(iVar1 + param_1 * 0xc) = 1;
  return;
}

