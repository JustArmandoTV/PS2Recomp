#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00299E60
// Address: 0x299e60 - 0x29a1c0
void sub_00299E60_0x299e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299E60_0x299e60");
#endif

    switch (ctx->pc) {
        case 0x299e90u: goto label_299e90;
        default: break;
    }

    ctx->pc = 0x299e60u;

    // 0x299e60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x299e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x299e64: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x299e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x299e68: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x299e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x299e6c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x299e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x299e70: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x299e70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299e74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x299e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x299e78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x299e78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299e7c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x299e7cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x299e80: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x299e80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299e84: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x299e84u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x299e88: 0xc0a66d0  jal         func_299B40
    ctx->pc = 0x299E88u;
    SET_GPR_U32(ctx, 31, 0x299E90u);
    ctx->pc = 0x299E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299E88u;
            // 0x299e8c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x299B40u;
    if (runtime->hasFunction(0x299B40u)) {
        auto targetFn = runtime->lookupFunction(0x299B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299E90u; }
        if (ctx->pc != 0x299E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00299B40_0x299b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299E90u; }
        if (ctx->pc != 0x299E90u) { return; }
    }
    ctx->pc = 0x299E90u;
label_299e90:
    // 0x299e90: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x299e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x299e94: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x299e94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x299e98: 0xc6060000  lwc1        $f6, 0x0($s0)
    ctx->pc = 0x299e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x299e9c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x299e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x299ea0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x299ea0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x299ea4: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x299ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x299ea8: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x299ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x299eac: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x299eacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x299eb0: 0x46003187  neg.s       $f6, $f6
    ctx->pc = 0x299eb0u;
    ctx->f[6] = FPU_NEG_S(ctx->f[6]);
    // 0x299eb4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x299eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x299eb8: 0xc6070004  lwc1        $f7, 0x4($s0)
    ctx->pc = 0x299eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x299ebc: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x299ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299ec0: 0x46023182  mul.s       $f6, $f6, $f2
    ctx->pc = 0x299ec0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x299ec4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x299ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x299ec8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x299ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x299ecc: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x299eccu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x299ed0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x299ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x299ed4: 0x46073019  suba.s      $f6, $f7
    ctx->pc = 0x299ed4u;
    ctx->f[31] = FPU_SUB_S(ctx->f[6], ctx->f[7]);
    // 0x299ed8: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x299ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299edc: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x299edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x299ee0: 0xc6050008  lwc1        $f5, 0x8($s0)
    ctx->pc = 0x299ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x299ee4: 0x46021983  div.s       $f6, $f3, $f2
    ctx->pc = 0x299ee4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[6] = ctx->f[3] / ctx->f[2];
    // 0x299ee8: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x299ee8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x299eec: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x299eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x299ef0: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x299ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299ef4: 0x460429dd  msub.s      $f7, $f5, $f4
    ctx->pc = 0x299ef4u;
    ctx->f[7] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x299ef8: 0x46063082  mul.s       $f2, $f6, $f6
    ctx->pc = 0x299ef8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x299efc: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x299efcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x299f00: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x299f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x299f04: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x299f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x299f08: 0x46061142  mul.s       $f5, $f2, $f6
    ctx->pc = 0x299f08u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x299f0c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x299f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x299f10: 0xc62b0010  lwc1        $f11, 0x10($s1)
    ctx->pc = 0x299f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x299f14: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x299f14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x299f18: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x299f18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x299f1c: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x299f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x299f20: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x299f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x299f24: 0xc48a0000  lwc1        $f10, 0x0($a0)
    ctx->pc = 0x299f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x299f28: 0xc6280014  lwc1        $f8, 0x14($s1)
    ctx->pc = 0x299f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x299f2c: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x299f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x299f30: 0xc623000c  lwc1        $f3, 0xC($s1)
    ctx->pc = 0x299f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x299f34: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x299f34u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x299f38: 0x46062802  mul.s       $f0, $f5, $f6
    ctx->pc = 0x299f38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x299f3c: 0x46044102  mul.s       $f4, $f8, $f4
    ctx->pc = 0x299f3cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
    // 0x299f40: 0x460a5a82  mul.s       $f10, $f11, $f10
    ctx->pc = 0x299f40u;
    ctx->f[10] = FPU_MUL_S(ctx->f[11], ctx->f[10]);
    // 0x299f44: 0x46045018  adda.s      $f10, $f4
    ctx->pc = 0x299f44u;
    ctx->f[31] = FPU_ADD_S(ctx->f[10], ctx->f[4]);
    // 0x299f48: 0x460338dc  madd.s      $f3, $f7, $f3
    ctx->pc = 0x299f48u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[3]));
    // 0x299f4c: 0x460310c2  mul.s       $f3, $f2, $f3
    ctx->pc = 0x299f4cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x299f50: 0xe623003c  swc1        $f3, 0x3C($s1)
    ctx->pc = 0x299f50u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x299f54: 0x46000207  neg.s       $f8, $f0
    ctx->pc = 0x299f54u;
    ctx->f[8] = FPU_NEG_S(ctx->f[0]);
    // 0x299f58: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x299f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299f5c: 0x4607a342  mul.s       $f13, $f20, $f7
    ctx->pc = 0x299f5cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[20], ctx->f[7]);
    // 0x299f60: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x299f60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x299f64: 0xe6200040  swc1        $f0, 0x40($s1)
    ctx->pc = 0x299f64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
    // 0x299f68: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x299f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299f6c: 0x46073a42  mul.s       $f9, $f7, $f7
    ctx->pc = 0x299f6cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x299f70: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x299f70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x299f74: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x299f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x299f78: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x299f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x299f7c: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x299f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299f80: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x299f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x299f84: 0xc6240010  lwc1        $f4, 0x10($s1)
    ctx->pc = 0x299f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x299f88: 0xc6230014  lwc1        $f3, 0x14($s1)
    ctx->pc = 0x299f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x299f8c: 0xc62c0018  lwc1        $f12, 0x18($s1)
    ctx->pc = 0x299f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x299f90: 0xc62b001c  lwc1        $f11, 0x1C($s1)
    ctx->pc = 0x299f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x299f94: 0xc62a0020  lwc1        $f10, 0x20($s1)
    ctx->pc = 0x299f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x299f98: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x299f98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x299f9c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x299f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x299fa0: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x299fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x299fa4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x299fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x299fa8: 0xc48f0000  lwc1        $f15, 0x0($a0)
    ctx->pc = 0x299fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x299fac: 0xc46e0000  lwc1        $f14, 0x0($v1)
    ctx->pc = 0x299facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x299fb0: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x299fb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x299fb4: 0x460f18c2  mul.s       $f3, $f3, $f15
    ctx->pc = 0x299fb4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[15]);
    // 0x299fb8: 0x460e2102  mul.s       $f4, $f4, $f14
    ctx->pc = 0x299fb8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[14]);
    // 0x299fbc: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x299fbcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x299fc0: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x299fc0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x299fc4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x299fc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x299fc8: 0x460e70c2  mul.s       $f3, $f14, $f14
    ctx->pc = 0x299fc8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
    // 0x299fcc: 0x4603601a  mula.s      $f12, $f3
    ctx->pc = 0x299fccu;
    ctx->f[31] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x299fd0: 0x460e08c2  mul.s       $f3, $f1, $f14
    ctx->pc = 0x299fd0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[14]);
    // 0x299fd4: 0x460f18c2  mul.s       $f3, $f3, $f15
    ctx->pc = 0x299fd4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[15]);
    // 0x299fd8: 0x4603591c  madd.s      $f4, $f11, $f3
    ctx->pc = 0x299fd8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[3]));
    // 0x299fdc: 0x460f78c2  mul.s       $f3, $f15, $f15
    ctx->pc = 0x299fdcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[15], ctx->f[15]);
    // 0x299fe0: 0x460350c2  mul.s       $f3, $f10, $f3
    ctx->pc = 0x299fe0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[3]);
    // 0x299fe4: 0x46041818  adda.s      $f3, $f4
    ctx->pc = 0x299fe4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x299fe8: 0x4600381c  madd.s      $f0, $f7, $f0
    ctx->pc = 0x299fe8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[0]));
    // 0x299fec: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x299fecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x299ff0: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x299ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    // 0x299ff4: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x299ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299ff8: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x299ff8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x299ffc: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x299ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x29a000: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x29a000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a004: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x29a004u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x29a008: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x29a008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x29a00c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x29a00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x29a010: 0xc62a000c  lwc1        $f10, 0xC($s1)
    ctx->pc = 0x29a010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x29a014: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x29a014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29a018: 0xc62c0010  lwc1        $f12, 0x10($s1)
    ctx->pc = 0x29a018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29a01c: 0xc62b0014  lwc1        $f11, 0x14($s1)
    ctx->pc = 0x29a01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x29a020: 0xc6350024  lwc1        $f21, 0x24($s1)
    ctx->pc = 0x29a020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29a024: 0xc6300018  lwc1        $f16, 0x18($s1)
    ctx->pc = 0x29a024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x29a028: 0xc6330028  lwc1        $f19, 0x28($s1)
    ctx->pc = 0x29a028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x29a02c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x29a02cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x29a030: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29a030u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29a034: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x29a034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x29a038: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x29a038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x29a03c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x29a03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x29a040: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x29a040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29a044: 0x460a3a82  mul.s       $f10, $f7, $f10
    ctx->pc = 0x29a044u;
    ctx->f[10] = FPU_MUL_S(ctx->f[7], ctx->f[10]);
    // 0x29a048: 0x46036302  mul.s       $f12, $f12, $f3
    ctx->pc = 0x29a048u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x29a04c: 0x46045ac2  mul.s       $f11, $f11, $f4
    ctx->pc = 0x29a04cu;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[4]);
    // 0x29a050: 0x460b62c0  add.s       $f11, $f12, $f11
    ctx->pc = 0x29a050u;
    ctx->f[11] = FPU_ADD_S(ctx->f[12], ctx->f[11]);
    // 0x29a054: 0x46031d82  mul.s       $f22, $f3, $f3
    ctx->pc = 0x29a054u;
    ctx->f[22] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x29a058: 0x46161b02  mul.s       $f12, $f3, $f22
    ctx->pc = 0x29a058u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[22]);
    // 0x29a05c: 0x460ba2c2  mul.s       $f11, $f20, $f11
    ctx->pc = 0x29a05cu;
    ctx->f[11] = FPU_MUL_S(ctx->f[20], ctx->f[11]);
    // 0x29a060: 0x460ca81a  mula.s      $f21, $f12
    ctx->pc = 0x29a060u;
    ctx->f[31] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
    // 0x29a064: 0x4616a302  mul.s       $f12, $f20, $f22
    ctx->pc = 0x29a064u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x29a068: 0x460b5280  add.s       $f10, $f10, $f11
    ctx->pc = 0x29a068u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[11]);
    // 0x29a06c: 0x461682c2  mul.s       $f11, $f16, $f22
    ctx->pc = 0x29a06cu;
    ctx->f[11] = FPU_MUL_S(ctx->f[16], ctx->f[22]);
    // 0x29a070: 0x46046302  mul.s       $f12, $f12, $f4
    ctx->pc = 0x29a070u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[4]);
    // 0x29a074: 0x460c9c1c  madd.s      $f16, $f19, $f12
    ctx->pc = 0x29a074u;
    ctx->f[16] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[19], ctx->f[12]));
    // 0x29a078: 0x4603a302  mul.s       $f12, $f20, $f3
    ctx->pc = 0x29a078u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x29a07c: 0x46042002  mul.s       $f0, $f4, $f4
    ctx->pc = 0x29a07cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x29a080: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x29a080u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x29a084: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x29a084u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x29a088: 0xc62f001c  lwc1        $f15, 0x1C($s1)
    ctx->pc = 0x29a088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x29a08c: 0xc632002c  lwc1        $f18, 0x2C($s1)
    ctx->pc = 0x29a08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x29a090: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x29a090u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x29a094: 0x460c9302  mul.s       $f12, $f18, $f12
    ctx->pc = 0x29a094u;
    ctx->f[12] = FPU_MUL_S(ctx->f[18], ctx->f[12]);
    // 0x29a098: 0xc6310030  lwc1        $f17, 0x30($s1)
    ctx->pc = 0x29a098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x29a09c: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x29a09cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x29a0a0: 0x460c8018  adda.s      $f16, $f12
    ctx->pc = 0x29a0a0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[16], ctx->f[12]);
    // 0x29a0a4: 0xc62e0020  lwc1        $f14, 0x20($s1)
    ctx->pc = 0x29a0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x29a0a8: 0x460378c2  mul.s       $f3, $f15, $f3
    ctx->pc = 0x29a0a8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[15], ctx->f[3]);
    // 0x29a0ac: 0x4604891c  madd.s      $f4, $f17, $f4
    ctx->pc = 0x29a0acu;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[17], ctx->f[4]));
    // 0x29a0b0: 0x46035818  adda.s      $f11, $f3
    ctx->pc = 0x29a0b0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[11], ctx->f[3]);
    // 0x29a0b4: 0x4600701c  madd.s      $f0, $f14, $f0
    ctx->pc = 0x29a0b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[14], ctx->f[0]));
    // 0x29a0b8: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x29a0b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x29a0bc: 0x46040018  adda.s      $f0, $f4
    ctx->pc = 0x29a0bcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x29a0c0: 0x460a481c  madd.s      $f0, $f9, $f10
    ctx->pc = 0x29a0c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[10]));
    // 0x29a0c4: 0x46004002  mul.s       $f0, $f8, $f0
    ctx->pc = 0x29a0c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x29a0c8: 0xe6200054  swc1        $f0, 0x54($s1)
    ctx->pc = 0x29a0c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
    // 0x29a0cc: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x29a0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a0d0: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x29a0d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x29a0d4: 0xe6200058  swc1        $f0, 0x58($s1)
    ctx->pc = 0x29a0d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
    // 0x29a0d8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x29a0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29a0dc: 0xc628002c  lwc1        $f8, 0x2C($s1)
    ctx->pc = 0x29a0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x29a0e0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x29a0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x29a0e4: 0xc6240030  lwc1        $f4, 0x30($s1)
    ctx->pc = 0x29a0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x29a0e8: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x29a0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a0ec: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x29a0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x29a0f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29a0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29a0f4: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x29a0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x29a0f8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x29a0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x29a0fc: 0xc4860000  lwc1        $f6, 0x0($a0)
    ctx->pc = 0x29a0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x29a100: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x29a100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29a104: 0x46064182  mul.s       $f6, $f8, $f6
    ctx->pc = 0x29a104u;
    ctx->f[6] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
    // 0x29a108: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x29a108u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x29a10c: 0x46033018  adda.s      $f6, $f3
    ctx->pc = 0x29a10cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x29a110: 0x4600381c  madd.s      $f0, $f7, $f0
    ctx->pc = 0x29a110u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[0]));
    // 0x29a114: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x29a114u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x29a118: 0xe620005c  swc1        $f0, 0x5C($s1)
    ctx->pc = 0x29a118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
    // 0x29a11c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x29a11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x29a120: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x29a120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a124: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x29a124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29a128: 0xc6230018  lwc1        $f3, 0x18($s1)
    ctx->pc = 0x29a128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29a12c: 0xc622001c  lwc1        $f2, 0x1C($s1)
    ctx->pc = 0x29a12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29a130: 0xc6280024  lwc1        $f8, 0x24($s1)
    ctx->pc = 0x29a130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x29a134: 0xc6260028  lwc1        $f6, 0x28($s1)
    ctx->pc = 0x29a134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x29a138: 0xc624002c  lwc1        $f4, 0x2C($s1)
    ctx->pc = 0x29a138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x29a13c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x29a13cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x29a140: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29a140u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29a144: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x29a144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x29a148: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x29a148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x29a14c: 0xc48a0000  lwc1        $f10, 0x0($a0)
    ctx->pc = 0x29a14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x29a150: 0xc4690000  lwc1        $f9, 0x0($v1)
    ctx->pc = 0x29a150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x29a154: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x29a154u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x29a158: 0x460a1082  mul.s       $f2, $f2, $f10
    ctx->pc = 0x29a158u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
    // 0x29a15c: 0x460918c2  mul.s       $f3, $f3, $f9
    ctx->pc = 0x29a15cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[9]);
    // 0x29a160: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x29a160u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x29a164: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x29a164u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x29a168: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x29a168u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x29a16c: 0x460948c2  mul.s       $f3, $f9, $f9
    ctx->pc = 0x29a16cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
    // 0x29a170: 0x460a0842  mul.s       $f1, $f1, $f10
    ctx->pc = 0x29a170u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x29a174: 0x4603401a  mula.s      $f8, $f3
    ctx->pc = 0x29a174u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x29a178: 0x460130dc  madd.s      $f3, $f6, $f1
    ctx->pc = 0x29a178u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[1]));
    // 0x29a17c: 0x460a5042  mul.s       $f1, $f10, $f10
    ctx->pc = 0x29a17cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x29a180: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x29a180u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x29a184: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x29a184u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x29a188: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x29a188u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x29a18c: 0x4600381c  madd.s      $f0, $f7, $f0
    ctx->pc = 0x29a18cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[0]));
    // 0x29a190: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x29a190u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x29a194: 0xe6200060  swc1        $f0, 0x60($s1)
    ctx->pc = 0x29a194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
    // 0x29a198: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x29a198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29a19c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x29a19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x29a1a0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x29a1a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29a1a4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x29a1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29a1a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x29a1a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29a1ac: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x29a1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29a1b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x29a1b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a1b4: 0x3e00008  jr          $ra
    ctx->pc = 0x29A1B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A1B4u;
            // 0x29a1b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29A1BCu;
    // 0x29a1bc: 0x0  nop
    ctx->pc = 0x29a1bcu;
    // NOP
}
