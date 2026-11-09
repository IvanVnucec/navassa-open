
void FUN_010019f8(void)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  
  puVar2 = DAT_01002464;
  iVar1 = DAT_01002460;
  *(uint *)(DAT_01002518 + 0x2c) = *(uint *)(DAT_01002518 + 0x2c) & 0xfffffffe;
  uVar3 = 0;
LAB_01001a10:
  FUN_01006730();
  do {
    uVar4 = uVar3;
    FUN_010018e8(uVar4 & 0xff);
    uVar3 = uVar4 + 1;
    *(uint *)(*(int *)(puVar2 + (uint)*(byte *)(iVar1 + uVar4) * 4 + 0xc) + 0x1c) =
         *(uint *)(*(int *)(puVar2 + (uint)*(byte *)(iVar1 + uVar4) * 4 + 0xc) + 0x1c) &
         ~(1 << (uVar4 & 0xff));
    if (3 < (int)uVar3) {
      pin_update(DAT_010025b0,1,0);
      *DAT_010025fc = *puVar2;
      FUN_010027d8(DAT_0100273c,puVar2[1]);
      return;
    }
    switch(uVar4) {
    case 0:
      FUN_01006736();
      break;
    case 1:
      FUN_0100673c();
      break;
    case 2:
      FUN_01006742();
      break;
    case 0xffffffff:
      goto switchD_01001a44_caseD_ffffffff;
    }
  } while( true );
switchD_01001a44_caseD_ffffffff:
  goto LAB_01001a10;
}

