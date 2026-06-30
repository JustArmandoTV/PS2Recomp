#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AC5D8
// Address: 0x1ac5d8 - 0x1ac638
void sub_001AC5D8_0x1ac5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AC5D8_0x1ac5d8");
#endif

    switch (ctx->pc) {
        case 0x1ac604u: goto label_1ac604;
        case 0x1ac618u: goto label_1ac618;
        default: break;
    }

    ctx->pc = 0x1ac5d8u;

    // 0x1ac5d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ac5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ac5dc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1ac5dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac5e0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1ac5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1ac5e4: 0x24700dc4  addiu       $s0, $v1, 0xDC4
    ctx->pc = 0x1ac5e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3524));
    // 0x1ac5e8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1ac5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1ac5ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ac5ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac5f0: 0x8c650df0  lw          $a1, 0xDF0($v1)
    ctx->pc = 0x1ac5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3568)));
    // 0x1ac5f4: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1AC5F4u;
    {
        const bool branch_taken_0x1ac5f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC5F4u;
            // 0x1ac5f8: 0x24640df4  addiu       $a0, $v1, 0xDF4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3572));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac5f4) {
            ctx->pc = 0x1AC624u;
            goto label_1ac624;
        }
    }
    ctx->pc = 0x1AC5FCu;
    // 0x1ac5fc: 0xc06b5a8  jal         func_1AD6A0
    ctx->pc = 0x1AC5FCu;
    SET_GPR_U32(ctx, 31, 0x1AC604u);
    ctx->pc = 0x1AC600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC5FCu;
            // 0x1ac600: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD6A0u;
    if (runtime->hasFunction(0x1AD6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1AD6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC604u; }
        if (ctx->pc != 0x1AC604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD6A0_0x1ad6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC604u; }
        if (ctx->pc != 0x1AC604u) { return; }
    }
    ctx->pc = 0x1AC604u;
label_1ac604:
    // 0x1ac604: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ac604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac608: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1ac608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ac60c: 0x27a60024  addiu       $a2, $sp, 0x24
    ctx->pc = 0x1ac60cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1ac610: 0xc06dd7e  jal         func_1B75F8
    ctx->pc = 0x1AC610u;
    SET_GPR_U32(ctx, 31, 0x1AC618u);
    ctx->pc = 0x1AC614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC610u;
            // 0x1ac614: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B75F8u;
    if (runtime->hasFunction(0x1B75F8u)) {
        auto targetFn = runtime->lookupFunction(0x1B75F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC618u; }
        if (ctx->pc != 0x1AC618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B75F8_0x1b75f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC618u; }
        if (ctx->pc != 0x1AC618u) { return; }
    }
    ctx->pc = 0x1AC618u;
label_1ac618:
    // 0x1ac618: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ac618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ac61c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ac61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ac620: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ac620u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ac624:
    // 0x1ac624: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1ac624u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ac628: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1ac628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ac62c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC62Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC62Cu;
            // 0x1ac630: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AC634u;
    // 0x1ac634: 0x0  nop
    ctx->pc = 0x1ac634u;
    // NOP
}
