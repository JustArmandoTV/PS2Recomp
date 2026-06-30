#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00565060
// Address: 0x565060 - 0x5650f0
void sub_00565060_0x565060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00565060_0x565060");
#endif

    switch (ctx->pc) {
        case 0x5650b0u: goto label_5650b0;
        case 0x5650c8u: goto label_5650c8;
        default: break;
    }

    ctx->pc = 0x565060u;

    // 0x565060: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x565060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x565064: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x565064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x565068: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x565068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x56506c: 0x2442d350  addiu       $v0, $v0, -0x2CB0
    ctx->pc = 0x56506cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955856));
    // 0x565070: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x565070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x565074: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x565074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x565078: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x565078u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x56507c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x56507cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x565080: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x565080u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x565084: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x565084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x565088: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x565088u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x56508c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x56508cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x565090: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x565090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x565094: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x565094u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x565098: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x565098u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x56509c: 0xa0800204  sb          $zero, 0x204($a0)
    ctx->pc = 0x56509cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 516), (uint8_t)GPR_U32(ctx, 0));
    // 0x5650a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x5650a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5650a4: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x5650a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x5650a8: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x5650A8u;
    SET_GPR_U32(ctx, 31, 0x5650B0u);
    ctx->pc = 0x5650ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5650A8u;
            // 0x5650ac: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5650B0u; }
        if (ctx->pc != 0x5650B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5650B0u; }
        if (ctx->pc != 0x5650B0u) { return; }
    }
    ctx->pc = 0x5650B0u;
label_5650b0:
    // 0x5650b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x5650b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5650b4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x5650b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5650b8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x5650b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5650bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x5650bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5650c0: 0xc159368  jal         func_564DA0
    ctx->pc = 0x5650C0u;
    SET_GPR_U32(ctx, 31, 0x5650C8u);
    ctx->pc = 0x5650C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5650C0u;
            // 0x5650c4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x564DA0u;
    if (runtime->hasFunction(0x564DA0u)) {
        auto targetFn = runtime->lookupFunction(0x564DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5650C8u; }
        if (ctx->pc != 0x5650C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00564DA0_0x564da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5650C8u; }
        if (ctx->pc != 0x5650C8u) { return; }
    }
    ctx->pc = 0x5650C8u;
label_5650c8:
    // 0x5650c8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x5650c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5650cc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x5650ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x5650d0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x5650d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x5650d4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x5650d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x5650d8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x5650d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x5650dc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x5650dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5650e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x5650e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5650e4: 0x3e00008  jr          $ra
    ctx->pc = 0x5650E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5650E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5650E4u;
            // 0x5650e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5650ECu;
    // 0x5650ec: 0x0  nop
    ctx->pc = 0x5650ecu;
    // NOP
}
