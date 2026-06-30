#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00131E70
// Address: 0x131e70 - 0x131f70
void sub_00131E70_0x131e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131E70_0x131e70");
#endif

    switch (ctx->pc) {
        case 0x131ed0u: goto label_131ed0;
        default: break;
    }

    ctx->pc = 0x131e70u;

    // 0x131e70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x131e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x131e74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x131e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x131e78: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x131e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x131e7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x131e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x131e80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x131e80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131e84: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x131e84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x131e88: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x131e88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131e8c: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x131e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x131e90: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x131e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131e94: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x131e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131e98: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x131e98u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x131e9c: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x131e9cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x131ea0: 0x4600051c  madd.s      $f20, $f0, $f0
    ctx->pc = 0x131ea0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x131ea4: 0x46140504  c1          0x140504
    ctx->pc = 0x131ea4u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x131ea8: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x131ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
    // 0x131eac: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x131eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
    // 0x131eb0: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x131eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x131eb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x131eb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x131eb8: 0x0  nop
    ctx->pc = 0x131eb8u;
    // NOP
    // 0x131ebc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x131ebcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x131ec0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x131ec0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x131ec4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x131ec4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x131ec8: 0xc04ceb0  jal         func_133AC0
    ctx->pc = 0x131EC8u;
    SET_GPR_U32(ctx, 31, 0x131ED0u);
    ctx->pc = 0x131ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131EC8u;
            // 0x131ecc: 0x27a60048  addiu       $a2, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133AC0u;
    if (runtime->hasFunction(0x133AC0u)) {
        auto targetFn = runtime->lookupFunction(0x133AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131ED0u; }
        if (ctx->pc != 0x131ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133AC0_0x133ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131ED0u; }
        if (ctx->pc != 0x131ED0u) { return; }
    }
    ctx->pc = 0x131ED0u;
label_131ed0:
    // 0x131ed0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x131ed0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x131ed4: 0x0  nop
    ctx->pc = 0x131ed4u;
    // NOP
    // 0x131ed8: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x131ed8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131edc: 0x45030017  bc1tl       . + 4 + (0x17 << 2)
    ctx->pc = 0x131EDCu;
    {
        const bool branch_taken_0x131edc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x131edc) {
            ctx->pc = 0x131EE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x131EDCu;
            // 0x131ee0: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x131F3Cu;
            goto label_131f3c;
        }
    }
    ctx->pc = 0x131EE4u;
    // 0x131ee4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x131ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x131ee8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x131ee8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x131eec: 0x0  nop
    ctx->pc = 0x131eecu;
    // NOP
    // 0x131ef0: 0x46140083  div.s       $f2, $f0, $f20
    ctx->pc = 0x131ef0u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[20];
    // 0x131ef4: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x131ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131ef8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x131ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131efc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x131efcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x131f00: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x131f00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x131f04: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x131f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x131f08: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x131f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131f0c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x131f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131f10: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x131f10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x131f14: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x131f14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x131f18: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x131f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x131f1c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x131f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131f20: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x131f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131f24: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x131f24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x131f28: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x131f28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x131f2c: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x131f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x131f30: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x131f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131f34: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x131F34u;
    {
        const bool branch_taken_0x131f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131F34u;
            // 0x131f38: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x131f34) {
            ctx->pc = 0x131F4Cu;
            goto label_131f4c;
        }
    }
    ctx->pc = 0x131F3Cu;
label_131f3c:
    // 0x131f3c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x131f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x131f40: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x131f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x131f44: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x131f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131f48: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x131f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_131f4c:
    // 0x131f4c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x131f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131f50: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x131f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x131f54: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x131f54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131f58: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x131f58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x131F5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131F5Cu;
            // 0x131f60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x131F64u;
    // 0x131f64: 0x0  nop
    ctx->pc = 0x131f64u;
    // NOP
    // 0x131f68: 0x0  nop
    ctx->pc = 0x131f68u;
    // NOP
    // 0x131f6c: 0x0  nop
    ctx->pc = 0x131f6cu;
    // NOP
}
