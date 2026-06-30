#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C1840
// Address: 0x1c1840 - 0x1c1870
void sub_001C1840_0x1c1840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1840_0x1c1840");
#endif

    switch (ctx->pc) {
        case 0x1c1840u: goto label_1c1840;
        case 0x1c1844u: goto label_1c1844;
        case 0x1c1848u: goto label_1c1848;
        case 0x1c184cu: goto label_1c184c;
        case 0x1c1850u: goto label_1c1850;
        case 0x1c1854u: goto label_1c1854;
        case 0x1c1858u: goto label_1c1858;
        case 0x1c185cu: goto label_1c185c;
        case 0x1c1860u: goto label_1c1860;
        case 0x1c1864u: goto label_1c1864;
        case 0x1c1868u: goto label_1c1868;
        case 0x1c186cu: goto label_1c186c;
        default: break;
    }

    ctx->pc = 0x1c1840u;

label_1c1840:
    // 0x1c1840: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c1840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1c1844:
    // 0x1c1844: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c1844u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c1848:
    // 0x1c1848: 0x8c42a4d0  lw          $v0, -0x5B30($v0)
    ctx->pc = 0x1c1848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943952)));
label_1c184c:
    // 0x1c184c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1c1850:
    if (ctx->pc == 0x1C1850u) {
        ctx->pc = 0x1C1850u;
            // 0x1c1850: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1C1854u;
        goto label_1c1854;
    }
    ctx->pc = 0x1C184Cu;
    {
        const bool branch_taken_0x1c184c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C184Cu;
            // 0x1c1850: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c184c) {
            ctx->pc = 0x1C1860u;
            goto label_1c1860;
        }
    }
    ctx->pc = 0x1C1854u;
label_1c1854:
    // 0x1c1854: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1c1854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1c1858:
    // 0x1c1858: 0x40f809  jalr        $v0
label_1c185c:
    if (ctx->pc == 0x1C185Cu) {
        ctx->pc = 0x1C1860u;
        goto label_1c1860;
    }
    ctx->pc = 0x1C1858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C1860u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C1860u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C1860u; }
            if (ctx->pc != 0x1C1860u) { return; }
        }
        }
    }
    ctx->pc = 0x1C1860u;
label_1c1860:
    // 0x1c1860: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c1860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1864:
    // 0x1c1864: 0x3e00008  jr          $ra
label_1c1868:
    if (ctx->pc == 0x1C1868u) {
        ctx->pc = 0x1C1868u;
            // 0x1c1868: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C186Cu;
        goto label_1c186c;
    }
    ctx->pc = 0x1C1864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1864u;
            // 0x1c1868: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C186Cu;
label_1c186c:
    // 0x1c186c: 0x0  nop
    ctx->pc = 0x1c186cu;
    // NOP
}
