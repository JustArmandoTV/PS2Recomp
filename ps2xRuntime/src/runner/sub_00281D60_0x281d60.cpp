#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00281D60
// Address: 0x281d60 - 0x282930
void sub_00281D60_0x281d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281D60_0x281d60");
#endif

    switch (ctx->pc) {
        case 0x281e14u: goto label_281e14;
        case 0x281e84u: goto label_281e84;
        case 0x281ed0u: goto label_281ed0;
        case 0x281ef8u: goto label_281ef8;
        case 0x281f78u: goto label_281f78;
        case 0x281ff4u: goto label_281ff4;
        case 0x282048u: goto label_282048;
        case 0x2820b8u: goto label_2820b8;
        case 0x282150u: goto label_282150;
        case 0x2821e0u: goto label_2821e0;
        case 0x2822b0u: goto label_2822b0;
        case 0x282368u: goto label_282368;
        case 0x28256cu: goto label_28256c;
        case 0x282714u: goto label_282714;
        case 0x2828c8u: goto label_2828c8;
        default: break;
    }

    ctx->pc = 0x281d60u;

    // 0x281d60: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x281d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x281d64: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x281d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x281d68: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x281d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
    // 0x281d6c: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x281d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x281d70: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x281d70u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281d74: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x281d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x281d78: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x281d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x281d7c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x281d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x281d80: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x281d80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281d84: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x281d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x281d88: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x281d88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281d8c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x281d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x281d90: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x281d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x281d94: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x281d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x281d98: 0xe7bf002c  swc1        $f31, 0x2C($sp)
    ctx->pc = 0x281d98u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x281d9c: 0xe7be0028  swc1        $f30, 0x28($sp)
    ctx->pc = 0x281d9cu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x281da0: 0xe7bd0024  swc1        $f29, 0x24($sp)
    ctx->pc = 0x281da0u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x281da4: 0xe7bc0020  swc1        $f28, 0x20($sp)
    ctx->pc = 0x281da4u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x281da8: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x281da8u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x281dac: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x281dacu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x281db0: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x281db0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x281db4: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x281db4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x281db8: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x281db8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x281dbc: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x281dbcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x281dc0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x281dc0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x281dc4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x281dc4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x281dc8: 0xafa5011c  sw          $a1, 0x11C($sp)
    ctx->pc = 0x281dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 5));
    // 0x281dcc: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x281dccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x281dd0: 0xafa80118  sw          $t0, 0x118($sp)
    ctx->pc = 0x281dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 8));
    // 0x281dd4: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x281dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x281dd8: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x281dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x281ddc: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x281ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x281de0: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x281de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x281de4: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x281de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281de8: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x281de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281dec: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x281decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x281df0: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x281df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x281df4: 0x46001dc7  neg.s       $f23, $f3
    ctx->pc = 0x281df4u;
    ctx->f[23] = FPU_NEG_S(ctx->f[3]);
    // 0x281df8: 0x46001587  neg.s       $f22, $f2
    ctx->pc = 0x281df8u;
    ctx->f[22] = FPU_NEG_S(ctx->f[2]);
    // 0x281dfc: 0x46000d47  neg.s       $f21, $f1
    ctx->pc = 0x281dfcu;
    ctx->f[21] = FPU_NEG_S(ctx->f[1]);
    // 0x281e00: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x281E00u;
    {
        const bool branch_taken_0x281e00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x281E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281E00u;
            // 0x281e04: 0x46000507  neg.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x281e00) {
            ctx->pc = 0x281E18u;
            goto label_281e18;
        }
    }
    ctx->pc = 0x281E08u;
    // 0x281e08: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x281e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x281e0c: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x281E0Cu;
    SET_GPR_U32(ctx, 31, 0x281E14u);
    ctx->pc = 0x281E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281E0Cu;
            // 0x281e10: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281E14u; }
        if (ctx->pc != 0x281E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281E14u; }
        if (ctx->pc != 0x281E14u) { return; }
    }
    ctx->pc = 0x281E14u;
label_281e14:
    // 0x281e14: 0x0  nop
    ctx->pc = 0x281e14u;
    // NOP
label_281e18:
    // 0x281e18: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x281e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x281e1c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x281e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x281e20: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x281e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x281e24: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x281e24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x281e28: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x281e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x281e2c: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x281e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x281e30: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x281e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x281e34: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x281e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281e38: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x281e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x281e3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x281e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x281e40: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x281e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x281e44: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x281e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281e48: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x281e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x281e4c: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x281e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281e50: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x281e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x281e54: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x281e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281e58: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x281e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x281e5c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x281e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x281e60: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x281e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x281e64: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x281e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x281e68: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x281e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x281e6c: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x281e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x281e70: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x281E70u;
    {
        const bool branch_taken_0x281e70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x281e70) {
            ctx->pc = 0x281E88u;
            goto label_281e88;
        }
    }
    ctx->pc = 0x281E78u;
    // 0x281e78: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x281e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x281e7c: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x281E7Cu;
    SET_GPR_U32(ctx, 31, 0x281E84u);
    ctx->pc = 0x281E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281E7Cu;
            // 0x281e80: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281E84u; }
        if (ctx->pc != 0x281E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281E84u; }
        if (ctx->pc != 0x281E84u) { return; }
    }
    ctx->pc = 0x281E84u;
label_281e84:
    // 0x281e84: 0x0  nop
    ctx->pc = 0x281e84u;
    // NOP
label_281e88:
    // 0x281e88: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x281e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x281e8c: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x281e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x281e90: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x281e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281e94: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x281e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x281e98: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x281e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x281e9c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x281e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x281ea0: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x281ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x281ea4: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x281ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x281ea8: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x281ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x281eac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x281eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x281eb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x281eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x281eb4: 0xe4570000  swc1        $f23, 0x0($v0)
    ctx->pc = 0x281eb4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x281eb8: 0xe4560004  swc1        $f22, 0x4($v0)
    ctx->pc = 0x281eb8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x281ebc: 0xe4550008  swc1        $f21, 0x8($v0)
    ctx->pc = 0x281ebcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x281ec0: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x281ec0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x281ec4: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x281ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x281ec8: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x281EC8u;
    SET_GPR_U32(ctx, 31, 0x281ED0u);
    ctx->pc = 0x281ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281EC8u;
            // 0x281ecc: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281ED0u; }
        if (ctx->pc != 0x281ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281ED0u; }
        if (ctx->pc != 0x281ED0u) { return; }
    }
    ctx->pc = 0x281ED0u;
label_281ed0:
    // 0x281ed0: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x281ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x281ed4: 0x27a40128  addiu       $a0, $sp, 0x128
    ctx->pc = 0x281ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x281ed8: 0xafb40124  sw          $s4, 0x124($sp)
    ctx->pc = 0x281ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 20));
    // 0x281edc: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x281edcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x281ee0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x281ee0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281ee4: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x281EE4u;
    {
        const bool branch_taken_0x281ee4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x281EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281EE4u;
            // 0x281ee8: 0xac940000  sw          $s4, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281ee4) {
            ctx->pc = 0x281F98u;
            goto label_281f98;
        }
    }
    ctx->pc = 0x281EECu;
    // 0x281eec: 0x2a810009  slti        $at, $s4, 0x9
    ctx->pc = 0x281eecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x281ef0: 0x1420001d  bnez        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x281EF0u;
    {
        const bool branch_taken_0x281ef0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x281EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281EF0u;
            // 0x281ef4: 0x2685fff8  addiu       $a1, $s4, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281ef0) {
            ctx->pc = 0x281F68u;
            goto label_281f68;
        }
    }
    ctx->pc = 0x281EF8u;
