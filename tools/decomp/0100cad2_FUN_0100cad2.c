
undefined8 FUN_0100cad2(int param_1,int param_2,undefined2 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 local_28;
  
  puVar3 = DAT_0100cbfc;
  iVar7 = DAT_0100cf58 + param_1 * 0x110;
  iVar9 = *(int *)(iVar7 + 0xc);
  local_28 = param_4;
  iVar5 = FUN_0100a4f4(param_1);
  puVar4 = DAT_0100d28c;
  uVar6 = 0;
  uVar2 = (undefined1)param_2;
  if (iVar5 == 0) {
    if (*(char *)(iVar9 + 0x98) != '\0') {
      *(undefined1 *)(iVar9 + 0x58) = uVar2;
      *(undefined2 *)(iVar9 + 0x54) = param_3;
      *(short *)(iVar9 + 0x56) = (short)param_4;
      FUN_0100c404(iVar7);
      **(undefined1 **)(iVar7 + 0x14) = uVar2;
      iVar8 = *(int *)(iVar7 + 0x14);
      iVar5 = FUN_0100c474(iVar7,param_2);
      *(char *)(iVar8 + 0x10) = (char)iVar5;
      if (iVar5 != 0) {
        uVar1 = *(undefined2 *)(*(int *)(iVar7 + 0xe4) + param_2 * 4 + 2);
        *(undefined2 *)(iVar8 + 0xc) = *(undefined2 *)(*(int *)(iVar7 + 0xe4) + param_2 * 4);
        *(undefined2 *)(iVar8 + 0xe) = uVar1;
      }
      if (*(char *)(*(int *)(iVar7 + 0x14) + 0x10) != '\0') {
        local_28 = *(undefined4 *)(*(int *)(iVar7 + 0x14) + 0xc);
        FUN_0100ba76(param_1,&local_28,*puVar3);
        *(undefined4 *)(iVar9 + 0xa2) = *(undefined4 *)(*(int *)(iVar7 + 0x14) + 0xc);
      }
      *(undefined1 *)(iVar9 + 0x38) = 1;
      uVar6 = 1;
    }
  }
  else {
    FUN_0100bb5a(param_1,DAT_0100d28c,*puVar3);
    *(undefined4 *)(iVar9 + 0xa2) = *puVar4;
    **(undefined1 **)(iVar7 + 0x14) = uVar2;
  }
  return CONCAT44(local_28,uVar6);
}

