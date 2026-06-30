#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00117B00
// Address: 0x117b00 - 0x117b50
void sub_00117B00_0x117b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117B00_0x117b00");
#endif

    switch (ctx->pc) {
        case 0x117b18u: goto label_117b18;
        case 0x117b24u: goto label_117b24;
        case 0x117b34u: goto label_117b34;
        default: break;
    }

    ctx->pc = 0x117b00u;

    // 0x117b00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x117b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x117b04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x117b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x117b08: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x117b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x117b0c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x117b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x117b10: 0xc045968  jal         func_1165A0
    ctx->pc = 0x117B10u;
    SET_GPR_U32(ctx, 31, 0x117B18u);
    ctx->pc = 0x117B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117B10u;
            // 0x117b14: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117B18u; }
        if (ctx->pc != 0x117B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117B18u; }
        if (ctx->pc != 0x117B18u) { return; }
    }
    ctx->pc = 0x117B18u;
label_117b18:
    // 0x117b18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117b1c: 0xc045e94  jal         func_117A50
    ctx->pc = 0x117B1Cu;
    SET_GPR_U32(ctx, 31, 0x117B24u);
    ctx->pc = 0x117B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117B1Cu;
            // 0x117b20: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117A50u;
    if (runtime->hasFunction(0x117A50u)) {
        auto targetFn = runtime->lookupFunction(0x117A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117B24u; }
        if (ctx->pc != 0x117B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117A50_0x117a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117B24u; }
        if (ctx->pc != 0x117B24u) { return; }
    }
    ctx->pc = 0x117B24u;
label_117b24:
    // 0x117b24: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x117B24u;
    {
        const bool branch_taken_0x117b24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x117B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117B24u;
            // 0x117b28: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117b24) {
            ctx->pc = 0x117B34u;
            goto label_117b34;
        }
    }
    ctx->pc = 0x117B2Cu;
    // 0x117b2c: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x117B2Cu;
    SET_GPR_U32(ctx, 31, 0x117B34u);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117B34u; }
        if (ctx->pc != 0x117B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117B34u; }
        if (ctx->pc != 0x117B34u) { return; }
    }
    ctx->pc = 0x117B34u;
label_117b34:
    // 0x117b34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x117b34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117b38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x117b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117b3c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x117b3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117b40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117b40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117b44: 0x3e00008  jr          $ra
    ctx->pc = 0x117B44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117B44u;
            // 0x117b48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x117B4Cu;
    // 0x117b4c: 0x0  nop
    ctx->pc = 0x117b4cu;
    // NOP
}
