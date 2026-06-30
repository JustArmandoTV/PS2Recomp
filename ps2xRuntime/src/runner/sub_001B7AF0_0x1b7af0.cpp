#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B7AF0
// Address: 0x1b7af0 - 0x1b7b40
void sub_001B7AF0_0x1b7af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7AF0_0x1b7af0");
#endif

    switch (ctx->pc) {
        case 0x1b7b0cu: goto label_1b7b0c;
        case 0x1b7b18u: goto label_1b7b18;
        case 0x1b7b2cu: goto label_1b7b2c;
        default: break;
    }

    ctx->pc = 0x1b7af0u;

    // 0x1b7af0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b7af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b7af4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b7af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b7af8: 0x24900d88  addiu       $s0, $a0, 0xD88
    ctx->pc = 0x1b7af8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 3464));
    // 0x1b7afc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1b7afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1b7b00: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b7b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b7b04: 0xc065a72  jal         func_1969C8
    ctx->pc = 0x1B7B04u;
    SET_GPR_U32(ctx, 31, 0x1B7B0Cu);
    ctx->pc = 0x1B7B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7B04u;
            // 0x1b7b08: 0x8e0402e8  lw          $a0, 0x2E8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 744)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1969C8u;
    if (runtime->hasFunction(0x1969C8u)) {
        auto targetFn = runtime->lookupFunction(0x1969C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7B0Cu; }
        if (ctx->pc != 0x1B7B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001969C8_0x1969c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7B0Cu; }
        if (ctx->pc != 0x1B7B0Cu) { return; }
    }
    ctx->pc = 0x1B7B0Cu;
label_1b7b0c:
    // 0x1b7b0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b7b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7b10: 0xc06a25c  jal         func_1A8970
    ctx->pc = 0x1B7B10u;
    SET_GPR_U32(ctx, 31, 0x1B7B18u);
    ctx->pc = 0x1B7B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7B10u;
            // 0x1b7b14: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8970u;
    if (runtime->hasFunction(0x1A8970u)) {
        auto targetFn = runtime->lookupFunction(0x1A8970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7B18u; }
        if (ctx->pc != 0x1B7B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8970_0x1a8970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7B18u; }
        if (ctx->pc != 0x1B7B18u) { return; }
    }
    ctx->pc = 0x1B7B18u;
label_1b7b18:
    // 0x1b7b18: 0x8e0202e4  lw          $v0, 0x2E4($s0)
    ctx->pc = 0x1b7b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 740)));
    // 0x1b7b1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b7b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7b20: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1b7b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1b7b24: 0xc06a262  jal         func_1A8988
    ctx->pc = 0x1B7B24u;
    SET_GPR_U32(ctx, 31, 0x1B7B2Cu);
    ctx->pc = 0x1B7B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7B24u;
            // 0x1b7b28: 0xae0202e4  sw          $v0, 0x2E4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 740), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8988u;
    if (runtime->hasFunction(0x1A8988u)) {
        auto targetFn = runtime->lookupFunction(0x1A8988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7B2Cu; }
        if (ctx->pc != 0x1B7B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8988_0x1a8988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7B2Cu; }
        if (ctx->pc != 0x1B7B2Cu) { return; }
    }
    ctx->pc = 0x1B7B2Cu;
label_1b7b2c:
    // 0x1b7b2c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b7b2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7b30: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1b7b30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b7b34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b7b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7b38: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7B38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7B38u;
            // 0x1b7b3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B7B40u;
}
