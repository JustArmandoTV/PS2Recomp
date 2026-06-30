#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029EAD0
// Address: 0x29ead0 - 0x29ed00
void sub_0029EAD0_0x29ead0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029EAD0_0x29ead0");
#endif

    switch (ctx->pc) {
        case 0x29ead0u: goto label_29ead0;
        case 0x29ead4u: goto label_29ead4;
        case 0x29ead8u: goto label_29ead8;
        case 0x29eadcu: goto label_29eadc;
        case 0x29eae0u: goto label_29eae0;
        case 0x29eae4u: goto label_29eae4;
        case 0x29eae8u: goto label_29eae8;
        case 0x29eaecu: goto label_29eaec;
        case 0x29eaf0u: goto label_29eaf0;
        case 0x29eaf4u: goto label_29eaf4;
        case 0x29eaf8u: goto label_29eaf8;
        case 0x29eafcu: goto label_29eafc;
        case 0x29eb00u: goto label_29eb00;
        case 0x29eb04u: goto label_29eb04;
        case 0x29eb08u: goto label_29eb08;
        case 0x29eb0cu: goto label_29eb0c;
        case 0x29eb10u: goto label_29eb10;
        case 0x29eb14u: goto label_29eb14;
        case 0x29eb18u: goto label_29eb18;
        case 0x29eb1cu: goto label_29eb1c;
        case 0x29eb20u: goto label_29eb20;
        case 0x29eb24u: goto label_29eb24;
        case 0x29eb28u: goto label_29eb28;
        case 0x29eb2cu: goto label_29eb2c;
        case 0x29eb30u: goto label_29eb30;
        case 0x29eb34u: goto label_29eb34;
        case 0x29eb38u: goto label_29eb38;
        case 0x29eb3cu: goto label_29eb3c;
        case 0x29eb40u: goto label_29eb40;
        case 0x29eb44u: goto label_29eb44;
        case 0x29eb48u: goto label_29eb48;
        case 0x29eb4cu: goto label_29eb4c;
        case 0x29eb50u: goto label_29eb50;
        case 0x29eb54u: goto label_29eb54;
        case 0x29eb58u: goto label_29eb58;
        case 0x29eb5cu: goto label_29eb5c;
        case 0x29eb60u: goto label_29eb60;
        case 0x29eb64u: goto label_29eb64;
        case 0x29eb68u: goto label_29eb68;
        case 0x29eb6cu: goto label_29eb6c;
        case 0x29eb70u: goto label_29eb70;
        case 0x29eb74u: goto label_29eb74;
        case 0x29eb78u: goto label_29eb78;
        case 0x29eb7cu: goto label_29eb7c;
        case 0x29eb80u: goto label_29eb80;
        case 0x29eb84u: goto label_29eb84;
        case 0x29eb88u: goto label_29eb88;
        case 0x29eb8cu: goto label_29eb8c;
        case 0x29eb90u: goto label_29eb90;
        case 0x29eb94u: goto label_29eb94;
        case 0x29eb98u: goto label_29eb98;
        case 0x29eb9cu: goto label_29eb9c;
        case 0x29eba0u: goto label_29eba0;
        case 0x29eba4u: goto label_29eba4;
        case 0x29eba8u: goto label_29eba8;
        case 0x29ebacu: goto label_29ebac;
        case 0x29ebb0u: goto label_29ebb0;
        case 0x29ebb4u: goto label_29ebb4;
        case 0x29ebb8u: goto label_29ebb8;
        case 0x29ebbcu: goto label_29ebbc;
        case 0x29ebc0u: goto label_29ebc0;
        case 0x29ebc4u: goto label_29ebc4;
        case 0x29ebc8u: goto label_29ebc8;
        case 0x29ebccu: goto label_29ebcc;
        case 0x29ebd0u: goto label_29ebd0;
        case 0x29ebd4u: goto label_29ebd4;
        case 0x29ebd8u: goto label_29ebd8;
        case 0x29ebdcu: goto label_29ebdc;
        case 0x29ebe0u: goto label_29ebe0;
        case 0x29ebe4u: goto label_29ebe4;
        case 0x29ebe8u: goto label_29ebe8;
        case 0x29ebecu: goto label_29ebec;
        case 0x29ebf0u: goto label_29ebf0;
        case 0x29ebf4u: goto label_29ebf4;
        case 0x29ebf8u: goto label_29ebf8;
        case 0x29ebfcu: goto label_29ebfc;
        case 0x29ec00u: goto label_29ec00;
        case 0x29ec04u: goto label_29ec04;
        case 0x29ec08u: goto label_29ec08;
        case 0x29ec0cu: goto label_29ec0c;
        case 0x29ec10u: goto label_29ec10;
        case 0x29ec14u: goto label_29ec14;
        case 0x29ec18u: goto label_29ec18;
        case 0x29ec1cu: goto label_29ec1c;
        case 0x29ec20u: goto label_29ec20;
        case 0x29ec24u: goto label_29ec24;
        case 0x29ec28u: goto label_29ec28;
        case 0x29ec2cu: goto label_29ec2c;
        case 0x29ec30u: goto label_29ec30;
        case 0x29ec34u: goto label_29ec34;
        case 0x29ec38u: goto label_29ec38;
        case 0x29ec3cu: goto label_29ec3c;
        case 0x29ec40u: goto label_29ec40;
        case 0x29ec44u: goto label_29ec44;
        case 0x29ec48u: goto label_29ec48;
        case 0x29ec4cu: goto label_29ec4c;
        case 0x29ec50u: goto label_29ec50;
        case 0x29ec54u: goto label_29ec54;
        case 0x29ec58u: goto label_29ec58;
        case 0x29ec5cu: goto label_29ec5c;
        case 0x29ec60u: goto label_29ec60;
        case 0x29ec64u: goto label_29ec64;
        case 0x29ec68u: goto label_29ec68;
        case 0x29ec6cu: goto label_29ec6c;
        case 0x29ec70u: goto label_29ec70;
        case 0x29ec74u: goto label_29ec74;
        case 0x29ec78u: goto label_29ec78;
        case 0x29ec7cu: goto label_29ec7c;
        case 0x29ec80u: goto label_29ec80;
        case 0x29ec84u: goto label_29ec84;
        case 0x29ec88u: goto label_29ec88;
        case 0x29ec8cu: goto label_29ec8c;
        case 0x29ec90u: goto label_29ec90;
        case 0x29ec94u: goto label_29ec94;
        case 0x29ec98u: goto label_29ec98;
        case 0x29ec9cu: goto label_29ec9c;
        case 0x29eca0u: goto label_29eca0;
        case 0x29eca4u: goto label_29eca4;
        case 0x29eca8u: goto label_29eca8;
        case 0x29ecacu: goto label_29ecac;
        case 0x29ecb0u: goto label_29ecb0;
        case 0x29ecb4u: goto label_29ecb4;
        case 0x29ecb8u: goto label_29ecb8;
        case 0x29ecbcu: goto label_29ecbc;
        case 0x29ecc0u: goto label_29ecc0;
        case 0x29ecc4u: goto label_29ecc4;
        case 0x29ecc8u: goto label_29ecc8;
        case 0x29ecccu: goto label_29eccc;
        case 0x29ecd0u: goto label_29ecd0;
        case 0x29ecd4u: goto label_29ecd4;
        case 0x29ecd8u: goto label_29ecd8;
        case 0x29ecdcu: goto label_29ecdc;
        case 0x29ece0u: goto label_29ece0;
        case 0x29ece4u: goto label_29ece4;
        case 0x29ece8u: goto label_29ece8;
        case 0x29ececu: goto label_29ecec;
        case 0x29ecf0u: goto label_29ecf0;
        case 0x29ecf4u: goto label_29ecf4;
        case 0x29ecf8u: goto label_29ecf8;
        case 0x29ecfcu: goto label_29ecfc;
        default: break;
    }

    ctx->pc = 0x29ead0u;

