#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A8720
// Address: 0x1a8720 - 0x1a8760
void sub_001A8720_0x1a8720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8720_0x1a8720");
#endif

    switch (ctx->pc) {
        case 0x1a8720u: goto label_1a8720;
        case 0x1a8724u: goto label_1a8724;
        case 0x1a8728u: goto label_1a8728;
        case 0x1a872cu: goto label_1a872c;
        case 0x1a8730u: goto label_1a8730;
        case 0x1a8734u: goto label_1a8734;
        case 0x1a8738u: goto label_1a8738;
        case 0x1a873cu: goto label_1a873c;
        case 0x1a8740u: goto label_1a8740;
        case 0x1a8744u: goto label_1a8744;
        case 0x1a8748u: goto label_1a8748;
        case 0x1a874cu: goto label_1a874c;
        case 0x1a8750u: goto label_1a8750;
        case 0x1a8754u: goto label_1a8754;
        case 0x1a8758u: goto label_1a8758;
        case 0x1a875cu: goto label_1a875c;
        default: break;
    }

    ctx->pc = 0x1a8720u;

label_1a8720:
    // 0x1a8720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a8720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a8724:
    // 0x1a8724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a8724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a8728:
    // 0x1a8728: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1a8728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1a872c:
    // 0x1a872c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1a8730:
    if (ctx->pc == 0x1A8730u) {
        ctx->pc = 0x1A8730u;
            // 0x1a8730: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A8734u;
        goto label_1a8734;
    }
    ctx->pc = 0x1A872Cu;
    {
        const bool branch_taken_0x1a872c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A872Cu;
            // 0x1a8730: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a872c) {
            ctx->pc = 0x1A8738u;
            goto label_1a8738;
        }
    }
    ctx->pc = 0x1A8734u;
label_1a8734:
    // 0x1a8734: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1a8734u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_1a8738:
    // 0x1a8738: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1a873c:
    if (ctx->pc == 0x1A873Cu) {
        ctx->pc = 0x1A873Cu;
            // 0x1a873c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1A8740u;
        goto label_1a8740;
    }
    ctx->pc = 0x1A8738u;
    {
        const bool branch_taken_0x1a8738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A873Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8738u;
            // 0x1a873c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8738) {
            ctx->pc = 0x1A8758u;
            goto label_1a8758;
        }
    }
    ctx->pc = 0x1A8740u;
label_1a8740:
    // 0x1a8740: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a8740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a8744:
    // 0x1a8744: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a8748:
    if (ctx->pc == 0x1A8748u) {
        ctx->pc = 0x1A874Cu;
        goto label_1a874c;
    }
    ctx->pc = 0x1A8744u;
    {
        const bool branch_taken_0x1a8744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8744) {
            ctx->pc = 0x1A8758u;
            goto label_1a8758;
        }
    }
    ctx->pc = 0x1A874Cu;
label_1a874c:
    // 0x1a874c: 0x40f809  jalr        $v0
label_1a8750:
    if (ctx->pc == 0x1A8750u) {
        ctx->pc = 0x1A8750u;
            // 0x1a8750: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x1A8754u;
        goto label_1a8754;
    }
    ctx->pc = 0x1A874Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A8754u);
        ctx->pc = 0x1A8750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A874Cu;
            // 0x1a8750: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A8754u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A8754u; }
            if (ctx->pc != 0x1A8754u) { return; }
        }
        }
    }
    ctx->pc = 0x1A8754u;
label_1a8754:
    // 0x1a8754: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a8754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a8758:
    // 0x1a8758: 0x3e00008  jr          $ra
label_1a875c:
    if (ctx->pc == 0x1A875Cu) {
        ctx->pc = 0x1A875Cu;
            // 0x1a875c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1A8760u;
        goto label_fallthrough_0x1a8758;
    }
    ctx->pc = 0x1A8758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A875Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8758u;
            // 0x1a875c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1a8758:
    ctx->pc = 0x1A8760u;
}
