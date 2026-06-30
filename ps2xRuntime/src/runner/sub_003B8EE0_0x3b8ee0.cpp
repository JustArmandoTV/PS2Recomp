#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B8EE0
// Address: 0x3b8ee0 - 0x3b90f0
void sub_003B8EE0_0x3b8ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B8EE0_0x3b8ee0");
#endif

    switch (ctx->pc) {
        case 0x3b8f48u: goto label_3b8f48;
        case 0x3b8fccu: goto label_3b8fcc;
        case 0x3b9010u: goto label_3b9010;
        case 0x3b9074u: goto label_3b9074;
        default: break;
    }

    ctx->pc = 0x3b8ee0u;

    // 0x3b8ee0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3b8ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3b8ee4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3b8ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3b8ee8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3b8ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3b8eec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3b8eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3b8ef0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3b8ef0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8ef4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b8ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3b8ef8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3b8ef8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8efc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b8efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b8f00: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3b8f00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8f04: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B8F04u;
    {
        const bool branch_taken_0x3b8f04 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B8F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8F04u;
            // 0x3b8f08: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8f04) {
            ctx->pc = 0x3B8F14u;
            goto label_3b8f14;
        }
    }
    ctx->pc = 0x3B8F0Cu;
    // 0x3b8f0c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x3B8F0Cu;
    {
        const bool branch_taken_0x3b8f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8F0Cu;
            // 0x3b8f10: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8f0c) {
            ctx->pc = 0x3B8F88u;
            goto label_3b8f88;
        }
    }
    ctx->pc = 0x3B8F14u;
label_3b8f14:
    // 0x3b8f14: 0x6820004  bltzl       $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B8F14u;
    {
        const bool branch_taken_0x3b8f14 = (GPR_S32(ctx, 20) < 0);
        if (branch_taken_0x3b8f14) {
            ctx->pc = 0x3B8F18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8F14u;
            // 0x3b8f18: 0x141842  srl         $v1, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B8F28u;
            goto label_3b8f28;
        }
    }
    ctx->pc = 0x3B8F1Cu;
    // 0x3b8f1c: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x3b8f1cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b8f20: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B8F20u;
    {
        const bool branch_taken_0x3b8f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8F20u;
            // 0x3b8f24: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8f20) {
            ctx->pc = 0x3B8F40u;
            goto label_3b8f40;
        }
    }
    ctx->pc = 0x3B8F28u;
label_3b8f28:
    // 0x3b8f28: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x3b8f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x3b8f2c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b8f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b8f30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b8f30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b8f34: 0x0  nop
    ctx->pc = 0x3b8f34u;
    // NOP
    // 0x3b8f38: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x3b8f38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x3b8f3c: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x3b8f3cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_3b8f40:
    // 0x3b8f40: 0xc047816  jal         func_11E058
    ctx->pc = 0x3B8F40u;
    SET_GPR_U32(ctx, 31, 0x3B8F48u);
    ctx->pc = 0x11E058u;
    if (runtime->hasFunction(0x11E058u)) {
        auto targetFn = runtime->lookupFunction(0x11E058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B8F48u; }
        if (ctx->pc != 0x3B8F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E058_0x11e058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B8F48u; }
        if (ctx->pc != 0x3B8F48u) { return; }
    }
    ctx->pc = 0x3B8F48u;
label_3b8f48:
    // 0x3b8f48: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3b8f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3b8f4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3b8f4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b8f50: 0x0  nop
    ctx->pc = 0x3b8f50u;
    // NOP
    // 0x3b8f54: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3b8f54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b8f58: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x3B8F58u;
    {
        const bool branch_taken_0x3b8f58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b8f58) {
            ctx->pc = 0x3B8F5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8F58u;
            // 0x3b8f5c: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B8F70u;
            goto label_3b8f70;
        }
    }
    ctx->pc = 0x3B8F60u;
    // 0x3b8f60: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b8f60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3b8f64: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3b8f64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3b8f68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B8F68u;
    {
        const bool branch_taken_0x3b8f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8F68u;
            // 0x3b8f6c: 0x24710001  addiu       $s1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8f68) {
            ctx->pc = 0x3B8F88u;
            goto label_3b8f88;
        }
    }
    ctx->pc = 0x3B8F70u;
