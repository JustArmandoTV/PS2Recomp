#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00507AA0
// Address: 0x507aa0 - 0x507c20
void sub_00507AA0_0x507aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00507AA0_0x507aa0");
#endif

    switch (ctx->pc) {
        case 0x507aa0u: goto label_507aa0;
        case 0x507aa4u: goto label_507aa4;
        case 0x507aa8u: goto label_507aa8;
        case 0x507aacu: goto label_507aac;
        case 0x507ab0u: goto label_507ab0;
        case 0x507ab4u: goto label_507ab4;
        case 0x507ab8u: goto label_507ab8;
        case 0x507abcu: goto label_507abc;
        case 0x507ac0u: goto label_507ac0;
        case 0x507ac4u: goto label_507ac4;
        case 0x507ac8u: goto label_507ac8;
        case 0x507accu: goto label_507acc;
        case 0x507ad0u: goto label_507ad0;
        case 0x507ad4u: goto label_507ad4;
        case 0x507ad8u: goto label_507ad8;
        case 0x507adcu: goto label_507adc;
        case 0x507ae0u: goto label_507ae0;
        case 0x507ae4u: goto label_507ae4;
        case 0x507ae8u: goto label_507ae8;
        case 0x507aecu: goto label_507aec;
        case 0x507af0u: goto label_507af0;
        case 0x507af4u: goto label_507af4;
        case 0x507af8u: goto label_507af8;
        case 0x507afcu: goto label_507afc;
        case 0x507b00u: goto label_507b00;
        case 0x507b04u: goto label_507b04;
        case 0x507b08u: goto label_507b08;
        case 0x507b0cu: goto label_507b0c;
        case 0x507b10u: goto label_507b10;
        case 0x507b14u: goto label_507b14;
        case 0x507b18u: goto label_507b18;
        case 0x507b1cu: goto label_507b1c;
        case 0x507b20u: goto label_507b20;
        case 0x507b24u: goto label_507b24;
        case 0x507b28u: goto label_507b28;
        case 0x507b2cu: goto label_507b2c;
        case 0x507b30u: goto label_507b30;
        case 0x507b34u: goto label_507b34;
        case 0x507b38u: goto label_507b38;
        case 0x507b3cu: goto label_507b3c;
        case 0x507b40u: goto label_507b40;
        case 0x507b44u: goto label_507b44;
        case 0x507b48u: goto label_507b48;
        case 0x507b4cu: goto label_507b4c;
        case 0x507b50u: goto label_507b50;
        case 0x507b54u: goto label_507b54;
        case 0x507b58u: goto label_507b58;
        case 0x507b5cu: goto label_507b5c;
        case 0x507b60u: goto label_507b60;
        case 0x507b64u: goto label_507b64;
        case 0x507b68u: goto label_507b68;
        case 0x507b6cu: goto label_507b6c;
        case 0x507b70u: goto label_507b70;
        case 0x507b74u: goto label_507b74;
        case 0x507b78u: goto label_507b78;
        case 0x507b7cu: goto label_507b7c;
        case 0x507b80u: goto label_507b80;
        case 0x507b84u: goto label_507b84;
        case 0x507b88u: goto label_507b88;
        case 0x507b8cu: goto label_507b8c;
        case 0x507b90u: goto label_507b90;
        case 0x507b94u: goto label_507b94;
        case 0x507b98u: goto label_507b98;
        case 0x507b9cu: goto label_507b9c;
        case 0x507ba0u: goto label_507ba0;
        case 0x507ba4u: goto label_507ba4;
        case 0x507ba8u: goto label_507ba8;
        case 0x507bacu: goto label_507bac;
        case 0x507bb0u: goto label_507bb0;
        case 0x507bb4u: goto label_507bb4;
        case 0x507bb8u: goto label_507bb8;
        case 0x507bbcu: goto label_507bbc;
        case 0x507bc0u: goto label_507bc0;
        case 0x507bc4u: goto label_507bc4;
        case 0x507bc8u: goto label_507bc8;
        case 0x507bccu: goto label_507bcc;
        case 0x507bd0u: goto label_507bd0;
        case 0x507bd4u: goto label_507bd4;
        case 0x507bd8u: goto label_507bd8;
        case 0x507bdcu: goto label_507bdc;
        case 0x507be0u: goto label_507be0;
        case 0x507be4u: goto label_507be4;
        case 0x507be8u: goto label_507be8;
        case 0x507becu: goto label_507bec;
        case 0x507bf0u: goto label_507bf0;
        case 0x507bf4u: goto label_507bf4;
        case 0x507bf8u: goto label_507bf8;
        case 0x507bfcu: goto label_507bfc;
        case 0x507c00u: goto label_507c00;
        case 0x507c04u: goto label_507c04;
        case 0x507c08u: goto label_507c08;
        case 0x507c0cu: goto label_507c0c;
        case 0x507c10u: goto label_507c10;
        case 0x507c14u: goto label_507c14;
        case 0x507c18u: goto label_507c18;
        case 0x507c1cu: goto label_507c1c;
        default: break;
    }

    ctx->pc = 0x507aa0u;