label_29ead0:
    // 0x29ead0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29ead0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_29ead4:
    // 0x29ead4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x29ead4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_29ead8:
    // 0x29ead8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29ead8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_29eadc:
    // 0x29eadc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29eadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_29eae0:
    // 0x29eae0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x29eae0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29eae4:
    // 0x29eae4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29eae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29eae8:
    // 0x29eae8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x29eae8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29eaec:
    // 0x29eaec: 0x12400028  beqz        $s2, . + 4 + (0x28 << 2)
label_29eaf0:
    if (ctx->pc == 0x29EAF0u) {
        ctx->pc = 0x29EAF0u;
            // 0x29eaf0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x29EAF4u;
        goto label_29eaf4;
    }
    ctx->pc = 0x29EAECu;
    {
        const bool branch_taken_0x29eaec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EAF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29EAECu;
            // 0x29eaf0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eaec) {
            ctx->pc = 0x29EB90u;
            goto label_29eb90;
        }
    }
    ctx->pc = 0x29EAF4u;
label_29eaf4:
    // 0x29eaf4: 0x28c12001  slti        $at, $a2, 0x2001
    ctx->pc = 0x29eaf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8193) ? 1 : 0);
label_29eaf8:
    // 0x29eaf8: 0x50200021  beql        $at, $zero, . + 4 + (0x21 << 2)
