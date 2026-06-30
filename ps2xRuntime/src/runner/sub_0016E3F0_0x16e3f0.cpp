#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016E3F0
// Address: 0x16e3f0 - 0x16e420
void sub_0016E3F0_0x16e3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E3F0_0x16e3f0");
#endif

    switch (ctx->pc) {
        case 0x16e3f0u: goto label_16e3f0;
        case 0x16e3f4u: goto label_16e3f4;
        case 0x16e3f8u: goto label_16e3f8;
        case 0x16e3fcu: goto label_16e3fc;
        case 0x16e400u: goto label_16e400;
        case 0x16e404u: goto label_16e404;
        case 0x16e408u: goto label_16e408;
        case 0x16e40cu: goto label_16e40c;
        case 0x16e410u: goto label_16e410;
        case 0x16e414u: goto label_16e414;
        case 0x16e418u: goto label_16e418;
        case 0x16e41cu: goto label_16e41c;
        default: break;
    }

    ctx->pc = 0x16e3f0u;

label_16e3f0:
    // 0x16e3f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_16e3f4:
    // 0x16e3f4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x16e3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_16e3f8:
    // 0x16e3f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16e3fc:
    // 0x16e3fc: 0x2442d168  addiu       $v0, $v0, -0x2E98
    ctx->pc = 0x16e3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955368));
label_16e400:
    // 0x16e400: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16e400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16e404:
    // 0x16e404: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_16e408:
    if (ctx->pc == 0x16E408u) {
        ctx->pc = 0x16E408u;
            // 0x16e408: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x16E40Cu;
        goto label_16e40c;
    }
    ctx->pc = 0x16E404u;
    {
        const bool branch_taken_0x16e404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e404) {
            ctx->pc = 0x16E408u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16E404u;
            // 0x16e408: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16E418u;
            goto label_16e418;
        }
    }
    ctx->pc = 0x16E40Cu;
label_16e40c:
    // 0x16e40c: 0x60f809  jalr        $v1
label_16e410:
    if (ctx->pc == 0x16E410u) {
        ctx->pc = 0x16E410u;
            // 0x16e410: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x16E414u;
        goto label_16e414;
    }
    ctx->pc = 0x16E40Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16E414u);
        ctx->pc = 0x16E410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E40Cu;
            // 0x16e410: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16E414u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E414u; }
            if (ctx->pc != 0x16E414u) { return; }
        }
        }
    }
    ctx->pc = 0x16E414u;
label_16e414:
    // 0x16e414: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16e418:
    // 0x16e418: 0x3e00008  jr          $ra
label_16e41c:
    if (ctx->pc == 0x16E41Cu) {
        ctx->pc = 0x16E41Cu;
            // 0x16e41c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x16E420u;
        goto label_fallthrough_0x16e418;
    }
    ctx->pc = 0x16E418u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E41Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E418u;
            // 0x16e41c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x16e418:
    ctx->pc = 0x16E420u;
}