label_507aa0:
    // 0x507aa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x507aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_507aa4:
    // 0x507aa4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x507aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_507aa8:
    // 0x507aa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x507aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_507aac:
    // 0x507aac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x507aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_507ab0:
    // 0x507ab0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x507ab0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_507ab4:
    // 0x507ab4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_507ab8:
    if (ctx->pc == 0x507AB8u) {
        ctx->pc = 0x507AB8u;
            // 0x507ab8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x507ABCu;
        goto label_507abc;
    }
    ctx->pc = 0x507AB4u;
    {
        const bool branch_taken_0x507ab4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x507AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x507AB4u;
            // 0x507ab8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x507ab4) {
            ctx->pc = 0x507AF8u;
            goto label_507af8;
        }
    }
    ctx->pc = 0x507ABCu;
label_507abc:
    // 0x507abc: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_507ac0:
    if (ctx->pc == 0x507AC0u) {
        ctx->pc = 0x507AC0u;
            // 0x507ac0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x507AC4u;
        goto label_507ac4;
    }
    ctx->pc = 0x507ABCu;
    {
        const bool branch_taken_0x507abc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x507abc) {
            ctx->pc = 0x507AC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x507ABCu;
            // 0x507ac0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x507AE4u;
            goto label_507ae4;
        }
    }
    ctx->pc = 0x507AC4u;
label_507ac4:
    // 0x507ac4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_507ac8:
    if (ctx->pc == 0x507AC8u) {
        ctx->pc = 0x507ACCu;
        goto label_507acc;
    }
    ctx->pc = 0x507AC4u;
    {
        const bool branch_taken_0x507ac4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x507ac4) {
            ctx->pc = 0x507AE0u;
            goto label_507ae0;
        }
    }
    ctx->pc = 0x507ACCu;
label_507acc:
    // 0x507acc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x507accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_507ad0:
    // 0x507ad0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_507ad4:
    if (ctx->pc == 0x507AD4u) {
        ctx->pc = 0x507AD8u;
        goto label_507ad8;
    }
    ctx->pc = 0x507AD0u;
    {
        const bool branch_taken_0x507ad0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x507ad0) {
            ctx->pc = 0x507AE0u;
            goto label_507ae0;
        }
    }
    ctx->pc = 0x507AD8u;
label_507ad8:
    // 0x507ad8: 0xc0400a8  jal         func_1002A0
label_507adc:
    if (ctx->pc == 0x507ADCu) {
        ctx->pc = 0x507AE0u;
        goto label_507ae0;
    }
    ctx->pc = 0x507AD8u;
    SET_GPR_U32(ctx, 31, 0x507AE0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507AE0u; }
        if (ctx->pc != 0x507AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507AE0u; }
        if (ctx->pc != 0x507AE0u) { return; }
    }
    ctx->pc = 0x507AE0u;
label_507ae0:
    // 0x507ae0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x507ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_507ae4:
    // 0x507ae4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x507ae4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_507ae8:
    // 0x507ae8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_507aec:
    if (ctx->pc == 0x507AECu) {
        ctx->pc = 0x507AECu;
            // 0x507aec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x507AF0u;
        goto label_507af0;
    }
    ctx->pc = 0x507AE8u;
    {
        const bool branch_taken_0x507ae8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x507ae8) {
            ctx->pc = 0x507AECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x507AE8u;
            // 0x507aec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x507AFCu;
            goto label_507afc;
        }
    }
    ctx->pc = 0x507AF0u;