label_281ef8:
    // 0x281ef8: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x281ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x281efc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x281efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x281f00: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x281f00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x281f04: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x281f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x281f08: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x281f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x281f0c: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x281f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x281f10: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x281f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x281f14: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x281f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x281f18: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x281f18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x281f1c: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x281f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x281f20: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x281f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x281f24: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x281f24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x281f28: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x281f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x281f2c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x281f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x281f30: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x281f30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x281f34: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x281f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x281f38: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x281f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x281f3c: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x281f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x281f40: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x281f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x281f44: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x281f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x281f48: 0xa0800006  sb          $zero, 0x6($a0)
    ctx->pc = 0x281f48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x281f4c: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x281f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x281f50: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x281f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x281f54: 0xa0800007  sb          $zero, 0x7($a0)
    ctx->pc = 0x281f54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x281f58: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x281f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x281f5c: 0x65202a  slt         $a0, $v1, $a1
    ctx->pc = 0x281f5cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x281f60: 0x1480ffe5  bnez        $a0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x281F60u;
    {
        const bool branch_taken_0x281f60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x281f60) {
            ctx->pc = 0x281EF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_281ef8;
        }
    }
    ctx->pc = 0x281F68u;
label_281f68:
    // 0x281f68: 0x74082a  slt         $at, $v1, $s4
    ctx->pc = 0x281f68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x281f6c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x281F6Cu;
    {
        const bool branch_taken_0x281f6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x281f6c) {
            ctx->pc = 0x281F98u;
            goto label_281f98;
        }
    }
    ctx->pc = 0x281F74u;
    // 0x281f74: 0x0  nop
    ctx->pc = 0x281f74u;
    // NOP
label_281f78:
    // 0x281f78: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x281f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x281f7c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x281f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x281f80: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x281f80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x281f84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x281f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x281f88: 0x74202a  slt         $a0, $v1, $s4
    ctx->pc = 0x281f88u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x281f8c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x281F8Cu;
    {
        const bool branch_taken_0x281f8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x281f8c) {
            ctx->pc = 0x281F78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_281f78;
        }
    }
    ctx->pc = 0x281F94u;
    // 0x281f94: 0x0  nop
    ctx->pc = 0x281f94u;
    // NOP
label_281f98:
    // 0x281f98: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x281f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x281f9c: 0xc6a30008  lwc1        $f3, 0x8($s5)
    ctx->pc = 0x281f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x281fa0: 0x4483a800  mtc1        $v1, $f21
    ctx->pc = 0x281fa0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x281fa4: 0x3c033586  lui         $v1, 0x3586
    ctx->pc = 0x281fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13702 << 16));
    // 0x281fa8: 0x346337bd  ori         $v1, $v1, 0x37BD
    ctx->pc = 0x281fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14269);
    // 0x281fac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x281facu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281fb0: 0x46001845  abs.s       $f1, $f3
    ctx->pc = 0x281fb0u;
    ctx->f[1] = FPU_ABS_S(ctx->f[3]);
    // 0x281fb4: 0x4601a841  sub.s       $f1, $f21, $f1
    ctx->pc = 0x281fb4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
    // 0x281fb8: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x281fb8u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x281fbc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x281fbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x281fc0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x281FC0u;
    {
        const bool branch_taken_0x281fc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x281FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281FC0u;
            // 0x281fc4: 0x2416ffff  addiu       $s6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281fc0) {
            ctx->pc = 0x281FF8u;
            goto label_281ff8;
        }
    }
    ctx->pc = 0x281FC8u;
    // 0x281fc8: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x281fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281fcc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x281fccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x281fd0: 0x0  nop
    ctx->pc = 0x281fd0u;
    // NOP
    // 0x281fd4: 0x4603a802  mul.s       $f0, $f21, $f3
    ctx->pc = 0x281fd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[3]);
    // 0x281fd8: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x281fd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x281fdc: 0xc6a20004  lwc1        $f2, 0x4($s5)
    ctx->pc = 0x281fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x281fe0: 0x46000dc1  sub.s       $f23, $f1, $f0
    ctx->pc = 0x281fe0u;
    ctx->f[23] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x281fe4: 0x4603a01a  mula.s      $f20, $f3
    ctx->pc = 0x281fe4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x281fe8: 0x4602a802  mul.s       $f0, $f21, $f2
    ctx->pc = 0x281fe8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x281fec: 0x46010581  sub.s       $f22, $f0, $f1
    ctx->pc = 0x281fecu;
    ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x281ff0: 0x1000000d  b           . + 4 + (0xD << 2)
label_281ff4:
    if (ctx->pc == 0x281FF4u) {
        ctx->pc = 0x281FF4u;
            // 0x281ff4: 0x4602a61d  msub.s      $f24, $f20, $f2 (Delay Slot)
        ctx->f[24] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[2]));
        ctx->pc = 0x281FF8u;
        goto label_281ff8;
    }
    ctx->pc = 0x281FF0u;
    {
        const bool branch_taken_0x281ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281FF0u;
            // 0x281ff4: 0x4602a61d  msub.s      $f24, $f20, $f2 (Delay Slot)
        ctx->f[24] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281ff0) {
            ctx->pc = 0x282028u;
            goto label_282028;
        }
    }
    ctx->pc = 0x281FF8u;
label_281ff8:
    // 0x281ff8: 0xc6a20004  lwc1        $f2, 0x4($s5)
    ctx->pc = 0x281ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x281ffc: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x281ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282000: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x282000u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x282004: 0x0  nop
    ctx->pc = 0x282004u;
    // NOP
    // 0x282008: 0x46141842  mul.s       $f1, $f3, $f20
    ctx->pc = 0x282008u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x28200c: 0x4615101a  mula.s      $f2, $f21
    ctx->pc = 0x28200cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x282010: 0x46141e1d  msub.s      $f24, $f3, $f20
    ctx->pc = 0x282010u;
    ctx->f[24] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[20]));
    // 0x282014: 0x4614001a  mula.s      $f0, $f20
    ctx->pc = 0x282014u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x282018: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x282018u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x28201c: 0x46000dc1  sub.s       $f23, $f1, $f0
    ctx->pc = 0x28201cu;
    ctx->f[23] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x282020: 0x4614159d  msub.s      $f22, $f2, $f20
    ctx->pc = 0x282020u;
    ctx->f[22] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[20]));
    // 0x282024: 0x0  nop
    ctx->pc = 0x282024u;
    // NOP
label_282028:
    // 0x282028: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x282028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
    // 0x28202c: 0x3463ffee  ori         $v1, $v1, 0xFFEE
    ctx->pc = 0x28202cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65518);
    // 0x282030: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x282030u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x282034: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x282034u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x282038: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x282038u;
    {
        const bool branch_taken_0x282038 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28203Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282038u;
            // 0x28203c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282038) {
            ctx->pc = 0x282088u;
            goto label_282088;
        }
    }
    ctx->pc = 0x282040u;
    // 0x282040: 0x8fa4011c  lw          $a0, 0x11C($sp)
    ctx->pc = 0x282040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x282044: 0x0  nop
    ctx->pc = 0x282044u;
    // NOP
label_282048:
    // 0x282048: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x282048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28204c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x28204cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282050: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x282050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282054: 0x46181082  mul.s       $f2, $f2, $f24
    ctx->pc = 0x282054u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[24]);
    // 0x282058: 0x46170842  mul.s       $f1, $f1, $f23
    ctx->pc = 0x282058u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
    // 0x28205c: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x28205cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x282060: 0x4616001c  madd.s      $f0, $f0, $f22
    ctx->pc = 0x282060u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[22]));
    // 0x282064: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x282064u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282068: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x282068u;
    {
        const bool branch_taken_0x282068 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x282068) {
            ctx->pc = 0x282078u;
            goto label_282078;
        }
    }
    ctx->pc = 0x282070u;
    // 0x282070: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x282070u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x282074: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x282074u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_282078:
    // 0x282078: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x282078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x28207c: 0xb4182a  slt         $v1, $a1, $s4
    ctx->pc = 0x28207cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x282080: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x282080u;
    {
        const bool branch_taken_0x282080 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x282084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282080u;
            // 0x282084: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282080) {
            ctx->pc = 0x282048u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_282048;
        }
    }
    ctx->pc = 0x282088u;
