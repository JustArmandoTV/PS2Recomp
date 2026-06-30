#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A32F0
// Address: 0x1a32f0 - 0x1a3320
void sub_001A32F0_0x1a32f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A32F0_0x1a32f0");
#endif

    switch (ctx->pc) {
        case 0x1a32f0u: goto label_1a32f0;
        case 0x1a32f4u: goto label_1a32f4;
        case 0x1a32f8u: goto label_1a32f8;
        case 0x1a32fcu: goto label_1a32fc;
        case 0x1a3300u: goto label_1a3300;
        case 0x1a3304u: goto label_1a3304;
        case 0x1a3308u: goto label_1a3308;
        case 0x1a330cu: goto label_1a330c;
        case 0x1a3310u: goto label_1a3310;
        case 0x1a3314u: goto label_1a3314;
        case 0x1a3318u: goto label_1a3318;
        case 0x1a331cu: goto label_1a331c;
        default: break;
    }

    ctx->pc = 0x1a32f0u;

label_1a32f0:
    // 0x1a32f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a32f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a32f4:
    // 0x1a32f4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a32f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a32f8:
    // 0x1a32f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a32f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a32fc:
    // 0x1a32fc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1a32fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a3300:
    // 0x1a3300: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1a3300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a3304:
    // 0x1a3304: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1a3304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1a3308:
    // 0x1a3308: 0x40f809  jalr        $v0
label_1a330c:
    if (ctx->pc == 0x1A330Cu) {
        ctx->pc = 0x1A330Cu;
            // 0x1a330c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A3310u;
        goto label_1a3310;
    }
    ctx->pc = 0x1A3308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A3310u);
        ctx->pc = 0x1A330Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3308u;
            // 0x1a330c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A3310u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A3310u; }
            if (ctx->pc != 0x1A3310u) { return; }
        }
        }
    }
    ctx->pc = 0x1A3310u;
label_1a3310:
    // 0x1a3310: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a3310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a3314:
    // 0x1a3314: 0x3e00008  jr          $ra
label_1a3318:
    if (ctx->pc == 0x1A3318u) {
        ctx->pc = 0x1A3318u;
            // 0x1a3318: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1A331Cu;
        goto label_1a331c;
    }
    ctx->pc = 0x1A3314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3314u;
            // 0x1a3318: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A331Cu;
label_1a331c:
    // 0x1a331c: 0x0  nop
    ctx->pc = 0x1a331cu;
    // NOP
}
