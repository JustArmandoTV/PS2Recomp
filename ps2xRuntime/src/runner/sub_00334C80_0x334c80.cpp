#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00334C80
// Address: 0x334c80 - 0x334f50
void sub_00334C80_0x334c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334C80_0x334c80");
#endif

    switch (ctx->pc) {
        case 0x334cb8u: goto label_334cb8;
        case 0x334cc8u: goto label_334cc8;
        case 0x334cdcu: goto label_334cdc;
        case 0x334d10u: goto label_334d10;
        case 0x334d7cu: goto label_334d7c;
        case 0x334dbcu: goto label_334dbc;
        case 0x334dc4u: goto label_334dc4;
        case 0x334de4u: goto label_334de4;
        case 0x334df8u: goto label_334df8;
        case 0x334e38u: goto label_334e38;
        case 0x334e40u: goto label_334e40;
        case 0x334e4cu: goto label_334e4c;
        case 0x334e70u: goto label_334e70;
        case 0x334e90u: goto label_334e90;
        case 0x334ea8u: goto label_334ea8;
        case 0x334ee8u: goto label_334ee8;
        case 0x334ef0u: goto label_334ef0;
        case 0x334f00u: goto label_334f00;
        case 0x334f14u: goto label_334f14;
        case 0x334f38u: goto label_334f38;
        default: break;
    }

    ctx->pc = 0x334c80u;

    // 0x334c80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x334c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x334c84: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x334c84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x334c88: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x334c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x334c8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x334c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x334c90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x334c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x334c94: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x334c94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334c98: 0x12460015  beq         $s2, $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x334C98u;
    {
        const bool branch_taken_0x334c98 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 6));
        ctx->pc = 0x334C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x334C98u;
            // 0x334c9c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334c98) {
            ctx->pc = 0x334CF0u;
            goto label_334cf0;
        }
    }
    ctx->pc = 0x334CA0u;
    // 0x334ca0: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x334CA0u;
    {
        const bool branch_taken_0x334ca0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x334ca0) {
            ctx->pc = 0x334CB0u;
            goto label_334cb0;
        }
    }
    ctx->pc = 0x334CA8u;
    // 0x334ca8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x334CA8u;
    {
        const bool branch_taken_0x334ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x334CA8u;
            // 0x334cac: 0x3c020065  lui         $v0, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334ca8) {
            ctx->pc = 0x334CF8u;
            goto label_334cf8;
        }
    }
    ctx->pc = 0x334CB0u;
label_334cb0:
    // 0x334cb0: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x334CB0u;
    SET_GPR_U32(ctx, 31, 0x334CB8u);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334CB8u; }
        if (ctx->pc != 0x334CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334CB8u; }
        if (ctx->pc != 0x334CB8u) { return; }
    }
    ctx->pc = 0x334CB8u;
label_334cb8:
    // 0x334cb8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x334cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x334cbc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x334cbcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x334cc0: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x334CC0u;
    SET_GPR_U32(ctx, 31, 0x334CC8u);
    ctx->pc = 0x334CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334CC0u;
            // 0x334cc4: 0x2877a  dsrl        $s0, $v0, 29 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) >> 29);
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334CC8u; }
        if (ctx->pc != 0x334CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334CC8u; }
        if (ctx->pc != 0x334CC8u) { return; }
    }
    ctx->pc = 0x334CC8u;
label_334cc8:
    // 0x334cc8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x334cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x334ccc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x334cccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x334cd0: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x334cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
    // 0x334cd4: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x334CD4u;
    SET_GPR_U32(ctx, 31, 0x334CDCu);
    ctx->pc = 0x334CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334CD4u;
            // 0x334cd8: 0x508025  or          $s0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334CDCu; }
        if (ctx->pc != 0x334CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334CDCu; }
        if (ctx->pc != 0x334CDCu) { return; }
    }
    ctx->pc = 0x334CDCu;
