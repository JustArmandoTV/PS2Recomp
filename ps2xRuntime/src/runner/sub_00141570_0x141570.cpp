#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00141570
// Address: 0x141570 - 0x1415b0
void sub_00141570_0x141570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141570_0x141570");
#endif

    switch (ctx->pc) {
        case 0x141570u: goto label_141570;
        case 0x141574u: goto label_141574;
        case 0x141578u: goto label_141578;
        case 0x14157cu: goto label_14157c;
        case 0x141580u: goto label_141580;
        case 0x141584u: goto label_141584;
        case 0x141588u: goto label_141588;
        case 0x14158cu: goto label_14158c;
        case 0x141590u: goto label_141590;
        case 0x141594u: goto label_141594;
        case 0x141598u: goto label_141598;
        case 0x14159cu: goto label_14159c;
        case 0x1415a0u: goto label_1415a0;
        case 0x1415a4u: goto label_1415a4;
        case 0x1415a8u: goto label_1415a8;
        case 0x1415acu: goto label_1415ac;
        default: break;
    }

    ctx->pc = 0x141570u;

label_141570:
    // 0x141570: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x141570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_141574:
    // 0x141574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x141574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_141578:
    // 0x141578: 0x8f8281d8  lw          $v0, -0x7E28($gp)
    ctx->pc = 0x141578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935000)));
label_14157c:
    // 0x14157c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_141580:
    if (ctx->pc == 0x141580u) {
        ctx->pc = 0x141584u;
        goto label_141584;
    }
    ctx->pc = 0x14157Cu;
    {
        const bool branch_taken_0x14157c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14157c) {
            ctx->pc = 0x141594u;
            goto label_141594;
        }
    }
    ctx->pc = 0x141584u;
label_141584:
    // 0x141584: 0x40f809  jalr        $v0
label_141588:
    if (ctx->pc == 0x141588u) {
        ctx->pc = 0x14158Cu;
        goto label_14158c;
    }
    ctx->pc = 0x141584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14158Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x14158Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x14158Cu; }
            if (ctx->pc != 0x14158Cu) { return; }
        }
        }
    }
    ctx->pc = 0x14158Cu;
label_14158c:
    // 0x14158c: 0x10000004  b           . + 4 + (0x4 << 2)
label_141590:
    if (ctx->pc == 0x141590u) {
        ctx->pc = 0x141590u;
            // 0x141590: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x141594u;
        goto label_141594;
    }
    ctx->pc = 0x14158Cu;
    {
        const bool branch_taken_0x14158c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14158Cu;
            // 0x141590: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14158c) {
            ctx->pc = 0x1415A0u;
            goto label_1415a0;
        }
    }
    ctx->pc = 0x141594u;
label_141594:
    // 0x141594: 0xc050388  jal         func_140E20
label_141598:
    if (ctx->pc == 0x141598u) {
        ctx->pc = 0x14159Cu;
        goto label_14159c;
    }
    ctx->pc = 0x141594u;
    SET_GPR_U32(ctx, 31, 0x14159Cu);
    ctx->pc = 0x140E20u;
    if (runtime->hasFunction(0x140E20u)) {
        auto targetFn = runtime->lookupFunction(0x140E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14159Cu; }
        if (ctx->pc != 0x14159Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140E20_0x140e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14159Cu; }
        if (ctx->pc != 0x14159Cu) { return; }
    }
    ctx->pc = 0x14159Cu;
label_14159c:
    // 0x14159c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14159cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1415a0:
    // 0x1415a0: 0x3e00008  jr          $ra
label_1415a4:
    if (ctx->pc == 0x1415A4u) {
        ctx->pc = 0x1415A4u;
            // 0x1415a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1415A8u;
        goto label_1415a8;
    }
    ctx->pc = 0x1415A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1415A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1415A0u;
            // 0x1415a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1415A8u;
label_1415a8:
    // 0x1415a8: 0x0  nop
    ctx->pc = 0x1415a8u;
    // NOP
label_1415ac:
    // 0x1415ac: 0x0  nop
    ctx->pc = 0x1415acu;
    // NOP
}
