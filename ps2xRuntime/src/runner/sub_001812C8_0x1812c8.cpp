#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001812C8
// Address: 0x1812c8 - 0x1812f8
void sub_001812C8_0x1812c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001812C8_0x1812c8");
#endif

    switch (ctx->pc) {
        case 0x1812c8u: goto label_1812c8;
        case 0x1812ccu: goto label_1812cc;
        case 0x1812d0u: goto label_1812d0;
        case 0x1812d4u: goto label_1812d4;
        case 0x1812d8u: goto label_1812d8;
        case 0x1812dcu: goto label_1812dc;
        case 0x1812e0u: goto label_1812e0;
        case 0x1812e4u: goto label_1812e4;
        case 0x1812e8u: goto label_1812e8;
        case 0x1812ecu: goto label_1812ec;
        case 0x1812f0u: goto label_1812f0;
        case 0x1812f4u: goto label_1812f4;
        default: break;
    }

    ctx->pc = 0x1812c8u;

label_1812c8:
    // 0x1812c8: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1812c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_1812cc:
    // 0x1812cc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1812ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1812d0:
    // 0x1812d0: 0x8c43b484  lw          $v1, -0x4B7C($v0)
    ctx->pc = 0x1812d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947972)));
label_1812d4:
    // 0x1812d4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1812d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1812d8:
    // 0x1812d8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1812dc:
    if (ctx->pc == 0x1812DCu) {
        ctx->pc = 0x1812DCu;
            // 0x1812dc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1812E0u;
        goto label_1812e0;
    }
    ctx->pc = 0x1812D8u;
    {
        const bool branch_taken_0x1812d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1812DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1812D8u;
            // 0x1812dc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1812d8) {
            ctx->pc = 0x1812ECu;
            goto label_1812ec;
        }
    }
    ctx->pc = 0x1812E0u;
label_1812e0:
    // 0x1812e0: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1812e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_1812e4:
    // 0x1812e4: 0x60f809  jalr        $v1
label_1812e8:
    if (ctx->pc == 0x1812E8u) {
        ctx->pc = 0x1812E8u;
            // 0x1812e8: 0x8c44b488  lw          $a0, -0x4B78($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947976)));
        ctx->pc = 0x1812ECu;
        goto label_1812ec;
    }
    ctx->pc = 0x1812E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1812ECu);
        ctx->pc = 0x1812E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1812E4u;
            // 0x1812e8: 0x8c44b488  lw          $a0, -0x4B78($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947976)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1812ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1812ECu; }
            if (ctx->pc != 0x1812ECu) { return; }
        }
        }
    }
    ctx->pc = 0x1812ECu;
label_1812ec:
    // 0x1812ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1812ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1812f0:
    // 0x1812f0: 0x3e00008  jr          $ra
label_1812f4:
    if (ctx->pc == 0x1812F4u) {
        ctx->pc = 0x1812F4u;
            // 0x1812f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1812F8u;
        goto label_fallthrough_0x1812f0;
    }
    ctx->pc = 0x1812F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1812F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1812F0u;
            // 0x1812f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1812f0:
    ctx->pc = 0x1812F8u;
}