label_507af0:
    // 0x507af0: 0xc0400a8  jal         func_1002A0
label_507af4:
    if (ctx->pc == 0x507AF4u) {
        ctx->pc = 0x507AF4u;
            // 0x507af4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x507AF8u;
        goto label_507af8;
    }
    ctx->pc = 0x507AF0u;
    SET_GPR_U32(ctx, 31, 0x507AF8u);
    ctx->pc = 0x507AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x507AF0u;
            // 0x507af4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507AF8u; }
        if (ctx->pc != 0x507AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507AF8u; }
        if (ctx->pc != 0x507AF8u) { return; }
    }
    ctx->pc = 0x507AF8u;
label_507af8:
    // 0x507af8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x507af8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_507afc:
    // 0x507afc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x507afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_507b00:
    // 0x507b00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x507b00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_507b04:
    // 0x507b04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x507b04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_507b08:
    // 0x507b08: 0x3e00008  jr          $ra
label_507b0c:
    if (ctx->pc == 0x507B0Cu) {
        ctx->pc = 0x507B0Cu;
            // 0x507b0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x507B10u;
        goto label_507b10;
    }
    ctx->pc = 0x507B08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x507B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x507B08u;
            // 0x507b0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x507B10u;
label_507b10:
    // 0x507b10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x507b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_507b14:
    // 0x507b14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x507b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_507b18:
    // 0x507b18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x507b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_507b1c:
    // 0x507b1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x507b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_507b20:
    // 0x507b20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x507b20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_507b24:
    // 0x507b24: 0x12200038  beqz        $s1, . + 4 + (0x38 << 2)
label_507b28:
    if (ctx->pc == 0x507B28u) {
        ctx->pc = 0x507B28u;
            // 0x507b28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x507B2Cu;
        goto label_507b2c;
    }
    ctx->pc = 0x507B24u;
    {
        const bool branch_taken_0x507b24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x507B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x507B24u;
            // 0x507b28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x507b24) {
            ctx->pc = 0x507C08u;
            goto label_507c08;
        }
    }
    ctx->pc = 0x507B2Cu;
label_507b2c:
    // 0x507b2c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x507b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_507b30:
    // 0x507b30: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x507b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_507b34:
    // 0x507b34: 0x24424ec0  addiu       $v0, $v0, 0x4EC0
    ctx->pc = 0x507b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20160));
label_507b38:
    // 0x507b38: 0x24634f00  addiu       $v1, $v1, 0x4F00
    ctx->pc = 0x507b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20224));
label_507b3c:
    // 0x507b3c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x507b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_507b40:
    // 0x507b40: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x507b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_507b44:
    // 0x507b44: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x507b44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_507b48:
    // 0x507b48: 0x24424f5c  addiu       $v0, $v0, 0x4F5C
    ctx->pc = 0x507b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20316));
label_507b4c:
    // 0x507b4c: 0xae2200d0  sw          $v0, 0xD0($s1)
    ctx->pc = 0x507b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 2));
label_507b50:
    // 0x507b50: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x507b50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_507b54:
    // 0x507b54: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x507b54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_507b58:
    // 0x507b58: 0x320f809  jalr        $t9
label_507b5c:
    if (ctx->pc == 0x507B5Cu) {
        ctx->pc = 0x507B60u;
        goto label_507b60;
    }
    ctx->pc = 0x507B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x507B60u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x507B60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x507B60u; }
            if (ctx->pc != 0x507B60u) { return; }
        }
        }
    }
    ctx->pc = 0x507B60u;
label_507b60:
    // 0x507b60: 0x262402b0  addiu       $a0, $s1, 0x2B0
    ctx->pc = 0x507b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 688));
label_507b64:
    // 0x507b64: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_507b68:
    if (ctx->pc == 0x507B68u) {
        ctx->pc = 0x507B6Cu;
        goto label_507b6c;
    }
    ctx->pc = 0x507B64u;
    {
        const bool branch_taken_0x507b64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x507b64) {
            ctx->pc = 0x507BA0u;
            goto label_507ba0;
        }
    }
    ctx->pc = 0x507B6Cu;
label_507b6c:
    // 0x507b6c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x507b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_507b70:
    // 0x507b70: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x507b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_507b74:
    // 0x507b74: 0x24634e10  addiu       $v1, $v1, 0x4E10
    ctx->pc = 0x507b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19984));
