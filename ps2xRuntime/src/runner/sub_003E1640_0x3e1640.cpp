#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E1640
// Address: 0x3e1640 - 0x3e1680
void sub_003E1640_0x3e1640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1640_0x3e1640");
#endif

    switch (ctx->pc) {
        case 0x3e1664u: goto label_3e1664;
        case 0x3e1670u: goto label_3e1670;
        default: break;
    }

    ctx->pc = 0x3e1640u;

    // 0x3e1640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3e1640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3e1644: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e1644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e1648: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e1648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3e164c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e164cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1650: 0xc60c0280  lwc1        $f12, 0x280($s0)
    ctx->pc = 0x3e1650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3e1654: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3e1654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3e1658: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x3e1658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3e165c: 0xc04cc7c  jal         func_1331F0
    ctx->pc = 0x3E165Cu;
    SET_GPR_U32(ctx, 31, 0x3E1664u);
    ctx->pc = 0x3E1660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E165Cu;
            // 0x3e1660: 0x260601f0  addiu       $a2, $s0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1664u; }
        if (ctx->pc != 0x3E1664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1664u; }
        if (ctx->pc != 0x3E1664u) { return; }
    }
    ctx->pc = 0x3E1664u;
label_3e1664:
    // 0x3e1664: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x3e1664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3e1668: 0xc04cc04  jal         func_133010
    ctx->pc = 0x3E1668u;
    SET_GPR_U32(ctx, 31, 0x3E1670u);
    ctx->pc = 0x3E166Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1668u;
            // 0x3e166c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1670u; }
        if (ctx->pc != 0x3E1670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1670u; }
        if (ctx->pc != 0x3E1670u) { return; }
    }
    ctx->pc = 0x3E1670u;
label_3e1670:
    // 0x3e1670: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e1670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e1674: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e1674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e1678: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E167Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1678u;
            // 0x3e167c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E1680u;
}
