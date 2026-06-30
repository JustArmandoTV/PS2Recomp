#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019A650
// Address: 0x19a650 - 0x19a680
void sub_0019A650_0x19a650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019A650_0x19a650");
#endif

    switch (ctx->pc) {
        case 0x19a660u: goto label_19a660;
        default: break;
    }

    ctx->pc = 0x19a650u;

    // 0x19a650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19a650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19a654: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19a654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19a658: 0xc06eae2  jal         func_1BAB88
    ctx->pc = 0x19A658u;
    SET_GPR_U32(ctx, 31, 0x19A660u);
    ctx->pc = 0x19A65Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A658u;
            // 0x19a65c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BAB88u;
    if (runtime->hasFunction(0x1BAB88u)) {
        auto targetFn = runtime->lookupFunction(0x1BAB88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A660u; }
        if (ctx->pc != 0x19A660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BAB88_0x1bab88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A660u; }
        if (ctx->pc != 0x19A660u) { return; }
    }
    ctx->pc = 0x19A660u;
label_19a660:
    // 0x19a660: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19a660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a664: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19A664u;
    {
        const bool branch_taken_0x19a664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19A668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A664u;
            // 0x19a668: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a664) {
            ctx->pc = 0x19A674u;
            goto label_19a674;
        }
    }
    ctx->pc = 0x19A66Cu;
    // 0x19a66c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19a66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a670: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x19a670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_19a674:
    // 0x19a674: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19a674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a678: 0x3e00008  jr          $ra
    ctx->pc = 0x19A678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A678u;
            // 0x19a67c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19A680u;
}