label_282088:
    // 0x282088: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x282088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x28208c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28208cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282090: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x282090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x282094: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x282094u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x282098: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x282098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x28209c: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x28209cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2820a0: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x2820a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x2820a4: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x2820a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x2820a8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2820A8u;
    {
        const bool branch_taken_0x2820a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2820ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2820A8u;
            // 0x2820ac: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2820a8) {
            ctx->pc = 0x2820B8u;
            goto label_2820b8;
        }
    }
    ctx->pc = 0x2820B0u;
    // 0x2820b0: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x2820B0u;
    SET_GPR_U32(ctx, 31, 0x2820B8u);
    ctx->pc = 0x2820B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2820B0u;
            // 0x2820b4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2820B8u; }
        if (ctx->pc != 0x2820B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2820B8u; }
        if (ctx->pc != 0x2820B8u) { return; }
    }
    ctx->pc = 0x2820B8u;
label_2820b8:
    // 0x2820b8: 0x8fa3011c  lw          $v1, 0x11C($sp)
    ctx->pc = 0x2820b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x2820bc: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x2820bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2820c0: 0x162100  sll         $a0, $s6, 4
    ctx->pc = 0x2820c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x2820c4: 0x4480e000  mtc1        $zero, $f28
    ctx->pc = 0x2820c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x2820c8: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x2820c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2820cc: 0x4614e700  add.s       $f28, $f28, $f20
    ctx->pc = 0x2820ccu;
    ctx->f[28] = FPU_ADD_S(ctx->f[28], ctx->f[20]);
    // 0x2820d0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2820d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2820d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2820d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2820d8: 0xafb60114  sw          $s6, 0x114($sp)
    ctx->pc = 0x2820d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 22));
    // 0x2820dc: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x2820dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
    // 0x2820e0: 0x8fb70100  lw          $s7, 0x100($sp)
    ctx->pc = 0x2820e0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2820e4: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x2820e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2820e8: 0xa3a000f0  sb          $zero, 0xF0($sp)
    ctx->pc = 0x2820e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 240), (uint8_t)GPR_U32(ctx, 0));
    // 0x2820ec: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2820ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2820f0: 0xafc30004  sw          $v1, 0x4($fp)
    ctx->pc = 0x2820f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 3));
    // 0x2820f4: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x2820f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2820f8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2820f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2820fc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2820fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x282100: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x282100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x282104: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x282104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282108: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x282108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x28210c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x28210cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282110: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x282110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x282114: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x282114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282118: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x282118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x28211c: 0xc6a20008  lwc1        $f2, 0x8($s5)
    ctx->pc = 0x28211cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x282120: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x282120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282124: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x282124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282128: 0x4602b81a  mula.s      $f23, $f2
    ctx->pc = 0x282128u;
    ctx->f[31] = FPU_MUL_S(ctx->f[23], ctx->f[2]);
    // 0x28212c: 0x4600b7dd  msub.s      $f31, $f22, $f0
    ctx->pc = 0x28212cu;
    ctx->f[31] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[0]));
    // 0x282130: 0x4601b01a  mula.s      $f22, $f1
    ctx->pc = 0x282130u;
    ctx->f[31] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
    // 0x282134: 0x4602c79d  msub.s      $f30, $f24, $f2
    ctx->pc = 0x282134u;
    ctx->f[30] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[24], ctx->f[2]));
    // 0x282138: 0x4600c01a  mula.s      $f24, $f0
    ctx->pc = 0x282138u;
    ctx->f[31] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x28213c: 0x4601bf5d  msub.s      $f29, $f23, $f1
    ctx->pc = 0x28213cu;
    ctx->f[29] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[23], ctx->f[1]));
    // 0x282140: 0x4618ffc0  add.s       $f31, $f31, $f24
    ctx->pc = 0x282140u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], ctx->f[24]);
    // 0x282144: 0x4617f780  add.s       $f30, $f30, $f23
    ctx->pc = 0x282144u;
    ctx->f[30] = FPU_ADD_S(ctx->f[30], ctx->f[23]);
    // 0x282148: 0x4616ef40  add.s       $f29, $f29, $f22
    ctx->pc = 0x282148u;
    ctx->f[29] = FPU_ADD_S(ctx->f[29], ctx->f[22]);
    // 0x28214c: 0x0  nop
    ctx->pc = 0x28214cu;
    // NOP
label_282150:
    // 0x282150: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x282150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
    // 0x282154: 0x461ff842  mul.s       $f1, $f31, $f31
    ctx->pc = 0x282154u;
    ctx->f[1] = FPU_MUL_S(ctx->f[31], ctx->f[31]);
    // 0x282158: 0x461ef002  mul.s       $f0, $f30, $f30
    ctx->pc = 0x282158u;
    ctx->f[0] = FPU_MUL_S(ctx->f[30], ctx->f[30]);
    // 0x28215c: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x28215cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x282160: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x282160u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282164: 0x461de85c  madd.s      $f1, $f29, $f29
    ctx->pc = 0x282164u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[29], ctx->f[29]));
    // 0x282168: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x282168u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28216c: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x28216cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x282170: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x282170u;
    {
        const bool branch_taken_0x282170 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x282170) {
            ctx->pc = 0x282198u;
            goto label_282198;
        }
    }
    ctx->pc = 0x282178u;
    // 0x282178: 0x0  nop
    ctx->pc = 0x282178u;
    // NOP
    // 0x28217c: 0x0  nop
    ctx->pc = 0x28217cu;
    // NOP
    // 0x282180: 0x4601a816  rsqrt.s     $f0, $f21, $f1
    ctx->pc = 0x282180u;
    ctx->f[0] = 1.0f / sqrtf(ctx->f[21]);
    // 0x282184: 0x0  nop
    ctx->pc = 0x282184u;
    // NOP
    // 0x282188: 0x0  nop
    ctx->pc = 0x282188u;
    // NOP
    // 0x28218c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28218Cu;
    {
        const bool branch_taken_0x28218c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28218c) {
            ctx->pc = 0x282198u;
            goto label_282198;
        }
    }
    ctx->pc = 0x282194u;
    // 0x282194: 0x0  nop
    ctx->pc = 0x282194u;
    // NOP
