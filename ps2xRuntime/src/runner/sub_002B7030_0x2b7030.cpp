#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B7030
// Address: 0x2b7030 - 0x2b70a0
void sub_002B7030_0x2b7030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7030_0x2b7030");
#endif

    switch (ctx->pc) {
        case 0x2b706cu: goto label_2b706c;
        case 0x2b707cu: goto label_2b707c;
        case 0x2b708cu: goto label_2b708c;
        default: break;
    }

    ctx->pc = 0x2b7030u;

    // 0x2b7030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b7030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b7034: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2b7034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x2b7038: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b7038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b703c: 0xc440c590  lwc1        $f0, -0x3A70($v0)
    ctx->pc = 0x2b703cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7040: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b7040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b7044: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2b7044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2b7048: 0xac8000fc  sw          $zero, 0xFC($a0)
    ctx->pc = 0x2b7048u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 252), GPR_U32(ctx, 0));
    // 0x2b704c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b704cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7050: 0xac800100  sw          $zero, 0x100($a0)
    ctx->pc = 0x2b7050u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 0));
    // 0x2b7054: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b7054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7058: 0xe4800104  swc1        $f0, 0x104($a0)
    ctx->pc = 0x2b7058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 260), bits); }
    // 0x2b705c: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x2b705cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x2b7060: 0xac830108  sw          $v1, 0x108($a0)
    ctx->pc = 0x2b7060u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 264), GPR_U32(ctx, 3));
    // 0x2b7064: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x2B7064u;
    SET_GPR_U32(ctx, 31, 0x2B706Cu);
    ctx->pc = 0x2B7068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7064u;
            // 0x2b7068: 0xac83010c  sw          $v1, 0x10C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 268), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B706Cu; }
        if (ctx->pc != 0x2B706Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B706Cu; }
        if (ctx->pc != 0x2B706Cu) { return; }
    }
    ctx->pc = 0x2B706Cu;
label_2b706c:
    // 0x2b706c: 0x26040054  addiu       $a0, $s0, 0x54
    ctx->pc = 0x2b706cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x2b7070: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b7070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7074: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x2B7074u;
    SET_GPR_U32(ctx, 31, 0x2B707Cu);
    ctx->pc = 0x2B7078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7074u;
            // 0x2b7078: 0x24060054  addiu       $a2, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B707Cu; }
        if (ctx->pc != 0x2B707Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B707Cu; }
        if (ctx->pc != 0x2B707Cu) { return; }
    }
    ctx->pc = 0x2B707Cu;
label_2b707c:
    // 0x2b707c: 0x260400a8  addiu       $a0, $s0, 0xA8
    ctx->pc = 0x2b707cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 168));
    // 0x2b7080: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b7080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7084: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x2B7084u;
    SET_GPR_U32(ctx, 31, 0x2B708Cu);
    ctx->pc = 0x2B7088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7084u;
            // 0x2b7088: 0x24060054  addiu       $a2, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B708Cu; }
        if (ctx->pc != 0x2B708Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B708Cu; }
        if (ctx->pc != 0x2B708Cu) { return; }
    }
    ctx->pc = 0x2B708Cu;
label_2b708c:
    // 0x2b708c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b708cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7090: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b7090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7094: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b7094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7098: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B709Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7098u;
            // 0x2b709c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B70A0u;
}
