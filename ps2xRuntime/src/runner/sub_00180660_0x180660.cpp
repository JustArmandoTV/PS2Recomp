#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00180660
// Address: 0x180660 - 0x180690
void sub_00180660_0x180660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180660_0x180660");
#endif

    switch (ctx->pc) {
        case 0x180678u: goto label_180678;
        default: break;
    }

    ctx->pc = 0x180660u;

    // 0x180660: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x180660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x180664: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x180664u;
    {
        const bool branch_taken_0x180664 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x180668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180664u;
            // 0x180668: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180664) {
            ctx->pc = 0x180680u;
            goto label_180680;
        }
    }
    ctx->pc = 0x18066Cu;
    // 0x18066c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x18066cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x180670: 0xc060334  jal         func_180CD0
    ctx->pc = 0x180670u;
    SET_GPR_U32(ctx, 31, 0x180678u);
    ctx->pc = 0x180674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180670u;
            // 0x180674: 0x24846878  addiu       $a0, $a0, 0x6878 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26744));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180CD0u;
    if (runtime->hasFunction(0x180CD0u)) {
        auto targetFn = runtime->lookupFunction(0x180CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180678u; }
        if (ctx->pc != 0x180678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180CD0_0x180cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180678u; }
        if (ctx->pc != 0x180678u) { return; }
    }
    ctx->pc = 0x180678u;
label_180678:
    // 0x180678: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x180678u;
    {
        const bool branch_taken_0x180678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18067Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180678u;
            // 0x18067c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180678) {
            ctx->pc = 0x180684u;
            goto label_180684;
        }
    }
    ctx->pc = 0x180680u;
label_180680:
    // 0x180680: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x180680u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_180684:
    // 0x180684: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180688: 0x3e00008  jr          $ra
    ctx->pc = 0x180688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18068Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180688u;
            // 0x18068c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x180690u;
}
