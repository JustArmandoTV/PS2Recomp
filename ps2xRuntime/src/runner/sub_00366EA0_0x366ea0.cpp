#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00366EA0
// Address: 0x366ea0 - 0x366ff0
void sub_00366EA0_0x366ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00366EA0_0x366ea0");
#endif

    switch (ctx->pc) {
        case 0x366eecu: goto label_366eec;
        case 0x366f28u: goto label_366f28;
        case 0x366f64u: goto label_366f64;
        case 0x366fb4u: goto label_366fb4;
        case 0x366fccu: goto label_366fcc;
        case 0x366fd8u: goto label_366fd8;
        default: break;
    }

    ctx->pc = 0x366ea0u;

    // 0x366ea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x366ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x366ea4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x366ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x366ea8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x366ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x366eac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x366eacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x366eb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x366eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x366eb4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x366eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x366eb8: 0xc4810060  lwc1        $f1, 0x60($a0)
    ctx->pc = 0x366eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x366ebc: 0x8c708a08  lw          $s0, -0x75F8($v1)
    ctx->pc = 0x366ebcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x366ec0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x366ec0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x366ec4: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x366EC4u;
    {
        const bool branch_taken_0x366ec4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x366EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x366EC4u;
            // 0x366ec8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366ec4) {
            ctx->pc = 0x366EF0u;
            goto label_366ef0;
        }
    }
    ctx->pc = 0x366ECCu;
    // 0x366ecc: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x366eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x366ed0: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x366ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    // 0x366ed4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x366ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366ed8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x366ed8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x366edc: 0xe6200060  swc1        $f0, 0x60($s1)
    ctx->pc = 0x366edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
    // 0x366ee0: 0xc60c0018  lwc1        $f12, 0x18($s0)
    ctx->pc = 0x366ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x366ee4: 0xc04cb78  jal         func_132DE0
    ctx->pc = 0x366EE4u;
    SET_GPR_U32(ctx, 31, 0x366EECu);
    ctx->pc = 0x366EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x366EE4u;
            // 0x366ee8: 0x26260070  addiu       $a2, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DE0u;
    if (runtime->hasFunction(0x132DE0u)) {
        auto targetFn = runtime->lookupFunction(0x132DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366EECu; }
        if (ctx->pc != 0x366EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132DE0_0x132de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366EECu; }
        if (ctx->pc != 0x366EECu) { return; }
    }
    ctx->pc = 0x366EECu;
label_366eec:
    // 0x366eec: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x366eecu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_366ef0:
    // 0x366ef0: 0xc621007c  lwc1        $f1, 0x7C($s1)
    ctx->pc = 0x366ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x366ef4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x366ef4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x366ef8: 0x0  nop
    ctx->pc = 0x366ef8u;
    // NOP
    // 0x366efc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x366efcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x366f00: 0x4503000b  bc1tl       . + 4 + (0xB << 2)
    ctx->pc = 0x366F00u;
    {
        const bool branch_taken_0x366f00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x366f00) {
            ctx->pc = 0x366F04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x366F00u;
            // 0x366f04: 0xc6210098  lwc1        $f1, 0x98($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x366F30u;
            goto label_366f30;
        }
    }
    ctx->pc = 0x366F08u;
    // 0x366f08: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x366f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x366f0c: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x366f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x366f10: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x366f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366f14: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x366f14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x366f18: 0xe620007c  swc1        $f0, 0x7C($s1)
    ctx->pc = 0x366f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
    // 0x366f1c: 0xc60c0018  lwc1        $f12, 0x18($s0)
    ctx->pc = 0x366f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x366f20: 0xc04cb78  jal         func_132DE0
    ctx->pc = 0x366F20u;
    SET_GPR_U32(ctx, 31, 0x366F28u);
    ctx->pc = 0x366F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x366F20u;
            // 0x366f24: 0x2626008c  addiu       $a2, $s1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DE0u;
    if (runtime->hasFunction(0x132DE0u)) {
        auto targetFn = runtime->lookupFunction(0x132DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366F28u; }
        if (ctx->pc != 0x366F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132DE0_0x132de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366F28u; }
        if (ctx->pc != 0x366F28u) { return; }
    }
    ctx->pc = 0x366F28u;
