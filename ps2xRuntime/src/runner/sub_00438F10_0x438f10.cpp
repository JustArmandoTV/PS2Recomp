#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00438F10
// Address: 0x438f10 - 0x4391b0
void sub_00438F10_0x438f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00438F10_0x438f10");
#endif

    switch (ctx->pc) {
        case 0x438fe0u: goto label_438fe0;
        case 0x439008u: goto label_439008;
        case 0x439010u: goto label_439010;
        case 0x43901cu: goto label_43901c;
        case 0x439044u: goto label_439044;
        case 0x4390f0u: goto label_4390f0;
        case 0x4390f8u: goto label_4390f8;
        case 0x439128u: goto label_439128;
        case 0x439140u: goto label_439140;
        case 0x439170u: goto label_439170;
        default: break;
    }

    ctx->pc = 0x438f10u;

    // 0x438f10: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x438f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x438f14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x438f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x438f18: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x438f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x438f1c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x438f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x438f20: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x438f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x438f24: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x438f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x438f28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x438f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x438f2c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x438f2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x438f30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x438f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x438f34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x438f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x438f38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x438f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x438f3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x438f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x438f40: 0x8c840060  lw          $a0, 0x60($a0)
    ctx->pc = 0x438f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x438f44: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x438F44u;
    {
        const bool branch_taken_0x438f44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x438f44) {
            ctx->pc = 0x438F48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x438F44u;
            // 0x438f48: 0xc6a1005c  lwc1        $f1, 0x5C($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x438F60u;
            goto label_438f60;
        }
    }
    ctx->pc = 0x438F4Cu;
    // 0x438f4c: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x438F4Cu;
    {
        const bool branch_taken_0x438f4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x438f4c) {
            ctx->pc = 0x438F50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x438F4Cu;
            // 0x438f50: 0xaea30060  sw          $v1, 0x60($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x438F5Cu;
            goto label_438f5c;
        }
    }
    ctx->pc = 0x438F54u;
    // 0x438f54: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x438F54u;
    {
        const bool branch_taken_0x438f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x438f54) {
            ctx->pc = 0x439180u;
            goto label_439180;
        }
    }
    ctx->pc = 0x438F5Cu;
label_438f5c:
    // 0x438f5c: 0xc6a1005c  lwc1        $f1, 0x5C($s5)
    ctx->pc = 0x438f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_438f60:
    // 0x438f60: 0x26a5005c  addiu       $a1, $s5, 0x5C
    ctx->pc = 0x438f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 92));
    // 0x438f64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x438f64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x438f68: 0x0  nop
    ctx->pc = 0x438f68u;
    // NOP
    // 0x438f6c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x438f6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x438f70: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x438F70u;
    {
        const bool branch_taken_0x438f70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x438F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x438F70u;
            // 0x438f74: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438f70) {
            ctx->pc = 0x438F7Cu;
            goto label_438f7c;
        }
    }
    ctx->pc = 0x438F78u;
    // 0x438f78: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x438f78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_438f7c:
    // 0x438f7c: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x438F7Cu;
    {
        const bool branch_taken_0x438f7c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x438f7c) {
            ctx->pc = 0x438F80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x438F7Cu;
            // 0x438f80: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x438F90u;
            goto label_438f90;
        }
    }
    ctx->pc = 0x438F84u;
    // 0x438f84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x438f84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x438f88: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x438F88u;
    {
        const bool branch_taken_0x438f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x438F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x438F88u;
            // 0x438f8c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x438f88) {
            ctx->pc = 0x438FA8u;
            goto label_438fa8;
        }
    }
    ctx->pc = 0x438F90u;
