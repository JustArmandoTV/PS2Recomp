#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A3E88
// Address: 0x1a3e88 - 0x1a3f40
void sub_001A3E88_0x1a3e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3E88_0x1a3e88");
#endif

    switch (ctx->pc) {
        case 0x1a3ea0u: goto label_1a3ea0;
        case 0x1a3ec8u: goto label_1a3ec8;
        case 0x1a3ed8u: goto label_1a3ed8;
        case 0x1a3ee4u: goto label_1a3ee4;
        case 0x1a3ef0u: goto label_1a3ef0;
        default: break;
    }

    ctx->pc = 0x1a3e88u;

    // 0x1a3e88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a3e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a3e8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a3e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a3e90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a3e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a3e94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a3e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a3e98: 0xc069262  jal         func_1A4988
    ctx->pc = 0x1A3E98u;
    SET_GPR_U32(ctx, 31, 0x1A3EA0u);
    ctx->pc = 0x1A3E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3E98u;
            // 0x1a3e9c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4988u;
    if (runtime->hasFunction(0x1A4988u)) {
        auto targetFn = runtime->lookupFunction(0x1A4988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3EA0u; }
        if (ctx->pc != 0x1A3EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4988_0x1a4988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3EA0u; }
        if (ctx->pc != 0x1A3EA0u) { return; }
    }
    ctx->pc = 0x1A3EA0u;
label_1a3ea0:
    // 0x1a3ea0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a3ea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3ea4: 0x52200021  beql        $s1, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x1A3EA4u;
    {
        const bool branch_taken_0x1a3ea4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3ea4) {
            ctx->pc = 0x1A3EA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3EA4u;
            // 0x1a3ea8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A3F2Cu;
            goto label_1a3f2c;
        }
    }
    ctx->pc = 0x1A3EACu;
    // 0x1a3eac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a3eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a3eb0: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x1A3EB0u;
    {
        const bool branch_taken_0x1a3eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3eb0) {
            ctx->pc = 0x1A3EB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3EB0u;
            // 0x1a3eb4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A3F2Cu;
            goto label_1a3f2c;
        }
    }
    ctx->pc = 0x1A3EB8u;
    // 0x1a3eb8: 0x8e022074  lw          $v0, 0x2074($s0)
    ctx->pc = 0x1a3eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8308)));
    // 0x1a3ebc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1a3ebcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a3ec0: 0xc068fd0  jal         func_1A3F40
    ctx->pc = 0x1A3EC0u;
    SET_GPR_U32(ctx, 31, 0x1A3EC8u);
    ctx->pc = 0x1A3EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3EC0u;
            // 0x1a3ec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3F40u;
    if (runtime->hasFunction(0x1A3F40u)) {
        auto targetFn = runtime->lookupFunction(0x1A3F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3EC8u; }
        if (ctx->pc != 0x1A3EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3F40_0x1a3f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3EC8u; }
        if (ctx->pc != 0x1A3EC8u) { return; }
    }
    ctx->pc = 0x1A3EC8u;
label_1a3ec8:
    // 0x1a3ec8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A3EC8u;
    {
        const bool branch_taken_0x1a3ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3EC8u;
            // 0x1a3ecc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3ec8) {
            ctx->pc = 0x1A3F28u;
            goto label_1a3f28;
        }
    }
    ctx->pc = 0x1A3ED0u;
    // 0x1a3ed0: 0xc05ceb6  jal         func_173AD8
    ctx->pc = 0x1A3ED0u;
    SET_GPR_U32(ctx, 31, 0x1A3ED8u);
    ctx->pc = 0x173AD8u;
    if (runtime->hasFunction(0x173AD8u)) {
        auto targetFn = runtime->lookupFunction(0x173AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3ED8u; }
        if (ctx->pc != 0x1A3ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173AD8_0x173ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3ED8u; }
        if (ctx->pc != 0x1A3ED8u) { return; }
    }
    ctx->pc = 0x1A3ED8u;
label_1a3ed8:
    // 0x1a3ed8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3edc: 0xc05ce94  jal         func_173A50
    ctx->pc = 0x1A3EDCu;
    SET_GPR_U32(ctx, 31, 0x1A3EE4u);
    ctx->pc = 0x1A3EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3EDCu;
            // 0x1a3ee0: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173A50u;
    if (runtime->hasFunction(0x173A50u)) {
        auto targetFn = runtime->lookupFunction(0x173A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3EE4u; }
        if (ctx->pc != 0x1A3EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173A50_0x173a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3EE4u; }
        if (ctx->pc != 0x1A3EE4u) { return; }
    }
    ctx->pc = 0x1A3EE4u;
label_1a3ee4:
    // 0x1a3ee4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3ee8: 0xc05ced8  jal         func_173B60
    ctx->pc = 0x1A3EE8u;
    SET_GPR_U32(ctx, 31, 0x1A3EF0u);
    ctx->pc = 0x1A3EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3EE8u;
            // 0x1a3eec: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173B60u;
    if (runtime->hasFunction(0x173B60u)) {
        auto targetFn = runtime->lookupFunction(0x173B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3EF0u; }
        if (ctx->pc != 0x1A3EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173B60_0x173b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3EF0u; }
        if (ctx->pc != 0x1A3EF0u) { return; }
    }
    ctx->pc = 0x1A3EF0u;
label_1a3ef0:
    // 0x1a3ef0: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x1a3ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1a3ef4: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1a3ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1a3ef8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a3ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3efc: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x1a3efcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1a3f00: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1a3f00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1a3f04: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1a3f04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1a3f08: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1a3f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1a3f0c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a3f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a3f10: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a3f10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3f14: 0x2444000f  addiu       $a0, $v0, 0xF
    ctx->pc = 0x1a3f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1a3f18: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x1a3f18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1a3f1c: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x1a3f1cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x1a3f20: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1a3f20u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x1a3f24: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1a3f24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_1a3f28:
    // 0x1a3f28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a3f28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a3f2c:
    // 0x1a3f2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a3f2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a3f30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a3f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3f34: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3F34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3F34u;
            // 0x1a3f38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A3F3Cu;
    // 0x1a3f3c: 0x0  nop
    ctx->pc = 0x1a3f3cu;
    // NOP
}