label_282198:
    // 0x282198: 0x3c037f7f  lui         $v1, 0x7F7F
    ctx->pc = 0x282198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32639 << 16));
    // 0x28219c: 0x4600ffc2  mul.s       $f31, $f31, $f0
    ctx->pc = 0x28219cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[31], ctx->f[0]);
    // 0x2821a0: 0x3463ffee  ori         $v1, $v1, 0xFFEE
    ctx->pc = 0x2821a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65518);
    // 0x2821a4: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x2821a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2821a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2821a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2821ac: 0x4600f782  mul.s       $f30, $f30, $f0
    ctx->pc = 0x2821acu;
    ctx->f[30] = FPU_MUL_S(ctx->f[30], ctx->f[0]);
    // 0x2821b0: 0x4600ef42  mul.s       $f29, $f29, $f0
    ctx->pc = 0x2821b0u;
    ctx->f[29] = FPU_MUL_S(ctx->f[29], ctx->f[0]);
    // 0x2821b4: 0x4483b800  mtc1        $v1, $f23
    ctx->pc = 0x2821b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2821b8: 0x10200047  beqz        $at, . + 4 + (0x47 << 2)
    ctx->pc = 0x2821B8u;
    {
        const bool branch_taken_0x2821b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2821BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2821B8u;
            // 0x2821bc: 0x4600e702  mul.s       $f28, $f28, $f0 (Delay Slot)
        ctx->f[28] = FPU_MUL_S(ctx->f[28], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2821b8) {
            ctx->pc = 0x2822D8u;
            goto label_2822d8;
        }
    }
    ctx->pc = 0x2821C0u;
    // 0x2821c0: 0x8fb1011c  lw          $s1, 0x11C($sp)
    ctx->pc = 0x2821c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x2821c4: 0x132100  sll         $a0, $s3, 4
    ctx->pc = 0x2821c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x2821c8: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x2821c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2821cc: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x2821ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2821d0: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x2821d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2821d4: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x2821d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x2821d8: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x2821d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2821dc: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x2821dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_2821e0:
    // 0x2821e0: 0x12530039  beq         $s2, $s3, . + 4 + (0x39 << 2)
    ctx->pc = 0x2821E0u;
    {
        const bool branch_taken_0x2821e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 19));
        if (branch_taken_0x2821e0) {
            ctx->pc = 0x2822C8u;
            goto label_2822c8;
        }
    }
    ctx->pc = 0x2821E8u;
    // 0x2821e8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2821e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2821ec: 0xc6250008  lwc1        $f5, 0x8($s1)
    ctx->pc = 0x2821ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2821f0: 0xc6270004  lwc1        $f7, 0x4($s1)
    ctx->pc = 0x2821f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2821f4: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x2821f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2821f8: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2821f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2821fc: 0xc6a30000  lwc1        $f3, 0x0($s5)
    ctx->pc = 0x2821fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x282200: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x282200u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282204: 0xc4460000  lwc1        $f6, 0x0($v0)
    ctx->pc = 0x282204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x282208: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x282208u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x28220c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x28220cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x282210: 0x46063ac1  sub.s       $f11, $f7, $f6
    ctx->pc = 0x282210u;
    ctx->f[11] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x282214: 0xc6a20004  lwc1        $f2, 0x4($s5)
    ctx->pc = 0x282214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x282218: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x282218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28221c: 0x460c6202  mul.s       $f8, $f12, $f12
    ctx->pc = 0x28221cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x282220: 0x46042a81  sub.s       $f10, $f5, $f4
    ctx->pc = 0x282220u;
    ctx->f[10] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x282224: 0x460af01a  mula.s      $f30, $f10
    ctx->pc = 0x282224u;
    ctx->f[31] = FPU_MUL_S(ctx->f[30], ctx->f[10]);
    // 0x282228: 0x460be91d  msub.s      $f4, $f29, $f11
    ctx->pc = 0x282228u;
    ctx->f[4] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[29], ctx->f[11]));
    // 0x28222c: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x28222cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x282230: 0x460421c2  mul.s       $f7, $f4, $f4
    ctx->pc = 0x282230u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x282234: 0x460ce81a  mula.s      $f29, $f12
    ctx->pc = 0x282234u;
    ctx->f[31] = FPU_MUL_S(ctx->f[29], ctx->f[12]);
    // 0x282238: 0x460af91d  msub.s      $f4, $f31, $f10
    ctx->pc = 0x282238u;
    ctx->f[4] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[31], ctx->f[10]));
    // 0x28223c: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x28223cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x282240: 0x46042182  mul.s       $f6, $f4, $f4
    ctx->pc = 0x282240u;
    ctx->f[6] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x282244: 0x460bf81a  mula.s      $f31, $f11
    ctx->pc = 0x282244u;
    ctx->f[31] = FPU_MUL_S(ctx->f[31], ctx->f[11]);
    // 0x282248: 0x460b5902  mul.s       $f4, $f11, $f11
    ctx->pc = 0x282248u;
    ctx->f[4] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x28224c: 0x460cf25d  msub.s      $f9, $f30, $f12
    ctx->pc = 0x28224cu;
    ctx->f[9] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[30], ctx->f[12]));
    // 0x282250: 0x46044018  adda.s      $f8, $f4
    ctx->pc = 0x282250u;
    ctx->f[31] = FPU_ADD_S(ctx->f[8], ctx->f[4]);
    // 0x282254: 0x460a521c  madd.s      $f8, $f10, $f10
    ctx->pc = 0x282254u;
    ctx->f[8] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[10]));
    // 0x282258: 0x46063818  adda.s      $f7, $f6
    ctx->pc = 0x282258u;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x28225c: 0x460cf942  mul.s       $f5, $f31, $f12
    ctx->pc = 0x28225cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[31], ctx->f[12]);
    // 0x282260: 0x460bf102  mul.s       $f4, $f30, $f11
    ctx->pc = 0x282260u;
    ctx->f[4] = FPU_MUL_S(ctx->f[30], ctx->f[11]);
    // 0x282264: 0x4609499c  madd.s      $f6, $f9, $f9
    ctx->pc = 0x282264u;
    ctx->f[6] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[9]));
    // 0x282268: 0x46042818  adda.s      $f5, $f4
    ctx->pc = 0x282268u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x28226c: 0x460801c4  c1          0x801C4
    ctx->pc = 0x28226cu;
    ctx->f[7] = FPU_SQRT_S(ctx->f[0]);
    // 0x282270: 0x46060104  c1          0x60104
    ctx->pc = 0x282270u;
    ctx->f[4] = FPU_SQRT_S(ctx->f[0]);
    // 0x282274: 0x46072583  div.s       $f22, $f4, $f7
    ctx->pc = 0x282274u;
    if (ctx->f[7] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[22] = ctx->f[4] / ctx->f[7];
    // 0x282278: 0x460ae91c  madd.s      $f4, $f29, $f10
    ctx->pc = 0x282278u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[29], ctx->f[10]));
    // 0x28227c: 0x46072303  div.s       $f12, $f4, $f7
    ctx->pc = 0x28227cu;
    if (ctx->f[7] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[12] = ctx->f[4] / ctx->f[7];
    // 0x282280: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x282280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282284: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x282284u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x282288: 0x0  nop
    ctx->pc = 0x282288u;
    // NOP
    // 0x28228c: 0x4601485c  madd.s      $f1, $f9, $f1
    ctx->pc = 0x28228cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[1]));
    // 0x282290: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x282290u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282294: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x282294u;
    {
        const bool branch_taken_0x282294 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x282298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282294u;
            // 0x282298: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282294) {
            ctx->pc = 0x2822A8u;
            goto label_2822a8;
        }
    }
    ctx->pc = 0x28229Cu;
    // 0x28229c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28229cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2822a0: 0x0  nop
    ctx->pc = 0x2822a0u;
    // NOP
    // 0x2822a4: 0x4600b582  mul.s       $f22, $f22, $f0
    ctx->pc = 0x2822a4u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_2822a8:
    // 0x2822a8: 0xc0a0744  jal         func_281D10
    ctx->pc = 0x2822A8u;
    SET_GPR_U32(ctx, 31, 0x2822B0u);
    ctx->pc = 0x2822ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2822A8u;
            // 0x2822ac: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x281D10u;
    if (runtime->hasFunction(0x281D10u)) {
        auto targetFn = runtime->lookupFunction(0x281D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2822B0u; }
        if (ctx->pc != 0x2822B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281D10_0x281d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2822B0u; }
        if (ctx->pc != 0x2822B0u) { return; }
    }
    ctx->pc = 0x2822B0u;
label_2822b0:
    // 0x2822b0: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x2822b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2822b4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2822B4u;
    {
        const bool branch_taken_0x2822b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2822b4) {
            ctx->pc = 0x2822C8u;
            goto label_2822c8;
        }
    }
    ctx->pc = 0x2822BCu;
    // 0x2822bc: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x2822bcu;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x2822c0: 0x240b82d  daddu       $s7, $s2, $zero
    ctx->pc = 0x2822c0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2822c4: 0x4600b506  mov.s       $f20, $f22
    ctx->pc = 0x2822c4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[22]);
