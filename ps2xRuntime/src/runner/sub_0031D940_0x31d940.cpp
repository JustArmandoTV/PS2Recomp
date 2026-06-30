#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0031D940
// Address: 0x31d940 - 0x31da40
void sub_0031D940_0x31d940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D940_0x31d940");
#endif

    switch (ctx->pc) {
        case 0x31d9c8u: goto label_31d9c8;
        case 0x31da20u: goto label_31da20;
        default: break;
    }

    ctx->pc = 0x31d940u;

    // 0x31d940: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x31d940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x31d944: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x31d944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x31d948: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x31d948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x31d94c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31d94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31d950: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31d950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31d954: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31d954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31d958: 0x8c6689f0  lw          $a2, -0x7610($v1)
    ctx->pc = 0x31d958u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
    // 0x31d95c: 0x8c850684  lw          $a1, 0x684($a0)
    ctx->pc = 0x31d95cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1668)));
    // 0x31d960: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31d960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31d964: 0x14a3002e  bne         $a1, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x31D964u;
    {
        const bool branch_taken_0x31d964 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x31D968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D964u;
            // 0x31d968: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d964) {
            ctx->pc = 0x31DA20u;
            goto label_31da20;
        }
    }
    ctx->pc = 0x31D96Cu;
    // 0x31d96c: 0x8cd20018  lw          $s2, 0x18($a2)
    ctx->pc = 0x31d96cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x31d970: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x31d970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x31d974: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31d974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d978: 0x240800c8  addiu       $t0, $zero, 0xC8
    ctx->pc = 0x31d978u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x31d97c: 0xc6010688  lwc1        $f1, 0x688($s0)
    ctx->pc = 0x31d97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31d980: 0x8e050698  lw          $a1, 0x698($s0)
    ctx->pc = 0x31d980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
    // 0x31d984: 0x26420104  addiu       $v0, $s2, 0x104
    ctx->pc = 0x31d984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
    // 0x31d988: 0x128843  sra         $s1, $s2, 1
    ctx->pc = 0x31d988u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 18), 1));
    // 0x31d98c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x31d98cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31d990: 0x8e06069c  lw          $a2, 0x69C($s0)
    ctx->pc = 0x31d990u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1692)));
    // 0x31d994: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x31d994u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x31d998: 0x24090208  addiu       $t1, $zero, 0x208
    ctx->pc = 0x31d998u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x31d99c: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x31d99cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d9a0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x31d9a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x31d9a4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x31d9a4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x31d9a8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x31d9a8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d9ac: 0x0  nop
    ctx->pc = 0x31d9acu;
    // NOP
    // 0x31d9b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31d9b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31d9b4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x31d9b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x31d9b8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31d9b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31d9bc: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x31d9bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x31d9c0: 0xc0c7690  jal         func_31DA40
    ctx->pc = 0x31D9C0u;
    SET_GPR_U32(ctx, 31, 0x31D9C8u);
    ctx->pc = 0x31D9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31D9C0u;
            // 0x31d9c4: 0x240bffff  addiu       $t3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31DA40u;
    if (runtime->hasFunction(0x31DA40u)) {
        auto targetFn = runtime->lookupFunction(0x31DA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D9C8u; }
        if (ctx->pc != 0x31D9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031DA40_0x31da40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D9C8u; }
        if (ctx->pc != 0x31D9C8u) { return; }
    }
    ctx->pc = 0x31D9C8u;
label_31d9c8:
    // 0x31d9c8: 0x26230104  addiu       $v1, $s1, 0x104
    ctx->pc = 0x31d9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
    // 0x31d9cc: 0x240800c8  addiu       $t0, $zero, 0xC8
    ctx->pc = 0x31d9ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x31d9d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31d9d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d9d4: 0x26420104  addiu       $v0, $s2, 0x104
    ctx->pc = 0x31d9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
    // 0x31d9d8: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x31d9d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x31d9dc: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x31d9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x31d9e0: 0x8e05068c  lw          $a1, 0x68C($s0)
    ctx->pc = 0x31d9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1676)));
    // 0x31d9e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31d9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d9e8: 0x8e060690  lw          $a2, 0x690($s0)
    ctx->pc = 0x31d9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x31d9ec: 0x24090208  addiu       $t1, $zero, 0x208
    ctx->pc = 0x31d9ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x31d9f0: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x31d9f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d9f4: 0xc6020688  lwc1        $f2, 0x688($s0)
    ctx->pc = 0x31d9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31d9f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31d9f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d9fc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31d9fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31da00: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x31da00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x31da04: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x31da04u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x31da08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31da08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31da0c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x31da0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x31da10: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31da10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31da14: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x31da14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x31da18: 0xc0c7690  jal         func_31DA40
    ctx->pc = 0x31DA18u;
    SET_GPR_U32(ctx, 31, 0x31DA20u);
    ctx->pc = 0x31DA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31DA18u;
            // 0x31da1c: 0x240bffff  addiu       $t3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31DA40u;
    if (runtime->hasFunction(0x31DA40u)) {
        auto targetFn = runtime->lookupFunction(0x31DA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31DA20u; }
        if (ctx->pc != 0x31DA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031DA40_0x31da40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31DA20u; }
        if (ctx->pc != 0x31DA20u) { return; }
    }
    ctx->pc = 0x31DA20u;
label_31da20:
    // 0x31da20: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x31da20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31da24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31da24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31da28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31da28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31da2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31da2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31da30: 0x3e00008  jr          $ra
    ctx->pc = 0x31DA30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31DA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31DA30u;
            // 0x31da34: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31DA38u;
    // 0x31da38: 0x0  nop
    ctx->pc = 0x31da38u;
    // NOP
    // 0x31da3c: 0x0  nop
    ctx->pc = 0x31da3cu;
    // NOP
}
