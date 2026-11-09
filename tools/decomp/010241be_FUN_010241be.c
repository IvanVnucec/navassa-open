
uint FUN_010241be(undefined4 param_1,uint param_2,undefined2 param_3,int param_4)

{
  undefined2 uVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined *puVar4;
  uint unaff_r4;
  uint uVar5;
  int iVar6;
  
  puVar2 = DAT_0100a78c;
  iVar6 = *(int *)(DAT_0100a794 + unaff_r4 * 4);
  uVar1 = *(undefined2 *)(param_2 * 4 + 0x100a7a6);
  uVar3 = FUN_0100a4f4();
  *puVar2 = uVar3;
  FUN_0100a506(unaff_r4 & 0xff,0);
  uVar5 = 0;
  do {
    if (param_4 == 0) {
      puVar4 = (undefined *)0x100a7c0;
    }
    else {
      puVar4 = &DAT_0100a7a4;
    }
    FUN_0101af6c(iVar6 + uVar5 * 2 + (uint)*(ushort *)(puVar4 + param_2 * 4),uVar1,param_3);
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x40);
  FUN_0100a506(unaff_r4 & 0xff,*puVar2);
  *(ushort *)(puVar2 + unaff_r4 * 2 + 4) =
       (ushort)(1 << (param_2 & 0xff)) | *(ushort *)(puVar2 + unaff_r4 * 2 + 4);
  return unaff_r4;
}

