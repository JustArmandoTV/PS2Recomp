#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B5988
// Address: 0x1b5988 - 0x1b59f8
void sub_001B5988_0x1b5988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5988_0x1b5988");
#endif

    switch (ctx->pc) {
        case 0x1b59a4u: goto label_1b59a4;
        case 0x1b59e0u: goto label_1b59e0;
        default: break;
    }

    ctx->pc = 0x1b5988u;

    // 0x1b5988: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b5988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b598c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b598cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b5990: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b5990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5994: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b5994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b5998: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b5998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b599c: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B599Cu;
    SET_GPR_U32(ctx, 31, 0x1B59A4u);
    ctx->pc = 0x1B59A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B599Cu;
            // 0x1b59a0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B59A4u; }
        if (ctx->pc != 0x1B59A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B59A4u; }
        if (ctx->pc != 0x1B59A4u) { return; }
    }
    ctx->pc = 0x1B59A4u;
label_1b59a4:
    // 0x1b59a4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b59a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b59a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B59A8u;
    {
        const bool branch_taken_0x1b59a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B59ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B59A8u;
            // 0x1b59ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b59a8) {
            ctx->pc = 0x1B59C8u;
            goto label_1b59c8;
        }
    }
    ctx->pc = 0x1B59B0u;
    // 0x1b59b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b59b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b59b4: 0x34a50159  ori         $a1, $a1, 0x159
    ctx->pc = 0x1b59b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)345);
    // 0x1b59b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b59b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b59bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b59bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b59c0: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B59C0u;
    ctx->pc = 0x1B59C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B59C0u;
            // 0x1b59c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B59C8u;
label_1b59c8:
    // 0x1b59c8: 0x8e033720  lw          $v1, 0x3720($s0)
    ctx->pc = 0x1b59c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14112)));
    // 0x1b59cc: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B59CCu;
    {
        const bool branch_taken_0x1b59cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b59cc) {
            ctx->pc = 0x1B59D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B59CCu;
            // 0x1b59d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B59E8u;
            goto label_1b59e8;
        }
    }
    ctx->pc = 0x1B59D4u;
    // 0x1b59d4: 0xac710dc4  sw          $s1, 0xDC4($v1)
    ctx->pc = 0x1b59d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3524), GPR_U32(ctx, 17));
    // 0x1b59d8: 0xc06d722  jal         func_1B5C88
    ctx->pc = 0x1B59D8u;
    SET_GPR_U32(ctx, 31, 0x1B59E0u);
    ctx->pc = 0x1B59DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B59D8u;
            // 0x1b59dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5C88u;
    if (runtime->hasFunction(0x1B5C88u)) {
        auto targetFn = runtime->lookupFunction(0x1B5C88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B59E0u; }
        if (ctx->pc != 0x1B59E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5C88_0x1b5c88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B59E0u; }
        if (ctx->pc != 0x1B59E0u) { return; }
    }
    ctx->pc = 0x1B59E0u;
label_1b59e0:
    // 0x1b59e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b59e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b59e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b59e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b59e8:
    // 0x1b59e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b59e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b59ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b59ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b59f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B59F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B59F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B59F0u;
            // 0x1b59f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B59F8u;
}
