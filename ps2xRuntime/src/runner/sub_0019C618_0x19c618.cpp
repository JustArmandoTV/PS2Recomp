#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019C618
// Address: 0x19c618 - 0x19c668
void sub_0019C618_0x19c618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C618_0x19c618");
#endif

    switch (ctx->pc) {
        case 0x19c63cu: goto label_19c63c;
        default: break;
    }

    ctx->pc = 0x19c618u;

    // 0x19c618: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19c618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19c61c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19c61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19c620: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19c620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c624: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19c624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19c628: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x19c628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x19c62c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19C62Cu;
    {
        const bool branch_taken_0x19c62c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C62Cu;
            // 0x19c630: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c62c) {
            ctx->pc = 0x19C658u;
            goto label_19c658;
        }
    }
    ctx->pc = 0x19C634u;
    // 0x19c634: 0xc068b98  jal         func_1A2E60
    ctx->pc = 0x19C634u;
    SET_GPR_U32(ctx, 31, 0x19C63Cu);
    ctx->pc = 0x1A2E60u;
    if (runtime->hasFunction(0x1A2E60u)) {
        auto targetFn = runtime->lookupFunction(0x1A2E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C63Cu; }
        if (ctx->pc != 0x19C63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2E60_0x1a2e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C63Cu; }
        if (ctx->pc != 0x19C63Cu) { return; }
    }
    ctx->pc = 0x19C63Cu;
label_19c63c:
    // 0x19c63c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19c63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19c640: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19C640u;
    {
        const bool branch_taken_0x19c640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19C644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C640u;
            // 0x19c644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c640) {
            ctx->pc = 0x19C658u;
            goto label_19c658;
        }
    }
    ctx->pc = 0x19C648u;
    // 0x19c648: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19c648u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c64c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19c64cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19c650: 0x8066f56  j           func_19BD58
    ctx->pc = 0x19C650u;
    ctx->pc = 0x19C654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C650u;
            // 0x19c654: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BD58u;
    if (runtime->hasFunction(0x19BD58u)) {
        auto targetFn = runtime->lookupFunction(0x19BD58u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0019BD58_0x19bd58(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19C658u;
label_19c658:
    // 0x19c658: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19c658u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c65c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19c65cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19c660: 0x3e00008  jr          $ra
    ctx->pc = 0x19C660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C660u;
            // 0x19c664: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19C668u;
}