label_3b8f70:
    // 0x3b8f70: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3b8f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3b8f74: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b8f74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3b8f78: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3b8f78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3b8f7c: 0x0  nop
    ctx->pc = 0x3b8f7cu;
    // NOP
    // 0x3b8f80: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b8f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b8f84: 0x24710001  addiu       $s1, $v1, 0x1
    ctx->pc = 0x3b8f84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3b8f88:
    // 0x3b8f88: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x3b8f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x3b8f8c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B8F8Cu;
    {
        const bool branch_taken_0x3b8f8c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3B8F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8F8Cu;
            // 0x3b8f90: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8f8c) {
            ctx->pc = 0x3B8FA0u;
            goto label_3b8fa0;
        }
    }
    ctx->pc = 0x3B8F94u;
    // 0x3b8f94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b8f94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b8f98: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B8F98u;
    {
        const bool branch_taken_0x3b8f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8F98u;
            // 0x3b8f9c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8f98) {
            ctx->pc = 0x3B8FBCu;
            goto label_3b8fbc;
        }
    }
    ctx->pc = 0x3B8FA0u;
label_3b8fa0:
    // 0x3b8fa0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3b8fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3b8fa4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b8fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3b8fa8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b8fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b8fac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b8facu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b8fb0: 0x0  nop
    ctx->pc = 0x3b8fb0u;
    // NOP
    // 0x3b8fb4: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x3b8fb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x3b8fb8: 0x460d6b40  add.s       $f13, $f13, $f13
    ctx->pc = 0x3b8fb8u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
label_3b8fbc:
    // 0x3b8fbc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3b8fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x3b8fc0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3b8fc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3b8fc4: 0xc04781c  jal         func_11E070
    ctx->pc = 0x3B8FC4u;
    SET_GPR_U32(ctx, 31, 0x3B8FCCu);
    ctx->pc = 0x11E070u;
    if (runtime->hasFunction(0x11E070u)) {
        auto targetFn = runtime->lookupFunction(0x11E070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B8FCCu; }
        if (ctx->pc != 0x3B8FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E070_0x11e070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B8FCCu; }
        if (ctx->pc != 0x3B8FCCu) { return; }
    }
    ctx->pc = 0x3B8FCCu;
label_3b8fcc:
    // 0x3b8fcc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3b8fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3b8fd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3b8fd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b8fd4: 0x0  nop
    ctx->pc = 0x3b8fd4u;
    // NOP
    // 0x3b8fd8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3b8fd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b8fdc: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x3B8FDCu;
    {
        const bool branch_taken_0x3b8fdc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b8fdc) {
            ctx->pc = 0x3B8FE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8FDCu;
            // 0x3b8fe0: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B8FF4u;
            goto label_3b8ff4;
        }
    }
    ctx->pc = 0x3B8FE4u;
    // 0x3b8fe4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b8fe4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3b8fe8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3b8fe8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3b8fec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3B8FECu;
    {
        const bool branch_taken_0x3b8fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8fec) {
            ctx->pc = 0x3B9008u;
            goto label_3b9008;
        }
    }
    ctx->pc = 0x3B8FF4u;
label_3b8ff4:
    // 0x3b8ff4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3b8ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3b8ff8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b8ff8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3b8ffc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3b8ffcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3b9000: 0x0  nop
    ctx->pc = 0x3b9000u;
    // NOP
    // 0x3b9004: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3b9004u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_3b9008:
    // 0x3b9008: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x3B9008u;
    {
        const bool branch_taken_0x3b9008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9008) {
            ctx->pc = 0x3B90B0u;
            goto label_3b90b0;
        }
    }
    ctx->pc = 0x3B9010u;