label_29eafc:
    if (ctx->pc == 0x29EAFCu) {
        ctx->pc = 0x29EAFCu;
            // 0x29eafc: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x29EB00u;
        goto label_29eb00;
    }
    ctx->pc = 0x29EAF8u;
    {
        const bool branch_taken_0x29eaf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29eaf8) {
            ctx->pc = 0x29EAFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29EAF8u;
            // 0x29eafc: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29EB80u;
            goto label_29eb80;
        }
    }
    ctx->pc = 0x29EB00u;
label_29eb00:
    // 0x29eb00: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x29eb00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_29eb04:
    // 0x29eb04: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
label_29eb08:
    if (ctx->pc == 0x29EB08u) {
        ctx->pc = 0x29EB0Cu;
        goto label_29eb0c;
    }
    ctx->pc = 0x29EB04u;
    {
        const bool branch_taken_0x29eb04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29eb04) {
            ctx->pc = 0x29EB7Cu;
            goto label_29eb7c;
        }
    }
    ctx->pc = 0x29EB0Cu;
label_29eb0c:
    // 0x29eb0c: 0x28c10201  slti        $at, $a2, 0x201
    ctx->pc = 0x29eb0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)513) ? 1 : 0);
label_29eb10:
    // 0x29eb10: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_29eb14:
    if (ctx->pc == 0x29EB14u) {
        ctx->pc = 0x29EB14u;
            // 0x29eb14: 0x24c3ffff  addiu       $v1, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->pc = 0x29EB18u;
        goto label_29eb18;
    }
    ctx->pc = 0x29EB10u;
    {
        const bool branch_taken_0x29eb10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29eb10) {
            ctx->pc = 0x29EB14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29EB10u;
            // 0x29eb14: 0x24c3ffff  addiu       $v1, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29EB24u;
            goto label_29eb24;
        }
    }
    ctx->pc = 0x29EB18u;
label_29eb18:
    // 0x29eb18: 0xd31821  addu        $v1, $a2, $s3
    ctx->pc = 0x29eb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_29eb1c:
    // 0x29eb1c: 0x10000005  b           . + 4 + (0x5 << 2)
label_29eb20:
    if (ctx->pc == 0x29EB20u) {
        ctx->pc = 0x29EB20u;
            // 0x29eb20: 0x806500f0  lb          $a1, 0xF0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 240)));
        ctx->pc = 0x29EB24u;
        goto label_29eb24;
    }
    ctx->pc = 0x29EB1Cu;
    {
        const bool branch_taken_0x29eb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EB20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29EB1Cu;
            // 0x29eb20: 0x806500f0  lb          $a1, 0xF0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eb1c) {
            ctx->pc = 0x29EB34u;
            goto label_29eb34;
        }
    }
    ctx->pc = 0x29EB24u;
