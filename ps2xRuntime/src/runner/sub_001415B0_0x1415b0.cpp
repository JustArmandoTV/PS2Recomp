#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001415B0
// Address: 0x1415b0 - 0x1415f0
void sub_001415B0_0x1415b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001415B0_0x1415b0");
#endif

    switch (ctx->pc) {
        case 0x1415b0u: goto label_1415b0;
        case 0x1415b4u: goto label_1415b4;
        case 0x1415b8u: goto label_1415b8;
        case 0x1415bcu: goto label_1415bc;
        case 0x1415c0u: goto label_1415c0;
        case 0x1415c4u: goto label_1415c4;
        case 0x1415c8u: goto label_1415c8;
        case 0x1415ccu: goto label_1415cc;
        case 0x1415d0u: goto label_1415d0;
        case 0x1415d4u: goto label_1415d4;
        case 0x1415d8u: goto label_1415d8;
        case 0x1415dcu: goto label_1415dc;
        case 0x1415e0u: goto label_1415e0;
        case 0x1415e4u: goto label_1415e4;
        case 0x1415e8u: goto label_1415e8;
        case 0x1415ecu: goto label_1415ec;
        default: break;
    }

    ctx->pc = 0x1415b0u;

label_1415b0:
    // 0x1415b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1415b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1415b4:
    // 0x1415b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1415b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1415b8:
    // 0x1415b8: 0x8f8281d8  lw          $v0, -0x7E28($gp)
    ctx->pc = 0x1415b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935000)));
label_1415bc:
    // 0x1415bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1415c0:
    if (ctx->pc == 0x1415C0u) {
        ctx->pc = 0x1415C4u;
        goto label_1415c4;
    }
    ctx->pc = 0x1415BCu;
    {
        const bool branch_taken_0x1415bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1415bc) {
            ctx->pc = 0x1415D4u;
            goto label_1415d4;
        }
    }
    ctx->pc = 0x1415C4u;
label_1415c4:
    // 0x1415c4: 0x40f809  jalr        $v0
label_1415c8:
    if (ctx->pc == 0x1415C8u) {
        ctx->pc = 0x1415CCu;
        goto label_1415cc;
    }
    ctx->pc = 0x1415C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1415CCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1415CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1415CCu; }
            if (ctx->pc != 0x1415CCu) { return; }
        }
        }
    }
    ctx->pc = 0x1415CCu;
label_1415cc:
    // 0x1415cc: 0x10000004  b           . + 4 + (0x4 << 2)
label_1415d0:
    if (ctx->pc == 0x1415D0u) {
        ctx->pc = 0x1415D0u;
            // 0x1415d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1415D4u;
        goto label_1415d4;
    }
    ctx->pc = 0x1415CCu;
    {
        const bool branch_taken_0x1415cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1415D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1415CCu;
            // 0x1415d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1415cc) {
            ctx->pc = 0x1415E0u;
            goto label_1415e0;
        }
    }
    ctx->pc = 0x1415D4u;
label_1415d4:
    // 0x1415d4: 0xc053200  jal         func_14C800
label_1415d8:
    if (ctx->pc == 0x1415D8u) {
        ctx->pc = 0x1415DCu;
        goto label_1415dc;
    }
    ctx->pc = 0x1415D4u;
    SET_GPR_U32(ctx, 31, 0x1415DCu);
    ctx->pc = 0x14C800u;
    if (runtime->hasFunction(0x14C800u)) {
        auto targetFn = runtime->lookupFunction(0x14C800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1415DCu; }
        if (ctx->pc != 0x1415DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C800_0x14c800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1415DCu; }
        if (ctx->pc != 0x1415DCu) { return; }
    }
    ctx->pc = 0x1415DCu;
label_1415dc:
    // 0x1415dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1415dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1415e0:
    // 0x1415e0: 0x3e00008  jr          $ra
label_1415e4:
    if (ctx->pc == 0x1415E4u) {
        ctx->pc = 0x1415E4u;
            // 0x1415e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1415E8u;
        goto label_1415e8;
    }
    ctx->pc = 0x1415E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1415E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1415E0u;
            // 0x1415e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1415E8u;
label_1415e8:
    // 0x1415e8: 0x0  nop
    ctx->pc = 0x1415e8u;
    // NOP
label_1415ec:
    // 0x1415ec: 0x0  nop
    ctx->pc = 0x1415ecu;
    // NOP
}
