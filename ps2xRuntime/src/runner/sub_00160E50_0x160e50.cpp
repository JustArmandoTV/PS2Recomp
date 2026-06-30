#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00160E50
// Address: 0x160e50 - 0x160f60
void sub_00160E50_0x160e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160E50_0x160e50");
#endif

    switch (ctx->pc) {
        case 0x160ea8u: goto label_160ea8;
        case 0x160eb0u: goto label_160eb0;
        case 0x160ec4u: goto label_160ec4;
        case 0x160f24u: goto label_160f24;
        default: break;
    }

    ctx->pc = 0x160e50u;

    // 0x160e50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x160e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x160e54: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x160e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x160e58: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x160e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x160e5c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x160e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x160e60: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x160e60u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160e64: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x160e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x160e68: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x160e68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160e6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x160e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x160e70: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x160e70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160e74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x160e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x160e78: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x160e78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160e7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x160e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x160e80: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x160e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x160e84: 0x2c41ffff  sltiu       $at, $v0, -0x1
    ctx->pc = 0x160e84u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x160e88: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x160E88u;
    {
        const bool branch_taken_0x160e88 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x160E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160E88u;
            // 0x160e8c: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160e88) {
            ctx->pc = 0x160EB0u;
            goto label_160eb0;
        }
    }
    ctx->pc = 0x160E90u;
    // 0x160e90: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x160e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x160e94: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x160e94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x160e98: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x160e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x160e9c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x160e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x160ea0: 0xc049e92  jal         func_127A48
    ctx->pc = 0x160EA0u;
    SET_GPR_U32(ctx, 31, 0x160EA8u);
    ctx->pc = 0x160EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160EA0u;
            // 0x160ea4: 0x24a52600  addiu       $a1, $a1, 0x2600 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160EA8u; }
        if (ctx->pc != 0x160EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160EA8u; }
        if (ctx->pc != 0x160EA8u) { return; }
    }
    ctx->pc = 0x160EA8u;
label_160ea8:
    // 0x160ea8: 0xc04981a  jal         func_126068
    ctx->pc = 0x160EA8u;
    SET_GPR_U32(ctx, 31, 0x160EB0u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160EB0u; }
        if (ctx->pc != 0x160EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160EB0u; }
        if (ctx->pc != 0x160EB0u) { return; }
    }
    ctx->pc = 0x160EB0u;
label_160eb0:
    // 0x160eb0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x160eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x160eb4: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x160eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x160eb8: 0x8c46b6b0  lw          $a2, -0x4950($v0)
    ctx->pc = 0x160eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948528)));
    // 0x160ebc: 0xc0fe54c  jal         func_3F9530
    ctx->pc = 0x160EBCu;
    SET_GPR_U32(ctx, 31, 0x160EC4u);
    ctx->pc = 0x160EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160EBCu;
            // 0x160ec0: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160EC4u; }
        if (ctx->pc != 0x160EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160EC4u; }
        if (ctx->pc != 0x160EC4u) { return; }
    }
    ctx->pc = 0x160EC4u;
label_160ec4:
    // 0x160ec4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x160ec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160ec8: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x160ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x160ecc: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x160ECCu;
    {
        const bool branch_taken_0x160ecc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x160ecc) {
            ctx->pc = 0x160ED0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x160ECCu;
            // 0x160ed0: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160EE8u;
            goto label_160ee8;
        }
    }
    ctx->pc = 0x160ED4u;
    // 0x160ed4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x160ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x160ed8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x160ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x160edc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x160edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x160ee0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x160ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x160ee4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x160ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_160ee8:
    // 0x160ee8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x160ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x160eec: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x160eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x160ef0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x160ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x160ef4: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x160ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x160ef8: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x160EF8u;
    {
        const bool branch_taken_0x160ef8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x160EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160EF8u;
            // 0x160efc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160ef8) {
            ctx->pc = 0x160F08u;
            goto label_160f08;
        }
    }
    ctx->pc = 0x160F00u;
    // 0x160f00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x160F00u;
    {
        const bool branch_taken_0x160f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160F00u;
            // 0x160f04: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160f00) {
            ctx->pc = 0x160F0Cu;
            goto label_160f0c;
        }
    }
    ctx->pc = 0x160F08u;
label_160f08:
    // 0x160f08: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x160f08u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
label_160f0c:
    // 0x160f0c: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x160f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x160f10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x160f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x160f14: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x160f14u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x160f18: 0x8ea5000c  lw          $a1, 0xC($s5)
    ctx->pc = 0x160f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x160f1c: 0xc0583d8  jal         func_160F60
    ctx->pc = 0x160F1Cu;
    SET_GPR_U32(ctx, 31, 0x160F24u);
    ctx->pc = 0x160F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160F1Cu;
            // 0x160f20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160F60u;
    if (runtime->hasFunction(0x160F60u)) {
        auto targetFn = runtime->lookupFunction(0x160F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160F24u; }
        if (ctx->pc != 0x160F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160F60_0x160f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160F24u; }
        if (ctx->pc != 0x160F24u) { return; }
    }
    ctx->pc = 0x160F24u;
label_160f24:
    // 0x160f24: 0x52400003  beql        $s2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x160F24u;
    {
        const bool branch_taken_0x160f24 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x160f24) {
            ctx->pc = 0x160F28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x160F24u;
            // 0x160f28: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160F34u;
            goto label_160f34;
        }
    }
    ctx->pc = 0x160F2Cu;
    // 0x160f2c: 0xaeb00014  sw          $s0, 0x14($s5)
    ctx->pc = 0x160f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 16));
    // 0x160f30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x160f30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_160f34:
    // 0x160f34: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x160f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x160f38: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x160f38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x160f3c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x160f3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x160f40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x160f40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x160f44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x160f44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x160f48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x160f48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160f4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x160f4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160f50: 0x3e00008  jr          $ra
    ctx->pc = 0x160F50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160F50u;
            // 0x160f54: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x160F58u;
    // 0x160f58: 0x0  nop
    ctx->pc = 0x160f58u;
    // NOP
    // 0x160f5c: 0x0  nop
    ctx->pc = 0x160f5cu;
    // NOP
}
