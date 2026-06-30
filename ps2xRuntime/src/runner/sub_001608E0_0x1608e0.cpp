#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001608E0
// Address: 0x1608e0 - 0x160930
void sub_001608E0_0x1608e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001608E0_0x1608e0");
#endif

    switch (ctx->pc) {
        case 0x1608f0u: goto label_1608f0;
        case 0x160910u: goto label_160910;
        default: break;
    }

    ctx->pc = 0x1608e0u;

    // 0x1608e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1608E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1608E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1608E0u;
            // 0x1608e4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1608E8u;
    // 0x1608e8: 0x0  nop
    ctx->pc = 0x1608e8u;
    // NOP
    // 0x1608ec: 0x0  nop
    ctx->pc = 0x1608ecu;
    // NOP
label_1608f0:
    // 0x1608f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1608f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1608f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1608f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1608f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1608f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1608fc: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x1608fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x160900: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x160900u;
    {
        const bool branch_taken_0x160900 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x160904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160900u;
            // 0x160904: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160900) {
            ctx->pc = 0x160920u;
            goto label_160920;
        }
    }
    ctx->pc = 0x160908u;
    // 0x160908: 0xc058194  jal         func_160650
    ctx->pc = 0x160908u;
    SET_GPR_U32(ctx, 31, 0x160910u);
    ctx->pc = 0x160650u;
    if (runtime->hasFunction(0x160650u)) {
        auto targetFn = runtime->lookupFunction(0x160650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160910u; }
        if (ctx->pc != 0x160910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160650_0x160650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160910u; }
        if (ctx->pc != 0x160910u) { return; }
    }
    ctx->pc = 0x160910u;
label_160910:
    // 0x160910: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x160910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x160914: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x160914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x160918: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x160918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x16091c: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x16091cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_160920:
    // 0x160920: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x160920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160924: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x160924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160928: 0x3e00008  jr          $ra
    ctx->pc = 0x160928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16092Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160928u;
            // 0x16092c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x160930u;
}