label_438f90:
    // 0x438f90: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x438f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x438f94: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x438f94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x438f98: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x438f98u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x438f9c: 0x0  nop
    ctx->pc = 0x438f9cu;
    // NOP
    // 0x438fa0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x438fa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x438fa4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x438fa4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_438fa8:
    // 0x438fa8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x438fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x438fac: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x438facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x438fb0: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x438fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x438fb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x438fb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x438fb8: 0x0  nop
    ctx->pc = 0x438fb8u;
    // NOP
    // 0x438fbc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x438fbcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x438fc0: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x438fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x438fc4: 0x4600101d  msub.s      $f0, $f2, $f0
    ctx->pc = 0x438fc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
    // 0x438fc8: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x438fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x438fcc: 0x8eb40064  lw          $s4, 0x64($s5)
    ctx->pc = 0x438fccu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
    // 0x438fd0: 0x1a80006b  blez        $s4, . + 4 + (0x6B << 2)
    ctx->pc = 0x438FD0u;
    {
        const bool branch_taken_0x438fd0 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x438fd0) {
            ctx->pc = 0x439180u;
            goto label_439180;
        }
    }
    ctx->pc = 0x438FD8u;
    // 0x438fd8: 0x8eb70068  lw          $s7, 0x68($s5)
    ctx->pc = 0x438fd8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
    // 0x438fdc: 0x8eb20078  lw          $s2, 0x78($s5)
    ctx->pc = 0x438fdcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
label_438fe0:
    // 0x438fe0: 0x92430010  lbu         $v1, 0x10($s2)
    ctx->pc = 0x438fe0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x438fe4: 0x1060004a  beqz        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x438FE4u;
    {
        const bool branch_taken_0x438fe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x438fe4) {
            ctx->pc = 0x439110u;
            goto label_439110;
        }
    }
    ctx->pc = 0x438FECu;
    // 0x438fec: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x438fecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x438ff0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x438ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x438ff4: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x438ff4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x438ff8: 0x2e0982d  daddu       $s3, $s7, $zero
    ctx->pc = 0x438ff8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x438ffc: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x438ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x439000: 0xc122d2c  jal         func_48B4B0
    ctx->pc = 0x439000u;
    SET_GPR_U32(ctx, 31, 0x439008u);
    ctx->pc = 0x439004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x439000u;
            // 0x439004: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439008u; }
        if (ctx->pc != 0x439008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439008u; }
        if (ctx->pc != 0x439008u) { return; }
    }
    ctx->pc = 0x439008u;
label_439008:
    // 0x439008: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x439008u;
    SET_GPR_U32(ctx, 31, 0x439010u);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439010u; }
        if (ctx->pc != 0x439010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439010u; }
        if (ctx->pc != 0x439010u) { return; }
    }
    ctx->pc = 0x439010u;
label_439010:
    // 0x439010: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x439010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x439014: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x439014u;
    SET_GPR_U32(ctx, 31, 0x43901Cu);
    ctx->pc = 0x439018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x439014u;
            // 0x439018: 0x2b740  sll         $s6, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43901Cu; }
        if (ctx->pc != 0x43901Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43901Cu; }
        if (ctx->pc != 0x43901Cu) { return; }
    }
    ctx->pc = 0x43901Cu;
label_43901c:
    // 0x43901c: 0x561825  or          $v1, $v0, $s6
    ctx->pc = 0x43901cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x439020: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x439020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x439024: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x439024u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x439028: 0x1010  mfhi        $v0
    ctx->pc = 0x439028u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x43902c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x43902Cu;
    {
        const bool branch_taken_0x43902c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43902c) {
            ctx->pc = 0x439048u;
            goto label_439048;
        }
    }
    ctx->pc = 0x439034u;
    // 0x439034: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x439034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439038: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x439038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43903c: 0xc122d2c  jal         func_48B4B0
    ctx->pc = 0x43903Cu;
    SET_GPR_U32(ctx, 31, 0x439044u);
    ctx->pc = 0x439040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43903Cu;
            // 0x439040: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439044u; }
        if (ctx->pc != 0x439044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439044u; }
        if (ctx->pc != 0x439044u) { return; }
    }
    ctx->pc = 0x439044u;