label_334cdc:
    // 0x334cdc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x334cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x334ce0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x334ce0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x334ce4: 0x2107c  dsll32      $v0, $v0, 1
    ctx->pc = 0x334ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
    // 0x334ce8: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x334CE8u;
    {
        const bool branch_taken_0x334ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x334CE8u;
            // 0x334cec: 0x501025  or          $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334ce8) {
            ctx->pc = 0x334F38u;
            goto label_334f38;
        }
    }
    ctx->pc = 0x334CF0u;
label_334cf0:
    // 0x334cf0: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x334CF0u;
    {
        const bool branch_taken_0x334cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x334CF0u;
            // 0x334cf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334cf0) {
            ctx->pc = 0x334F38u;
            goto label_334f38;
        }
    }
    ctx->pc = 0x334CF8u;
label_334cf8:
    // 0x334cf8: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x334cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x334cfc: 0x8c45d348  lw          $a1, -0x2CB8($v0)
    ctx->pc = 0x334cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955848)));
    // 0x334d00: 0x2407001f  addiu       $a3, $zero, 0x1F
    ctx->pc = 0x334d00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x334d04: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x334d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x334d08: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x334D08u;
    {
        const bool branch_taken_0x334d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x334D08u;
            // 0x334d0c: 0x2463d348  addiu       $v1, $v1, -0x2CB8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334d08) {
            ctx->pc = 0x334D30u;
            goto label_334d30;
        }
    }
    ctx->pc = 0x334D10u;
label_334d10:
    // 0x334d10: 0x45082a  slt         $at, $v0, $a1
    ctx->pc = 0x334d10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x334d14: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x334D14u;
    {
        const bool branch_taken_0x334d14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x334D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x334D14u;
            // 0x334d18: 0xafa20068  sw          $v0, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334d14) {
            ctx->pc = 0x334D24u;
            goto label_334d24;
        }
    }
    ctx->pc = 0x334D1Cu;
    // 0x334d1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x334D1Cu;
    {
        const bool branch_taken_0x334d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x334D1Cu;
            // 0x334d20: 0x27a20068  addiu       $v0, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334d1c) {
            ctx->pc = 0x334D28u;
            goto label_334d28;
        }
    }
    ctx->pc = 0x334D24u;
label_334d24:
    // 0x334d24: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x334d24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_334d28:
    // 0x334d28: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x334d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x334d2c: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x334d2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_334d30:
    // 0x334d30: 0x28e10040  slti        $at, $a3, 0x40
    ctx->pc = 0x334d30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x334d34: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x334D34u;
    {
        const bool branch_taken_0x334d34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x334d34) {
            ctx->pc = 0x334D50u;
            goto label_334d50;
        }
    }
    ctx->pc = 0x334D3Cu;
    // 0x334d3c: 0xe61014  dsllv       $v0, $a2, $a3
    ctx->pc = 0x334d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (GPR_U32(ctx, 7) & 0x3F));
    // 0x334d40: 0x52082b  sltu        $at, $v0, $s2
    ctx->pc = 0x334d40u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x334d44: 0x5420fff2  bnel        $at, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x334D44u;
    {
        const bool branch_taken_0x334d44 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x334d44) {
            ctx->pc = 0x334D48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x334D44u;
            // 0x334d48: 0x871023  subu        $v0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x334D10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_334d10;
        }
    }
    ctx->pc = 0x334D4Cu;
    // 0x334d4c: 0x0  nop
    ctx->pc = 0x334d4cu;
    // NOP