label_2822c8:
    // 0x2822c8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2822c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2822cc: 0x254182a  slt         $v1, $s2, $s4
    ctx->pc = 0x2822ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2822d0: 0x1460ffc3  bnez        $v1, . + 4 + (-0x3D << 2)
    ctx->pc = 0x2822D0u;
    {
        const bool branch_taken_0x2822d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2822D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2822D0u;
            // 0x2822d4: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2822d0) {
            ctx->pc = 0x2821E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2821e0;
        }
    }
    ctx->pc = 0x2822D8u;
label_2822d8:
    // 0x2822d8: 0x1276008f  beq         $s3, $s6, . + 4 + (0x8F << 2)
    ctx->pc = 0x2822D8u;
    {
        const bool branch_taken_0x2822d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 22));
        if (branch_taken_0x2822d8) {
            ctx->pc = 0x282518u;
            goto label_282518;
        }
    }
    ctx->pc = 0x2822E0u;
    // 0x2822e0: 0x8fa30114  lw          $v1, 0x114($sp)
    ctx->pc = 0x2822e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x2822e4: 0x132900  sll         $a1, $s3, 4
    ctx->pc = 0x2822e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x2822e8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2822e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2822ec: 0x8fa3011c  lw          $v1, 0x11C($sp)
    ctx->pc = 0x2822ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x2822f0: 0x658021  addu        $s0, $v1, $a1
    ctx->pc = 0x2822f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2822f4: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x2822f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2822f8: 0xc6070000  lwc1        $f7, 0x0($s0)
    ctx->pc = 0x2822f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2822fc: 0x172100  sll         $a0, $s7, 4
    ctx->pc = 0x2822fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x282300: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x282300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282304: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x282304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x282308: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x282308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28230c: 0x26110004  addiu       $s1, $s0, 0x4
    ctx->pc = 0x28230cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x282310: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x282310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282314: 0x26120008  addiu       $s2, $s0, 0x8
    ctx->pc = 0x282314u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x282318: 0xc6060004  lwc1        $f6, 0x4($s0)
    ctx->pc = 0x282318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x28231c: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x28231cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x282320: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x282320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x282324: 0x46003ec1  sub.s       $f27, $f7, $f0
    ctx->pc = 0x282324u;
    ctx->f[27] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
    // 0x282328: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x282328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28232c: 0xc6050008  lwc1        $f5, 0x8($s0)
    ctx->pc = 0x28232cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x282330: 0x46043681  sub.s       $f26, $f6, $f4
    ctx->pc = 0x282330u;
    ctx->f[26] = FPU_SUB_S(ctx->f[6], ctx->f[4]);
    // 0x282334: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x282334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x282338: 0x46023e01  sub.s       $f24, $f7, $f2
    ctx->pc = 0x282338u;
    ctx->f[24] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x28233c: 0x460135c1  sub.s       $f23, $f6, $f1
    ctx->pc = 0x28233cu;
    ctx->f[23] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
    // 0x282340: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x282340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x282344: 0x46032e41  sub.s       $f25, $f5, $f3
    ctx->pc = 0x282344u;
    ctx->f[25] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x282348: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x282348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x28234c: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x28234cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x282350: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x282350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x282354: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x282354u;
    {
        const bool branch_taken_0x282354 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x282358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282354u;
            // 0x282358: 0x46002d81  sub.s       $f22, $f5, $f0 (Delay Slot)
        ctx->f[22] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x282354) {
            ctx->pc = 0x282368u;
            goto label_282368;
        }
    }
    ctx->pc = 0x28235Cu;
    // 0x28235c: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x28235cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x282360: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x282360u;
    SET_GPR_U32(ctx, 31, 0x282368u);
    ctx->pc = 0x282364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282360u;
            // 0x282364: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282368u; }
        if (ctx->pc != 0x282368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282368u; }
        if (ctx->pc != 0x282368u) { return; }
    }
    ctx->pc = 0x282368u;
label_282368:
    // 0x282368: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x282368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x28236c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x28236cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x282370: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x282370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x282374: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x282374u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x282378: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x282378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x28237c: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x28237cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x282380: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x282380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x282384: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x282384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x282388: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x282388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28238c: 0x8fa30114  lw          $v1, 0x114($sp)
    ctx->pc = 0x28238cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x282390: 0x10770009  beq         $v1, $s7, . + 4 + (0x9 << 2)
    ctx->pc = 0x282390u;
    {
        const bool branch_taken_0x282390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 23));
        if (branch_taken_0x282390) {
            ctx->pc = 0x2823B8u;
            goto label_2823b8;
        }
    }
    ctx->pc = 0x282398u;
    // 0x282398: 0x4616d01a  mula.s      $f26, $f22
    ctx->pc = 0x282398u;
    ctx->f[31] = FPU_MUL_S(ctx->f[26], ctx->f[22]);
    // 0x28239c: 0x4617c91d  msub.s      $f4, $f25, $f23
    ctx->pc = 0x28239cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[25], ctx->f[23]));
    // 0x2823a0: 0x4618c81a  mula.s      $f25, $f24
    ctx->pc = 0x2823a0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[25], ctx->f[24]);
    // 0x2823a4: 0x4616d8dd  msub.s      $f3, $f27, $f22
    ctx->pc = 0x2823a4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[27], ctx->f[22]));
    // 0x2823a8: 0x4617d81a  mula.s      $f27, $f23
    ctx->pc = 0x2823a8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[27], ctx->f[23]);
    // 0x2823ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2823ACu;
    {
        const bool branch_taken_0x2823ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2823B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2823ACu;
            // 0x2823b0: 0x4618d09d  msub.s      $f2, $f26, $f24 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[26], ctx->f[24]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2823ac) {
            ctx->pc = 0x2823C8u;
            goto label_2823c8;
        }
    }
    ctx->pc = 0x2823B4u;
    // 0x2823b4: 0x0  nop
    ctx->pc = 0x2823b4u;
    // NOP
label_2823b8:
    // 0x2823b8: 0xc6a40000  lwc1        $f4, 0x0($s5)
    ctx->pc = 0x2823b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2823bc: 0xc6a30004  lwc1        $f3, 0x4($s5)
    ctx->pc = 0x2823bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2823c0: 0xc6a20008  lwc1        $f2, 0x8($s5)
    ctx->pc = 0x2823c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2823c4: 0x0  nop
    ctx->pc = 0x2823c4u;
    // NOP
label_2823c8:
    // 0x2823c8: 0x3c033586  lui         $v1, 0x3586
    ctx->pc = 0x2823c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13702 << 16));
    // 0x2823cc: 0x4602d01a  mula.s      $f26, $f2
    ctx->pc = 0x2823ccu;
    ctx->f[31] = FPU_MUL_S(ctx->f[26], ctx->f[2]);
    // 0x2823d0: 0x346337bd  ori         $v1, $v1, 0x37BD
    ctx->pc = 0x2823d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14269);
    // 0x2823d4: 0x4603c85d  msub.s      $f1, $f25, $f3
    ctx->pc = 0x2823d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[25], ctx->f[3]));
    // 0x2823d8: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x2823d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2823dc: 0x4604c81a  mula.s      $f25, $f4
    ctx->pc = 0x2823dcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[25], ctx->f[4]);
    // 0x2823e0: 0x4602d85d  msub.s      $f1, $f27, $f2
    ctx->pc = 0x2823e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[27], ctx->f[2]));
    // 0x2823e4: 0x4603d81a  mula.s      $f27, $f3
    ctx->pc = 0x2823e4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[27], ctx->f[3]);
    // 0x2823e8: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2823e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2823ec: 0x4604d05d  msub.s      $f1, $f26, $f4
    ctx->pc = 0x2823ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[26], ctx->f[4]));
    // 0x2823f0: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x2823f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2823f4: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2823f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2823f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2823f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2823fc: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x2823fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x282400: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x282400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x282404: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x282404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282408: 0x461818c2  mul.s       $f3, $f3, $f24
    ctx->pc = 0x282408u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[24]);
    // 0x28240c: 0x46171082  mul.s       $f2, $f2, $f23
    ctx->pc = 0x28240cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[23]);
    // 0x282410: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x282410u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x282414: 0x4616085c  madd.s      $f1, $f1, $f22
    ctx->pc = 0x282414u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[22]));
    // 0x282418: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x282418u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28241c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x28241Cu;
    {
        const bool branch_taken_0x28241c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x282420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28241Cu;
            // 0x282420: 0x3c03bf80  lui         $v1, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28241c) {
            ctx->pc = 0x282430u;
            goto label_282430;
        }
    }
    ctx->pc = 0x282424u;
    // 0x282424: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x282424u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x282428: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x282428u;
    {
        const bool branch_taken_0x282428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x282428) {
            ctx->pc = 0x282438u;
            goto label_282438;
        }
    }
    ctx->pc = 0x282430u;
