#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004DAAD0
// Address: 0x4daad0 - 0x4dacb0
void sub_004DAAD0_0x4daad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DAAD0_0x4daad0");
#endif

    switch (ctx->pc) {
        case 0x4daad0u: goto label_4daad0;
        case 0x4daad4u: goto label_4daad4;
        case 0x4daad8u: goto label_4daad8;
        case 0x4daadcu: goto label_4daadc;
        case 0x4daae0u: goto label_4daae0;
        case 0x4daae4u: goto label_4daae4;
        case 0x4daae8u: goto label_4daae8;
        case 0x4daaecu: goto label_4daaec;
        case 0x4daaf0u: goto label_4daaf0;
        case 0x4daaf4u: goto label_4daaf4;
        case 0x4daaf8u: goto label_4daaf8;
        case 0x4daafcu: goto label_4daafc;
        case 0x4dab00u: goto label_4dab00;
        case 0x4dab04u: goto label_4dab04;
        case 0x4dab08u: goto label_4dab08;
        case 0x4dab0cu: goto label_4dab0c;
        case 0x4dab10u: goto label_4dab10;
        case 0x4dab14u: goto label_4dab14;
        case 0x4dab18u: goto label_4dab18;
        case 0x4dab1cu: goto label_4dab1c;
        case 0x4dab20u: goto label_4dab20;
        case 0x4dab24u: goto label_4dab24;
        case 0x4dab28u: goto label_4dab28;
        case 0x4dab2cu: goto label_4dab2c;
        case 0x4dab30u: goto label_4dab30;
        case 0x4dab34u: goto label_4dab34;
        case 0x4dab38u: goto label_4dab38;
        case 0x4dab3cu: goto label_4dab3c;
        case 0x4dab40u: goto label_4dab40;
        case 0x4dab44u: goto label_4dab44;
        case 0x4dab48u: goto label_4dab48;
        case 0x4dab4cu: goto label_4dab4c;
        case 0x4dab50u: goto label_4dab50;
        case 0x4dab54u: goto label_4dab54;
        case 0x4dab58u: goto label_4dab58;
        case 0x4dab5cu: goto label_4dab5c;
        case 0x4dab60u: goto label_4dab60;
        case 0x4dab64u: goto label_4dab64;
        case 0x4dab68u: goto label_4dab68;
        case 0x4dab6cu: goto label_4dab6c;
        case 0x4dab70u: goto label_4dab70;
        case 0x4dab74u: goto label_4dab74;
        case 0x4dab78u: goto label_4dab78;
        case 0x4dab7cu: goto label_4dab7c;
        case 0x4dab80u: goto label_4dab80;
        case 0x4dab84u: goto label_4dab84;
        case 0x4dab88u: goto label_4dab88;
        case 0x4dab8cu: goto label_4dab8c;
        case 0x4dab90u: goto label_4dab90;
        case 0x4dab94u: goto label_4dab94;
        case 0x4dab98u: goto label_4dab98;
        case 0x4dab9cu: goto label_4dab9c;
        case 0x4daba0u: goto label_4daba0;
        case 0x4daba4u: goto label_4daba4;
        case 0x4daba8u: goto label_4daba8;
        case 0x4dabacu: goto label_4dabac;
        case 0x4dabb0u: goto label_4dabb0;
        case 0x4dabb4u: goto label_4dabb4;
        case 0x4dabb8u: goto label_4dabb8;
        case 0x4dabbcu: goto label_4dabbc;
        case 0x4dabc0u: goto label_4dabc0;
        case 0x4dabc4u: goto label_4dabc4;
        case 0x4dabc8u: goto label_4dabc8;
        case 0x4dabccu: goto label_4dabcc;
        case 0x4dabd0u: goto label_4dabd0;
        case 0x4dabd4u: goto label_4dabd4;
        case 0x4dabd8u: goto label_4dabd8;
        case 0x4dabdcu: goto label_4dabdc;
        case 0x4dabe0u: goto label_4dabe0;
        case 0x4dabe4u: goto label_4dabe4;
        case 0x4dabe8u: goto label_4dabe8;
        case 0x4dabecu: goto label_4dabec;
        case 0x4dabf0u: goto label_4dabf0;
        case 0x4dabf4u: goto label_4dabf4;
        case 0x4dabf8u: goto label_4dabf8;
        case 0x4dabfcu: goto label_4dabfc;
        case 0x4dac00u: goto label_4dac00;
        case 0x4dac04u: goto label_4dac04;
        case 0x4dac08u: goto label_4dac08;
        case 0x4dac0cu: goto label_4dac0c;
        case 0x4dac10u: goto label_4dac10;
        case 0x4dac14u: goto label_4dac14;
        case 0x4dac18u: goto label_4dac18;
        case 0x4dac1cu: goto label_4dac1c;
        case 0x4dac20u: goto label_4dac20;
        case 0x4dac24u: goto label_4dac24;
        case 0x4dac28u: goto label_4dac28;
        case 0x4dac2cu: goto label_4dac2c;
        case 0x4dac30u: goto label_4dac30;
        case 0x4dac34u: goto label_4dac34;
        case 0x4dac38u: goto label_4dac38;
        case 0x4dac3cu: goto label_4dac3c;
        case 0x4dac40u: goto label_4dac40;
        case 0x4dac44u: goto label_4dac44;
        case 0x4dac48u: goto label_4dac48;
        case 0x4dac4cu: goto label_4dac4c;
        case 0x4dac50u: goto label_4dac50;
        case 0x4dac54u: goto label_4dac54;
        case 0x4dac58u: goto label_4dac58;
        case 0x4dac5cu: goto label_4dac5c;
        case 0x4dac60u: goto label_4dac60;
        case 0x4dac64u: goto label_4dac64;
        case 0x4dac68u: goto label_4dac68;
        case 0x4dac6cu: goto label_4dac6c;
        case 0x4dac70u: goto label_4dac70;
        case 0x4dac74u: goto label_4dac74;
        case 0x4dac78u: goto label_4dac78;
        case 0x4dac7cu: goto label_4dac7c;
        case 0x4dac80u: goto label_4dac80;
        case 0x4dac84u: goto label_4dac84;
        case 0x4dac88u: goto label_4dac88;
        case 0x4dac8cu: goto label_4dac8c;
        case 0x4dac90u: goto label_4dac90;
        case 0x4dac94u: goto label_4dac94;
        case 0x4dac98u: goto label_4dac98;
        case 0x4dac9cu: goto label_4dac9c;
        case 0x4daca0u: goto label_4daca0;
        case 0x4daca4u: goto label_4daca4;
        case 0x4daca8u: goto label_4daca8;
        case 0x4dacacu: goto label_4dacac;
        default: break;
    }

    ctx->pc = 0x4daad0u;