label_507b78:
    // 0x507b78: 0x24424e50  addiu       $v0, $v0, 0x4E50
    ctx->pc = 0x507b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20048));
label_507b7c:
    // 0x507b7c: 0xae2302b0  sw          $v1, 0x2B0($s1)
    ctx->pc = 0x507b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 688), GPR_U32(ctx, 3));
label_507b80:
    // 0x507b80: 0xae220304  sw          $v0, 0x304($s1)
    ctx->pc = 0x507b80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 772), GPR_U32(ctx, 2));
label_507b84:
    // 0x507b84: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x507b84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_507b88:
    // 0x507b88: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x507b88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_507b8c:
    // 0x507b8c: 0x320f809  jalr        $t9
label_507b90:
    if (ctx->pc == 0x507B90u) {
        ctx->pc = 0x507B94u;
        goto label_507b94;
    }
    ctx->pc = 0x507B8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x507B94u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x507B94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x507B94u; }
            if (ctx->pc != 0x507B94u) { return; }
        }
        }
    }
    ctx->pc = 0x507B94u;
label_507b94:
    // 0x507b94: 0x262402b0  addiu       $a0, $s1, 0x2B0
    ctx->pc = 0x507b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 688));
label_507b98:
    // 0x507b98: 0xc0e70ac  jal         func_39C2B0
label_507b9c:
    if (ctx->pc == 0x507B9Cu) {
        ctx->pc = 0x507B9Cu;
            // 0x507b9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x507BA0u;
        goto label_507ba0;
    }
    ctx->pc = 0x507B98u;
    SET_GPR_U32(ctx, 31, 0x507BA0u);
    ctx->pc = 0x507B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x507B98u;
            // 0x507b9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39C2B0u;
    if (runtime->hasFunction(0x39C2B0u)) {
        auto targetFn = runtime->lookupFunction(0x39C2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507BA0u; }
        if (ctx->pc != 0x507BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039C2B0_0x39c2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507BA0u; }
        if (ctx->pc != 0x507BA0u) { return; }
    }
    ctx->pc = 0x507BA0u;
label_507ba0:
    // 0x507ba0: 0x52200014  beql        $s1, $zero, . + 4 + (0x14 << 2)
label_507ba4:
    if (ctx->pc == 0x507BA4u) {
        ctx->pc = 0x507BA4u;
            // 0x507ba4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x507BA8u;
        goto label_507ba8;
    }
    ctx->pc = 0x507BA0u;
    {
        const bool branch_taken_0x507ba0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x507ba0) {
            ctx->pc = 0x507BA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x507BA0u;
            // 0x507ba4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x507BF4u;
            goto label_507bf4;
        }
    }
    ctx->pc = 0x507BA8u;
label_507ba8:
    // 0x507ba8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x507ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_507bac:
    // 0x507bac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x507bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_507bb0:
    // 0x507bb0: 0x24424810  addiu       $v0, $v0, 0x4810
    ctx->pc = 0x507bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18448));
label_507bb4:
    // 0x507bb4: 0x24634850  addiu       $v1, $v1, 0x4850
    ctx->pc = 0x507bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18512));
label_507bb8:
    // 0x507bb8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x507bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_507bbc:
    // 0x507bbc: 0x262400e0  addiu       $a0, $s1, 0xE0
    ctx->pc = 0x507bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_507bc0:
    // 0x507bc0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x507bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_507bc4:
    // 0x507bc4: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x507bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_507bc8:
    // 0x507bc8: 0x244248ac  addiu       $v0, $v0, 0x48AC
    ctx->pc = 0x507bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18604));
label_507bcc:
    // 0x507bcc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x507bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_507bd0:
    // 0x507bd0: 0xc140af4  jal         func_502BD0