label_334d50:
    // 0x334d50: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x334d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x334d54: 0x50e20025  beql        $a3, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x334D54u;
    {
        const bool branch_taken_0x334d54 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x334d54) {
            ctx->pc = 0x334D58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x334D54u;
            // 0x334d58: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x334DECu;
            goto label_334dec;
        }
    }
    ctx->pc = 0x334D5Cu;
    // 0x334d5c: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x334d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x334d60: 0x50e20003  beql        $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x334D60u;
    {
        const bool branch_taken_0x334d60 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x334d60) {
            ctx->pc = 0x334D64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x334D60u;
            // 0x334d64: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
            ctx->pc = 0x334D70u;
            goto label_334d70;
        }
    }
    ctx->pc = 0x334D68u;
    // 0x334d68: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x334D68u;
    {
        const bool branch_taken_0x334d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x334D68u;
            // 0x334d6c: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x334d68) {
            ctx->pc = 0x334E78u;
            goto label_334e78;
        }
    }
    ctx->pc = 0x334D70u;
label_334d70:
    // 0x334d70: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x334d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334d74: 0xc04916a  jal         func_1245A8
    ctx->pc = 0x334D74u;
    SET_GPR_U32(ctx, 31, 0x334D7Cu);
    ctx->pc = 0x334D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334D74u;
            // 0x334d78: 0x22438  dsll        $a0, $v0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1245A8u;
    if (runtime->hasFunction(0x1245A8u)) {
        auto targetFn = runtime->lookupFunction(0x1245A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334D7Cu; }
        if (ctx->pc != 0x334D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001245A8_0x1245a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334D7Cu; }
        if (ctx->pc != 0x334D7Cu) { return; }
    }
    ctx->pc = 0x334D7Cu;
label_334d7c:
    // 0x334d7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x334d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334d80: 0x12303c  dsll32      $a2, $s2, 0
    ctx->pc = 0x334d80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) << (32 + 0));
    // 0x334d84: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x334d84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x334d88: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x334d88u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x334d8c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x334d8cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x334d90: 0x12103f  dsra32      $v0, $s2, 0
    ctx->pc = 0x334d90u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x334d94: 0x862819  .word       0x00862819                   # multu       $a0, $a2 # 00002800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x334d94u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x334d98: 0x70441818  mult1       $v1, $v0, $a0
    ctx->pc = 0x334d98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x334d9c: 0x10103f  dsra32      $v0, $s0, 0
    ctx->pc = 0x334d9cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x334da0: 0x0  nop
    ctx->pc = 0x334da0u;
    // NOP
    // 0x334da4: 0x2010  mfhi        $a0
    ctx->pc = 0x334da4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x334da8: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x334da8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x334dac: 0x70852488  pextlw      $a0, $a0, $a1
    ctx->pc = 0x334dacu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x334db0: 0x62102d  daddu       $v0, $v1, $v0
    ctx->pc = 0x334db0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x334db4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x334db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x334db8: 0x44882d  daddu       $s1, $v0, $a0
    ctx->pc = 0x334db8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
label_334dbc:
    // 0x334dbc: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x334DBCu;
    SET_GPR_U32(ctx, 31, 0x334DC4u);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334DC4u; }
        if (ctx->pc != 0x334DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334DC4u; }
        if (ctx->pc != 0x334DC4u) { return; }
    }
    ctx->pc = 0x334DC4u;
label_334dc4:
    // 0x334dc4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x334dc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x334dc8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x334dc8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x334dcc: 0x91082b  sltu        $at, $a0, $s1
    ctx->pc = 0x334dccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x334dd0: 0x0  nop
    ctx->pc = 0x334dd0u;
    // NOP
    // 0x334dd4: 0x1020fff9  beqz        $at, . + 4 + (-0x7 << 2)
    ctx->pc = 0x334DD4u;
    {
        const bool branch_taken_0x334dd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x334dd4) {
            ctx->pc = 0x334DBCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_334dbc;
        }
    }
    ctx->pc = 0x334DDCu;
    // 0x334ddc: 0xc04916a  jal         func_1245A8
    ctx->pc = 0x334DDCu;
    SET_GPR_U32(ctx, 31, 0x334DE4u);
    ctx->pc = 0x334DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334DDCu;
            // 0x334de0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1245A8u;
    if (runtime->hasFunction(0x1245A8u)) {
        auto targetFn = runtime->lookupFunction(0x1245A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334DE4u; }
        if (ctx->pc != 0x334DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001245A8_0x1245a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334DE4u; }
        if (ctx->pc != 0x334DE4u) { return; }
    }
    ctx->pc = 0x334DE4u;
