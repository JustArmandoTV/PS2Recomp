#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00175370
// Address: 0x175370 - 0x1753c8
void sub_00175370_0x175370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175370_0x175370");
#endif

    switch (ctx->pc) {
        case 0x17539cu: goto label_17539c;
        case 0x1753acu: goto label_1753ac;
        default: break;
    }

    ctx->pc = 0x175370u;

    // 0x175370: 0x3e00008  jr          $ra
    ctx->pc = 0x175370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175378u;
    // 0x175378: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17537c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17537cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175380: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x175380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175384: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x175384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x175388: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x175388u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17538c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17538cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x175390: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x175390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x175394: 0xc0599de  jal         func_166778
    ctx->pc = 0x175394u;
    SET_GPR_U32(ctx, 31, 0x17539Cu);
    ctx->pc = 0x175398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175394u;
            // 0x175398: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17539Cu; }
        if (ctx->pc != 0x17539Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17539Cu; }
        if (ctx->pc != 0x17539Cu) { return; }
    }
    ctx->pc = 0x17539Cu;
label_17539c:
    // 0x17539c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17539cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1753a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1753a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1753a4: 0xc05d4f2  jal         func_1753C8
    ctx->pc = 0x1753A4u;
    SET_GPR_U32(ctx, 31, 0x1753ACu);
    ctx->pc = 0x1753A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1753A4u;
            // 0x1753a8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1753C8u;
    if (runtime->hasFunction(0x1753C8u)) {
        auto targetFn = runtime->lookupFunction(0x1753C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1753ACu; }
        if (ctx->pc != 0x1753ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001753C8_0x1753c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1753ACu; }
        if (ctx->pc != 0x1753ACu) { return; }
    }
    ctx->pc = 0x1753ACu;
label_1753ac:
    // 0x1753ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1753acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1753b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1753b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1753b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1753b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1753b8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1753b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1753bc: 0x80599e0  j           func_166780
    ctx->pc = 0x1753BCu;
    ctx->pc = 0x1753C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1753BCu;
            // 0x1753c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1753C4u;
    // 0x1753c4: 0x0  nop
    ctx->pc = 0x1753c4u;
    // NOP
}
