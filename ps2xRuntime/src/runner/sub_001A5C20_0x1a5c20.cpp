#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A5C20
// Address: 0x1a5c20 - 0x1a5c78
void sub_001A5C20_0x1a5c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5C20_0x1a5c20");
#endif

    switch (ctx->pc) {
        case 0x1a5c20u: goto label_1a5c20;
        case 0x1a5c24u: goto label_1a5c24;
        case 0x1a5c28u: goto label_1a5c28;
        case 0x1a5c2cu: goto label_1a5c2c;
        case 0x1a5c30u: goto label_1a5c30;
        case 0x1a5c34u: goto label_1a5c34;
        case 0x1a5c38u: goto label_1a5c38;
        case 0x1a5c3cu: goto label_1a5c3c;
        case 0x1a5c40u: goto label_1a5c40;
        case 0x1a5c44u: goto label_1a5c44;
        case 0x1a5c48u: goto label_1a5c48;
        case 0x1a5c4cu: goto label_1a5c4c;
        case 0x1a5c50u: goto label_1a5c50;
        case 0x1a5c54u: goto label_1a5c54;
        case 0x1a5c58u: goto label_1a5c58;
        case 0x1a5c5cu: goto label_1a5c5c;
        case 0x1a5c60u: goto label_1a5c60;
        case 0x1a5c64u: goto label_1a5c64;
        case 0x1a5c68u: goto label_1a5c68;
        case 0x1a5c6cu: goto label_1a5c6c;
        case 0x1a5c70u: goto label_1a5c70;
        case 0x1a5c74u: goto label_1a5c74;
        default: break;
    }

    ctx->pc = 0x1a5c20u;

label_1a5c20:
    // 0x1a5c20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a5c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a5c24:
    // 0x1a5c24: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a5c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1a5c28:
    // 0x1a5c28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a5c28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a5c2c:
    // 0x1a5c2c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1a5c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1a5c30:
    // 0x1a5c30: 0x2cb10001  sltiu       $s1, $a1, 0x1
    ctx->pc = 0x1a5c30u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1a5c34:
    // 0x1a5c34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a5c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a5c38:
    // 0x1a5c38: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a5c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a5c3c:
    // 0x1a5c3c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1a5c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1a5c40:
    // 0x1a5c40: 0x40f809  jalr        $v0
label_1a5c44:
    if (ctx->pc == 0x1A5C44u) {
        ctx->pc = 0x1A5C44u;
            // 0x1a5c44: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5C48u;
        goto label_1a5c48;
    }
    ctx->pc = 0x1A5C40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A5C48u);
        ctx->pc = 0x1A5C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5C40u;
            // 0x1a5c44: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A5C48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A5C48u; }
            if (ctx->pc != 0x1A5C48u) { return; }
        }
        }
    }
    ctx->pc = 0x1A5C48u;
label_1a5c48:
    // 0x1a5c48: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a5c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a5c4c:
    // 0x1a5c4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a5c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a5c50:
    // 0x1a5c50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a5c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a5c54:
    // 0x1a5c54: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a5c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1a5c58:
    // 0x1a5c58: 0x40f809  jalr        $v0
label_1a5c5c:
    if (ctx->pc == 0x1A5C5Cu) {
        ctx->pc = 0x1A5C5Cu;
            // 0x1a5c5c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5C60u;
        goto label_1a5c60;
    }
    ctx->pc = 0x1A5C58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A5C60u);
        ctx->pc = 0x1A5C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5C58u;
            // 0x1a5c5c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A5C60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A5C60u; }
            if (ctx->pc != 0x1A5C60u) { return; }
        }
        }
    }
    ctx->pc = 0x1A5C60u;
label_1a5c60:
    // 0x1a5c60: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1a5c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1a5c64:
    // 0x1a5c64: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a5c64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a5c68:
    // 0x1a5c68: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1a5c68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1a5c6c:
    // 0x1a5c6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a5c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a5c70:
    // 0x1a5c70: 0x3e00008  jr          $ra
label_1a5c74:
    if (ctx->pc == 0x1A5C74u) {
        ctx->pc = 0x1A5C74u;
            // 0x1a5c74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1A5C78u;
        goto label_fallthrough_0x1a5c70;
    }
    ctx->pc = 0x1A5C70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5C70u;
            // 0x1a5c74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1a5c70:
    ctx->pc = 0x1A5C78u;
}
