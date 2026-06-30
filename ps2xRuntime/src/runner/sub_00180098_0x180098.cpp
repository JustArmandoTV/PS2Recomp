#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00180098
// Address: 0x180098 - 0x1800d8
void sub_00180098_0x180098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180098_0x180098");
#endif

    switch (ctx->pc) {
        case 0x1800b4u: goto label_1800b4;
        case 0x1800c0u: goto label_1800c0;
        default: break;
    }

    ctx->pc = 0x180098u;

    // 0x180098: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x180098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18009c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18009cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1800a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1800a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1800a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1800a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1800a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1800a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1800ac: 0xc06031a  jal         func_180C68
    ctx->pc = 0x1800ACu;
    SET_GPR_U32(ctx, 31, 0x1800B4u);
    ctx->pc = 0x1800B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1800ACu;
            // 0x1800b0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180C68u;
    if (runtime->hasFunction(0x180C68u)) {
        auto targetFn = runtime->lookupFunction(0x180C68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1800B4u; }
        if (ctx->pc != 0x1800B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180C68_0x180c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1800B4u; }
        if (ctx->pc != 0x1800B4u) { return; }
    }
    ctx->pc = 0x1800B4u;
label_1800b4:
    // 0x1800b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1800b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1800b8: 0xc060036  jal         func_1800D8
    ctx->pc = 0x1800B8u;
    SET_GPR_U32(ctx, 31, 0x1800C0u);
    ctx->pc = 0x1800BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1800B8u;
            // 0x1800bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1800D8u;
    if (runtime->hasFunction(0x1800D8u)) {
        auto targetFn = runtime->lookupFunction(0x1800D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1800C0u; }
        if (ctx->pc != 0x1800C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001800D8_0x1800d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1800C0u; }
        if (ctx->pc != 0x1800C0u) { return; }
    }
    ctx->pc = 0x1800C0u;
label_1800c0:
    // 0x1800c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1800c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1800c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1800c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1800c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1800c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1800cc: 0x806031c  j           func_180C70
    ctx->pc = 0x1800CCu;
    ctx->pc = 0x1800D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1800CCu;
            // 0x1800d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180C70u;
    if (runtime->hasFunction(0x180C70u)) {
        auto targetFn = runtime->lookupFunction(0x180C70u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00180C70_0x180c70(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1800D4u;
    // 0x1800d4: 0x0  nop
    ctx->pc = 0x1800d4u;
    // NOP
}