label_334de4:
    // 0x334de4: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x334DE4u;
    {
        const bool branch_taken_0x334de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x334DE4u;
            // 0x334de8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334de4) {
            ctx->pc = 0x334F3Cu;
            goto label_334f3c;
        }
    }
    ctx->pc = 0x334DECu;
label_334dec:
    // 0x334dec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x334decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334df0: 0xc04916a  jal         func_1245A8
    ctx->pc = 0x334DF0u;
    SET_GPR_U32(ctx, 31, 0x334DF8u);
    ctx->pc = 0x334DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334DF0u;
            // 0x334df4: 0x2203c  dsll32      $a0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1245A8u;
    if (runtime->hasFunction(0x1245A8u)) {
        auto targetFn = runtime->lookupFunction(0x1245A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334DF8u; }
        if (ctx->pc != 0x334DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001245A8_0x1245a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334DF8u; }
        if (ctx->pc != 0x334DF8u) { return; }
    }
    ctx->pc = 0x334DF8u;
label_334df8:
    // 0x334df8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x334df8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334dfc: 0x12303c  dsll32      $a2, $s2, 0
    ctx->pc = 0x334dfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) << (32 + 0));
    // 0x334e00: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x334e00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x334e04: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x334e04u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x334e08: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x334e08u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x334e0c: 0x12103f  dsra32      $v0, $s2, 0
    ctx->pc = 0x334e0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x334e10: 0x862819  .word       0x00862819                   # multu       $a0, $a2 # 00002800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x334e10u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x334e14: 0x70441818  mult1       $v1, $v0, $a0
    ctx->pc = 0x334e14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x334e18: 0x10103f  dsra32      $v0, $s0, 0
    ctx->pc = 0x334e18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x334e1c: 0x0  nop
    ctx->pc = 0x334e1cu;
    // NOP
    // 0x334e20: 0x2010  mfhi        $a0
    ctx->pc = 0x334e20u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x334e24: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x334e24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x334e28: 0x70852488  pextlw      $a0, $a0, $a1
    ctx->pc = 0x334e28u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x334e2c: 0x62102d  daddu       $v0, $v1, $v0
    ctx->pc = 0x334e2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x334e30: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x334e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x334e34: 0x44902d  daddu       $s2, $v0, $a0
    ctx->pc = 0x334e34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
label_334e38:
    // 0x334e38: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x334E38u;
    SET_GPR_U32(ctx, 31, 0x334E40u);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334E40u; }
        if (ctx->pc != 0x334E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334E40u; }
        if (ctx->pc != 0x334E40u) { return; }
    }
    ctx->pc = 0x334E40u;
label_334e40:
    // 0x334e40: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x334e40u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
    // 0x334e44: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x334E44u;
    SET_GPR_U32(ctx, 31, 0x334E4Cu);
    ctx->pc = 0x334E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334E44u;
            // 0x334e48: 0x11883f  dsra32      $s1, $s1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334E4Cu; }
        if (ctx->pc != 0x334E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334E4Cu; }
        if (ctx->pc != 0x334E4Cu) { return; }
    }
    ctx->pc = 0x334E4Cu;
