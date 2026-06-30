#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BF6D0
// Address: 0x3bf6d0 - 0x3bf710
void sub_003BF6D0_0x3bf6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF6D0_0x3bf6d0");
#endif

    switch (ctx->pc) {
        case 0x3bf6d0u: goto label_3bf6d0;
        case 0x3bf6d4u: goto label_3bf6d4;
        case 0x3bf6d8u: goto label_3bf6d8;
        case 0x3bf6dcu: goto label_3bf6dc;
        case 0x3bf6e0u: goto label_3bf6e0;
        case 0x3bf6e4u: goto label_3bf6e4;
        case 0x3bf6e8u: goto label_3bf6e8;
        case 0x3bf6ecu: goto label_3bf6ec;
        case 0x3bf6f0u: goto label_3bf6f0;
        case 0x3bf6f4u: goto label_3bf6f4;
        case 0x3bf6f8u: goto label_3bf6f8;
        case 0x3bf6fcu: goto label_3bf6fc;
        case 0x3bf700u: goto label_3bf700;
        case 0x3bf704u: goto label_3bf704;
        case 0x3bf708u: goto label_3bf708;
        case 0x3bf70cu: goto label_3bf70c;
        default: break;
    }

    ctx->pc = 0x3bf6d0u;

label_3bf6d0:
    // 0x3bf6d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3bf6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3bf6d4:
    // 0x3bf6d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3bf6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3bf6d8:
    // 0x3bf6d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bf6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3bf6dc:
    // 0x3bf6dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3bf6dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3bf6e0:
    // 0x3bf6e0: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x3bf6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_3bf6e4:
    // 0x3bf6e4: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_3bf6e8:
    if (ctx->pc == 0x3BF6E8u) {
        ctx->pc = 0x3BF6E8u;
            // 0x3bf6e8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3BF6ECu;
        goto label_3bf6ec;
    }
    ctx->pc = 0x3BF6E4u;
    {
        const bool branch_taken_0x3bf6e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bf6e4) {
            ctx->pc = 0x3BF6E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF6E4u;
            // 0x3bf6e8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BF704u;
            goto label_3bf704;
        }
    }
    ctx->pc = 0x3BF6ECu;
label_3bf6ec:
    // 0x3bf6ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3bf6ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3bf6f0:
    // 0x3bf6f0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3bf6f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3bf6f4:
    // 0x3bf6f4: 0x320f809  jalr        $t9
label_3bf6f8:
    if (ctx->pc == 0x3BF6F8u) {
        ctx->pc = 0x3BF6F8u;
            // 0x3bf6f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BF6FCu;
        goto label_3bf6fc;
    }
    ctx->pc = 0x3BF6F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3BF6FCu);
        ctx->pc = 0x3BF6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF6F4u;
            // 0x3bf6f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3BF6FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3BF6FCu; }
            if (ctx->pc != 0x3BF6FCu) { return; }
        }
        }
    }
    ctx->pc = 0x3BF6FCu;
label_3bf6fc:
    // 0x3bf6fc: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x3bf6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_3bf700:
    // 0x3bf700: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3bf700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3bf704:
    // 0x3bf704: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bf704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3bf708:
    // 0x3bf708: 0x3e00008  jr          $ra
label_3bf70c:
    if (ctx->pc == 0x3BF70Cu) {
        ctx->pc = 0x3BF70Cu;
            // 0x3bf70c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3BF710u;
        goto label_fallthrough_0x3bf708;
    }
    ctx->pc = 0x3BF708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF708u;
            // 0x3bf70c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3bf708:
    ctx->pc = 0x3BF710u;
}