label_4daad0:
    // 0x4daad0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4daad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4daad4:
    // 0x4daad4: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x4daad4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_4daad8:
    // 0x4daad8: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x4daad8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4daadc:
    // 0x4daadc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4daadcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4daae0:
    // 0x4daae0: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x4daae0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_4daae4:
    // 0x4daae4: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x4daae4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_4daae8:
    // 0x4daae8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4daae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4daaec:
    // 0x4daaec: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x4daaecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_4daaf0:
    // 0x4daaf0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4daaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4daaf4:
    // 0x4daaf4: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x4daaf4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4daaf8:
    // 0x4daaf8: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x4daaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_4daafc:
    // 0x4daafc: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x4daafcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_4dab00:
    // 0x4dab00: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x4dab00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_4dab04:
    // 0x4dab04: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x4dab04u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_4dab08:
    // 0x4dab08: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x4dab08u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
label_4dab0c:
    // 0x4dab0c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4dab0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4dab10:
    // 0x4dab10: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x4dab10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
label_4dab14:
    // 0x4dab14: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4dab14u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4dab18:
    // 0x4dab18: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x4dab18u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
label_4dab1c:
    // 0x4dab1c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x4dab1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_4dab20:
    // 0x4dab20: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x4dab20u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
label_4dab24:
    // 0x4dab24: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x4dab24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_4dab28:
    // 0x4dab28: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x4dab28u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_4dab2c:
    // 0x4dab2c: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x4dab2cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_4dab30:
    // 0x4dab30: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x4dab30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_4dab34:
    // 0x4dab34: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x4dab34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_4dab38:
    // 0x4dab38: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4dab38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4dab3c:
    // 0x4dab3c: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x4dab3cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
