
undefined1 FUN_01024ae6(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  
  iVar2 = 0;
  do {
    iVar3 = DAT_01024bcc + param_1 * 0x80;
    puVar4 = (uint *)(iVar3 + iVar2 * 0x10);
    uVar1 = puVar4[1];
    if ((uVar1 <= param_4) && ((uVar1 < param_4 || (*puVar4 <= param_3)))) {
      iVar3 = iVar3 + iVar2 * 0x10;
      uVar1 = *(uint *)(iVar3 + 0xc);
      if ((param_4 <= uVar1) && (param_4 < uVar1 || param_3 < *(uint *)(iVar3 + 8))) {
        return (char)iVar2;
      }
    }
    iVar2 = iVar2 + 1;
    if (6 < iVar2) {
      return 7;
    }
  } while( true );
}