label_334e4c:
    // 0x334e4c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x334e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x334e50: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x334e50u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x334e54: 0x217f8  dsll        $v0, $v0, 31
    ctx->pc = 0x334e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x334e58: 0x512025  or          $a0, $v0, $s1
    ctx->pc = 0x334e58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x334e5c: 0x92082b  sltu        $at, $a0, $s2
    ctx->pc = 0x334e5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x334e60: 0x1020fff5  beqz        $at, . + 4 + (-0xB << 2)
    ctx->pc = 0x334E60u;
    {
        const bool branch_taken_0x334e60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x334e60) {
            ctx->pc = 0x334E38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_334e38;
        }
    }
    ctx->pc = 0x334E68u;
    // 0x334e68: 0xc04916a  jal         func_1245A8
    ctx->pc = 0x334E68u;
    SET_GPR_U32(ctx, 31, 0x334E70u);
    ctx->pc = 0x334E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334E68u;
            // 0x334e6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1245A8u;
    if (runtime->hasFunction(0x1245A8u)) {
        auto targetFn = runtime->lookupFunction(0x1245A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334E70u; }
        if (ctx->pc != 0x334E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001245A8_0x1245a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334E70u; }
        if (ctx->pc != 0x334E70u) { return; }
    }
    ctx->pc = 0x334E70u;
label_334e70:
    // 0x334e70: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x334E70u;
    {
        const bool branch_taken_0x334e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x334e70) {
            ctx->pc = 0x334F38u;
            goto label_334f38;
        }
    }
    ctx->pc = 0x334E78u;
label_334e78:
    // 0x334e78: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x334E78u;
    {
        const bool branch_taken_0x334e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x334e78) {
            ctx->pc = 0x334E7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x334E78u;
            // 0x334e7c: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x334E98u;
            goto label_334e98;
        }
    }
    ctx->pc = 0x334E80u;
    // 0x334e80: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x334e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x334e84: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x334e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334e88: 0xc04916a  jal         func_1245A8
    ctx->pc = 0x334E88u;
    SET_GPR_U32(ctx, 31, 0x334E90u);
    ctx->pc = 0x334E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334E88u;
            // 0x334e8c: 0x70022389  pcpyld      $a0, $zero, $v0 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1245A8u;
    if (runtime->hasFunction(0x1245A8u)) {
        auto targetFn = runtime->lookupFunction(0x1245A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334E90u; }
        if (ctx->pc != 0x334E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001245A8_0x1245a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334E90u; }
        if (ctx->pc != 0x334E90u) { return; }
    }
    ctx->pc = 0x334E90u;
label_334e90:
    // 0x334e90: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x334E90u;
    {
        const bool branch_taken_0x334e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x334E90u;
            // 0x334e94: 0x2203c  dsll32      $a0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334e90) {
            ctx->pc = 0x334EACu;
            goto label_334eac;
        }
    }
    ctx->pc = 0x334E98u;
label_334e98:
    // 0x334e98: 0x12287a  dsrl        $a1, $s2, 1
    ctx->pc = 0x334e98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) >> 1);
    // 0x334e9c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x334e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x334ea0: 0xc04916a  jal         func_1245A8
    ctx->pc = 0x334EA0u;
    SET_GPR_U32(ctx, 31, 0x334EA8u);
    ctx->pc = 0x334EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334EA0u;
            // 0x334ea4: 0x70022389  pcpyld      $a0, $zero, $v0 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1245A8u;
    if (runtime->hasFunction(0x1245A8u)) {
        auto targetFn = runtime->lookupFunction(0x1245A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334EA8u; }
        if (ctx->pc != 0x334EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001245A8_0x1245a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334EA8u; }
        if (ctx->pc != 0x334EA8u) { return; }
    }
    ctx->pc = 0x334EA8u;
