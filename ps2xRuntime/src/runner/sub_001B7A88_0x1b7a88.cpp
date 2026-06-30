#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B7A88
// Address: 0x1b7a88 - 0x1b7af0
void sub_001B7A88_0x1b7a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7A88_0x1b7a88");
#endif

    switch (ctx->pc) {
        case 0x1b7aacu: goto label_1b7aac;
        case 0x1b7ab8u: goto label_1b7ab8;
        case 0x1b7ad8u: goto label_1b7ad8;
        default: break;
    }

    ctx->pc = 0x1b7a88u;

    // 0x1b7a88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b7a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b7a8c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b7a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b7a90: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b7a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b7a94: 0x24900d88  addiu       $s0, $a0, 0xD88
    ctx->pc = 0x1b7a94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 3464));
    // 0x1b7a98: 0x8c449b3c  lw          $a0, -0x64C4($v0)
    ctx->pc = 0x1b7a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941500)));
    // 0x1b7a9c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1b7a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1b7aa0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b7aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b7aa4: 0xc065a72  jal         func_1969C8
    ctx->pc = 0x1B7AA4u;
    SET_GPR_U32(ctx, 31, 0x1B7AACu);
    ctx->pc = 0x1969C8u;
    if (runtime->hasFunction(0x1969C8u)) {
        auto targetFn = runtime->lookupFunction(0x1969C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7AACu; }
        if (ctx->pc != 0x1B7AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001969C8_0x1969c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7AACu; }
        if (ctx->pc != 0x1B7AACu) { return; }
    }
    ctx->pc = 0x1B7AACu;
label_1b7aac:
    // 0x1b7aac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b7aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7ab0: 0xc06a25c  jal         func_1A8970
    ctx->pc = 0x1B7AB0u;
    SET_GPR_U32(ctx, 31, 0x1B7AB8u);
    ctx->pc = 0x1B7AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7AB0u;
            // 0x1b7ab4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8970u;
    if (runtime->hasFunction(0x1A8970u)) {
        auto targetFn = runtime->lookupFunction(0x1A8970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7AB8u; }
        if (ctx->pc != 0x1B7AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8970_0x1a8970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7AB8u; }
        if (ctx->pc != 0x1B7AB8u) { return; }
    }
    ctx->pc = 0x1B7AB8u;
label_1b7ab8:
    // 0x1b7ab8: 0x8e0302a8  lw          $v1, 0x2A8($s0)
    ctx->pc = 0x1b7ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
    // 0x1b7abc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b7abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7ac0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1b7ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1b7ac4: 0xae0302a8  sw          $v1, 0x2A8($s0)
    ctx->pc = 0x1b7ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 3));
    // 0x1b7ac8: 0x8e0202cc  lw          $v0, 0x2CC($s0)
    ctx->pc = 0x1b7ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 716)));
    // 0x1b7acc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1b7accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1b7ad0: 0xc06a262  jal         func_1A8988
    ctx->pc = 0x1B7AD0u;
    SET_GPR_U32(ctx, 31, 0x1B7AD8u);
    ctx->pc = 0x1B7AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7AD0u;
            // 0x1b7ad4: 0xae0202cc  sw          $v0, 0x2CC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8988u;
    if (runtime->hasFunction(0x1A8988u)) {
        auto targetFn = runtime->lookupFunction(0x1A8988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7AD8u; }
        if (ctx->pc != 0x1B7AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8988_0x1a8988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7AD8u; }
        if (ctx->pc != 0x1B7AD8u) { return; }
    }
    ctx->pc = 0x1B7AD8u;
label_1b7ad8:
    // 0x1b7ad8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b7ad8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7adc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1b7adcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b7ae0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b7ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7AE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7AE4u;
            // 0x1b7ae8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B7AECu;
    // 0x1b7aec: 0x0  nop
    ctx->pc = 0x1b7aecu;
    // NOP
}