label_282430:
    // 0x282430: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x282430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x282434: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x282434u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_282438:
    // 0x282438: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x282438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28243c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x28243cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x282440: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x282440u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x282444: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x282444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x282448: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x282448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28244c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28244cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x282450: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x282450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x282454: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x282454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282458: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x282458u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28245c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x28245cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x282460: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x282460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282464: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x282464u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x282468: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x282468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x28246c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x28246cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282470: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x282470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282474: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x282474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x282478: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x282478u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x28247c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x28247cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x282480: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x282480u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x282484: 0x4602101c  madd.s      $f0, $f2, $f2
    ctx->pc = 0x282484u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x282488: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x282488u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28248c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x28248Cu;
    {
        const bool branch_taken_0x28248c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28248c) {
            ctx->pc = 0x2824B0u;
            goto label_2824b0;
        }
    }
    ctx->pc = 0x282494u;
    // 0x282494: 0x0  nop
    ctx->pc = 0x282494u;
    // NOP
    // 0x282498: 0x0  nop
    ctx->pc = 0x282498u;
    // NOP
    // 0x28249c: 0x4600a8d6  rsqrt.s     $f3, $f21, $f0
    ctx->pc = 0x28249cu;
    ctx->f[3] = 1.0f / sqrtf(ctx->f[21]);
    // 0x2824a0: 0x0  nop
    ctx->pc = 0x2824a0u;
    // NOP
    // 0x2824a4: 0x0  nop
    ctx->pc = 0x2824a4u;
    // NOP
    // 0x2824a8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2824A8u;
    {
        const bool branch_taken_0x2824a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2824a8) {
            ctx->pc = 0x2824B0u;
            goto label_2824b0;
        }
    }
    ctx->pc = 0x2824B0u;
label_2824b0:
    // 0x2824b0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2824b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2824b4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2824b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2824b8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2824b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2824bc: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2824bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2824c0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2824c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2824c4: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2824c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2824c8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2824c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2824cc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2824ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2824d0: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2824d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2824d4: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x2824d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2824d8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2824d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2824dc: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2824dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2824e0: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x2824e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2824e4: 0xc4850000  lwc1        $f5, 0x0($a0)
    ctx->pc = 0x2824e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2824e8: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x2824e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2824ec: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x2824ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2824f0: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2824f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2824f4: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2824f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2824f8: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x2824f8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x2824fc: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2824fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x282500: 0x46022018  adda.s      $f4, $f2
    ctx->pc = 0x282500u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x282504: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x282504u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x282508: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x282508u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x28250c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28250Cu;
    {
        const bool branch_taken_0x28250c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28250Cu;
            // 0x282510: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28250c) {
            ctx->pc = 0x282520u;
            goto label_282520;
        }
    }
    ctx->pc = 0x282514u;
    // 0x282514: 0x0  nop
    ctx->pc = 0x282514u;
    // NOP
label_282518:
    // 0x282518: 0xafb70100  sw          $s7, 0x100($sp)
    ctx->pc = 0x282518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 23));
    // 0x28251c: 0x0  nop
    ctx->pc = 0x28251cu;
    // NOP
label_282520:
    // 0x282520: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x282520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x282524: 0x772021  addu        $a0, $v1, $s7
    ctx->pc = 0x282524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x282528: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x282528u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28252c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28252Cu;
    {
        const bool branch_taken_0x28252c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x282530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28252Cu;
            // 0x282530: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28252c) {
            ctx->pc = 0x282540u;
            goto label_282540;
        }
    }
    ctx->pc = 0x282534u;
    // 0x282534: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x282534u;
    {
        const bool branch_taken_0x282534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282534u;
            // 0x282538: 0xa3a300f0  sb          $v1, 0xF0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 240), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282534) {
            ctx->pc = 0x282678u;
            goto label_282678;
        }
    }
    ctx->pc = 0x28253Cu;
    // 0x28253c: 0x0  nop
    ctx->pc = 0x28253cu;
    // NOP
label_282540:
    // 0x282540: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x282540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282544: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x282544u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x282548: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x282548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x28254c: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x28254cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x282550: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x282550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x282554: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x282554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x282558: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x282558u;
    {
        const bool branch_taken_0x282558 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x282558) {
            ctx->pc = 0x282570u;
            goto label_282570;
        }
    }
    ctx->pc = 0x282560u;
    // 0x282560: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x282560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282564: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x282564u;
    SET_GPR_U32(ctx, 31, 0x28256Cu);
    ctx->pc = 0x282568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282564u;
            // 0x282568: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28256Cu; }
        if (ctx->pc != 0x28256Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28256Cu; }
        if (ctx->pc != 0x28256Cu) { return; }
    }
    ctx->pc = 0x28256Cu;
label_28256c:
    // 0x28256c: 0x0  nop
    ctx->pc = 0x28256cu;
    // NOP
label_282570:
    // 0x282570: 0x8fa3011c  lw          $v1, 0x11C($sp)
    ctx->pc = 0x282570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x282574: 0x172900  sll         $a1, $s7, 4
    ctx->pc = 0x282574u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x282578: 0x8fc60004  lw          $a2, 0x4($fp)
    ctx->pc = 0x282578u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x28257c: 0x132100  sll         $a0, $s3, 4
    ctx->pc = 0x28257cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x282580: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x282580u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x282584: 0x653821  addu        $a3, $v1, $a1
    ctx->pc = 0x282584u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x282588: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x282588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28258c: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x28258cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x282590: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x282590u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x282594: 0xafc30004  sw          $v1, 0x4($fp)
    ctx->pc = 0x282594u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 3));
    // 0x282598: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x282598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x28259c: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x28259cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2825a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2825a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2825a4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2825a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2825a8: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x2825a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2825ac: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2825acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2825b0: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x2825b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2825b4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2825b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2825b8: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x2825b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2825bc: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2825bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2825c0: 0xc4e60000  lwc1        $f6, 0x0($a3)
    ctx->pc = 0x2825c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2825c4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2825c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2825c8: 0xc4e30008  lwc1        $f3, 0x8($a3)
    ctx->pc = 0x2825c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2825cc: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x2825ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2825d0: 0xc4e50004  lwc1        $f5, 0x4($a3)
    ctx->pc = 0x2825d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2825d4: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x2825d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2825d8: 0xc4e1000c  lwc1        $f1, 0xC($a3)
    ctx->pc = 0x2825d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2825dc: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x2825dcu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x2825e0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2825e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2825e4: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x2825e4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x2825e8: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x2825e8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x2825ec: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x2825ecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2825f0: 0x46063042  mul.s       $f1, $f6, $f6
    ctx->pc = 0x2825f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x2825f4: 0x46042002  mul.s       $f0, $f4, $f4
    ctx->pc = 0x2825f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2825f8: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x2825f8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2825fc: 0x4603181c  madd.s      $f0, $f3, $f3
    ctx->pc = 0x2825fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x282600: 0x46070032  c.eq.s      $f0, $f7
    ctx->pc = 0x282600u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282604: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x282604u;
    {
        const bool branch_taken_0x282604 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x282604) {
            ctx->pc = 0x282628u;
            goto label_282628;
        }
    }
    ctx->pc = 0x28260Cu;
    // 0x28260c: 0x0  nop
    ctx->pc = 0x28260cu;
    // NOP
    // 0x282610: 0x0  nop
    ctx->pc = 0x282610u;
    // NOP
    // 0x282614: 0x4600a9d6  rsqrt.s     $f7, $f21, $f0
    ctx->pc = 0x282614u;
    ctx->f[7] = 1.0f / sqrtf(ctx->f[21]);
    // 0x282618: 0x0  nop
    ctx->pc = 0x282618u;
    // NOP
    // 0x28261c: 0x0  nop
    ctx->pc = 0x28261cu;
    // NOP
    // 0x282620: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x282620u;
    {
        const bool branch_taken_0x282620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x282620) {
            ctx->pc = 0x282628u;
            goto label_282628;
        }
    }
    ctx->pc = 0x282628u;
