#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00180690
// Address: 0x180690 - 0x1806c8
void sub_00180690_0x180690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180690_0x180690");
#endif

    switch (ctx->pc) {
        case 0x1806a4u: goto label_1806a4;
        case 0x1806acu: goto label_1806ac;
        case 0x1806b4u: goto label_1806b4;
        default: break;
    }

    ctx->pc = 0x180690u;

    // 0x180690: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x180690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x180694: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x180694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x180698: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x180698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x18069c: 0xc06031a  jal         func_180C68
    ctx->pc = 0x18069Cu;
    SET_GPR_U32(ctx, 31, 0x1806A4u);
    ctx->pc = 0x1806A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18069Cu;
            // 0x1806a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180C68u;
    if (runtime->hasFunction(0x180C68u)) {
        auto targetFn = runtime->lookupFunction(0x180C68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1806A4u; }
        if (ctx->pc != 0x1806A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180C68_0x180c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1806A4u; }
        if (ctx->pc != 0x1806A4u) { return; }
    }
    ctx->pc = 0x1806A4u;
label_1806a4:
    // 0x1806a4: 0xc0601b2  jal         func_1806C8
    ctx->pc = 0x1806A4u;
    SET_GPR_U32(ctx, 31, 0x1806ACu);
    ctx->pc = 0x1806A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1806A4u;
            // 0x1806a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1806C8u;
    if (runtime->hasFunction(0x1806C8u)) {
        auto targetFn = runtime->lookupFunction(0x1806C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1806ACu; }
        if (ctx->pc != 0x1806ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001806C8_0x1806c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1806ACu; }
        if (ctx->pc != 0x1806ACu) { return; }
    }
    ctx->pc = 0x1806ACu;
label_1806ac:
    // 0x1806ac: 0xc06031c  jal         func_180C70
    ctx->pc = 0x1806ACu;
    SET_GPR_U32(ctx, 31, 0x1806B4u);
    ctx->pc = 0x1806B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1806ACu;
            // 0x1806b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180C70u;
    if (runtime->hasFunction(0x180C70u)) {
        auto targetFn = runtime->lookupFunction(0x180C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1806B4u; }
        if (ctx->pc != 0x1806B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180C70_0x180c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1806B4u; }
        if (ctx->pc != 0x1806B4u) { return; }
    }
    ctx->pc = 0x1806B4u;
label_1806b4:
    // 0x1806b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1806b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1806b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1806b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1806bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1806bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1806c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1806C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1806C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1806C0u;
            // 0x1806c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1806C8u;
}
