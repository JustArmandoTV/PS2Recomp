#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00173680
// Address: 0x173680 - 0x1736d0
void sub_00173680_0x173680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173680_0x173680");
#endif

    switch (ctx->pc) {
        case 0x1736a4u: goto label_1736a4;
        case 0x1736b4u: goto label_1736b4;
        default: break;
    }

    ctx->pc = 0x173680u;

    // 0x173680: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x173680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x173684: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x173684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x173688: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x173688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17368c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17368cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x173690: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x173690u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173694: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x173694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x173698: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x173698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17369c: 0xc0599de  jal         func_166778
    ctx->pc = 0x17369Cu;
    SET_GPR_U32(ctx, 31, 0x1736A4u);
    ctx->pc = 0x1736A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17369Cu;
            // 0x1736a0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1736A4u; }
        if (ctx->pc != 0x1736A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1736A4u; }
        if (ctx->pc != 0x1736A4u) { return; }
    }
    ctx->pc = 0x1736A4u;
label_1736a4:
    // 0x1736a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1736a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1736a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1736a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1736ac: 0xc05cdb4  jal         func_1736D0
    ctx->pc = 0x1736ACu;
    SET_GPR_U32(ctx, 31, 0x1736B4u);
    ctx->pc = 0x1736B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1736ACu;
            // 0x1736b0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1736D0u;
    if (runtime->hasFunction(0x1736D0u)) {
        auto targetFn = runtime->lookupFunction(0x1736D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1736B4u; }
        if (ctx->pc != 0x1736B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001736D0_0x1736d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1736B4u; }
        if (ctx->pc != 0x1736B4u) { return; }
    }
    ctx->pc = 0x1736B4u;
label_1736b4:
    // 0x1736b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1736b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1736b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1736b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1736bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1736bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1736c0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1736c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1736c4: 0x80599e0  j           func_166780
    ctx->pc = 0x1736C4u;
    ctx->pc = 0x1736C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1736C4u;
            // 0x1736c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1736CCu;
    // 0x1736cc: 0x0  nop
    ctx->pc = 0x1736ccu;
    // NOP
}
