#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001615B0
// Address: 0x1615b0 - 0x1615e0
void sub_001615B0_0x1615b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001615B0_0x1615b0");
#endif

    switch (ctx->pc) {
        case 0x1615b0u: goto label_1615b0;
        case 0x1615b4u: goto label_1615b4;
        case 0x1615b8u: goto label_1615b8;
        case 0x1615bcu: goto label_1615bc;
        case 0x1615c0u: goto label_1615c0;
        case 0x1615c4u: goto label_1615c4;
        case 0x1615c8u: goto label_1615c8;
        case 0x1615ccu: goto label_1615cc;
        case 0x1615d0u: goto label_1615d0;
        case 0x1615d4u: goto label_1615d4;
        case 0x1615d8u: goto label_1615d8;
        case 0x1615dcu: goto label_1615dc;
        default: break;
    }

    ctx->pc = 0x1615b0u;

label_1615b0:
    // 0x1615b0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1615b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_1615b4:
    // 0x1615b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1615b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1615b8:
    // 0x1615b8: 0x8c435c64  lw          $v1, 0x5C64($v0)
    ctx->pc = 0x1615b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23652)));
label_1615bc:
    // 0x1615bc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1615bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1615c0:
    // 0x1615c0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1615c4:
    if (ctx->pc == 0x1615C4u) {
        ctx->pc = 0x1615C4u;
            // 0x1615c4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1615C8u;
        goto label_1615c8;
    }
    ctx->pc = 0x1615C0u;
    {
        const bool branch_taken_0x1615c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1615C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1615C0u;
            // 0x1615c4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1615c0) {
            ctx->pc = 0x1615D4u;
            goto label_1615d4;
        }
    }
    ctx->pc = 0x1615C8u;
label_1615c8:
    // 0x1615c8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1615c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_1615cc:
    // 0x1615cc: 0x60f809  jalr        $v1
label_1615d0:
    if (ctx->pc == 0x1615D0u) {
        ctx->pc = 0x1615D0u;
            // 0x1615d0: 0x8c445c68  lw          $a0, 0x5C68($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23656)));
        ctx->pc = 0x1615D4u;
        goto label_1615d4;
    }
    ctx->pc = 0x1615CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1615D4u);
        ctx->pc = 0x1615D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1615CCu;
            // 0x1615d0: 0x8c445c68  lw          $a0, 0x5C68($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23656)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1615D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1615D4u; }
            if (ctx->pc != 0x1615D4u) { return; }
        }
        }
    }
    ctx->pc = 0x1615D4u;
label_1615d4:
    // 0x1615d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1615d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1615d8:
    // 0x1615d8: 0x3e00008  jr          $ra
label_1615dc:
    if (ctx->pc == 0x1615DCu) {
        ctx->pc = 0x1615DCu;
            // 0x1615dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1615E0u;
        goto label_fallthrough_0x1615d8;
    }
    ctx->pc = 0x1615D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1615DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1615D8u;
            // 0x1615dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1615d8:
    ctx->pc = 0x1615E0u;
}
