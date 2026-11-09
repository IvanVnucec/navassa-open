
undefined8 FUN_01004044(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  uint local_18;
  
  iVar2 = DAT_010044b4;
  uVar5 = 0;
  puVar3 = (undefined1 *)*param_1;
  cVar1 = puVar3[0x14];
  if (cVar1 == '\0') {
    FUN_0100ff3c(*puVar3,0);
  }
  else {
    if (cVar1 != '\x01') {
      FUN_01003f3c(cVar1,*(undefined4 *)(puVar3 + 0x10));
      uVar5 = 1;
      local_18 = param_4;
      goto LAB_0100407c;
    }
    FUN_0100fd1e(*puVar3,0);
    FUN_0100fd48(*(undefined1 *)*param_1,0);
    FUN_0100fd5c(*(undefined1 *)*param_1,0);
    FUN_010040c2(*(undefined4 *)(DAT_010044bc + (uint)*(byte *)*param_1 * 4));
  }
  puVar3 = (undefined1 *)*param_1;
  uVar4 = puVar3[8];
  local_18 = (uint)(byte)puVar3[0x14];
  if ((local_18 == 0) && (*(char *)(iVar2 + 0x77d) != '\0')) {
    uVar4 = 0;
  }
  FUN_010101bc(param_1 + 4,param_1 + 5,*puVar3,uVar4);
LAB_0100407c:
  return CONCAT44(local_18,uVar5);
}

