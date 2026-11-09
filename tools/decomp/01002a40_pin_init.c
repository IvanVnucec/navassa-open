
void pin_init(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = DAT_01002ae8;
  pin_update(DAT_01002ae8,1,1);
  pin_update(uVar1,2,0);
  iVar2 = DAT_01002aec;
  pin_update(DAT_01002aec,0x1f,0x1f);
  *(undefined1 *)(iVar2 + 1) = 0xf;
  *(undefined1 *)(iVar2 + 2) = 0x1f;
  *(undefined1 *)(iVar2 + 3) = 0xff;
  *(undefined1 *)(iVar2 + 4) = 0xf1;
  return;
}

