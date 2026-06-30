#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004CBED0
// Address: 0x4cbed0 - 0x4cbf10
void sub_004CBED0_0x4cbed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CBED0_0x4cbed0");
#endif

    switch (ctx->pc) {
        case 0x4cbeecu: goto label_4cbeec;
        case 0x4cbefcu: goto label_4cbefc;
        default: break;
    }

    ctx->pc = 0x4cbed0u;

    // 0x4cbed0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4cbed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4cbed4: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x4cbed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x4cbed8: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x4cbed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4cbedc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4CBEDCu;
    {
        const bool branch_taken_0x4cbedc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CBEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBEDCu;
            // 0x4cbee0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cbedc) {
            ctx->pc = 0x4CBEF4u;
            goto label_4cbef4;
        }
    }
    ctx->pc = 0x4CBEE4u;
    // 0x4cbee4: 0xc055234  jal         func_1548D0
    ctx->pc = 0x4CBEE4u;
    SET_GPR_U32(ctx, 31, 0x4CBEECu);
    ctx->pc = 0x1548D0u;
    if (runtime->hasFunction(0x1548D0u)) {
        auto targetFn = runtime->lookupFunction(0x1548D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBEECu; }
        if (ctx->pc != 0x4CBEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001548D0_0x1548d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBEECu; }
        if (ctx->pc != 0x4CBEECu) { return; }
    }
    ctx->pc = 0x4CBEECu;
label_4cbeec:
    // 0x4cbeec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4CBEECu;
    {
        const bool branch_taken_0x4cbeec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CBEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBEECu;
            // 0x4cbef0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cbeec) {
            ctx->pc = 0x4CBF00u;
            goto label_4cbf00;
        }
    }
    ctx->pc = 0x4CBEF4u;
label_4cbef4:
    // 0x4cbef4: 0xc0550f8  jal         func_1543E0
    ctx->pc = 0x4CBEF4u;
    SET_GPR_U32(ctx, 31, 0x4CBEFCu);
    ctx->pc = 0x1543E0u;
    if (runtime->hasFunction(0x1543E0u)) {
        auto targetFn = runtime->lookupFunction(0x1543E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBEFCu; }
        if (ctx->pc != 0x4CBEFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001543E0_0x1543e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBEFCu; }
        if (ctx->pc != 0x4CBEFCu) { return; }
    }
    ctx->pc = 0x4CBEFCu;
label_4cbefc:
    // 0x4cbefc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4cbefcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4cbf00:
    // 0x4cbf00: 0x3e00008  jr          $ra
    ctx->pc = 0x4CBF00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CBF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBF00u;
            // 0x4cbf04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CBF08u;
    // 0x4cbf08: 0x0  nop
    ctx->pc = 0x4cbf08u;
    // NOP
    // 0x4cbf0c: 0x0  nop
    ctx->pc = 0x4cbf0cu;
    // NOP
}