label_507bd4:
    if (ctx->pc == 0x507BD4u) {
        ctx->pc = 0x507BD4u;
            // 0x507bd4: 0xae2200d0  sw          $v0, 0xD0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 2));
        ctx->pc = 0x507BD8u;
        goto label_507bd8;
    }
    ctx->pc = 0x507BD0u;
    SET_GPR_U32(ctx, 31, 0x507BD8u);
    ctx->pc = 0x507BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x507BD0u;
            // 0x507bd4: 0xae2200d0  sw          $v0, 0xD0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x502BD0u;
    if (runtime->hasFunction(0x502BD0u)) {
        auto targetFn = runtime->lookupFunction(0x502BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507BD8u; }
        if (ctx->pc != 0x507BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00502BD0_0x502bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507BD8u; }
        if (ctx->pc != 0x507BD8u) { return; }
    }
    ctx->pc = 0x507BD8u;
label_507bd8:
    // 0x507bd8: 0x262400d0  addiu       $a0, $s1, 0xD0
    ctx->pc = 0x507bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
label_507bdc:
    // 0x507bdc: 0xc140ae0  jal         func_502B80
label_507be0:
    if (ctx->pc == 0x507BE0u) {
        ctx->pc = 0x507BE0u;
            // 0x507be0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x507BE4u;
        goto label_507be4;
    }
    ctx->pc = 0x507BDCu;
    SET_GPR_U32(ctx, 31, 0x507BE4u);
    ctx->pc = 0x507BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x507BDCu;
            // 0x507be0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x502B80u;
    if (runtime->hasFunction(0x502B80u)) {
        auto targetFn = runtime->lookupFunction(0x502B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507BE4u; }
        if (ctx->pc != 0x507BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00502B80_0x502b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507BE4u; }
        if (ctx->pc != 0x507BE4u) { return; }
    }
    ctx->pc = 0x507BE4u;
label_507be4:
    // 0x507be4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x507be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_507be8:
    // 0x507be8: 0xc0aee40  jal         func_2BB900
label_507bec:
    if (ctx->pc == 0x507BECu) {
        ctx->pc = 0x507BECu;
            // 0x507bec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x507BF0u;
        goto label_507bf0;
    }
    ctx->pc = 0x507BE8u;
    SET_GPR_U32(ctx, 31, 0x507BF0u);
    ctx->pc = 0x507BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x507BE8u;
            // 0x507bec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB900u;
    if (runtime->hasFunction(0x2BB900u)) {
        auto targetFn = runtime->lookupFunction(0x2BB900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507BF0u; }
        if (ctx->pc != 0x507BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB900_0x2bb900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507BF0u; }
        if (ctx->pc != 0x507BF0u) { return; }
    }
    ctx->pc = 0x507BF0u;
label_507bf0:
    // 0x507bf0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x507bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_507bf4:
    // 0x507bf4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x507bf4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_507bf8:
    // 0x507bf8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_507bfc:
    if (ctx->pc == 0x507BFCu) {
        ctx->pc = 0x507BFCu;
            // 0x507bfc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x507C00u;
        goto label_507c00;
    }
    ctx->pc = 0x507BF8u;
    {
        const bool branch_taken_0x507bf8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x507bf8) {
            ctx->pc = 0x507BFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x507BF8u;
            // 0x507bfc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x507C0Cu;
            goto label_507c0c;
        }
    }
    ctx->pc = 0x507C00u;
label_507c00:
    // 0x507c00: 0xc0400a8  jal         func_1002A0
label_507c04:
    if (ctx->pc == 0x507C04u) {
        ctx->pc = 0x507C04u;
            // 0x507c04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x507C08u;
        goto label_507c08;
    }
    ctx->pc = 0x507C00u;
    SET_GPR_U32(ctx, 31, 0x507C08u);
    ctx->pc = 0x507C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x507C00u;
            // 0x507c04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507C08u; }
        if (ctx->pc != 0x507C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507C08u; }
        if (ctx->pc != 0x507C08u) { return; }
    }
    ctx->pc = 0x507C08u;
label_507c08:
    // 0x507c08: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x507c08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_507c0c:
    // 0x507c0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x507c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_507c10:
    // 0x507c10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x507c10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_507c14:
    // 0x507c14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x507c14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_507c18:
    // 0x507c18: 0x3e00008  jr          $ra
label_507c1c:
    if (ctx->pc == 0x507C1Cu) {
        ctx->pc = 0x507C1Cu;
            // 0x507c1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x507C20u;
        goto label_fallthrough_0x507c18;
    }
    ctx->pc = 0x507C18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x507C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x507C18u;
            // 0x507c1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x507c18:
    ctx->pc = 0x507C20u;
}
