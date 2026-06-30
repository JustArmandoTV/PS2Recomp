#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00174390
// Address: 0x174390 - 0x1743d0
void sub_00174390_0x174390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174390_0x174390");
#endif

    switch (ctx->pc) {
        case 0x1743acu: goto label_1743ac;
        case 0x1743b8u: goto label_1743b8;
        default: break;
    }

    ctx->pc = 0x174390u;

    // 0x174390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x174390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x174394: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x174394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x174398: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x174398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17439c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17439cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1743a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1743a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1743a4: 0xc0599de  jal         func_166778
    ctx->pc = 0x1743A4u;
    SET_GPR_U32(ctx, 31, 0x1743ACu);
    ctx->pc = 0x1743A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1743A4u;
            // 0x1743a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1743ACu; }
        if (ctx->pc != 0x1743ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1743ACu; }
        if (ctx->pc != 0x1743ACu) { return; }
    }
    ctx->pc = 0x1743ACu;
label_1743ac:
    // 0x1743ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1743acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1743b0: 0xc05d0f4  jal         func_1743D0
    ctx->pc = 0x1743B0u;
    SET_GPR_U32(ctx, 31, 0x1743B8u);
    ctx->pc = 0x1743B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1743B0u;
            // 0x1743b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1743D0u;
    if (runtime->hasFunction(0x1743D0u)) {
        auto targetFn = runtime->lookupFunction(0x1743D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1743B8u; }
        if (ctx->pc != 0x1743B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001743D0_0x1743d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1743B8u; }
        if (ctx->pc != 0x1743B8u) { return; }
    }
    ctx->pc = 0x1743B8u;
label_1743b8:
    // 0x1743b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1743b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1743bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1743bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1743c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1743c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1743c4: 0x80599e0  j           func_166780
    ctx->pc = 0x1743C4u;
    ctx->pc = 0x1743C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1743C4u;
            // 0x1743c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1743CCu;
    // 0x1743cc: 0x0  nop
    ctx->pc = 0x1743ccu;
    // NOP
}