label_29eb24:
    // 0x29eb24: 0x31a83  sra         $v1, $v1, 10
    ctx->pc = 0x29eb24u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 10));
label_29eb28:
    // 0x29eb28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29eb28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_29eb2c:
    // 0x29eb2c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x29eb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_29eb30:
    // 0x29eb30: 0x8c6502f4  lw          $a1, 0x2F4($v1)
    ctx->pc = 0x29eb30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 756)));
label_29eb34:
    // 0x29eb34: 0x588c0  sll         $s1, $a1, 3
    ctx->pc = 0x29eb34u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_29eb38:
    // 0x29eb38: 0x2331821  addu        $v1, $s1, $s3
    ctx->pc = 0x29eb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_29eb3c:
    // 0x29eb3c: 0x24700028  addiu       $s0, $v1, 0x28
    ctx->pc = 0x29eb3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_29eb40:
    // 0x29eb40: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x29eb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_29eb44:
    // 0x29eb44: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x29eb44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_29eb48:
    // 0x29eb48: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_29eb4c:
    if (ctx->pc == 0x29EB4Cu) {
        ctx->pc = 0x29EB4Cu;
            // 0x29eb4c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x29EB50u;
        goto label_29eb50;
    }
    ctx->pc = 0x29EB48u;
    {
        const bool branch_taken_0x29eb48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29eb48) {
            ctx->pc = 0x29EB4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29EB48u;
            // 0x29eb4c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29EB60u;
            goto label_29eb60;
        }
    }
    ctx->pc = 0x29EB50u;
label_29eb50:
    // 0x29eb50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29eb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29eb54:
    // 0x29eb54: 0xc0a79ec  jal         func_29E7B0
label_29eb58:
    if (ctx->pc == 0x29EB58u) {
        ctx->pc = 0x29EB58u;
            // 0x29eb58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29EB5Cu;
        goto label_29eb5c;
    }
    ctx->pc = 0x29EB54u;
    SET_GPR_U32(ctx, 31, 0x29EB5Cu);
    ctx->pc = 0x29EB58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29EB54u;
            // 0x29eb58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E7B0u;
    if (runtime->hasFunction(0x29E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x29E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EB5Cu; }
        if (ctx->pc != 0x29EB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E7B0_0x29e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EB5Cu; }
        if (ctx->pc != 0x29EB5Cu) { return; }
    }
    ctx->pc = 0x29EB5Cu;
label_29eb5c:
    // 0x29eb5c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29eb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29eb60:
    // 0x29eb60: 0x2332021  addu        $a0, $s1, $s3
    ctx->pc = 0x29eb60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_29eb64:
    // 0x29eb64: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x29eb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_29eb68:
    // 0x29eb68: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x29eb68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_29eb6c:
    // 0x29eb6c: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x29eb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_29eb70:
    // 0x29eb70: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x29eb70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_29eb74:
    // 0x29eb74: 0x10000006  b           . + 4 + (0x6 << 2)
label_29eb78:
    if (ctx->pc == 0x29EB78u) {
        ctx->pc = 0x29EB78u;
            // 0x29eb78: 0xac920024  sw          $s2, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 18));
        ctx->pc = 0x29EB7Cu;
        goto label_29eb7c;
    }
    ctx->pc = 0x29EB74u;
    {
        const bool branch_taken_0x29eb74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29EB74u;
            // 0x29eb78: 0xac920024  sw          $s2, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eb74) {
            ctx->pc = 0x29EB90u;
            goto label_29eb90;
        }
    }
    ctx->pc = 0x29EB7Cu;
label_29eb7c:
    // 0x29eb7c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x29eb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_29eb80:
    // 0x29eb80: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x29eb80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29eb84:
    // 0x29eb84: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x29eb84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_29eb88:
    // 0x29eb88: 0x320f809  jalr        $t9