label_439044:
    // 0x439044: 0x0  nop
    ctx->pc = 0x439044u;
    // NOP
label_439048:
    // 0x439048: 0x26500008  addiu       $s0, $s2, 0x8
    ctx->pc = 0x439048u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x43904c: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x43904cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x439050: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x439050u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x439054: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x439054u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x439058: 0x0  nop
    ctx->pc = 0x439058u;
    // NOP
    // 0x43905c: 0x4102b  sltu        $v0, $zero, $a0
    ctx->pc = 0x43905cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x439060: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x439060u;
    {
        const bool branch_taken_0x439060 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x439064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x439060u;
            // 0x439064: 0x2645000c  addiu       $a1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439060) {
            ctx->pc = 0x439074u;
            goto label_439074;
        }
    }
    ctx->pc = 0x439068u;
    // 0x439068: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x439068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x43906c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x43906Cu;
    {
        const bool branch_taken_0x43906c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x439070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43906Cu;
            // 0x439070: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x43906c) {
            ctx->pc = 0x439090u;
            goto label_439090;
        }
    }
    ctx->pc = 0x439074u;
label_439074:
    // 0x439074: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x439074u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x439078: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x439078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x43907c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x43907cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x439080: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x439080u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x439084: 0x0  nop
    ctx->pc = 0x439084u;
    // NOP
    // 0x439088: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x439088u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x43908c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x43908cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_439090:
    // 0x439090: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x439090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x439094: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x439094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x439098: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x439098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x43909c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x43909cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4390a0: 0x0  nop
    ctx->pc = 0x4390a0u;
    // NOP
    // 0x4390a4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4390a4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4390a8: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x4390a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4390ac: 0x4600101d  msub.s      $f0, $f2, $f0
    ctx->pc = 0x4390acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
    // 0x4390b0: 0x1480000f  bnez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x4390B0u;
    {
        const bool branch_taken_0x4390b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4390B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4390B0u;
            // 0x4390b4: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4390b0) {
            ctx->pc = 0x4390F0u;
            goto label_4390f0;
        }
    }
    ctx->pc = 0x4390B8u;
    // 0x4390b8: 0xc6a10038  lwc1        $f1, 0x38($s5)
    ctx->pc = 0x4390b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4390bc: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x4390bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4390c0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4390c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4390c4: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x4390C4u;
    {
        const bool branch_taken_0x4390c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4390c4) {
            ctx->pc = 0x4390F0u;
            goto label_4390f0;
        }
    }
    ctx->pc = 0x4390CCu;
    // 0x4390cc: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x4390ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x4390d0: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x4390d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
    // 0x4390d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4390d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4390d8: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x4390d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x4390dc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x4390dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4390e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4390e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4390e4: 0x0  nop
    ctx->pc = 0x4390e4u;
    // NOP
    // 0x4390e8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x4390e8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x4390ec: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x4390ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_4390f0:
    // 0x4390f0: 0xc0e3658  jal         func_38D960
    ctx->pc = 0x4390F0u;
    SET_GPR_U32(ctx, 31, 0x4390F8u);
    ctx->pc = 0x4390F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4390F0u;
            // 0x4390f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4390F8u; }
        if (ctx->pc != 0x4390F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4390F8u; }
        if (ctx->pc != 0x4390F8u) { return; }
    }
    ctx->pc = 0x4390F8u;
label_4390f8:
    // 0x4390f8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x4390f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4390fc: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x4390fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x439100: 0xe6200200  swc1        $f0, 0x200($s1)
    ctx->pc = 0x439100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 512), bits); }
    // 0x439104: 0x1660fffa  bnez        $s3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x439104u;
    {
        const bool branch_taken_0x439104 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x439108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x439104u;
            // 0x439108: 0x26310350  addiu       $s1, $s1, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439104) {
            ctx->pc = 0x4390F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4390f0;
        }
    }
    ctx->pc = 0x43910Cu;
    // 0x43910c: 0x0  nop
    ctx->pc = 0x43910cu;
    // NOP