label_4dab40:
    // 0x4dab40: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x4dab40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
label_4dab44:
    // 0x4dab44: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x4dab44u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4dab48:
    // 0x4dab48: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x4dab48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_4dab4c:
    // 0x4dab4c: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x4dab4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_4dab50:
    // 0x4dab50: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x4dab50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_4dab54:
    // 0x4dab54: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4dab54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4dab58:
    // 0x4dab58: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x4dab58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_4dab5c:
    // 0x4dab5c: 0x3e00008  jr          $ra
label_4dab60:
    if (ctx->pc == 0x4DAB60u) {
        ctx->pc = 0x4DAB60u;
            // 0x4dab60: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->pc = 0x4DAB64u;
        goto label_4dab64;
    }
    ctx->pc = 0x4DAB5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DAB60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DAB5Cu;
            // 0x4dab60: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DAB64u;
label_4dab64:
    // 0x4dab64: 0x0  nop
    ctx->pc = 0x4dab64u;
    // NOP
label_4dab68:
    // 0x4dab68: 0x0  nop
    ctx->pc = 0x4dab68u;
    // NOP
label_4dab6c:
    // 0x4dab6c: 0x0  nop
    ctx->pc = 0x4dab6cu;
    // NOP
label_4dab70:
    // 0x4dab70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4dab70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4dab74:
    // 0x4dab74: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4dab74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4dab78:
    // 0x4dab78: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4dab78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4dab7c:
    // 0x4dab7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4dab7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4dab80:
    // 0x4dab80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4dab80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4dab84:
    // 0x4dab84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4dab84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4dab88:
    // 0x4dab88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4dab88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4dab8c:
    // 0x4dab8c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4dab8cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4dab90:
    // 0x4dab90: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_4dab94:
    if (ctx->pc == 0x4DAB94u) {
        ctx->pc = 0x4DAB94u;
            // 0x4dab94: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DAB98u;
        goto label_4dab98;
    }
    ctx->pc = 0x4DAB90u;
    {
        const bool branch_taken_0x4dab90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4DAB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DAB90u;
            // 0x4dab94: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dab90) {
            ctx->pc = 0x4DABC4u;
            goto label_4dabc4;
        }
    }
    ctx->pc = 0x4DAB98u;
label_4dab98:
    // 0x4dab98: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4dab98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4dab9c:
    // 0x4dab9c: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_4daba0:
    if (ctx->pc == 0x4DABA0u) {
        ctx->pc = 0x4DABA0u;
            // 0x4daba0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4DABA4u;
        goto label_4daba4;
    }
    ctx->pc = 0x4DAB9Cu;
    {
        const bool branch_taken_0x4dab9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4dab9c) {
            ctx->pc = 0x4DABA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DAB9Cu;
            // 0x4daba0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DABB8u;
            goto label_4dabb8;
        }
    }
    ctx->pc = 0x4DABA4u;
label_4daba4:
    // 0x4daba4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4daba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4daba8:
    // 0x4daba8: 0x10a30017  beq         $a1, $v1, . + 4 + (0x17 << 2)
label_4dabac:
    if (ctx->pc == 0x4DABACu) {
        ctx->pc = 0x4DABB0u;
        goto label_4dabb0;
    }
    ctx->pc = 0x4DABA8u;
    {
        const bool branch_taken_0x4daba8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4daba8) {
            ctx->pc = 0x4DAC08u;
            goto label_4dac08;
        }
    }
    ctx->pc = 0x4DABB0u;
label_4dabb0:
    // 0x4dabb0: 0x10000015  b           . + 4 + (0x15 << 2)
label_4dabb4:
    if (ctx->pc == 0x4DABB4u) {
        ctx->pc = 0x4DABB8u;
        goto label_4dabb8;
    }
    ctx->pc = 0x4DABB0u;
    {
        const bool branch_taken_0x4dabb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dabb0) {
            ctx->pc = 0x4DAC08u;
            goto label_4dac08;
        }
    }
    ctx->pc = 0x4DABB8u;
label_4dabb8:
    // 0x4dabb8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4dabb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4dabbc:
    // 0x4dabbc: 0x320f809  jalr        $t9
