#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D8DD0
// Address: 0x2d8dd0 - 0x2d8ee0
void sub_002D8DD0_0x2d8dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8DD0_0x2d8dd0");
#endif

    switch (ctx->pc) {
        case 0x2d8e28u: goto label_2d8e28;
        case 0x2d8e30u: goto label_2d8e30;
        case 0x2d8e44u: goto label_2d8e44;
        case 0x2d8ea4u: goto label_2d8ea4;
        default: break;
    }

    ctx->pc = 0x2d8dd0u;

    // 0x2d8dd0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d8dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d8dd4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2d8dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2d8dd8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d8dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2d8ddc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d8ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d8de0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2d8de0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8de4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d8de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d8de8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2d8de8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8dec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d8decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d8df0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2d8df0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8df4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d8df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d8df8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2d8df8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8dfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d8dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d8e00: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2d8e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d8e04: 0x2c41ffff  sltiu       $at, $v0, -0x1
    ctx->pc = 0x2d8e04u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x2d8e08: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D8E08u;
    {
        const bool branch_taken_0x2d8e08 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8E08u;
            // 0x2d8e0c: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8e08) {
            ctx->pc = 0x2D8E30u;
            goto label_2d8e30;
        }
    }
    ctx->pc = 0x2D8E10u;
    // 0x2d8e10: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2d8e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2d8e14: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2d8e14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2d8e18: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x2d8e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x2d8e1c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2d8e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2d8e20: 0xc049e92  jal         func_127A48
    ctx->pc = 0x2D8E20u;
    SET_GPR_U32(ctx, 31, 0x2D8E28u);
    ctx->pc = 0x2D8E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8E20u;
            // 0x2d8e24: 0x24a517e0  addiu       $a1, $a1, 0x17E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8E28u; }
        if (ctx->pc != 0x2D8E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8E28u; }
        if (ctx->pc != 0x2D8E28u) { return; }
    }
    ctx->pc = 0x2D8E28u;
label_2d8e28:
    // 0x2d8e28: 0xc04981a  jal         func_126068
    ctx->pc = 0x2D8E28u;
    SET_GPR_U32(ctx, 31, 0x2D8E30u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8E30u; }
        if (ctx->pc != 0x2D8E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8E30u; }
        if (ctx->pc != 0x2D8E30u) { return; }
    }
    ctx->pc = 0x2D8E30u;
label_2d8e30:
    // 0x2d8e30: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2d8e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x2d8e34: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x2d8e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x2d8e38: 0x8c46b6b0  lw          $a2, -0x4950($v0)
    ctx->pc = 0x2d8e38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948528)));
    // 0x2d8e3c: 0xc0fe54c  jal         func_3F9530
    ctx->pc = 0x2D8E3Cu;
    SET_GPR_U32(ctx, 31, 0x2D8E44u);
    ctx->pc = 0x2D8E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8E3Cu;
            // 0x2d8e40: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8E44u; }
        if (ctx->pc != 0x2D8E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8E44u; }
        if (ctx->pc != 0x2D8E44u) { return; }
    }
    ctx->pc = 0x2D8E44u;
label_2d8e44:
    // 0x2d8e44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d8e44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8e48: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x2d8e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2d8e4c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D8E4Cu;
    {
        const bool branch_taken_0x2d8e4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8e4c) {
            ctx->pc = 0x2D8E50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8E4Cu;
            // 0x2d8e50: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D8E68u;
            goto label_2d8e68;
        }
    }
    ctx->pc = 0x2D8E54u;
    // 0x2d8e54: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d8e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d8e58: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2d8e58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2d8e5c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2d8e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d8e60: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2d8e60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2d8e64: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2d8e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2d8e68:
    // 0x2d8e68: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2d8e68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2d8e6c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2d8e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d8e70: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d8e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d8e74: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x2d8e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x2d8e78: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D8E78u;
    {
        const bool branch_taken_0x2d8e78 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8E78u;
            // 0x2d8e7c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8e78) {
            ctx->pc = 0x2D8E88u;
            goto label_2d8e88;
        }
    }
    ctx->pc = 0x2D8E80u;
    // 0x2d8e80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D8E80u;
    {
        const bool branch_taken_0x2d8e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8E80u;
            // 0x2d8e84: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8e80) {
            ctx->pc = 0x2D8E8Cu;
            goto label_2d8e8c;
        }
    }
    ctx->pc = 0x2D8E88u;
label_2d8e88:
    // 0x2d8e88: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x2d8e88u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
label_2d8e8c:
    // 0x2d8e8c: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2d8e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2d8e90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d8e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d8e94: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x2d8e94u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x2d8e98: 0x8ea5000c  lw          $a1, 0xC($s5)
    ctx->pc = 0x2d8e98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x2d8e9c: 0xc0583d8  jal         func_160F60
    ctx->pc = 0x2D8E9Cu;
    SET_GPR_U32(ctx, 31, 0x2D8EA4u);
    ctx->pc = 0x2D8EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8E9Cu;
            // 0x2d8ea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160F60u;
    if (runtime->hasFunction(0x160F60u)) {
        auto targetFn = runtime->lookupFunction(0x160F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8EA4u; }
        if (ctx->pc != 0x2D8EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160F60_0x160f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8EA4u; }
        if (ctx->pc != 0x2D8EA4u) { return; }
    }
    ctx->pc = 0x2D8EA4u;
label_2d8ea4:
    // 0x2d8ea4: 0x52400003  beql        $s2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D8EA4u;
    {
        const bool branch_taken_0x2d8ea4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8ea4) {
            ctx->pc = 0x2D8EA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8EA4u;
            // 0x2d8ea8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D8EB4u;
            goto label_2d8eb4;
        }
    }
    ctx->pc = 0x2D8EACu;
    // 0x2d8eac: 0xaeb00014  sw          $s0, 0x14($s5)
    ctx->pc = 0x2d8eacu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 16));
    // 0x2d8eb0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d8eb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d8eb4:
    // 0x2d8eb4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2d8eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d8eb8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d8eb8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d8ebc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d8ebcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d8ec0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d8ec0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d8ec4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d8ec4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d8ec8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d8ec8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8ecc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d8eccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d8ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8ED0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8ED0u;
            // 0x2d8ed4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D8ED8u;
    // 0x2d8ed8: 0x0  nop
    ctx->pc = 0x2d8ed8u;
    // NOP
    // 0x2d8edc: 0x0  nop
    ctx->pc = 0x2d8edcu;
    // NOP
}
