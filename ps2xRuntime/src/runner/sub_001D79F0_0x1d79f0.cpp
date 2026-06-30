#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D79F0
// Address: 0x1d79f0 - 0x1d7a60
void sub_001D79F0_0x1d79f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D79F0_0x1d79f0");
#endif

    switch (ctx->pc) {
        case 0x1d7a14u: goto label_1d7a14;
        case 0x1d7a28u: goto label_1d7a28;
        case 0x1d7a40u: goto label_1d7a40;
        default: break;
    }

    ctx->pc = 0x1d79f0u;

    // 0x1d79f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d79f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d79f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d79f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d79f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d79f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d79fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d79fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d7a00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d7a00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7a04: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x1D7A04u;
    {
        const bool branch_taken_0x1d7a04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7A04u;
            // 0x1d7a08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7a04) {
            ctx->pc = 0x1D7A40u;
            goto label_1d7a40;
        }
    }
    ctx->pc = 0x1D7A0Cu;
    // 0x1d7a0c: 0xc075e98  jal         func_1D7A60
    ctx->pc = 0x1D7A0Cu;
    SET_GPR_U32(ctx, 31, 0x1D7A14u);
    ctx->pc = 0x1D7A60u;
    if (runtime->hasFunction(0x1D7A60u)) {
        auto targetFn = runtime->lookupFunction(0x1D7A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7A14u; }
        if (ctx->pc != 0x1D7A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7A60_0x1d7a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7A14u; }
        if (ctx->pc != 0x1D7A14u) { return; }
    }
    ctx->pc = 0x1D7A14u;
label_1d7a14:
    // 0x1d7a14: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1d7a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d7a18: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D7A18u;
    {
        const bool branch_taken_0x1d7a18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7a18) {
            ctx->pc = 0x1D7A1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7A18u;
            // 0x1d7a1c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D7A2Cu;
            goto label_1d7a2c;
        }
    }
    ctx->pc = 0x1D7A20u;
    // 0x1d7a20: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x1D7A20u;
    SET_GPR_U32(ctx, 31, 0x1D7A28u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7A28u; }
        if (ctx->pc != 0x1D7A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7A28u; }
        if (ctx->pc != 0x1D7A28u) { return; }
    }
    ctx->pc = 0x1D7A28u;
label_1d7a28:
    // 0x1d7a28: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1d7a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1d7a2c:
    // 0x1d7a2c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d7a2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d7a30: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D7A30u;
    {
        const bool branch_taken_0x1d7a30 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d7a30) {
            ctx->pc = 0x1D7A34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7A30u;
            // 0x1d7a34: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D7A44u;
            goto label_1d7a44;
        }
    }
    ctx->pc = 0x1D7A38u;
    // 0x1d7a38: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x1D7A38u;
    SET_GPR_U32(ctx, 31, 0x1D7A40u);
    ctx->pc = 0x1D7A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7A38u;
            // 0x1d7a3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7A40u; }
        if (ctx->pc != 0x1D7A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7A40u; }
        if (ctx->pc != 0x1D7A40u) { return; }
    }
    ctx->pc = 0x1D7A40u;
label_1d7a40:
    // 0x1d7a40: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1d7a40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d7a44:
    // 0x1d7a44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d7a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7a48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d7a48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7a4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d7a4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7a50: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7A50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7A50u;
            // 0x1d7a54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7A58u;
    // 0x1d7a58: 0x0  nop
    ctx->pc = 0x1d7a58u;
    // NOP
    // 0x1d7a5c: 0x0  nop
    ctx->pc = 0x1d7a5cu;
    // NOP
}
