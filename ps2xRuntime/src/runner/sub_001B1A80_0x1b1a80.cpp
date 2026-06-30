#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B1A80
// Address: 0x1b1a80 - 0x1b1af0
void sub_001B1A80_0x1b1a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1A80_0x1b1a80");
#endif

    switch (ctx->pc) {
        case 0x1b1aa4u: goto label_1b1aa4;
        default: break;
    }

    ctx->pc = 0x1b1a80u;

    // 0x1b1a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b1a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b1a84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b1a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b1a88: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b1a88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1a8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b1a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b1a90: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b1a90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1a94: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b1a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b1a98: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b1a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b1a9c: 0xc06c530  jal         func_1B14C0
    ctx->pc = 0x1B1A9Cu;
    SET_GPR_U32(ctx, 31, 0x1B1AA4u);
    ctx->pc = 0x1B1AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1A9Cu;
            // 0x1b1aa0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B14C0u;
    if (runtime->hasFunction(0x1B14C0u)) {
        auto targetFn = runtime->lookupFunction(0x1B14C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1AA4u; }
        if (ctx->pc != 0x1B1AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B14C0_0x1b14c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1AA4u; }
        if (ctx->pc != 0x1B1AA4u) { return; }
    }
    ctx->pc = 0x1B1AA4u;
label_1b1aa4:
    // 0x1b1aa4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b1aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1aa8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B1AA8u;
    {
        const bool branch_taken_0x1b1aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1AA8u;
            // 0x1b1aac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1aa8) {
            ctx->pc = 0x1B1AD0u;
            goto label_1b1ad0;
        }
    }
    ctx->pc = 0x1B1AB0u;
    // 0x1b1ab0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1b1ab0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1ab4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b1ab4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1ab8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b1ab8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b1abc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b1abcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1ac0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b1ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b1ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1AC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1AC4u;
            // 0x1b1ac8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B1ACCu;
    // 0x1b1acc: 0x0  nop
    ctx->pc = 0x1b1accu;
    // NOP
label_1b1ad0:
    // 0x1b1ad0: 0x8e442030  lw          $a0, 0x2030($s2)
    ctx->pc = 0x1b1ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8240)));
    // 0x1b1ad4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b1ad4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1ad8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b1ad8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b1adc: 0x24841198  addiu       $a0, $a0, 0x1198
    ctx->pc = 0x1b1adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4504));
    // 0x1b1ae0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b1ae0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1ae4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b1ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b1ae8: 0x806c604  j           func_1B1810
    ctx->pc = 0x1B1AE8u;
    ctx->pc = 0x1B1AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1AE8u;
            // 0x1b1aec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1810u;
    if (runtime->hasFunction(0x1B1810u)) {
        auto targetFn = runtime->lookupFunction(0x1B1810u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B1810_0x1b1810(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B1AF0u;
}
