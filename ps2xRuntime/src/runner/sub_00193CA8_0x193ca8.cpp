#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00193CA8
// Address: 0x193ca8 - 0x193cf8
void sub_00193CA8_0x193ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193CA8_0x193ca8");
#endif

    switch (ctx->pc) {
        case 0x193cd0u: goto label_193cd0;
        case 0x193ce0u: goto label_193ce0;
        default: break;
    }

    ctx->pc = 0x193ca8u;

    // 0x193ca8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x193ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x193cac: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x193cacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193cb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x193cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x193cb4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x193cb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193cb8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x193cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x193cbc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x193CBCu;
    {
        const bool branch_taken_0x193cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193CBCu;
            // 0x193cc0: 0x2444025c  addiu       $a0, $v0, 0x25C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 604));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193cbc) {
            ctx->pc = 0x193CD8u;
            goto label_193cd8;
        }
    }
    ctx->pc = 0x193CC4u;
    // 0x193cc4: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x193cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x193cc8: 0xc064f3e  jal         func_193CF8
    ctx->pc = 0x193CC8u;
    SET_GPR_U32(ctx, 31, 0x193CD0u);
    ctx->pc = 0x193CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193CC8u;
            // 0x193ccc: 0x2484feb8  addiu       $a0, $a0, -0x148 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x193CF8u;
    if (runtime->hasFunction(0x193CF8u)) {
        auto targetFn = runtime->lookupFunction(0x193CF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193CD0u; }
        if (ctx->pc != 0x193CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00193CF8_0x193cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193CD0u; }
        if (ctx->pc != 0x193CD0u) { return; }
    }
    ctx->pc = 0x193CD0u;
label_193cd0:
    // 0x193cd0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x193CD0u;
    {
        const bool branch_taken_0x193cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193CD0u;
            // 0x193cd4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193cd0) {
            ctx->pc = 0x193CE4u;
            goto label_193ce4;
        }
    }
    ctx->pc = 0x193CD8u;
label_193cd8:
    // 0x193cd8: 0xc064f3e  jal         func_193CF8
    ctx->pc = 0x193CD8u;
    SET_GPR_U32(ctx, 31, 0x193CE0u);
    ctx->pc = 0x193CF8u;
    if (runtime->hasFunction(0x193CF8u)) {
        auto targetFn = runtime->lookupFunction(0x193CF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193CE0u; }
        if (ctx->pc != 0x193CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00193CF8_0x193cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193CE0u; }
        if (ctx->pc != 0x193CE0u) { return; }
    }
    ctx->pc = 0x193CE0u;
label_193ce0:
    // 0x193ce0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x193ce0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_193ce4:
    // 0x193ce4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x193ce4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193ce8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x193ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x193cec: 0x3e00008  jr          $ra
    ctx->pc = 0x193CECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193CECu;
            // 0x193cf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x193CF4u;
    // 0x193cf4: 0x0  nop
    ctx->pc = 0x193cf4u;
    // NOP
}
