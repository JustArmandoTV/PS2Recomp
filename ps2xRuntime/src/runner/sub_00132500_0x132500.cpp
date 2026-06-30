#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00132500
// Address: 0x132500 - 0x1325a0
void sub_00132500_0x132500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132500_0x132500");
#endif

    switch (ctx->pc) {
        case 0x132534u: goto label_132534;
        case 0x132548u: goto label_132548;
        case 0x132578u: goto label_132578;
        default: break;
    }

    ctx->pc = 0x132500u;

    // 0x132500: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x132500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x132504: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x132504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x132508: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x132508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x13250c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13250cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x132510: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x132510u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132514: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x132514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x132518: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x132518u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13251c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x13251cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x132520: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x132520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132524: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x132524u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132528: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x132528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13252c: 0xc04c8f0  jal         func_1323C0
    ctx->pc = 0x13252Cu;
    SET_GPR_U32(ctx, 31, 0x132534u);
    ctx->pc = 0x132530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13252Cu;
            // 0x132530: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1323C0u;
    if (runtime->hasFunction(0x1323C0u)) {
        auto targetFn = runtime->lookupFunction(0x1323C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132534u; }
        if (ctx->pc != 0x132534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001323C0_0x1323c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132534u; }
        if (ctx->pc != 0x132534u) { return; }
    }
    ctx->pc = 0x132534u;
label_132534:
    // 0x132534: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x132534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132538: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x132538u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13253c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x13253cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x132540: 0xc04c8f0  jal         func_1323C0
    ctx->pc = 0x132540u;
    SET_GPR_U32(ctx, 31, 0x132548u);
    ctx->pc = 0x132544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x132540u;
            // 0x132544: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1323C0u;
    if (runtime->hasFunction(0x1323C0u)) {
        auto targetFn = runtime->lookupFunction(0x1323C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132548u; }
        if (ctx->pc != 0x132548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001323C0_0x1323c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132548u; }
        if (ctx->pc != 0x132548u) { return; }
    }
    ctx->pc = 0x132548u;
label_132548:
    // 0x132548: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x132548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x13254c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13254cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132550: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x132550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x132554: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x132554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x132558: 0x46140042  mul.s       $f1, $f0, $f20
    ctx->pc = 0x132558u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x13255c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x13255cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x132560: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x132560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x132564: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x132564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x132568: 0x0  nop
    ctx->pc = 0x132568u;
    // NOP
    // 0x13256c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x13256cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x132570: 0xc04c8f0  jal         func_1323C0
    ctx->pc = 0x132570u;
    SET_GPR_U32(ctx, 31, 0x132578u);
    ctx->pc = 0x132574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x132570u;
            // 0x132574: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1323C0u;
    if (runtime->hasFunction(0x1323C0u)) {
        auto targetFn = runtime->lookupFunction(0x1323C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132578u; }
        if (ctx->pc != 0x132578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001323C0_0x1323c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132578u; }
        if (ctx->pc != 0x132578u) { return; }
    }
    ctx->pc = 0x132578u;
label_132578:
    // 0x132578: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x132578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13257c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x13257cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x132580: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x132580u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x132584: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x132584u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x132588: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x132588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13258c: 0x3e00008  jr          $ra
    ctx->pc = 0x13258Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13258Cu;
            // 0x132590: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x132594u;
    // 0x132594: 0x0  nop
    ctx->pc = 0x132594u;
    // NOP
    // 0x132598: 0x0  nop
    ctx->pc = 0x132598u;
    // NOP
    // 0x13259c: 0x0  nop
    ctx->pc = 0x13259cu;
    // NOP
}