label_29eb8c:
    if (ctx->pc == 0x29EB8Cu) {
        ctx->pc = 0x29EB8Cu;
            // 0x29eb8c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29EB90u;
        goto label_29eb90;
    }
    ctx->pc = 0x29EB88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29EB90u);
        ctx->pc = 0x29EB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29EB88u;
            // 0x29eb8c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29EB90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29EB90u; }
            if (ctx->pc != 0x29EB90u) { return; }
        }
        }
    }
    ctx->pc = 0x29EB90u;
label_29eb90:
    // 0x29eb90: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x29eb90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_29eb94:
    // 0x29eb94: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29eb94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_29eb98:
    // 0x29eb98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29eb98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29eb9c:
    // 0x29eb9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29eb9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29eba0:
    // 0x29eba0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29eba0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29eba4:
    // 0x29eba4: 0x3e00008  jr          $ra
label_29eba8:
    if (ctx->pc == 0x29EBA8u) {
        ctx->pc = 0x29EBA8u;
            // 0x29eba8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x29EBACu;
        goto label_29ebac;
    }
    ctx->pc = 0x29EBA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EBA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29EBA4u;
            // 0x29eba8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29EBACu;
label_29ebac:
    // 0x29ebac: 0x0  nop
    ctx->pc = 0x29ebacu;
    // NOP
label_29ebb0:
    // 0x29ebb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29ebb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_29ebb4:
    // 0x29ebb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29ebb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_29ebb8:
    // 0x29ebb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29ebb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_29ebbc:
    // 0x29ebbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29ebbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29ebc0:
    // 0x29ebc0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x29ebc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29ebc4:
    // 0x29ebc4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29ebc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29ebc8:
    // 0x29ebc8: 0x26500400  addiu       $s0, $s2, 0x400
    ctx->pc = 0x29ebc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1024));
label_29ebcc:
    // 0x29ebcc: 0x2a011001  slti        $at, $s0, 0x1001
    ctx->pc = 0x29ebccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4097) ? 1 : 0);
label_29ebd0:
    // 0x29ebd0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_29ebd4:
    if (ctx->pc == 0x29EBD4u) {
        ctx->pc = 0x29EBD4u;
            // 0x29ebd4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29EBD8u;
        goto label_29ebd8;
    }
    ctx->pc = 0x29EBD0u;
    {
        const bool branch_taken_0x29ebd0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x29EBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29EBD0u;
            // 0x29ebd4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ebd0) {
            ctx->pc = 0x29EBE0u;
            goto label_29ebe0;
        }
    }
    ctx->pc = 0x29EBD8u;
label_29ebd8:
    // 0x29ebd8: 0x10000002  b           . + 4 + (0x2 << 2)
label_29ebdc:
    if (ctx->pc == 0x29EBDCu) {
        ctx->pc = 0x29EBE0u;
        goto label_29ebe0;
    }
    ctx->pc = 0x29EBD8u;
    {
        const bool branch_taken_0x29ebd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ebd8) {
            ctx->pc = 0x29EBE4u;
            goto label_29ebe4;
        }
    }
    ctx->pc = 0x29EBE0u;
label_29ebe0:
    // 0x29ebe0: 0x24101000  addiu       $s0, $zero, 0x1000
    ctx->pc = 0x29ebe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_29ebe4:
    // 0x29ebe4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29ebe8:
    // 0x29ebe8: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x29ebe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_29ebec:
    // 0x29ebec: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29ebecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_29ebf0:
    // 0x29ebf0: 0xc0a7a88  jal         func_29EA20
label_29ebf4:
    if (ctx->pc == 0x29EBF4u) {
        ctx->pc = 0x29EBF4u;
            // 0x29ebf4: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->pc = 0x29EBF8u;
        goto label_29ebf8;
    }
    ctx->pc = 0x29EBF0u;
    SET_GPR_U32(ctx, 31, 0x29EBF8u);
    ctx->pc = 0x29EBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29EBF0u;
            // 0x29ebf4: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EBF8u; }
        if (ctx->pc != 0x29EBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EBF8u; }
        if (ctx->pc != 0x29EBF8u) { return; }
    }
    ctx->pc = 0x29EBF8u;
