#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B3B18
// Address: 0x1b3b18 - 0x1b3b58
void sub_001B3B18_0x1b3b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3B18_0x1b3b18");
#endif

    switch (ctx->pc) {
        case 0x1b3b18u: goto label_1b3b18;
        case 0x1b3b1cu: goto label_1b3b1c;
        case 0x1b3b20u: goto label_1b3b20;
        case 0x1b3b24u: goto label_1b3b24;
        case 0x1b3b28u: goto label_1b3b28;
        case 0x1b3b2cu: goto label_1b3b2c;
        case 0x1b3b30u: goto label_1b3b30;
        case 0x1b3b34u: goto label_1b3b34;
        case 0x1b3b38u: goto label_1b3b38;
        case 0x1b3b3cu: goto label_1b3b3c;
        case 0x1b3b40u: goto label_1b3b40;
        case 0x1b3b44u: goto label_1b3b44;
        case 0x1b3b48u: goto label_1b3b48;
        case 0x1b3b4cu: goto label_1b3b4c;
        case 0x1b3b50u: goto label_1b3b50;
        case 0x1b3b54u: goto label_1b3b54;
        default: break;
    }

    ctx->pc = 0x1b3b18u;

label_1b3b18:
    // 0x1b3b18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b3b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b3b1c:
    // 0x1b3b1c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1b3b1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b3b20:
    // 0x1b3b20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b3b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b3b24:
    // 0x1b3b24: 0x24860950  addiu       $a2, $a0, 0x950
    ctx->pc = 0x1b3b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 2384));
label_1b3b28:
    // 0x1b3b28: 0x8c820954  lw          $v0, 0x954($a0)
    ctx->pc = 0x1b3b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2388)));
label_1b3b2c:
    // 0x1b3b2c: 0x8c870d64  lw          $a3, 0xD64($a0)
    ctx->pc = 0x1b3b2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3428)));
label_1b3b30:
    // 0x1b3b30: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b3b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1b3b34:
    // 0x1b3b34: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1b3b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1b3b38:
    // 0x1b3b38: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
label_1b3b3c:
    if (ctx->pc == 0x1B3B3Cu) {
        ctx->pc = 0x1B3B3Cu;
            // 0x1b3b3c: 0xac820954  sw          $v0, 0x954($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2388), GPR_U32(ctx, 2));
        ctx->pc = 0x1B3B40u;
        goto label_1b3b40;
    }
    ctx->pc = 0x1B3B38u;
    {
        const bool branch_taken_0x1b3b38 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3B38u;
            // 0x1b3b3c: 0xac820954  sw          $v0, 0x954($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3b38) {
            ctx->pc = 0x1B3B48u;
            goto label_1b3b48;
        }
    }
    ctx->pc = 0x1B3B40u;
label_1b3b40:
    // 0x1b3b40: 0xe0f809  jalr        $a3
label_1b3b44:
    if (ctx->pc == 0x1B3B44u) {
        ctx->pc = 0x1B3B44u;
            // 0x1b3b44: 0x8c840d68  lw          $a0, 0xD68($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3432)));
        ctx->pc = 0x1B3B48u;
        goto label_1b3b48;
    }
    ctx->pc = 0x1B3B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x1B3B48u);
        ctx->pc = 0x1B3B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3B40u;
            // 0x1b3b44: 0x8c840d68  lw          $a0, 0xD68($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3432)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B3B48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B3B48u; }
            if (ctx->pc != 0x1B3B48u) { return; }
        }
        }
    }
    ctx->pc = 0x1B3B48u;
label_1b3b48:
    // 0x1b3b48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b3b4c:
    // 0x1b3b4c: 0x3e00008  jr          $ra
label_1b3b50:
    if (ctx->pc == 0x1B3B50u) {
        ctx->pc = 0x1B3B50u;
            // 0x1b3b50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1B3B54u;
        goto label_1b3b54;
    }
    ctx->pc = 0x1B3B4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3B4Cu;
            // 0x1b3b50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B3B54u;
label_1b3b54:
    // 0x1b3b54: 0x0  nop
    ctx->pc = 0x1b3b54u;
    // NOP
}
