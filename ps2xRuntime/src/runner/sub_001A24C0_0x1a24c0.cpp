#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A24C0
// Address: 0x1a24c0 - 0x1a24f0
void sub_001A24C0_0x1a24c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A24C0_0x1a24c0");
#endif

    switch (ctx->pc) {
        case 0x1a24c0u: goto label_1a24c0;
        case 0x1a24c4u: goto label_1a24c4;
        case 0x1a24c8u: goto label_1a24c8;
        case 0x1a24ccu: goto label_1a24cc;
        case 0x1a24d0u: goto label_1a24d0;
        case 0x1a24d4u: goto label_1a24d4;
        case 0x1a24d8u: goto label_1a24d8;
        case 0x1a24dcu: goto label_1a24dc;
        case 0x1a24e0u: goto label_1a24e0;
        case 0x1a24e4u: goto label_1a24e4;
        case 0x1a24e8u: goto label_1a24e8;
        case 0x1a24ecu: goto label_1a24ec;
        default: break;
    }

    ctx->pc = 0x1a24c0u;

label_1a24c0:
    // 0x1a24c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a24c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a24c4:
    // 0x1a24c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a24c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a24c8:
    // 0x1a24c8: 0xc066c68  jal         func_19B1A0
label_1a24cc:
    if (ctx->pc == 0x1A24CCu) {
        ctx->pc = 0x1A24D0u;
        goto label_1a24d0;
    }
    ctx->pc = 0x1A24C8u;
    SET_GPR_U32(ctx, 31, 0x1A24D0u);
    ctx->pc = 0x19B1A0u;
    if (runtime->hasFunction(0x19B1A0u)) {
        auto targetFn = runtime->lookupFunction(0x19B1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A24D0u; }
        if (ctx->pc != 0x1A24D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B1A0_0x19b1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A24D0u; }
        if (ctx->pc != 0x1A24D0u) { return; }
    }
    ctx->pc = 0x1A24D0u;
label_1a24d0:
    // 0x1a24d0: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x1a24d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_1a24d4:
    // 0x1a24d4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1a24d8:
    if (ctx->pc == 0x1A24D8u) {
        ctx->pc = 0x1A24D8u;
            // 0x1a24d8: 0x8c440054  lw          $a0, 0x54($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
        ctx->pc = 0x1A24DCu;
        goto label_1a24dc;
    }
    ctx->pc = 0x1A24D4u;
    {
        const bool branch_taken_0x1a24d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A24D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A24D4u;
            // 0x1a24d8: 0x8c440054  lw          $a0, 0x54($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a24d4) {
            ctx->pc = 0x1A24E4u;
            goto label_1a24e4;
        }
    }
    ctx->pc = 0x1A24DCu;
label_1a24dc:
    // 0x1a24dc: 0x60f809  jalr        $v1
label_1a24e0:
    if (ctx->pc == 0x1A24E0u) {
        ctx->pc = 0x1A24E4u;
        goto label_1a24e4;
    }
    ctx->pc = 0x1A24DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A24E4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A24E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A24E4u; }
            if (ctx->pc != 0x1A24E4u) { return; }
        }
        }
    }
    ctx->pc = 0x1A24E4u;
label_1a24e4:
    // 0x1a24e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a24e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a24e8:
    // 0x1a24e8: 0x3e00008  jr          $ra
label_1a24ec:
    if (ctx->pc == 0x1A24ECu) {
        ctx->pc = 0x1A24ECu;
            // 0x1a24ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1A24F0u;
        goto label_fallthrough_0x1a24e8;
    }
    ctx->pc = 0x1A24E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A24ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A24E8u;
            // 0x1a24ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1a24e8:
    ctx->pc = 0x1A24F0u;
}
