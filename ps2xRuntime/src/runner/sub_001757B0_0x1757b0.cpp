#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001757B0
// Address: 0x1757b0 - 0x175808
void sub_001757B0_0x1757b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001757B0_0x1757b0");
#endif

    switch (ctx->pc) {
        case 0x1757dcu: goto label_1757dc;
        case 0x1757ecu: goto label_1757ec;
        default: break;
    }

    ctx->pc = 0x1757b0u;

    // 0x1757b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1757B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1757B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1757B0u;
            // 0x1757b4: 0x80820098  lb          $v0, 0x98($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1757B8u;
    // 0x1757b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1757b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1757bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1757bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1757c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1757c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1757c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1757c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1757c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1757c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1757cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1757ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1757d0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1757d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1757d4: 0xc0599de  jal         func_166778
    ctx->pc = 0x1757D4u;
    SET_GPR_U32(ctx, 31, 0x1757DCu);
    ctx->pc = 0x1757D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1757D4u;
            // 0x1757d8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1757DCu; }
        if (ctx->pc != 0x1757DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1757DCu; }
        if (ctx->pc != 0x1757DCu) { return; }
    }
    ctx->pc = 0x1757DCu;
label_1757dc:
    // 0x1757dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1757dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1757e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1757e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1757e4: 0xc05d602  jal         func_175808
    ctx->pc = 0x1757E4u;
    SET_GPR_U32(ctx, 31, 0x1757ECu);
    ctx->pc = 0x1757E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1757E4u;
            // 0x1757e8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175808u;
    if (runtime->hasFunction(0x175808u)) {
        auto targetFn = runtime->lookupFunction(0x175808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1757ECu; }
        if (ctx->pc != 0x1757ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175808_0x175808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1757ECu; }
        if (ctx->pc != 0x1757ECu) { return; }
    }
    ctx->pc = 0x1757ECu;
label_1757ec:
    // 0x1757ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1757ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1757f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1757f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1757f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1757f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1757f8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1757f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1757fc: 0x80599e0  j           func_166780
    ctx->pc = 0x1757FCu;
    ctx->pc = 0x175800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1757FCu;
            // 0x175800: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x175804u;
    // 0x175804: 0x0  nop
    ctx->pc = 0x175804u;
    // NOP
}