label_366f28:
    // 0x366f28: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x366f28u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x366f2c: 0xc6210098  lwc1        $f1, 0x98($s1)
    ctx->pc = 0x366f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_366f30:
    // 0x366f30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x366f30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x366f34: 0x0  nop
    ctx->pc = 0x366f34u;
    // NOP
    // 0x366f38: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x366f38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x366f3c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x366F3Cu;
    {
        const bool branch_taken_0x366f3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x366f3c) {
            ctx->pc = 0x366F68u;
            goto label_366f68;
        }
    }
    ctx->pc = 0x366F44u;
    // 0x366f44: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x366f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x366f48: 0x2624009c  addiu       $a0, $s1, 0x9C
    ctx->pc = 0x366f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 156));
    // 0x366f4c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x366f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366f50: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x366f50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x366f54: 0xe6200098  swc1        $f0, 0x98($s1)
    ctx->pc = 0x366f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
    // 0x366f58: 0xc60c0018  lwc1        $f12, 0x18($s0)
    ctx->pc = 0x366f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x366f5c: 0xc04cb78  jal         func_132DE0
    ctx->pc = 0x366F5Cu;
    SET_GPR_U32(ctx, 31, 0x366F64u);
    ctx->pc = 0x366F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x366F5Cu;
            // 0x366f60: 0x262600a8  addiu       $a2, $s1, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DE0u;
    if (runtime->hasFunction(0x132DE0u)) {
        auto targetFn = runtime->lookupFunction(0x132DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366F64u; }
        if (ctx->pc != 0x366F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132DE0_0x132de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366F64u; }
        if (ctx->pc != 0x366F64u) { return; }
    }
    ctx->pc = 0x366F64u;
label_366f64:
    // 0x366f64: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x366f64u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_366f68:
    // 0x366f68: 0x50a0001c  beql        $a1, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x366F68u;
    {
        const bool branch_taken_0x366f68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x366f68) {
            ctx->pc = 0x366F6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x366F68u;
            // 0x366f6c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x366FDCu;
            goto label_366fdc;
        }
    }
    ctx->pc = 0x366F70u;
    // 0x366f70: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x366f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
    // 0x366f74: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x366f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
    // 0x366f78: 0xc6220080  lwc1        $f2, 0x80($s1)
    ctx->pc = 0x366f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x366f7c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x366f7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x366f80: 0xc6210084  lwc1        $f1, 0x84($s1)
    ctx->pc = 0x366f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x366f84: 0xc6200088  lwc1        $f0, 0x88($s1)
    ctx->pc = 0x366f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x366f88: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x366f88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x366f8c: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x366f8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x366f90: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x366f90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x366f94: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x366f94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x366f98: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x366f98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x366f9c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x366f9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x366fa0: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x366fa0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x366fa4: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x366fa4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x366fa8: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x366fa8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x366fac: 0xc04f308  jal         func_13CC20
    ctx->pc = 0x366FACu;
    SET_GPR_U32(ctx, 31, 0x366FB4u);
    ctx->pc = 0x366FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x366FACu;
            // 0x366fb0: 0x262400c0  addiu       $a0, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CC20u;
    if (runtime->hasFunction(0x13CC20u)) {
        auto targetFn = runtime->lookupFunction(0x13CC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366FB4u; }
        if (ctx->pc != 0x366FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CC20_0x13cc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366FB4u; }
        if (ctx->pc != 0x366FB4u) { return; }
    }
    ctx->pc = 0x366FB4u;
label_366fb4:
    // 0x366fb4: 0xc62c009c  lwc1        $f12, 0x9C($s1)
    ctx->pc = 0x366fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x366fb8: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x366fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x366fbc: 0xc62d00a0  lwc1        $f13, 0xA0($s1)
    ctx->pc = 0x366fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x366fc0: 0xc62e00a4  lwc1        $f14, 0xA4($s1)
    ctx->pc = 0x366fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x366fc4: 0xc04ce50  jal         func_133940
    ctx->pc = 0x366FC4u;
    SET_GPR_U32(ctx, 31, 0x366FCCu);
    ctx->pc = 0x366FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x366FC4u;
            // 0x366fc8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366FCCu; }
        if (ctx->pc != 0x366FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366FCCu; }
        if (ctx->pc != 0x366FCCu) { return; }
    }
    ctx->pc = 0x366FCCu;
label_366fcc:
    // 0x366fcc: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x366fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x366fd0: 0xc04ce78  jal         func_1339E0
    ctx->pc = 0x366FD0u;
    SET_GPR_U32(ctx, 31, 0x366FD8u);
    ctx->pc = 0x366FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x366FD0u;
            // 0x366fd4: 0x26250064  addiu       $a1, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1339E0u;
    if (runtime->hasFunction(0x1339E0u)) {
        auto targetFn = runtime->lookupFunction(0x1339E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366FD8u; }
        if (ctx->pc != 0x366FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001339E0_0x1339e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366FD8u; }
        if (ctx->pc != 0x366FD8u) { return; }
    }
    ctx->pc = 0x366FD8u;
label_366fd8:
    // 0x366fd8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x366fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_366fdc:
    // 0x366fdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x366fdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x366fe0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x366fe0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x366fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x366FE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x366FE4u;
            // 0x366fe8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x366FECu;
    // 0x366fec: 0x0  nop
    ctx->pc = 0x366fecu;
    // NOP
}