label_334ea8:
    // 0x334ea8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x334ea8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_334eac:
    // 0x334eac: 0x12303c  dsll32      $a2, $s2, 0
    ctx->pc = 0x334eacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) << (32 + 0));
    // 0x334eb0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x334eb0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x334eb4: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x334eb4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x334eb8: 0x862819  .word       0x00862819                   # multu       $a0, $a2 # 00002800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x334eb8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x334ebc: 0x12183f  dsra32      $v1, $s2, 0
    ctx->pc = 0x334ebcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x334ec0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x334ec0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334ec4: 0x70641818  mult1       $v1, $v1, $a0
    ctx->pc = 0x334ec4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x334ec8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x334ec8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x334ecc: 0x0  nop
    ctx->pc = 0x334eccu;
    // NOP
    // 0x334ed0: 0x2010  mfhi        $a0
    ctx->pc = 0x334ed0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x334ed4: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x334ed4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x334ed8: 0x70852488  pextlw      $a0, $a0, $a1
    ctx->pc = 0x334ed8u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x334edc: 0x62102d  daddu       $v0, $v1, $v0
    ctx->pc = 0x334edcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x334ee0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x334ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x334ee4: 0x44802d  daddu       $s0, $v0, $a0
    ctx->pc = 0x334ee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
label_334ee8:
    // 0x334ee8: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x334EE8u;
    SET_GPR_U32(ctx, 31, 0x334EF0u);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334EF0u; }
        if (ctx->pc != 0x334EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334EF0u; }
        if (ctx->pc != 0x334EF0u) { return; }
    }
    ctx->pc = 0x334EF0u;
label_334ef0:
    // 0x334ef0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x334ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x334ef4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x334ef4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x334ef8: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x334EF8u;
    SET_GPR_U32(ctx, 31, 0x334F00u);
    ctx->pc = 0x334EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334EF8u;
            // 0x334efc: 0x2977a  dsrl        $s2, $v0, 29 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 29);
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334F00u; }
        if (ctx->pc != 0x334F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334F00u; }
        if (ctx->pc != 0x334F00u) { return; }
    }
    ctx->pc = 0x334F00u;
label_334f00:
    // 0x334f00: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x334f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x334f04: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x334f04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x334f08: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x334f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
    // 0x334f0c: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x334F0Cu;
    SET_GPR_U32(ctx, 31, 0x334F14u);
    ctx->pc = 0x334F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334F0Cu;
            // 0x334f10: 0x529025  or          $s2, $v0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334F14u; }
        if (ctx->pc != 0x334F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334F14u; }
        if (ctx->pc != 0x334F14u) { return; }
    }
    ctx->pc = 0x334F14u;
label_334f14:
    // 0x334f14: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x334f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x334f18: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x334f18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x334f1c: 0x2107c  dsll32      $v0, $v0, 1
    ctx->pc = 0x334f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
    // 0x334f20: 0x522025  or          $a0, $v0, $s2
    ctx->pc = 0x334f20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x334f24: 0x90082b  sltu        $at, $a0, $s0
    ctx->pc = 0x334f24u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x334f28: 0x1020ffef  beqz        $at, . + 4 + (-0x11 << 2)
    ctx->pc = 0x334F28u;
    {
        const bool branch_taken_0x334f28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x334f28) {
            ctx->pc = 0x334EE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_334ee8;
        }
    }
    ctx->pc = 0x334F30u;
    // 0x334f30: 0xc04916a  jal         func_1245A8
    ctx->pc = 0x334F30u;
    SET_GPR_U32(ctx, 31, 0x334F38u);
    ctx->pc = 0x334F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334F30u;
            // 0x334f34: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1245A8u;
    if (runtime->hasFunction(0x1245A8u)) {
        auto targetFn = runtime->lookupFunction(0x1245A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334F38u; }
        if (ctx->pc != 0x334F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001245A8_0x1245a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334F38u; }
        if (ctx->pc != 0x334F38u) { return; }
    }
    ctx->pc = 0x334F38u;
label_334f38:
    // 0x334f38: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x334f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_334f3c:
    // 0x334f3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x334f3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x334f40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x334f40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x334f44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x334f44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x334f48: 0x3e00008  jr          $ra
    ctx->pc = 0x334F48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x334F48u;
            // 0x334f4c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x334F50u;
}