label_29ebf8:
    // 0x29ebf8: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x29ebf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_29ebfc:
    // 0x29ebfc: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x29ebfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_29ec00:
    // 0x29ec00: 0x921821  addu        $v1, $a0, $s2
    ctx->pc = 0x29ec00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_29ec04:
    // 0x29ec04: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x29ec04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_29ec08:
    // 0x29ec08: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x29ec08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_29ec0c:
    // 0x29ec0c: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x29ec0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_29ec10:
    // 0x29ec10: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x29ec10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_29ec14:
    // 0x29ec14: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x29ec14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
label_29ec18:
    // 0x29ec18: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x29ec18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_29ec1c:
    // 0x29ec1c: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x29ec1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
label_29ec20:
    // 0x29ec20: 0xae240014  sw          $a0, 0x14($s1)
    ctx->pc = 0x29ec20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
label_29ec24:
    // 0x29ec24: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x29ec24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_29ec28:
    // 0x29ec28: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x29ec28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_29ec2c:
    // 0x29ec2c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x29ec2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_29ec30:
    // 0x29ec30: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x29ec30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_29ec34:
    // 0x29ec34: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x29ec34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_29ec38:
    // 0x29ec38: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x29ec38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_29ec3c:
    // 0x29ec3c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29ec3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29ec40:
    // 0x29ec40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29ec40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29ec44:
    // 0x29ec44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29ec44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29ec48:
    // 0x29ec48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29ec48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29ec4c:
    // 0x29ec4c: 0x3e00008  jr          $ra
label_29ec50:
    if (ctx->pc == 0x29EC50u) {
        ctx->pc = 0x29EC50u;
            // 0x29ec50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x29EC54u;
        goto label_29ec54;
    }
    ctx->pc = 0x29EC4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29EC4Cu;
            // 0x29ec50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29EC54u;
label_29ec54:
    // 0x29ec54: 0x0  nop
    ctx->pc = 0x29ec54u;
    // NOP
label_29ec58:
    // 0x29ec58: 0x0  nop
    ctx->pc = 0x29ec58u;
    // NOP
label_29ec5c:
    // 0x29ec5c: 0x0  nop
    ctx->pc = 0x29ec5cu;
    // NOP
label_29ec60:
    // 0x29ec60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29ec60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_29ec64:
    // 0x29ec64: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x29ec64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_29ec68:
    // 0x29ec68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29ec68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29ec6c:
    // 0x29ec6c: 0x8c880014  lw          $t0, 0x14($a0)
    ctx->pc = 0x29ec6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_29ec70:
    // 0x29ec70: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x29ec70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_29ec74:
    // 0x29ec74: 0x8d02fff0  lw          $v0, -0x10($t0)
    ctx->pc = 0x29ec74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294967280)));
label_29ec78:
    // 0x29ec78: 0x2505fff0  addiu       $a1, $t0, -0x10
    ctx->pc = 0x29ec78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967280));
label_29ec7c:
    // 0x29ec7c: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x29ec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_29ec80:
    // 0x29ec80: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x29ec80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_29ec84:
    // 0x29ec84: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x29ec84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_29ec88:
    // 0x29ec88: 0x8d02fff4  lw          $v0, -0xC($t0)
    ctx->pc = 0x29ec88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294967284)));
label_29ec8c:
    // 0x29ec8c: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x29ec8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_29ec90:
    // 0x29ec90: 0x8d02fff8  lw          $v0, -0x8($t0)
    ctx->pc = 0x29ec90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294967288)));
label_29ec94:
    // 0x29ec94: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x29ec94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
label_29ec98:
    // 0x29ec98: 0x8d02fffc  lw          $v0, -0x4($t0)
    ctx->pc = 0x29ec98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294967292)));
label_29ec9c:
    // 0x29ec9c: 0xc0a7ab4  jal         func_29EAD0
