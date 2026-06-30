#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A5CE8
// Address: 0x1a5ce8 - 0x1a5d50
void sub_001A5CE8_0x1a5ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5CE8_0x1a5ce8");
#endif

    switch (ctx->pc) {
        case 0x1a5d28u: goto label_1a5d28;
        case 0x1a5d38u: goto label_1a5d38;
        default: break;
    }

    ctx->pc = 0x1a5ce8u;

    // 0x1a5ce8: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1a5ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a5cec: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a5cecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a5cf0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1a5cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a5cf4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a5cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1a5cf8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a5cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a5cfc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1a5cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1a5d00: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a5d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a5d04: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a5d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a5d08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a5d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a5d0c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1a5d0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5d10: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x1a5d10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a5d14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a5d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5d18: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1a5d18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5d1c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1a5d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1a5d20: 0xc06a25c  jal         func_1A8970
    ctx->pc = 0x1A5D20u;
    SET_GPR_U32(ctx, 31, 0x1A5D28u);
    ctx->pc = 0x1A5D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5D20u;
            // 0x1a5d24: 0x261013a8  addiu       $s0, $s0, 0x13A8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8970u;
    if (runtime->hasFunction(0x1A8970u)) {
        auto targetFn = runtime->lookupFunction(0x1A8970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5D28u; }
        if (ctx->pc != 0x1A5D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8970_0x1a8970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5D28u; }
        if (ctx->pc != 0x1A5D28u) { return; }
    }
    ctx->pc = 0x1A5D28u;
label_1a5d28:
    // 0x1a5d28: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x1a5d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x1a5d2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a5d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5d30: 0xc06a262  jal         func_1A8988
    ctx->pc = 0x1A5D30u;
    SET_GPR_U32(ctx, 31, 0x1A5D38u);
    ctx->pc = 0x1A5D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5D30u;
            // 0x1a5d34: 0xae120000  sw          $s2, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8988u;
    if (runtime->hasFunction(0x1A8988u)) {
        auto targetFn = runtime->lookupFunction(0x1A8988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5D38u; }
        if (ctx->pc != 0x1A5D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8988_0x1a8988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5D38u; }
        if (ctx->pc != 0x1A5D38u) { return; }
    }
    ctx->pc = 0x1A5D38u;
label_1a5d38:
    // 0x1a5d38: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a5d38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5d3c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1a5d3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a5d40: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a5d40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5d44: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1a5d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a5d48: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5D48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5D48u;
            // 0x1a5d4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A5D50u;
}
