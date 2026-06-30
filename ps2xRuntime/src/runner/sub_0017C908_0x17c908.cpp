#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017C908
// Address: 0x17c908 - 0x17c938
void sub_0017C908_0x17c908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C908_0x17c908");
#endif

    switch (ctx->pc) {
        case 0x17c908u: goto label_17c908;
        case 0x17c90cu: goto label_17c90c;
        case 0x17c910u: goto label_17c910;
        case 0x17c914u: goto label_17c914;
        case 0x17c918u: goto label_17c918;
        case 0x17c91cu: goto label_17c91c;
        case 0x17c920u: goto label_17c920;
        case 0x17c924u: goto label_17c924;
        case 0x17c928u: goto label_17c928;
        case 0x17c92cu: goto label_17c92c;
        case 0x17c930u: goto label_17c930;
        case 0x17c934u: goto label_17c934;
        default: break;
    }

    ctx->pc = 0x17c908u;

label_17c908:
    // 0x17c908: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17c908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_17c90c:
    // 0x17c90c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17c90cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_17c910:
    // 0x17c910: 0x8c435854  lw          $v1, 0x5854($v0)
    ctx->pc = 0x17c910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22612)));
label_17c914:
    // 0x17c914: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x17c914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17c918:
    // 0x17c918: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_17c91c:
    if (ctx->pc == 0x17C91Cu) {
        ctx->pc = 0x17C91Cu;
            // 0x17c91c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x17C920u;
        goto label_17c920;
    }
    ctx->pc = 0x17C918u;
    {
        const bool branch_taken_0x17c918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C918u;
            // 0x17c91c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c918) {
            ctx->pc = 0x17C92Cu;
            goto label_17c92c;
        }
    }
    ctx->pc = 0x17C920u;
label_17c920:
    // 0x17c920: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17c920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_17c924:
    // 0x17c924: 0x60f809  jalr        $v1
label_17c928:
    if (ctx->pc == 0x17C928u) {
        ctx->pc = 0x17C928u;
            // 0x17c928: 0x8c445858  lw          $a0, 0x5858($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22616)));
        ctx->pc = 0x17C92Cu;
        goto label_17c92c;
    }
    ctx->pc = 0x17C924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17C92Cu);
        ctx->pc = 0x17C928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C924u;
            // 0x17c928: 0x8c445858  lw          $a0, 0x5858($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22616)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17C92Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17C92Cu; }
            if (ctx->pc != 0x17C92Cu) { return; }
        }
        }
    }
    ctx->pc = 0x17C92Cu;
label_17c92c:
    // 0x17c92c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17c92cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17c930:
    // 0x17c930: 0x3e00008  jr          $ra
label_17c934:
    if (ctx->pc == 0x17C934u) {
        ctx->pc = 0x17C934u;
            // 0x17c934: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x17C938u;
        goto label_fallthrough_0x17c930;
    }
    ctx->pc = 0x17C930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C930u;
            // 0x17c934: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x17c930:
    ctx->pc = 0x17C938u;
}
