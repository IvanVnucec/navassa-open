
void FUN_0100bb5a(int param_1,undefined2 *param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  
  iVar5 = *(int *)(DAT_0100bcd4 + param_1 * 4);
  if (param_3 == 0) {
    uVar1 = *(undefined1 *)(iVar5 + 0x1dc);
    uVar2 = *(undefined1 *)(iVar5 + 0x1dd);
    puVar7 = (undefined1 *)(iVar5 + 0x1e0);
    puVar6 = (undefined1 *)(iVar5 + 0x1e1);
  }
  else {
    uVar1 = *(undefined1 *)(iVar5 + 0x1da);
    uVar2 = *(undefined1 *)(iVar5 + 0x1db);
    puVar7 = (undefined1 *)(iVar5 + 0x1de);
    puVar6 = (undefined1 *)(iVar5 + 0x1df);
  }
  uVar3 = *puVar7;
  uVar4 = *puVar6;
  *param_2 = CONCAT11(uVar2,uVar1);
  param_2[1] = CONCAT11(uVar4,uVar3);
  return;
}

