#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BAA98
// Address: 0x1baa98 - 0x1baae8
void sub_001BAA98_0x1baa98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BAA98_0x1baa98");
#endif

    switch (ctx->pc) {
        case 0x1baac8u: goto label_1baac8;
        case 0x1baad8u: goto label_1baad8;
        default: break;
    }

    ctx->pc = 0x1baa98u;

    // 0x1baa98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1baa98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1baa9c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1baa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1baaa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1baaa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1baaa4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1baaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1baaa8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BAAA8u;
    {
        const bool branch_taken_0x1baaa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BAAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAAA8u;
            // 0x1baaac: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baaa8) {
            ctx->pc = 0x1BAAC0u;
            goto label_1baac0;
        }
    }
    ctx->pc = 0x1BAAB0u;
    // 0x1baab0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BAAB0u;
    {
        const bool branch_taken_0x1baab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BAAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAAB0u;
            // 0x1baab4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baab0) {
            ctx->pc = 0x1BAAD0u;
            goto label_1baad0;
        }
    }
    ctx->pc = 0x1BAAB8u;
    // 0x1baab8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BAAB8u;
    {
        const bool branch_taken_0x1baab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAAB8u;
            // 0x1baabc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baab8) {
            ctx->pc = 0x1BAADCu;
            goto label_1baadc;
        }
    }
    ctx->pc = 0x1BAAC0u;
label_1baac0:
    // 0x1baac0: 0xc06eef4  jal         func_1BBBD0
    ctx->pc = 0x1BAAC0u;
    SET_GPR_U32(ctx, 31, 0x1BAAC8u);
    ctx->pc = 0x1BBBD0u;
    if (runtime->hasFunction(0x1BBBD0u)) {
        auto targetFn = runtime->lookupFunction(0x1BBBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAAC8u; }
        if (ctx->pc != 0x1BAAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBBD0_0x1bbbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAAC8u; }
        if (ctx->pc != 0x1BAAC8u) { return; }
    }
    ctx->pc = 0x1BAAC8u;
label_1baac8:
    // 0x1baac8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BAAC8u;
    {
        const bool branch_taken_0x1baac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAAC8u;
            // 0x1baacc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baac8) {
            ctx->pc = 0x1BAADCu;
            goto label_1baadc;
        }
    }
    ctx->pc = 0x1BAAD0u;
label_1baad0:
    // 0x1baad0: 0xc06f272  jal         func_1BC9C8
    ctx->pc = 0x1BAAD0u;
    SET_GPR_U32(ctx, 31, 0x1BAAD8u);
    ctx->pc = 0x1BC9C8u;
    if (runtime->hasFunction(0x1BC9C8u)) {
        auto targetFn = runtime->lookupFunction(0x1BC9C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAAD8u; }
        if (ctx->pc != 0x1BAAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC9C8_0x1bc9c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAAD8u; }
        if (ctx->pc != 0x1BAAD8u) { return; }
    }
    ctx->pc = 0x1BAAD8u;
label_1baad8:
    // 0x1baad8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1baad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1baadc:
    // 0x1baadc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BAADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAADCu;
            // 0x1baae0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BAAE4u;
    // 0x1baae4: 0x0  nop
    ctx->pc = 0x1baae4u;
    // NOP
}