label_3b9010:
    // 0x3b9010: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3b9010u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x3b9014: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x3b9014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x3b9018: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3b9018u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x3b901c: 0x1812  mflo        $v1
    ctx->pc = 0x3b901cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x3b9020: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x3b9020u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3b9024: 0x851818  mult        $v1, $a0, $a1
    ctx->pc = 0x3b9024u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3b9028: 0x34840030  ori         $a0, $a0, 0x30
    ctx->pc = 0x3b9028u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)48);
    // 0x3b902c: 0x283a023  subu        $s4, $s4, $v1
    ctx->pc = 0x3b902cu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x3b9030: 0xa6640000  sh          $a0, 0x0($s3)
    ctx->pc = 0x3b9030u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x3b9034: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B9034u;
    {
        const bool branch_taken_0x3b9034 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3B9038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9034u;
            // 0x3b9038: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9034) {
            ctx->pc = 0x3B9048u;
            goto label_3b9048;
        }
    }
    ctx->pc = 0x3B903Cu;
    // 0x3b903c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b903cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b9040: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B9040u;
    {
        const bool branch_taken_0x3b9040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9040u;
            // 0x3b9044: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9040) {
            ctx->pc = 0x3B9064u;
            goto label_3b9064;
        }
    }
    ctx->pc = 0x3B9048u;
label_3b9048:
    // 0x3b9048: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3b9048u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3b904c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b904cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3b9050: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b9050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b9054: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b9054u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b9058: 0x0  nop
    ctx->pc = 0x3b9058u;
    // NOP
    // 0x3b905c: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x3b905cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x3b9060: 0x460d6b40  add.s       $f13, $f13, $f13
    ctx->pc = 0x3b9060u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
label_3b9064:
    // 0x3b9064: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3b9064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x3b9068: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3b9068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3b906c: 0xc04781c  jal         func_11E070
    ctx->pc = 0x3B906Cu;
    SET_GPR_U32(ctx, 31, 0x3B9074u);
    ctx->pc = 0x11E070u;
    if (runtime->hasFunction(0x11E070u)) {
        auto targetFn = runtime->lookupFunction(0x11E070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9074u; }
        if (ctx->pc != 0x3B9074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E070_0x11e070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9074u; }
        if (ctx->pc != 0x3B9074u) { return; }
    }
    ctx->pc = 0x3B9074u;
label_3b9074:
    // 0x3b9074: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3b9074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3b9078: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3b9078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b907c: 0x0  nop
    ctx->pc = 0x3b907cu;
    // NOP
    // 0x3b9080: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3b9080u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b9084: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x3B9084u;
    {
        const bool branch_taken_0x3b9084 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b9084) {
            ctx->pc = 0x3B9088u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9084u;
            // 0x3b9088: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B909Cu;
            goto label_3b909c;
        }
    }
    ctx->pc = 0x3B908Cu;
    // 0x3b908c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b908cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3b9090: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3b9090u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3b9094: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3B9094u;
    {
        const bool branch_taken_0x3b9094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9094) {
            ctx->pc = 0x3B90B0u;
            goto label_3b90b0;
        }
    }
    ctx->pc = 0x3B909Cu;
label_3b909c:
    // 0x3b909c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3b909cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3b90a0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b90a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3b90a4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3b90a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3b90a8: 0x0  nop
    ctx->pc = 0x3b90a8u;
    // NOP
    // 0x3b90ac: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3b90acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_3b90b0:
    // 0x3b90b0: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B90B0u;
    {
        const bool branch_taken_0x3b90b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b90b0) {
            ctx->pc = 0x3B90C8u;
            goto label_3b90c8;
        }
    }
    ctx->pc = 0x3B90B8u;
    // 0x3b90b8: 0x2e410002  sltiu       $at, $s2, 0x2
    ctx->pc = 0x3b90b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3b90bc: 0x5020ffd4  beql        $at, $zero, . + 4 + (-0x2C << 2)
    ctx->pc = 0x3B90BCu;
    {
        const bool branch_taken_0x3b90bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b90bc) {
            ctx->pc = 0x3B90C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B90BCu;
            // 0x3b90c0: 0x285001b  divu        $zero, $s4, $a1 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 20) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 20) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,20); } }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B9010u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3b9010;
        }
    }
    ctx->pc = 0x3B90C4u;
    // 0x3b90c4: 0x0  nop
    ctx->pc = 0x3b90c4u;
    // NOP
label_3b90c8:
    // 0x3b90c8: 0xa6600000  sh          $zero, 0x0($s3)
    ctx->pc = 0x3b90c8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x3b90cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b90ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b90d0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3b90d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b90d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3b90d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b90d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3b90d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b90dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b90dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b90e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b90e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b90e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b90e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b90e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B90E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B90ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B90E8u;
            // 0x3b90ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B90F0u;
}
