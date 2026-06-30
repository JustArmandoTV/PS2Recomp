#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A9FC0
// Address: 0x1a9fc0 - 0x1aa010
void sub_001A9FC0_0x1a9fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9FC0_0x1a9fc0");
#endif

    switch (ctx->pc) {
        case 0x1a9fe4u: goto label_1a9fe4;
        case 0x1a9ff4u: goto label_1a9ff4;
        default: break;
    }

    ctx->pc = 0x1a9fc0u;

    // 0x1a9fc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a9fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a9fc4: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1a9fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1a9fc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a9fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a9fcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a9fccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9fd0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a9fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a9fd4: 0x14a3000a  bne         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1A9FD4u;
    {
        const bool branch_taken_0x1a9fd4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A9FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9FD4u;
            // 0x1a9fd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9fd4) {
            ctx->pc = 0x1AA000u;
            goto label_1aa000;
        }
    }
    ctx->pc = 0x1A9FDCu;
    // 0x1a9fdc: 0xc069a18  jal         func_1A6860
    ctx->pc = 0x1A9FDCu;
    SET_GPR_U32(ctx, 31, 0x1A9FE4u);
    ctx->pc = 0x1A6860u;
    if (runtime->hasFunction(0x1A6860u)) {
        auto targetFn = runtime->lookupFunction(0x1A6860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9FE4u; }
        if (ctx->pc != 0x1A9FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6860_0x1a6860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9FE4u; }
        if (ctx->pc != 0x1A9FE4u) { return; }
    }
    ctx->pc = 0x1A9FE4u;
label_1a9fe4:
    // 0x1a9fe4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A9FE4u;
    {
        const bool branch_taken_0x1a9fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9FE4u;
            // 0x1a9fe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9fe4) {
            ctx->pc = 0x1A9FFCu;
            goto label_1a9ffc;
        }
    }
    ctx->pc = 0x1A9FECu;
    // 0x1a9fec: 0xc069a20  jal         func_1A6880
    ctx->pc = 0x1A9FECu;
    SET_GPR_U32(ctx, 31, 0x1A9FF4u);
    ctx->pc = 0x1A6880u;
    if (runtime->hasFunction(0x1A6880u)) {
        auto targetFn = runtime->lookupFunction(0x1A6880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9FF4u; }
        if (ctx->pc != 0x1A9FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6880_0x1a6880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9FF4u; }
        if (ctx->pc != 0x1A9FF4u) { return; }
    }
    ctx->pc = 0x1A9FF4u;
label_1a9ff4:
    // 0x1a9ff4: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A9FF4u;
    {
        const bool branch_taken_0x1a9ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9ff4) {
            ctx->pc = 0x1A9FF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9FF4u;
            // 0x1a9ff8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA000u;
            goto label_1aa000;
        }
    }
    ctx->pc = 0x1A9FFCu;
label_1a9ffc:
    // 0x1a9ffc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a9ffcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa000:
    // 0x1aa000: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aa000u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa004: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1aa004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aa008: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA008u;
            // 0x1aa00c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AA010u;
}
