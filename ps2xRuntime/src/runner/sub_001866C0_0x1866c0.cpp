#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001866C0
// Address: 0x1866c0 - 0x186750
void sub_001866C0_0x1866c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001866C0_0x1866c0");
#endif

    switch (ctx->pc) {
        case 0x186734u: goto label_186734;
        case 0x18673cu: goto label_18673c;
        default: break;
    }

    ctx->pc = 0x1866c0u;

    // 0x1866c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1866c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1866c4: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1866C4u;
    {
        const bool branch_taken_0x1866c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1866C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1866C4u;
            // 0x1866c8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1866c4) {
            ctx->pc = 0x1866E8u;
            goto label_1866e8;
        }
    }
    ctx->pc = 0x1866CCu;
    // 0x1866cc: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1866ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x1866d0: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x1866d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x1866d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1866d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1866d8: 0x24847d00  addiu       $a0, $a0, 0x7D00
    ctx->pc = 0x1866d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32000));
    // 0x1866dc: 0x24a57c90  addiu       $a1, $a1, 0x7C90
    ctx->pc = 0x1866dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31888));
    // 0x1866e0: 0x80618a8  j           func_1862A0
    ctx->pc = 0x1866E0u;
    ctx->pc = 0x1866E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1866E0u;
            // 0x1866e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1862A0u;
    if (runtime->hasFunction(0x1862A0u)) {
        auto targetFn = runtime->lookupFunction(0x1862A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001862A0_0x1862a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1866E8u;
label_1866e8:
    // 0x1866e8: 0x80820004  lb          $v0, 0x4($a0)
    ctx->pc = 0x1866e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1866ec: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1866ECu;
    {
        const bool branch_taken_0x1866ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1866F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1866ECu;
            // 0x1866f0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1866ec) {
            ctx->pc = 0x186710u;
            goto label_186710;
        }
    }
    ctx->pc = 0x1866F4u;
    // 0x1866f4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1866f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x1866f8: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x1866f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x1866fc: 0x24847d10  addiu       $a0, $a0, 0x7D10
    ctx->pc = 0x1866fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32016));
    // 0x186700: 0x24a57cc0  addiu       $a1, $a1, 0x7CC0
    ctx->pc = 0x186700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31936));
    // 0x186704: 0x80618a8  j           func_1862A0
    ctx->pc = 0x186704u;
    ctx->pc = 0x186708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186704u;
            // 0x186708: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1862A0u;
    if (runtime->hasFunction(0x1862A0u)) {
        auto targetFn = runtime->lookupFunction(0x1862A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001862A0_0x1862a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x18670Cu;
    // 0x18670c: 0x0  nop
    ctx->pc = 0x18670cu;
    // NOP
label_186710:
    // 0x186710: 0xac86002c  sw          $a2, 0x2C($a0)
    ctx->pc = 0x186710u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 6));
    // 0x186714: 0xac850028  sw          $a1, 0x28($a0)
    ctx->pc = 0x186714u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 5));
    // 0x186718: 0x3e00008  jr          $ra
    ctx->pc = 0x186718u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18671Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186718u;
            // 0x18671c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186720u;
    // 0x186720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x186720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x186724: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x186724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x186728: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x186728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x18672c: 0xc06127c  jal         func_1849F0
    ctx->pc = 0x18672Cu;
    SET_GPR_U32(ctx, 31, 0x186734u);
    ctx->pc = 0x186730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18672Cu;
            // 0x186730: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1849F0u;
    if (runtime->hasFunction(0x1849F0u)) {
        auto targetFn = runtime->lookupFunction(0x1849F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186734u; }
        if (ctx->pc != 0x186734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001849F0_0x1849f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186734u; }
        if (ctx->pc != 0x186734u) { return; }
    }
    ctx->pc = 0x186734u;
label_186734:
    // 0x186734: 0xc0619d4  jal         func_186750
    ctx->pc = 0x186734u;
    SET_GPR_U32(ctx, 31, 0x18673Cu);
    ctx->pc = 0x186738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186734u;
            // 0x186738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186750u;
    if (runtime->hasFunction(0x186750u)) {
        auto targetFn = runtime->lookupFunction(0x186750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18673Cu; }
        if (ctx->pc != 0x18673Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186750_0x186750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18673Cu; }
        if (ctx->pc != 0x18673Cu) { return; }
    }
    ctx->pc = 0x18673Cu;
label_18673c:
    // 0x18673c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18673cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186740: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x186740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x186744: 0x8061282  j           func_184A08
    ctx->pc = 0x186744u;
    ctx->pc = 0x186748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186744u;
            // 0x186748: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A08u;
    if (runtime->hasFunction(0x184A08u)) {
        auto targetFn = runtime->lookupFunction(0x184A08u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00184A08_0x184a08(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x18674Cu;
    // 0x18674c: 0x0  nop
    ctx->pc = 0x18674cu;
    // NOP
}