label_4dabc0:
    if (ctx->pc == 0x4DABC0u) {
        ctx->pc = 0x4DABC4u;
        goto label_4dabc4;
    }
    ctx->pc = 0x4DABBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DABC4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DABC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DABC4u; }
            if (ctx->pc != 0x4DABC4u) { return; }
        }
        }
    }
    ctx->pc = 0x4DABC4u;
label_4dabc4:
    // 0x4dabc4: 0x8e700070  lw          $s0, 0x70($s3)
    ctx->pc = 0x4dabc4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_4dabc8:
    // 0x4dabc8: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_4dabcc:
    if (ctx->pc == 0x4DABCCu) {
        ctx->pc = 0x4DABD0u;
        goto label_4dabd0;
    }
    ctx->pc = 0x4DABC8u;
    {
        const bool branch_taken_0x4dabc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dabc8) {
            ctx->pc = 0x4DAC08u;
            goto label_4dac08;
        }
    }
    ctx->pc = 0x4DABD0u;
label_4dabd0:
    // 0x4dabd0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4dabd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4dabd4:
    // 0x4dabd4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4dabd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4dabd8:
    // 0x4dabd8: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x4dabd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_4dabdc:
    // 0x4dabdc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4dabdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4dabe0:
    // 0x4dabe0: 0xc136f88  jal         func_4DBE20
label_4dabe4:
    if (ctx->pc == 0x4DABE4u) {
        ctx->pc = 0x4DABE4u;
            // 0x4dabe4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4DABE8u;
        goto label_4dabe8;
    }
    ctx->pc = 0x4DABE0u;
    SET_GPR_U32(ctx, 31, 0x4DABE8u);
    ctx->pc = 0x4DABE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DABE0u;
            // 0x4dabe4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DBE20u;
    if (runtime->hasFunction(0x4DBE20u)) {
        auto targetFn = runtime->lookupFunction(0x4DBE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DABE8u; }
        if (ctx->pc != 0x4DABE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DBE20_0x4dbe20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DABE8u; }
        if (ctx->pc != 0x4DABE8u) { return; }
    }
    ctx->pc = 0x4DABE8u;
label_4dabe8:
    // 0x4dabe8: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x4dabe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_4dabec:
    // 0x4dabec: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4dabecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4dabf0:
    // 0x4dabf0: 0xc136f50  jal         func_4DBD40
label_4dabf4:
    if (ctx->pc == 0x4DABF4u) {
        ctx->pc = 0x4DABF4u;
            // 0x4dabf4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4DABF8u;
        goto label_4dabf8;
    }
    ctx->pc = 0x4DABF0u;
    SET_GPR_U32(ctx, 31, 0x4DABF8u);
    ctx->pc = 0x4DABF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DABF0u;
            // 0x4dabf4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DBD40u;
    if (runtime->hasFunction(0x4DBD40u)) {
        auto targetFn = runtime->lookupFunction(0x4DBD40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DABF8u; }
        if (ctx->pc != 0x4DABF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DBD40_0x4dbd40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DABF8u; }
        if (ctx->pc != 0x4DABF8u) { return; }
    }
    ctx->pc = 0x4DABF8u;
label_4dabf8:
    // 0x4dabf8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4dabf8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4dabfc:
    // 0x4dabfc: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x4dabfcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4dac00:
    // 0x4dac00: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_4dac04:
    if (ctx->pc == 0x4DAC04u) {
        ctx->pc = 0x4DAC04u;
            // 0x4dac04: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4DAC08u;
        goto label_4dac08;
    }
    ctx->pc = 0x4DAC00u;
    {
        const bool branch_taken_0x4dac00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DAC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DAC00u;
            // 0x4dac04: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dac00) {
            ctx->pc = 0x4DABD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4dabd8;
        }
    }
    ctx->pc = 0x4DAC08u;
label_4dac08:
    // 0x4dac08: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4dac08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4dac0c:
    // 0x4dac0c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4dac0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4dac10:
    // 0x4dac10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4dac10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4dac14:
    // 0x4dac14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4dac14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4dac18:
    // 0x4dac18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4dac18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4dac1c:
    // 0x4dac1c: 0x3e00008  jr          $ra
