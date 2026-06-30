#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B5A80
// Address: 0x1b5a80 - 0x1b5af0
void sub_001B5A80_0x1b5a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5A80_0x1b5a80");
#endif

    switch (ctx->pc) {
        case 0x1b5a9cu: goto label_1b5a9c;
        case 0x1b5ad8u: goto label_1b5ad8;
        default: break;
    }

    ctx->pc = 0x1b5a80u;

    // 0x1b5a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b5a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b5a84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b5a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b5a88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b5a88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5a8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b5a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b5a90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b5a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b5a94: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B5A94u;
    SET_GPR_U32(ctx, 31, 0x1B5A9Cu);
    ctx->pc = 0x1B5A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5A94u;
            // 0x1b5a98: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5A9Cu; }
        if (ctx->pc != 0x1B5A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5A9Cu; }
        if (ctx->pc != 0x1B5A9Cu) { return; }
    }
    ctx->pc = 0x1B5A9Cu;
label_1b5a9c:
    // 0x1b5a9c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b5a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b5aa0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B5AA0u;
    {
        const bool branch_taken_0x1b5aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5AA0u;
            // 0x1b5aa4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5aa0) {
            ctx->pc = 0x1B5AC0u;
            goto label_1b5ac0;
        }
    }
    ctx->pc = 0x1B5AA8u;
    // 0x1b5aa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b5aa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5aac: 0x34a5015b  ori         $a1, $a1, 0x15B
    ctx->pc = 0x1b5aacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)347);
    // 0x1b5ab0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b5ab0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b5ab4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b5ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5ab8: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B5AB8u;
    ctx->pc = 0x1B5ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5AB8u;
            // 0x1b5abc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B5AC0u;
label_1b5ac0:
    // 0x1b5ac0: 0x8e033720  lw          $v1, 0x3720($s0)
    ctx->pc = 0x1b5ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14112)));
    // 0x1b5ac4: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B5AC4u;
    {
        const bool branch_taken_0x1b5ac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5ac4) {
            ctx->pc = 0x1B5AC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5AC4u;
            // 0x1b5ac8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B5AE0u;
            goto label_1b5ae0;
        }
    }
    ctx->pc = 0x1B5ACCu;
    // 0x1b5acc: 0xac710dd0  sw          $s1, 0xDD0($v1)
    ctx->pc = 0x1b5accu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3536), GPR_U32(ctx, 17));
    // 0x1b5ad0: 0xc06d722  jal         func_1B5C88
    ctx->pc = 0x1B5AD0u;
    SET_GPR_U32(ctx, 31, 0x1B5AD8u);
    ctx->pc = 0x1B5AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5AD0u;
            // 0x1b5ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5C88u;
    if (runtime->hasFunction(0x1B5C88u)) {
        auto targetFn = runtime->lookupFunction(0x1B5C88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5AD8u; }
        if (ctx->pc != 0x1B5AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5C88_0x1b5c88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5AD8u; }
        if (ctx->pc != 0x1B5AD8u) { return; }
    }
    ctx->pc = 0x1B5AD8u;
label_1b5ad8:
    // 0x1b5ad8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b5ad8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5adc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b5adcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b5ae0:
    // 0x1b5ae0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b5ae0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b5ae4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b5ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5AE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5AE8u;
            // 0x1b5aec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5AF0u;
}
