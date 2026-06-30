#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AA078
// Address: 0x1aa078 - 0x1aa0d0
void sub_001AA078_0x1aa078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA078_0x1aa078");
#endif

    switch (ctx->pc) {
        case 0x1aa094u: goto label_1aa094;
        case 0x1aa09cu: goto label_1aa09c;
        case 0x1aa0a4u: goto label_1aa0a4;
        case 0x1aa0acu: goto label_1aa0ac;
        case 0x1aa0b4u: goto label_1aa0b4;
        case 0x1aa0bcu: goto label_1aa0bc;
        default: break;
    }

    ctx->pc = 0x1aa078u;

    // 0x1aa078: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aa078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1aa07c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1aa07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1aa080: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aa080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa084: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1aa084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa088: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1aa088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1aa08c: 0xc06a8f8  jal         func_1AA3E0
    ctx->pc = 0x1AA08Cu;
    SET_GPR_U32(ctx, 31, 0x1AA094u);
    ctx->pc = 0x1AA090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA08Cu;
            // 0x1aa090: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA3E0u;
    if (runtime->hasFunction(0x1AA3E0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA094u; }
        if (ctx->pc != 0x1AA094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AA3E0_0x1aa3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA094u; }
        if (ctx->pc != 0x1AA094u) { return; }
    }
    ctx->pc = 0x1AA094u;
label_1aa094:
    // 0x1aa094: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x1AA094u;
    SET_GPR_U32(ctx, 31, 0x1AA09Cu);
    ctx->pc = 0x1AA098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA094u;
            // 0x1aa098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA09Cu; }
        if (ctx->pc != 0x1AA09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AA0D0_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA09Cu; }
        if (ctx->pc != 0x1AA09Cu) { return; }
    }
    ctx->pc = 0x1AA09Cu;
label_1aa09c:
    // 0x1aa09c: 0xc06a924  jal         func_1AA490
    ctx->pc = 0x1AA09Cu;
    SET_GPR_U32(ctx, 31, 0x1AA0A4u);
    ctx->pc = 0x1AA0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA09Cu;
            // 0x1aa0a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA490u;
    if (runtime->hasFunction(0x1AA490u)) {
        auto targetFn = runtime->lookupFunction(0x1AA490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA0A4u; }
        if (ctx->pc != 0x1AA0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AA490_0x1aa490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA0A4u; }
        if (ctx->pc != 0x1AA0A4u) { return; }
    }
    ctx->pc = 0x1AA0A4u;
label_1aa0a4:
    // 0x1aa0a4: 0xc06a8ba  jal         func_1AA2E8
    ctx->pc = 0x1AA0A4u;
    SET_GPR_U32(ctx, 31, 0x1AA0ACu);
    ctx->pc = 0x1AA0A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA0A4u;
            // 0x1aa0a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA2E8u;
    if (runtime->hasFunction(0x1AA2E8u)) {
        auto targetFn = runtime->lookupFunction(0x1AA2E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA0ACu; }
        if (ctx->pc != 0x1AA0ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AA2E8_0x1aa2e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA0ACu; }
        if (ctx->pc != 0x1AA0ACu) { return; }
    }
    ctx->pc = 0x1AA0ACu;
label_1aa0ac:
    // 0x1aa0ac: 0xc06a94a  jal         func_1AA528
    ctx->pc = 0x1AA0ACu;
    SET_GPR_U32(ctx, 31, 0x1AA0B4u);
    ctx->pc = 0x1AA0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA0ACu;
            // 0x1aa0b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA528u;
    if (runtime->hasFunction(0x1AA528u)) {
        auto targetFn = runtime->lookupFunction(0x1AA528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA0B4u; }
        if (ctx->pc != 0x1AA0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AA528_0x1aa528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA0B4u; }
        if (ctx->pc != 0x1AA0B4u) { return; }
    }
    ctx->pc = 0x1AA0B4u;
label_1aa0b4:
    // 0x1aa0b4: 0xc06a976  jal         func_1AA5D8
    ctx->pc = 0x1AA0B4u;
    SET_GPR_U32(ctx, 31, 0x1AA0BCu);
    ctx->pc = 0x1AA0B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA0B4u;
            // 0x1aa0b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA5D8u;
    if (runtime->hasFunction(0x1AA5D8u)) {
        auto targetFn = runtime->lookupFunction(0x1AA5D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA0BCu; }
        if (ctx->pc != 0x1AA0BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AA5D8_0x1aa5d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA0BCu; }
        if (ctx->pc != 0x1AA0BCu) { return; }
    }
    ctx->pc = 0x1AA0BCu;
label_1aa0bc:
    // 0x1aa0bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1aa0bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa0c0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1aa0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa0c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA0C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA0C4u;
            // 0x1aa0c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AA0CCu;
    // 0x1aa0cc: 0x0  nop
    ctx->pc = 0x1aa0ccu;
    // NOP
}
