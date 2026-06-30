#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C0B88
// Address: 0x1c0b88 - 0x1c0be0
void sub_001C0B88_0x1c0b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0B88_0x1c0b88");
#endif

    switch (ctx->pc) {
        case 0x1c0bb8u: goto label_1c0bb8;
        default: break;
    }

    ctx->pc = 0x1c0b88u;

    // 0x1c0b88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c0b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c0b8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c0b8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0b90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c0b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c0b94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c0b94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0b98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c0b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c0b9c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c0b9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0ba0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C0BA0u;
    {
        const bool branch_taken_0x1c0ba0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0BA0u;
            // 0x1c0ba4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0ba0) {
            ctx->pc = 0x1C0BC8u;
            goto label_1c0bc8;
        }
    }
    ctx->pc = 0x1C0BA8u;
    // 0x1c0ba8: 0x6200007  bltz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C0BA8u;
    {
        const bool branch_taken_0x1c0ba8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1C0BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0BA8u;
            // 0x1c0bac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0ba8) {
            ctx->pc = 0x1C0BC8u;
            goto label_1c0bc8;
        }
    }
    ctx->pc = 0x1C0BB0u;
    // 0x1c0bb0: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1C0BB0u;
    SET_GPR_U32(ctx, 31, 0x1C0BB8u);
    ctx->pc = 0x1C0BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0BB0u;
            // 0x1c0bb4: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0BB8u; }
        if (ctx->pc != 0x1C0BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0BB8u; }
        if (ctx->pc != 0x1C0BB8u) { return; }
    }
    ctx->pc = 0x1C0BB8u;
label_1c0bb8:
    // 0x1c0bb8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1c0bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1c0bbc: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x1c0bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x1c0bc0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c0bc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0bc4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1c0bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1c0bc8:
    // 0x1c0bc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c0bc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0bcc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c0bccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c0bd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c0bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c0bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0BD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0BD4u;
            // 0x1c0bd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C0BDCu;
    // 0x1c0bdc: 0x0  nop
    ctx->pc = 0x1c0bdcu;
    // NOP
}
