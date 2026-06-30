#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0033BE90
// Address: 0x33be90 - 0x33bf10
void sub_0033BE90_0x33be90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033BE90_0x33be90");
#endif

    switch (ctx->pc) {
        case 0x33beb4u: goto label_33beb4;
        case 0x33bec0u: goto label_33bec0;
        case 0x33beecu: goto label_33beec;
        default: break;
    }

    ctx->pc = 0x33be90u;

    // 0x33be90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x33be90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x33be94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33be94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x33be98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33be98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33be9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33be9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33bea0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x33bea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bea4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33bea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bea8: 0x260402d0  addiu       $a0, $s0, 0x2D0
    ctx->pc = 0x33bea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 720));
    // 0x33beac: 0xc04cc04  jal         func_133010
    ctx->pc = 0x33BEACu;
    SET_GPR_U32(ctx, 31, 0x33BEB4u);
    ctx->pc = 0x33BEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33BEACu;
            // 0x33beb0: 0x260502c0  addiu       $a1, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BEB4u; }
        if (ctx->pc != 0x33BEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BEB4u; }
        if (ctx->pc != 0x33BEB4u) { return; }
    }
    ctx->pc = 0x33BEB4u;
label_33beb4:
    // 0x33beb4: 0x260402c0  addiu       $a0, $s0, 0x2C0
    ctx->pc = 0x33beb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x33beb8: 0xc04cc04  jal         func_133010
    ctx->pc = 0x33BEB8u;
    SET_GPR_U32(ctx, 31, 0x33BEC0u);
    ctx->pc = 0x33BEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33BEB8u;
            // 0x33bebc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BEC0u; }
        if (ctx->pc != 0x33BEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BEC0u; }
        if (ctx->pc != 0x33BEC0u) { return; }
    }
    ctx->pc = 0x33BEC0u;
label_33bec0:
    // 0x33bec0: 0x8e100d74  lw          $s0, 0xD74($s0)
    ctx->pc = 0x33bec0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
    // 0x33bec4: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x33bec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33bec8: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x33bec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33becc: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x33beccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33bed0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x33bed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x33bed4: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x33bed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x33bed8: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x33bed8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x33bedc: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x33bedcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x33bee0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x33bee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x33bee4: 0xc0a5444  jal         func_295110
    ctx->pc = 0x33BEE4u;
    SET_GPR_U32(ctx, 31, 0x33BEECu);
    ctx->pc = 0x33BEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33BEE4u;
            // 0x33bee8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295110u;
    if (runtime->hasFunction(0x295110u)) {
        auto targetFn = runtime->lookupFunction(0x295110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BEECu; }
        if (ctx->pc != 0x33BEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295110_0x295110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BEECu; }
        if (ctx->pc != 0x33BEECu) { return; }
    }
    ctx->pc = 0x33BEECu;
label_33beec:
    // 0x33beec: 0xae0002d0  sw          $zero, 0x2D0($s0)
    ctx->pc = 0x33beecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 720), GPR_U32(ctx, 0));
    // 0x33bef0: 0xae0002d4  sw          $zero, 0x2D4($s0)
    ctx->pc = 0x33bef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 0));
    // 0x33bef4: 0xae0002d8  sw          $zero, 0x2D8($s0)
    ctx->pc = 0x33bef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 0));
    // 0x33bef8: 0xae0002dc  sw          $zero, 0x2DC($s0)
    ctx->pc = 0x33bef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 0));
    // 0x33befc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33befcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33bf00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33bf00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33bf04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33bf04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33bf08: 0x3e00008  jr          $ra
    ctx->pc = 0x33BF08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33BF08u;
            // 0x33bf0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33BF10u;
}