label_439110:
    // 0x439110: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x439110u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x439114: 0x1680ffb2  bnez        $s4, . + 4 + (-0x4E << 2)
    ctx->pc = 0x439114u;
    {
        const bool branch_taken_0x439114 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x439118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x439114u;
            // 0x439118: 0x26520014  addiu       $s2, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439114) {
            ctx->pc = 0x438FE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_438fe0;
        }
    }
    ctx->pc = 0x43911Cu;
    // 0x43911c: 0x8eb20078  lw          $s2, 0x78($s5)
    ctx->pc = 0x43911cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x439120: 0x8eb10064  lw          $s1, 0x64($s5)
    ctx->pc = 0x439120u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
    // 0x439124: 0x8eb00068  lw          $s0, 0x68($s5)
    ctx->pc = 0x439124u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
label_439128:
    // 0x439128: 0x92430010  lbu         $v1, 0x10($s2)
    ctx->pc = 0x439128u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x43912c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x43912Cu;
    {
        const bool branch_taken_0x43912c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x43912c) {
            ctx->pc = 0x439170u;
            goto label_439170;
        }
    }
    ctx->pc = 0x439134u;
    // 0x439134: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x439134u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x439138: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x439138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43913c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x43913cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_439140:
    // 0x439140: 0x8cc300d0  lw          $v1, 0xD0($a2)
    ctx->pc = 0x439140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 208)));
    // 0x439144: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x439144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x439148: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x439148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x43914c: 0x24c60350  addiu       $a2, $a2, 0x350
    ctx->pc = 0x43914cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 848));
    // 0x439150: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x439150u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x439154: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x439154u;
    {
        const bool branch_taken_0x439154 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x439158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x439154u;
            // 0x439158: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439154) {
            ctx->pc = 0x439140u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_439140;
        }
    }
    ctx->pc = 0x43915Cu;
    // 0x43915c: 0x14900004  bne         $a0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x43915Cu;
    {
        const bool branch_taken_0x43915c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        if (branch_taken_0x43915c) {
            ctx->pc = 0x439170u;
            goto label_439170;
        }
    }
    ctx->pc = 0x439164u;
    // 0x439164: 0xa2400010  sb          $zero, 0x10($s2)
    ctx->pc = 0x439164u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x439168: 0xc122c94  jal         func_48B250
    ctx->pc = 0x439168u;
    SET_GPR_U32(ctx, 31, 0x439170u);
    ctx->pc = 0x43916Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x439168u;
            // 0x43916c: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B250u;
    if (runtime->hasFunction(0x48B250u)) {
        auto targetFn = runtime->lookupFunction(0x48B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439170u; }
        if (ctx->pc != 0x439170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B250_0x48b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439170u; }
        if (ctx->pc != 0x439170u) { return; }
    }
    ctx->pc = 0x439170u;
label_439170:
    // 0x439170: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x439170u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x439174: 0x1620ffec  bnez        $s1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x439174u;
    {
        const bool branch_taken_0x439174 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x439178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x439174u;
            // 0x439178: 0x26520014  addiu       $s2, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439174) {
            ctx->pc = 0x439128u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_439128;
        }
    }
    ctx->pc = 0x43917Cu;
    // 0x43917c: 0x0  nop
    ctx->pc = 0x43917cu;
    // NOP
label_439180:
    // 0x439180: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x439180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x439184: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x439184u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x439188: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x439188u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x43918c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x43918cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x439190: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x439190u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x439194: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x439194u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x439198: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x439198u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43919c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43919cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4391a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4391a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4391a4: 0x3e00008  jr          $ra
    ctx->pc = 0x4391A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4391A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4391A4u;
            // 0x4391a8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4391ACu;
    // 0x4391ac: 0x0  nop
    ctx->pc = 0x4391acu;
    // NOP
}