label_4dac20:
    if (ctx->pc == 0x4DAC20u) {
        ctx->pc = 0x4DAC20u;
            // 0x4dac20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4DAC24u;
        goto label_4dac24;
    }
    ctx->pc = 0x4DAC1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DAC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DAC1Cu;
            // 0x4dac20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DAC24u;
label_4dac24:
    // 0x4dac24: 0x0  nop
    ctx->pc = 0x4dac24u;
    // NOP
label_4dac28:
    // 0x4dac28: 0x0  nop
    ctx->pc = 0x4dac28u;
    // NOP
label_4dac2c:
    // 0x4dac2c: 0x0  nop
    ctx->pc = 0x4dac2cu;
    // NOP
label_4dac30:
    // 0x4dac30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4dac30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4dac34:
    // 0x4dac34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4dac34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4dac38:
    // 0x4dac38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4dac38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4dac3c:
    // 0x4dac3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4dac3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4dac40:
    // 0x4dac40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4dac40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4dac44:
    // 0x4dac44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4dac44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4dac48:
    // 0x4dac48: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x4dac48u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4dac4c:
    // 0x4dac4c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_4dac50:
    if (ctx->pc == 0x4DAC50u) {
        ctx->pc = 0x4DAC50u;
            // 0x4dac50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DAC54u;
        goto label_4dac54;
    }
    ctx->pc = 0x4DAC4Cu;
    {
        const bool branch_taken_0x4dac4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DAC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DAC4Cu;
            // 0x4dac50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dac4c) {
            ctx->pc = 0x4DAC88u;
            goto label_4dac88;
        }
    }
    ctx->pc = 0x4DAC54u;
label_4dac54:
    // 0x4dac54: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4dac54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4dac58:
    // 0x4dac58: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4dac58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4dac5c:
    // 0x4dac5c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x4dac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_4dac60:
    // 0x4dac60: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4dac60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4dac64:
    // 0x4dac64: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4dac64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4dac68:
    // 0x4dac68: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4dac68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4dac6c:
    // 0x4dac6c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x4dac6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_4dac70:
    // 0x4dac70: 0x320f809  jalr        $t9
label_4dac74:
    if (ctx->pc == 0x4DAC74u) {
        ctx->pc = 0x4DAC78u;
        goto label_4dac78;
    }
    ctx->pc = 0x4DAC70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DAC78u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DAC78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DAC78u; }
            if (ctx->pc != 0x4DAC78u) { return; }
        }
        }
    }
    ctx->pc = 0x4DAC78u;
label_4dac78:
    // 0x4dac78: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4dac78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4dac7c:
    // 0x4dac7c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4dac7cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4dac80:
    // 0x4dac80: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_4dac84:
    if (ctx->pc == 0x4DAC84u) {
        ctx->pc = 0x4DAC84u;
            // 0x4dac84: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4DAC88u;
        goto label_4dac88;
    }
    ctx->pc = 0x4DAC80u;
    {
        const bool branch_taken_0x4dac80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DAC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DAC80u;
            // 0x4dac84: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dac80) {
            ctx->pc = 0x4DAC5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4dac5c;
        }
    }
    ctx->pc = 0x4DAC88u;
label_4dac88:
    // 0x4dac88: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4dac88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4dac8c:
    // 0x4dac8c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4dac8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4dac90:
    // 0x4dac90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4dac90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4dac94:
    // 0x4dac94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4dac94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4dac98:
    // 0x4dac98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4dac98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4dac9c:
    // 0x4dac9c: 0x3e00008  jr          $ra
label_4daca0:
    if (ctx->pc == 0x4DACA0u) {
        ctx->pc = 0x4DACA0u;
            // 0x4daca0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4DACA4u;
        goto label_4daca4;
    }
    ctx->pc = 0x4DAC9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DACA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DAC9Cu;
            // 0x4daca0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DACA4u;
label_4daca4:
    // 0x4daca4: 0x0  nop
    ctx->pc = 0x4daca4u;
    // NOP
label_4daca8:
    // 0x4daca8: 0x0  nop
    ctx->pc = 0x4daca8u;
    // NOP
label_4dacac:
    // 0x4dacac: 0x0  nop
    ctx->pc = 0x4dacacu;
    // NOP
}