label_282628:
    // 0x282628: 0x3c0338d1  lui         $v1, 0x38D1
    ctx->pc = 0x282628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14545 << 16));
    // 0x28262c: 0x3463b717  ori         $v1, $v1, 0xB717
    ctx->pc = 0x28262cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46871);
    // 0x282630: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x282630u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282634: 0x46073182  mul.s       $f6, $f6, $f7
    ctx->pc = 0x282634u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x282638: 0x46072102  mul.s       $f4, $f4, $f7
    ctx->pc = 0x282638u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x28263c: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x28263cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x282640: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x282640u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282644: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x282644u;
    {
        const bool branch_taken_0x282644 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x282648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282644u;
            // 0x282648: 0x46071082  mul.s       $f2, $f2, $f7 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x282644) {
            ctx->pc = 0x282660u;
            goto label_282660;
        }
    }
    ctx->pc = 0x28264Cu;
    // 0x28264c: 0x460037c6  mov.s       $f31, $f6
    ctx->pc = 0x28264cu;
    ctx->f[31] = FPU_MOV_S(ctx->f[6]);
    // 0x282650: 0x46002786  mov.s       $f30, $f4
    ctx->pc = 0x282650u;
    ctx->f[30] = FPU_MOV_S(ctx->f[4]);
    // 0x282654: 0x46001f46  mov.s       $f29, $f3
    ctx->pc = 0x282654u;
    ctx->f[29] = FPU_MOV_S(ctx->f[3]);
    // 0x282658: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x282658u;
    {
        const bool branch_taken_0x282658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28265Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282658u;
            // 0x28265c: 0x46001706  mov.s       $f28, $f2 (Delay Slot)
        ctx->f[28] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x282658) {
            ctx->pc = 0x282670u;
            goto label_282670;
        }
    }
    ctx->pc = 0x282660u;
label_282660:
    // 0x282660: 0x461f37c0  add.s       $f31, $f6, $f31
    ctx->pc = 0x282660u;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[31]);
    // 0x282664: 0x461e2780  add.s       $f30, $f4, $f30
    ctx->pc = 0x282664u;
    ctx->f[30] = FPU_ADD_S(ctx->f[4], ctx->f[30]);
    // 0x282668: 0x461d1f40  add.s       $f29, $f3, $f29
    ctx->pc = 0x282668u;
    ctx->f[29] = FPU_ADD_S(ctx->f[3], ctx->f[29]);
    // 0x28266c: 0x461c1700  add.s       $f28, $f2, $f28
    ctx->pc = 0x28266cu;
    ctx->f[28] = FPU_ADD_S(ctx->f[2], ctx->f[28]);
label_282670:
    // 0x282670: 0xafb30114  sw          $s3, 0x114($sp)
    ctx->pc = 0x282670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 19));
    // 0x282674: 0x2e0982d  daddu       $s3, $s7, $zero
    ctx->pc = 0x282674u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_282678:
    // 0x282678: 0x83a300f0  lb          $v1, 0xF0($sp)
    ctx->pc = 0x282678u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x28267c: 0x60182d  daddu       $v1, $v1, $zero
    ctx->pc = 0x28267cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282680: 0x1060feb3  beqz        $v1, . + 4 + (-0x14D << 2)
    ctx->pc = 0x282680u;
    {
        const bool branch_taken_0x282680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x282680) {
            ctx->pc = 0x282150u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_282150;
        }
    }
    ctx->pc = 0x282688u;
    // 0x282688: 0x8fa3011c  lw          $v1, 0x11C($sp)
    ctx->pc = 0x282688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x28268c: 0x172100  sll         $a0, $s7, 4
    ctx->pc = 0x28268cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x282690: 0x132900  sll         $a1, $s3, 4
    ctx->pc = 0x282690u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x282694: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x282694u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x282698: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x282698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x28269c: 0x26510004  addiu       $s1, $s2, 0x4
    ctx->pc = 0x28269cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2826a0: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x2826a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2826a4: 0xc6470000  lwc1        $f7, 0x0($s2)
    ctx->pc = 0x2826a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2826a8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2826a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2826ac: 0x26500008  addiu       $s0, $s2, 0x8
    ctx->pc = 0x2826acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2826b0: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x2826b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2826b4: 0xc6460004  lwc1        $f6, 0x4($s2)
    ctx->pc = 0x2826b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2826b8: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x2826b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2826bc: 0xc6450008  lwc1        $f5, 0x8($s2)
    ctx->pc = 0x2826bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2826c0: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x2826c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2826c4: 0x8fa3011c  lw          $v1, 0x11C($sp)
    ctx->pc = 0x2826c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x2826c8: 0x46003e81  sub.s       $f26, $f7, $f0
    ctx->pc = 0x2826c8u;
    ctx->f[26] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
    // 0x2826cc: 0x46043641  sub.s       $f25, $f6, $f4
    ctx->pc = 0x2826ccu;
    ctx->f[25] = FPU_SUB_S(ctx->f[6], ctx->f[4]);
    // 0x2826d0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2826d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2826d4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2826d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2826d8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2826d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2826dc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2826dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2826e0: 0x46032e01  sub.s       $f24, $f5, $f3
    ctx->pc = 0x2826e0u;
    ctx->f[24] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x2826e4: 0x46023dc1  sub.s       $f23, $f7, $f2
    ctx->pc = 0x2826e4u;
    ctx->f[23] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x2826e8: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2826e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2826ec: 0x46013581  sub.s       $f22, $f6, $f1
    ctx->pc = 0x2826ecu;
    ctx->f[22] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
    // 0x2826f0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2826f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2826f4: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2826f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2826f8: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x2826f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x2826fc: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x2826fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x282700: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x282700u;
    {
        const bool branch_taken_0x282700 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x282704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282700u;
            // 0x282704: 0x46002d01  sub.s       $f20, $f5, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x282700) {
            ctx->pc = 0x282718u;
            goto label_282718;
        }
    }
    ctx->pc = 0x282708u;
    // 0x282708: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x282708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x28270c: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x28270Cu;
    SET_GPR_U32(ctx, 31, 0x282714u);
    ctx->pc = 0x282710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28270Cu;
            // 0x282710: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282714u; }
        if (ctx->pc != 0x282714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282714u; }
        if (ctx->pc != 0x282714u) { return; }
    }
    ctx->pc = 0x282714u;
label_282714:
    // 0x282714: 0x0  nop
    ctx->pc = 0x282714u;
    // NOP
