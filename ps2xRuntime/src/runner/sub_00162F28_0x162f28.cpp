#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00162F28
// Address: 0x162f28 - 0x162f58
void sub_00162F28_0x162f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162F28_0x162f28");
#endif

    switch (ctx->pc) {
        case 0x162f28u: goto label_162f28;
        case 0x162f2cu: goto label_162f2c;
        case 0x162f30u: goto label_162f30;
        case 0x162f34u: goto label_162f34;
        case 0x162f38u: goto label_162f38;
        case 0x162f3cu: goto label_162f3c;
        case 0x162f40u: goto label_162f40;
        case 0x162f44u: goto label_162f44;
        case 0x162f48u: goto label_162f48;
        case 0x162f4cu: goto label_162f4c;
        case 0x162f50u: goto label_162f50;
        case 0x162f54u: goto label_162f54;
        default: break;
    }

    ctx->pc = 0x162f28u;

label_162f28:
    // 0x162f28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x162f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_162f2c:
    // 0x162f2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x162f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_162f30:
    // 0x162f30: 0x8c8200b4  lw          $v0, 0xB4($a0)
    ctx->pc = 0x162f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
label_162f34:
    // 0x162f34: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_162f38:
    if (ctx->pc == 0x162F38u) {
        ctx->pc = 0x162F38u;
            // 0x162f38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162F3Cu;
        goto label_162f3c;
    }
    ctx->pc = 0x162F34u;
    {
        const bool branch_taken_0x162f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162F34u;
            // 0x162f38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162f34) {
            ctx->pc = 0x162F4Cu;
            goto label_162f4c;
        }
    }
    ctx->pc = 0x162F3Cu;
label_162f3c:
    // 0x162f3c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x162f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_162f40:
    // 0x162f40: 0x8c435fd0  lw          $v1, 0x5FD0($v0)
    ctx->pc = 0x162f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24528)));
label_162f44:
    // 0x162f44: 0x60f809  jalr        $v1
label_162f48:
    if (ctx->pc == 0x162F48u) {
        ctx->pc = 0x162F4Cu;
        goto label_162f4c;
    }
    ctx->pc = 0x162F44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x162F4Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x162F4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x162F4Cu; }
            if (ctx->pc != 0x162F4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x162F4Cu;
label_162f4c:
    // 0x162f4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x162f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_162f50:
    // 0x162f50: 0x3e00008  jr          $ra
label_162f54:
    if (ctx->pc == 0x162F54u) {
        ctx->pc = 0x162F54u;
            // 0x162f54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x162F58u;
        goto label_fallthrough_0x162f50;
    }
    ctx->pc = 0x162F50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162F50u;
            // 0x162f54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x162f50:
    ctx->pc = 0x162F58u;
}
