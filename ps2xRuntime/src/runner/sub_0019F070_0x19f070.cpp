#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019F070
// Address: 0x19f070 - 0x19f0c8
void sub_0019F070_0x19f070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F070_0x19f070");
#endif

    switch (ctx->pc) {
        case 0x19f084u: goto label_19f084;
        case 0x19f09cu: goto label_19f09c;
        case 0x19f0b0u: goto label_19f0b0;
        default: break;
    }

    ctx->pc = 0x19f070u;

    // 0x19f070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19f070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19f074: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19f074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19f078: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19f078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19f07c: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19F07Cu;
    SET_GPR_U32(ctx, 31, 0x19F084u);
    ctx->pc = 0x19F080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F07Cu;
            // 0x19f080: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F084u; }
        if (ctx->pc != 0x19F084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F084u; }
        if (ctx->pc != 0x19F084u) { return; }
    }
    ctx->pc = 0x19F084u;
label_19f084:
    // 0x19f084: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19f084u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19f088: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19f088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f08c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19F08Cu;
    {
        const bool branch_taken_0x19f08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19F090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F08Cu;
            // 0x19f090: 0x2484a058  addiu       $a0, $a0, -0x5FA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f08c) {
            ctx->pc = 0x19F0A8u;
            goto label_19f0a8;
        }
    }
    ctx->pc = 0x19F094u;
    // 0x19f094: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19F094u;
    SET_GPR_U32(ctx, 31, 0x19F09Cu);
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F09Cu; }
        if (ctx->pc != 0x19F09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F09Cu; }
        if (ctx->pc != 0x19F09Cu) { return; }
    }
    ctx->pc = 0x19F09Cu;
label_19f09c:
    // 0x19f09c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19F09Cu;
    {
        const bool branch_taken_0x19f09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F09Cu;
            // 0x19f0a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f09c) {
            ctx->pc = 0x19F0B4u;
            goto label_19f0b4;
        }
    }
    ctx->pc = 0x19F0A4u;
    // 0x19f0a4: 0x0  nop
    ctx->pc = 0x19f0a4u;
    // NOP
label_19f0a8:
    // 0x19f0a8: 0xc067a0c  jal         func_19E830
    ctx->pc = 0x19F0A8u;
    SET_GPR_U32(ctx, 31, 0x19F0B0u);
    ctx->pc = 0x19F0ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F0A8u;
            // 0x19f0ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E830u;
    if (runtime->hasFunction(0x19E830u)) {
        auto targetFn = runtime->lookupFunction(0x19E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F0B0u; }
        if (ctx->pc != 0x19F0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E830_0x19e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F0B0u; }
        if (ctx->pc != 0x19F0B0u) { return; }
    }
    ctx->pc = 0x19F0B0u;
label_19f0b0:
    // 0x19f0b0: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x19f0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_19f0b4:
    // 0x19f0b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f0b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f0b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19f0b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19f0bc: 0x3e00008  jr          $ra
    ctx->pc = 0x19F0BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F0BCu;
            // 0x19f0c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F0C4u;
    // 0x19f0c4: 0x0  nop
    ctx->pc = 0x19f0c4u;
    // NOP
}