label_282718:
    // 0x282718: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x282718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x28271c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x28271cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x282720: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x282720u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x282724: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x282724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x282728: 0x3c033586  lui         $v1, 0x3586
    ctx->pc = 0x282728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13702 << 16));
    // 0x28272c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x28272cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x282730: 0x346337bd  ori         $v1, $v1, 0x37BD
    ctx->pc = 0x282730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14269);
    // 0x282734: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x282734u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282738: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x282738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x28273c: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x28273cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x282740: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x282740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x282744: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x282744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x282748: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x282748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28274c: 0xc4c40000  lwc1        $f4, 0x0($a2)
    ctx->pc = 0x28274cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x282750: 0x4602c81a  mula.s      $f25, $f2
    ctx->pc = 0x282750u;
    ctx->f[31] = FPU_MUL_S(ctx->f[25], ctx->f[2]);
    // 0x282754: 0x4603c05d  msub.s      $f1, $f24, $f3
    ctx->pc = 0x282754u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[24], ctx->f[3]));
    // 0x282758: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x282758u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x28275c: 0x4604c01a  mula.s      $f24, $f4
    ctx->pc = 0x28275cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[24], ctx->f[4]);
    // 0x282760: 0x4602d05d  msub.s      $f1, $f26, $f2
    ctx->pc = 0x282760u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[26], ctx->f[2]));
    // 0x282764: 0x4603d01a  mula.s      $f26, $f3
    ctx->pc = 0x282764u;
    ctx->f[31] = FPU_MUL_S(ctx->f[26], ctx->f[3]);
    // 0x282768: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x282768u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x28276c: 0x4604c85d  msub.s      $f1, $f25, $f4
    ctx->pc = 0x28276cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[25], ctx->f[4]));
    // 0x282770: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x282770u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x282774: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x282774u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x282778: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x282778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28277c: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x28277cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x282780: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x282780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282784: 0x461718c2  mul.s       $f3, $f3, $f23
    ctx->pc = 0x282784u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[23]);
    // 0x282788: 0x46161082  mul.s       $f2, $f2, $f22
    ctx->pc = 0x282788u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
    // 0x28278c: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x28278cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x282790: 0x4614085c  madd.s      $f1, $f1, $f20
    ctx->pc = 0x282790u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
    // 0x282794: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x282794u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282798: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x282798u;
    {
        const bool branch_taken_0x282798 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28279Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282798u;
            // 0x28279c: 0x3c03bf80  lui         $v1, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282798) {
            ctx->pc = 0x2827B0u;
            goto label_2827b0;
        }
    }
    ctx->pc = 0x2827A0u;
    // 0x2827a0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2827a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2827a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2827A4u;
    {
        const bool branch_taken_0x2827a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2827a4) {
            ctx->pc = 0x2827B8u;
            goto label_2827b8;
        }
    }
    ctx->pc = 0x2827ACu;
    // 0x2827ac: 0x0  nop
    ctx->pc = 0x2827acu;
    // NOP
label_2827b0:
    // 0x2827b0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2827b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2827b4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2827b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2827b8:
    // 0x2827b8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2827b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2827bc: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2827bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2827c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2827c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2827c4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2827c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2827c8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2827c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2827cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2827ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2827d0: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x2827d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2827d4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2827d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2827d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2827d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2827dc: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x2827dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x2827e0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2827e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2827e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2827e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2827e8: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x2827e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x2827ec: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2827ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2827f0: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2827f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2827f4: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x2827f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2827f8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2827f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2827fc: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2827fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x282800: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x282800u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x282804: 0x4602101c  madd.s      $f0, $f2, $f2
    ctx->pc = 0x282804u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x282808: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x282808u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28280c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x28280Cu;
    {
        const bool branch_taken_0x28280c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28280c) {
            ctx->pc = 0x282830u;
            goto label_282830;
        }
    }
    ctx->pc = 0x282814u;
    // 0x282814: 0x0  nop
    ctx->pc = 0x282814u;
    // NOP
    // 0x282818: 0x0  nop
    ctx->pc = 0x282818u;
    // NOP
    // 0x28281c: 0x4600a8d6  rsqrt.s     $f3, $f21, $f0
    ctx->pc = 0x28281cu;
    ctx->f[3] = 1.0f / sqrtf(ctx->f[21]);
    // 0x282820: 0x0  nop
    ctx->pc = 0x282820u;
    // NOP
    // 0x282824: 0x0  nop
    ctx->pc = 0x282824u;
    // NOP
    // 0x282828: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x282828u;
    {
        const bool branch_taken_0x282828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x282828) {
            ctx->pc = 0x282830u;
            goto label_282830;
        }
    }
    ctx->pc = 0x282830u;
label_282830:
    // 0x282830: 0x27a30128  addiu       $v1, $sp, 0x128
    ctx->pc = 0x282830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x282834: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x282834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282838: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x282838u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x28283c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x28283cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x282840: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x282840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x282844: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x282844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282848: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x282848u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x28284c: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x28284cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x282850: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x282850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282854: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x282854u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x282858: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x282858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x28285c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x28285cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282860: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x282860u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x282864: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x282864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x282868: 0xc6440000  lwc1        $f4, 0x0($s2)
    ctx->pc = 0x282868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28286c: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x28286cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x282870: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x282870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x282874: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x282874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x282878: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x282878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28287c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x28287cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282880: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x282880u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x282884: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x282884u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x282888: 0x46022018  adda.s      $f4, $f2
    ctx->pc = 0x282888u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x28288c: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x28288cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x282890: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x282890u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x282894: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x282894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x282898: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x282898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28289c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x28289cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2828a0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2828A0u;
    {
        const bool branch_taken_0x2828a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2828a0) {
            ctx->pc = 0x2828C8u;
            goto label_2828c8;
        }
    }
    ctx->pc = 0x2828A8u;
    // 0x2828a8: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2828a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2828ac: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x2828acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x2828b0: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x2828b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x2828b4: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2828b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2828b8: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x2828b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2828bc: 0x230bc  dsll32      $a2, $v0, 2
    ctx->pc = 0x2828bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 2));
    // 0x2828c0: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x2828C0u;
    SET_GPR_U32(ctx, 31, 0x2828C8u);
    ctx->pc = 0x2828C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2828C0u;
            // 0x2828c4: 0x630be  dsrl32      $a2, $a2, 2 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2828C8u; }
        if (ctx->pc != 0x2828C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2828C8u; }
        if (ctx->pc != 0x2828C8u) { return; }
    }
    ctx->pc = 0x2828C8u;
label_2828c8:
    // 0x2828c8: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x2828c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2828cc: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x2828ccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2828d0: 0xc7bf002c  lwc1        $f31, 0x2C($sp)
    ctx->pc = 0x2828d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x2828d4: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x2828d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2828d8: 0xc7be0028  lwc1        $f30, 0x28($sp)
    ctx->pc = 0x2828d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x2828dc: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x2828dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2828e0: 0xc7bd0024  lwc1        $f29, 0x24($sp)
    ctx->pc = 0x2828e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x2828e4: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x2828e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2828e8: 0xc7bc0020  lwc1        $f28, 0x20($sp)
    ctx->pc = 0x2828e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x2828ec: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2828ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2828f0: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x2828f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x2828f4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2828f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2828f8: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x2828f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2828fc: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2828fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x282900: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x282900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x282904: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x282904u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x282908: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x282908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x28290c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x28290cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x282910: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x282910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x282914: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x282914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x282918: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x282918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x28291c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x28291cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x282920: 0x3e00008  jr          $ra
    ctx->pc = 0x282920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282920u;
            // 0x282924: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x282928u;
    // 0x282928: 0x0  nop
    ctx->pc = 0x282928u;
    // NOP
    // 0x28292c: 0x0  nop
    ctx->pc = 0x28292cu;
    // NOP
}