label_29eca0:
    if (ctx->pc == 0x29ECA0u) {
        ctx->pc = 0x29ECA0u;
            // 0x29eca0: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->pc = 0x29ECA4u;
        goto label_29eca4;
    }
    ctx->pc = 0x29EC9Cu;
    SET_GPR_U32(ctx, 31, 0x29ECA4u);
    ctx->pc = 0x29ECA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29EC9Cu;
            // 0x29eca0: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    goto label_29ead0;
    ctx->pc = 0x29ECA4u;
label_29eca4:
    // 0x29eca4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29eca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29eca8:
    // 0x29eca8: 0x3e00008  jr          $ra
label_29ecac:
    if (ctx->pc == 0x29ECACu) {
        ctx->pc = 0x29ECACu;
            // 0x29ecac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x29ECB0u;
        goto label_29ecb0;
    }
    ctx->pc = 0x29ECA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29ECACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29ECA8u;
            // 0x29ecac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29ECB0u;
label_29ecb0:
    // 0x29ecb0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29ecb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29ecb4:
    // 0x29ecb4: 0x30a7000f  andi        $a3, $a1, 0xF
    ctx->pc = 0x29ecb4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
label_29ecb8:
    // 0x29ecb8: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x29ecb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_29ecbc:
    // 0x29ecbc: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
label_29ecc0:
    if (ctx->pc == 0x29ECC0u) {
        ctx->pc = 0x29ECC0u;
            // 0x29ecc0: 0xac86001c  sw          $a2, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
        ctx->pc = 0x29ECC4u;
        goto label_29ecc4;
    }
    ctx->pc = 0x29ECBCu;
    {
        const bool branch_taken_0x29ecbc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x29ECC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29ECBCu;
            // 0x29ecc0: 0xac86001c  sw          $a2, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ecbc) {
            ctx->pc = 0x29ECE0u;
            goto label_29ece0;
        }
    }
    ctx->pc = 0x29ECC4u;
label_29ecc4:
    // 0x29ecc4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x29ecc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_29ecc8:
    // 0x29ecc8: 0xc71823  subu        $v1, $a2, $a3
    ctx->pc = 0x29ecc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_29eccc:
    // 0x29eccc: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x29ecccu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_29ecd0:
    // 0x29ecd0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x29ecd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_29ecd4:
    // 0x29ecd4: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x29ecd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_29ecd8:
    // 0x29ecd8: 0x10000004  b           . + 4 + (0x4 << 2)
label_29ecdc:
    if (ctx->pc == 0x29ECDCu) {
        ctx->pc = 0x29ECDCu;
            // 0x29ecdc: 0xac830018  sw          $v1, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
        ctx->pc = 0x29ECE0u;
        goto label_29ece0;
    }
    ctx->pc = 0x29ECD8u;
    {
        const bool branch_taken_0x29ecd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29ECDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29ECD8u;
            // 0x29ecdc: 0xac830018  sw          $v1, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ecd8) {
            ctx->pc = 0x29ECECu;
            goto label_29ecec;
        }
    }
    ctx->pc = 0x29ECE0u;
label_29ece0:
    // 0x29ece0: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x29ece0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_29ece4:
    // 0x29ece4: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x29ece4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_29ece8:
    // 0x29ece8: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x29ece8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
label_29ecec:
    // 0x29ecec: 0x3e00008  jr          $ra
label_29ecf0:
    if (ctx->pc == 0x29ECF0u) {
        ctx->pc = 0x29ECF4u;
        goto label_29ecf4;
    }
    ctx->pc = 0x29ECECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29ECF4u;
label_29ecf4:
    // 0x29ecf4: 0x0  nop
    ctx->pc = 0x29ecf4u;
    // NOP
label_29ecf8:
    // 0x29ecf8: 0x0  nop
    ctx->pc = 0x29ecf8u;
    // NOP
label_29ecfc:
    // 0x29ecfc: 0x0  nop
    ctx->pc = 0x29ecfcu;
    // NOP
}
