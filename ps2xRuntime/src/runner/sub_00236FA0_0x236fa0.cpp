#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00236FA0
// Address: 0x236fa0 - 0x2375e0
void sub_00236FA0_0x236fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236FA0_0x236fa0");
#endif

    switch (ctx->pc) {
        case 0x2370dcu: goto label_2370dc;
        case 0x2370e4u: goto label_2370e4;
        case 0x237154u: goto label_237154;
        case 0x237198u: goto label_237198;
        case 0x2372f0u: goto label_2372f0;
        case 0x237370u: goto label_237370;
        case 0x2373dcu: goto label_2373dc;
        case 0x237418u: goto label_237418;
        case 0x237480u: goto label_237480;
        case 0x2374c4u: goto label_2374c4;
        case 0x237528u: goto label_237528;
        default: break;
    }

    ctx->pc = 0x236fa0u;

    // 0x236fa0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x236fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x236fa4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x236fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x236fa8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x236fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x236fac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x236facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x236fb0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x236fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x236fb4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x236fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x236fb8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x236fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x236fbc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x236fbcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236fc0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x236fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x236fc4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x236fc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236fc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x236fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x236fcc: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x236fccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x236fd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x236fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x236fd4: 0x8c63ea64  lw          $v1, -0x159C($v1)
    ctx->pc = 0x236fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
    // 0x236fd8: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x236fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
    // 0x236fdc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x236fdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x236fe0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x236FE0u;
    {
        const bool branch_taken_0x236fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236FE0u;
            // 0x236fe4: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236fe0) {
            ctx->pc = 0x23701Cu;
            goto label_23701c;
        }
    }
    ctx->pc = 0x236FE8u;
    // 0x236fe8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x236fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x236fec: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x236fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x236ff0: 0x2463cd98  addiu       $v1, $v1, -0x3268
    ctx->pc = 0x236ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954392));
    // 0x236ff4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x236ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x236ff8: 0x2442cda8  addiu       $v0, $v0, -0x3258
    ctx->pc = 0x236ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954408));
    // 0x236ffc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x236ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x237000: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x237000u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x237004: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x237004u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
    // 0x237008: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x237008u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x23700c: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x23700cu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
    // 0x237010: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x237010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x237014: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x237014u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x237018: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x237018u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_23701c:
    // 0x23701c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x23701cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x237020: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x237020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x237024: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x237024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x237028: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x237028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23702c: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x23702cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    // 0x237030: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x237030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x237034: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x237034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x237038: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x237038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23703c: 0xe44001ac  swc1        $f0, 0x1AC($v0)
    ctx->pc = 0x23703cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 428), bits); }
    // 0x237040: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x237040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x237044: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x237044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x237048: 0xc46002e8  lwc1        $f0, 0x2E8($v1)
    ctx->pc = 0x237048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23704c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x23704cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x237050: 0xe46002d4  swc1        $f0, 0x2D4($v1)
    ctx->pc = 0x237050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 724), bits); }
    // 0x237054: 0xc46102dc  lwc1        $f1, 0x2DC($v1)
    ctx->pc = 0x237054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x237058: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x237058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23705c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x23705cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x237060: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x237060u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x237064: 0xe46002d8  swc1        $f0, 0x2D8($v1)
    ctx->pc = 0x237064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 728), bits); }
    // 0x237068: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x237068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x23706c: 0xc46102d4  lwc1        $f1, 0x2D4($v1)
    ctx->pc = 0x23706cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x237070: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x237070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x237074: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x237074u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x237078: 0xe46001c0  swc1        $f0, 0x1C0($v1)
    ctx->pc = 0x237078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 448), bits); }
    // 0x23707c: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x23707cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x237080: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x237080u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x237084: 0xe46001c4  swc1        $f0, 0x1C4($v1)
    ctx->pc = 0x237084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 452), bits); }
    // 0x237088: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x237088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23708c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x23708cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x237090: 0xe46001c8  swc1        $f0, 0x1C8($v1)
    ctx->pc = 0x237090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 456), bits); }
    // 0x237094: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x237094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x237098: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x237098u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x23709c: 0xe46001cc  swc1        $f0, 0x1CC($v1)
    ctx->pc = 0x23709cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 460), bits); }
    // 0x2370a0: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x2370a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2370a4: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x2370a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2370a8: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2370a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2370ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2370acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2370b0: 0xe46001d0  swc1        $f0, 0x1D0($v1)
    ctx->pc = 0x2370b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 464), bits); }
    // 0x2370b4: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x2370b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2370b8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2370b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2370bc: 0xe46001d4  swc1        $f0, 0x1D4($v1)
    ctx->pc = 0x2370bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 468), bits); }
    // 0x2370c0: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x2370c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2370c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2370c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2370c8: 0xe46001d8  swc1        $f0, 0x1D8($v1)
    ctx->pc = 0x2370c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 472), bits); }
    // 0x2370cc: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x2370ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2370d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2370d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2370d4: 0xc0863e2  jal         func_218F88
    ctx->pc = 0x2370D4u;
    SET_GPR_U32(ctx, 31, 0x2370DCu);
    ctx->pc = 0x2370D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2370D4u;
            // 0x2370d8: 0xe46001dc  swc1        $f0, 0x1DC($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 476), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x218F88u;
    if (runtime->hasFunction(0x218F88u)) {
        auto targetFn = runtime->lookupFunction(0x218F88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2370DCu; }
        if (ctx->pc != 0x2370DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00218F88_0x218f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2370DCu; }
        if (ctx->pc != 0x2370DCu) { return; }
    }
    ctx->pc = 0x2370DCu;
label_2370dc:
    // 0x2370dc: 0xc09054c  jal         func_241530
    ctx->pc = 0x2370DCu;
    SET_GPR_U32(ctx, 31, 0x2370E4u);
    ctx->pc = 0x2370E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2370DCu;
            // 0x2370e0: 0x8e840008  lw          $a0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x241530u;
    if (runtime->hasFunction(0x241530u)) {
        auto targetFn = runtime->lookupFunction(0x241530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2370E4u; }
        if (ctx->pc != 0x2370E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00241530_0x241530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2370E4u; }
        if (ctx->pc != 0x2370E4u) { return; }
    }
    ctx->pc = 0x2370E4u;
label_2370e4:
    // 0x2370e4: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x2370e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2370e8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2370e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2370ec: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2370ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2370f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2370f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2370f4: 0x8cc50084  lw          $a1, 0x84($a2)
    ctx->pc = 0x2370f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 132)));
    // 0x2370f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2370f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2370fc: 0xacc50084  sw          $a1, 0x84($a2)
    ctx->pc = 0x2370fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 5));
    // 0x237100: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x237100u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x237104: 0x8cc50088  lw          $a1, 0x88($a2)
    ctx->pc = 0x237104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 136)));
    // 0x237108: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x237108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x23710c: 0xacc50088  sw          $a1, 0x88($a2)
    ctx->pc = 0x23710cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 136), GPR_U32(ctx, 5));
    // 0x237110: 0x8c63ea64  lw          $v1, -0x159C($v1)
    ctx->pc = 0x237110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
    // 0x237114: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x237114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
    // 0x237118: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x237118u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x23711c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23711Cu;
    {
        const bool branch_taken_0x23711c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23711Cu;
            // 0x237120: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23711c) {
            ctx->pc = 0x23714Cu;
            goto label_23714c;
        }
    }
    ctx->pc = 0x237124u;
    // 0x237124: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x237124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x237128: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x237128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x23712c: 0x2442cdb0  addiu       $v0, $v0, -0x3250
    ctx->pc = 0x23712cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954416));
    // 0x237130: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x237130u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x237134: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x237134u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
    // 0x237138: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x237138u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x23713c: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x23713cu;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
    // 0x237140: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x237140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x237144: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x237144u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x237148: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x237148u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_23714c:
    // 0x23714c: 0xc08dd78  jal         func_2375E0
    ctx->pc = 0x23714Cu;
    SET_GPR_U32(ctx, 31, 0x237154u);
    ctx->pc = 0x237150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23714Cu;
            // 0x237150: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2375E0u;
    if (runtime->hasFunction(0x2375E0u)) {
        auto targetFn = runtime->lookupFunction(0x2375E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237154u; }
        if (ctx->pc != 0x237154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002375E0_0x2375e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237154u; }
        if (ctx->pc != 0x237154u) { return; }
    }
    ctx->pc = 0x237154u;
label_237154:
    // 0x237154: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x237154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x237158: 0x8c830088  lw          $v1, 0x88($a0)
    ctx->pc = 0x237158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x23715c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23715cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x237160: 0xac830088  sw          $v1, 0x88($a0)
    ctx->pc = 0x237160u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 3));
    // 0x237164: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x237164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x237168: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x237168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x23716c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23716cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x237170: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x237170u;
    {
        const bool branch_taken_0x237170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x237174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237170u;
            // 0x237174: 0xac830084  sw          $v1, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237170) {
            ctx->pc = 0x237198u;
            goto label_237198;
        }
    }
    ctx->pc = 0x237178u;
    // 0x237178: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x237178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x23717c: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x23717Cu;
    {
        const bool branch_taken_0x23717c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23717c) {
            ctx->pc = 0x237180u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23717Cu;
            // 0x237180: 0x8e840008  lw          $a0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23719Cu;
            goto label_23719c;
        }
    }
    ctx->pc = 0x237184u;
    // 0x237184: 0x8083008c  lb          $v1, 0x8C($a0)
    ctx->pc = 0x237184u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x237188: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x237188u;
    {
        const bool branch_taken_0x237188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x237188) {
            ctx->pc = 0x237198u;
            goto label_237198;
        }
    }
    ctx->pc = 0x237190u;
    // 0x237190: 0xc08d1c4  jal         func_234710
    ctx->pc = 0x237190u;
    SET_GPR_U32(ctx, 31, 0x237198u);
    ctx->pc = 0x234710u;
    if (runtime->hasFunction(0x234710u)) {
        auto targetFn = runtime->lookupFunction(0x234710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237198u; }
        if (ctx->pc != 0x237198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234710_0x234710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237198u; }
        if (ctx->pc != 0x237198u) { return; }
    }
    ctx->pc = 0x237198u;
label_237198:
    // 0x237198: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x237198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_23719c:
    // 0x23719c: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x23719cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x2371a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2371a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2371a4: 0xac830084  sw          $v1, 0x84($a0)
    ctx->pc = 0x2371a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
    // 0x2371a8: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x2371a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2371ac: 0x908302ef  lbu         $v1, 0x2EF($a0)
    ctx->pc = 0x2371acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 751)));
    // 0x2371b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2371b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2371b4: 0xa08302ef  sb          $v1, 0x2EF($a0)
    ctx->pc = 0x2371b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 751), (uint8_t)GPR_U32(ctx, 3));
    // 0x2371b8: 0x908302ef  lbu         $v1, 0x2EF($a0)
    ctx->pc = 0x2371b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 751)));
    // 0x2371bc: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2371bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2371c0: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x2371c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2371c4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2371C4u;
    {
        const bool branch_taken_0x2371c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2371C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2371C4u;
            // 0x2371c8: 0x248501b0  addiu       $a1, $a0, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2371c4) {
            ctx->pc = 0x2371D8u;
            goto label_2371d8;
        }
    }
    ctx->pc = 0x2371CCu;
    // 0x2371cc: 0x90a3013d  lbu         $v1, 0x13D($a1)
    ctx->pc = 0x2371ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 317)));
    // 0x2371d0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2371d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2371d4: 0xa0a3013d  sb          $v1, 0x13D($a1)
    ctx->pc = 0x2371d4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 317), (uint8_t)GPR_U32(ctx, 3));
label_2371d8:
    // 0x2371d8: 0x90a3013f  lbu         $v1, 0x13F($a1)
    ctx->pc = 0x2371d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 319)));
    // 0x2371dc: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x2371dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2371e0: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2371E0u;
    {
        const bool branch_taken_0x2371e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2371e0) {
            ctx->pc = 0x2371E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2371E0u;
            // 0x2371e4: 0x90a3013f  lbu         $v1, 0x13F($a1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 319)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2371F8u;
            goto label_2371f8;
        }
    }
    ctx->pc = 0x2371E8u;
    // 0x2371e8: 0x90a3013d  lbu         $v1, 0x13D($a1)
    ctx->pc = 0x2371e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 317)));
    // 0x2371ec: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x2371ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x2371f0: 0xa0a3013d  sb          $v1, 0x13D($a1)
    ctx->pc = 0x2371f0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 317), (uint8_t)GPR_U32(ctx, 3));
    // 0x2371f4: 0x90a3013f  lbu         $v1, 0x13F($a1)
    ctx->pc = 0x2371f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 319)));
label_2371f8:
    // 0x2371f8: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2371f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2371fc: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2371FCu;
    {
        const bool branch_taken_0x2371fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2371fc) {
            ctx->pc = 0x237200u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2371FCu;
            // 0x237200: 0x8e860008  lw          $a2, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23721Cu;
            goto label_23721c;
        }
    }
    ctx->pc = 0x237204u;
    // 0x237204: 0x90a4013e  lbu         $a0, 0x13E($a1)
    ctx->pc = 0x237204u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 318)));
    // 0x237208: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x237208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23720c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x23720cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x237210: 0xa0a3013e  sb          $v1, 0x13E($a1)
    ctx->pc = 0x237210u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 318), (uint8_t)GPR_U32(ctx, 3));
    // 0x237214: 0xa0a0013f  sb          $zero, 0x13F($a1)
    ctx->pc = 0x237214u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x237218: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x237218u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_23721c:
    // 0x23721c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x23721cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x237220: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x237220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x237224: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x237224u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x237228: 0x8c84ea64  lw          $a0, -0x159C($a0)
    ctx->pc = 0x237228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961764)));
    // 0x23722c: 0x24a5ea60  addiu       $a1, $a1, -0x15A0
    ctx->pc = 0x23722cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
    // 0x237230: 0xc4c102d4  lwc1        $f1, 0x2D4($a2)
    ctx->pc = 0x237230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x237234: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x237234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
    // 0x237238: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x237238u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x23723c: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x23723cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x237240: 0xc4c002e0  lwc1        $f0, 0x2E0($a2)
    ctx->pc = 0x237240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x237244: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x237244u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x237248: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x237248u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x23724c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x23724cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x237250: 0xc4c202d8  lwc1        $f2, 0x2D8($a2)
    ctx->pc = 0x237250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x237254: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x237254u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x237258: 0xc4c102e8  lwc1        $f1, 0x2E8($a2)
    ctx->pc = 0x237258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23725c: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x23725cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x237260: 0xc4c002e4  lwc1        $f0, 0x2E4($a2)
    ctx->pc = 0x237260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x237264: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x237264u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x237268: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x237268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x23726c: 0xc4c001b4  lwc1        $f0, 0x1B4($a2)
    ctx->pc = 0x23726cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x237270: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x237270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x237274: 0xc4c101b8  lwc1        $f1, 0x1B8($a2)
    ctx->pc = 0x237274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x237278: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x237278u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x23727c: 0xc4c00204  lwc1        $f0, 0x204($a2)
    ctx->pc = 0x23727cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x237280: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x237280u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x237284: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x237284u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x237288: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x237288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x23728c: 0xc4c0020c  lwc1        $f0, 0x20C($a2)
    ctx->pc = 0x23728cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x237290: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x237290u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x237294: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x237294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x237298: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x237298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23729c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x23729cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2372a0: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x2372a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2372a4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2372A4u;
    {
        const bool branch_taken_0x2372a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2372A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2372A4u;
            // 0x2372a8: 0xe7a00080  swc1        $f0, 0x80($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2372a4) {
            ctx->pc = 0x2372D4u;
            goto label_2372d4;
        }
    }
    ctx->pc = 0x2372ACu;
    // 0x2372ac: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2372acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2372b0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2372b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2372b4: 0x2463cdc0  addiu       $v1, $v1, -0x3240
    ctx->pc = 0x2372b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954432));
    // 0x2372b8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2372b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2372bc: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2372bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
    // 0x2372c0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2372c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2372c4: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2372c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
    // 0x2372c8: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x2372c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x2372cc: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x2372ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x2372d0: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x2372d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_2372d4:
    // 0x2372d4: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x2372d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2372d8: 0x24750028  addiu       $s5, $v1, 0x28
    ctx->pc = 0x2372d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x2372dc: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x2372dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x2372e0: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x2372e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2372e4: 0x640006a  bltz        $s2, . + 4 + (0x6A << 2)
    ctx->pc = 0x2372E4u;
    {
        const bool branch_taken_0x2372e4 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x2372e4) {
            ctx->pc = 0x237490u;
            goto label_237490;
        }
    }
    ctx->pc = 0x2372ECu;
    // 0x2372ec: 0x128080  sll         $s0, $s2, 2
    ctx->pc = 0x2372ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2372f0:
    // 0x2372f0: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2372f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2372f4: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x2372f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2372f8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2372f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2372fc: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x2372fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x237300: 0x244501a0  addiu       $a1, $v0, 0x1A0
    ctx->pc = 0x237300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x237304: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x237304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x237308: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x237308u;
    {
        const bool branch_taken_0x237308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237308) {
            ctx->pc = 0x2373C0u;
            goto label_2373c0;
        }
    }
    ctx->pc = 0x237310u;
    // 0x237310: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x237310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x237314: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x237314u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x237318: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x237318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
    // 0x23731c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23731cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x237320: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x237320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
    // 0x237324: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x237324u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x237328: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x237328u;
    {
        const bool branch_taken_0x237328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23732Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237328u;
            // 0x23732c: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237328) {
            ctx->pc = 0x237358u;
            goto label_237358;
        }
    }
    ctx->pc = 0x237330u;
    // 0x237330: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x237330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x237334: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x237334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x237338: 0x2442f5f0  addiu       $v0, $v0, -0xA10
    ctx->pc = 0x237338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964720));
    // 0x23733c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x23733cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x237340: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x237340u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
    // 0x237344: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x237344u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x237348: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x237348u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
    // 0x23734c: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x23734cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x237350: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x237350u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x237354: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x237354u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_237358:
    // 0x237358: 0x8e27004c  lw          $a3, 0x4C($s1)
    ctx->pc = 0x237358u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x23735c: 0x8e280050  lw          $t0, 0x50($s1)
    ctx->pc = 0x23735cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x237360: 0x24a40010  addiu       $a0, $a1, 0x10
    ctx->pc = 0x237360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x237364: 0x24a60030  addiu       $a2, $a1, 0x30
    ctx->pc = 0x237364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x237368: 0xc089db4  jal         func_2276D0
    ctx->pc = 0x237368u;
    SET_GPR_U32(ctx, 31, 0x237370u);
    ctx->pc = 0x23736Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237368u;
            // 0x23736c: 0x240900a0  addiu       $t1, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2276D0u;
    if (runtime->hasFunction(0x2276D0u)) {
        auto targetFn = runtime->lookupFunction(0x2276D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237370u; }
        if (ctx->pc != 0x237370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002276D0_0x2276d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237370u; }
        if (ctx->pc != 0x237370u) { return; }
    }
    ctx->pc = 0x237370u;
label_237370:
    // 0x237370: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x237370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x237374: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x237374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x237378: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x237378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
    // 0x23737c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x23737cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x237380: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x237380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
    // 0x237384: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x237384u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x237388: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x237388u;
    {
        const bool branch_taken_0x237388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23738Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237388u;
            // 0x23738c: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237388) {
            ctx->pc = 0x2373E0u;
            goto label_2373e0;
        }
    }
    ctx->pc = 0x237390u;
    // 0x237390: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x237390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x237394: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x237394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x237398: 0x2463f5e8  addiu       $v1, $v1, -0xA18
    ctx->pc = 0x237398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964712));
    // 0x23739c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x23739cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2373a0: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2373a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
    // 0x2373a4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2373a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2373a8: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2373a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
    // 0x2373ac: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x2373acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x2373b0: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x2373b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x2373b4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2373B4u;
    {
        const bool branch_taken_0x2373b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2373B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2373B4u;
            // 0x2373b8: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2373b4) {
            ctx->pc = 0x2373E0u;
            goto label_2373e0;
        }
    }
    ctx->pc = 0x2373BCu;
    // 0x2373bc: 0x0  nop
    ctx->pc = 0x2373bcu;
    // NOP
label_2373c0:
    // 0x2373c0: 0x8e28004c  lw          $t0, 0x4C($s1)
    ctx->pc = 0x2373c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x2373c4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2373c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2373c8: 0x8e290050  lw          $t1, 0x50($s1)
    ctx->pc = 0x2373c8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2373cc: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x2373ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2373d0: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x2373d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2373d4: 0xc088254  jal         func_220950
    ctx->pc = 0x2373D4u;
    SET_GPR_U32(ctx, 31, 0x2373DCu);
    ctx->pc = 0x2373D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2373D4u;
            // 0x2373d8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220950u;
    if (runtime->hasFunction(0x220950u)) {
        auto targetFn = runtime->lookupFunction(0x220950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2373DCu; }
        if (ctx->pc != 0x2373DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00220950_0x220950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2373DCu; }
        if (ctx->pc != 0x2373DCu) { return; }
    }
    ctx->pc = 0x2373DCu;
label_2373dc:
    // 0x2373dc: 0x0  nop
    ctx->pc = 0x2373dcu;
    // NOP
label_2373e0:
    // 0x2373e0: 0x28410006  slti        $at, $v0, 0x6
    ctx->pc = 0x2373e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2373e4: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x2373E4u;
    {
        const bool branch_taken_0x2373e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2373e4) {
            ctx->pc = 0x237418u;
            goto label_237418;
        }
    }
    ctx->pc = 0x2373ECu;
    // 0x2373ec: 0x92230028  lbu         $v1, 0x28($s1)
    ctx->pc = 0x2373ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x2373f0: 0x31f3c  dsll32      $v1, $v1, 28
    ctx->pc = 0x2373f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 28));
    // 0x2373f4: 0x31fbe  dsrl32      $v1, $v1, 30
    ctx->pc = 0x2373f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 30));
    // 0x2373f8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2373F8u;
    {
        const bool branch_taken_0x2373f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2373f8) {
            ctx->pc = 0x237418u;
            goto label_237418;
        }
    }
    ctx->pc = 0x237400u;
    // 0x237400: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x237400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x237404: 0x808300d1  lb          $v1, 0xD1($a0)
    ctx->pc = 0x237404u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 209)));
    // 0x237408: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x237408u;
    {
        const bool branch_taken_0x237408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x237408) {
            ctx->pc = 0x237418u;
            goto label_237418;
        }
    }
    ctx->pc = 0x237410u;
    // 0x237410: 0xc0906d8  jal         func_241B60
    ctx->pc = 0x237410u;
    SET_GPR_U32(ctx, 31, 0x237418u);
    ctx->pc = 0x237414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237410u;
            // 0x237414: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x241B60u;
    if (runtime->hasFunction(0x241B60u)) {
        auto targetFn = runtime->lookupFunction(0x241B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237418u; }
        if (ctx->pc != 0x237418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00241B60_0x241b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237418u; }
        if (ctx->pc != 0x237418u) { return; }
    }
    ctx->pc = 0x237418u;
label_237418:
    // 0x237418: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x237418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x23741c: 0x8c630168  lw          $v1, 0x168($v1)
    ctx->pc = 0x23741cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 360)));
    // 0x237420: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x237420u;
    {
        const bool branch_taken_0x237420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x237420) {
            ctx->pc = 0x237480u;
            goto label_237480;
        }
    }
    ctx->pc = 0x237428u;
    // 0x237428: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x237428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x23742c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x23742cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x237430: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x237430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
    // 0x237434: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x237434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x237438: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x237438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
    // 0x23743c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x23743cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x237440: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x237440u;
    {
        const bool branch_taken_0x237440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237440u;
            // 0x237444: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237440) {
            ctx->pc = 0x237470u;
            goto label_237470;
        }
    }
    ctx->pc = 0x237448u;
    // 0x237448: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x237448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23744c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x23744cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x237450: 0x2442cdd0  addiu       $v0, $v0, -0x3230
    ctx->pc = 0x237450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954448));
    // 0x237454: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x237454u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x237458: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x237458u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
    // 0x23745c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x23745cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x237460: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x237460u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
    // 0x237464: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x237464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x237468: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x237468u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x23746c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x23746cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_237470:
    // 0x237470: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x237470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x237474: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x237474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237478: 0xc08e98c  jal         func_23A630
    ctx->pc = 0x237478u;
    SET_GPR_U32(ctx, 31, 0x237480u);
    ctx->pc = 0x23747Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237478u;
            // 0x23747c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A630u;
    if (runtime->hasFunction(0x23A630u)) {
        auto targetFn = runtime->lookupFunction(0x23A630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237480u; }
        if (ctx->pc != 0x237480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023A630_0x23a630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237480u; }
        if (ctx->pc != 0x237480u) { return; }
    }
    ctx->pc = 0x237480u;
label_237480:
    // 0x237480: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x237480u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x237484: 0x641ff9a  bgez        $s2, . + 4 + (-0x66 << 2)
    ctx->pc = 0x237484u;
    {
        const bool branch_taken_0x237484 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x237488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237484u;
            // 0x237488: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237484) {
            ctx->pc = 0x2372F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2372f0;
        }
    }
    ctx->pc = 0x23748Cu;
    // 0x23748c: 0x0  nop
    ctx->pc = 0x23748cu;
    // NOP
label_237490:
    // 0x237490: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x237490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x237494: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x237494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x237498: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x237498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x23749c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x23749Cu;
    {
        const bool branch_taken_0x23749c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2374A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23749Cu;
            // 0x2374a0: 0xac830084  sw          $v1, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23749c) {
            ctx->pc = 0x2374C4u;
            goto label_2374c4;
        }
    }
    ctx->pc = 0x2374A4u;
    // 0x2374a4: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x2374a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2374a8: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2374A8u;
    {
        const bool branch_taken_0x2374a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2374a8) {
            ctx->pc = 0x2374ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2374A8u;
            // 0x2374ac: 0x8e830008  lw          $v1, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2374C8u;
            goto label_2374c8;
        }
    }
    ctx->pc = 0x2374B0u;
    // 0x2374b0: 0x8083008c  lb          $v1, 0x8C($a0)
    ctx->pc = 0x2374b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x2374b4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2374B4u;
    {
        const bool branch_taken_0x2374b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2374b4) {
            ctx->pc = 0x2374C4u;
            goto label_2374c4;
        }
    }
    ctx->pc = 0x2374BCu;
    // 0x2374bc: 0xc08d1c4  jal         func_234710
    ctx->pc = 0x2374BCu;
    SET_GPR_U32(ctx, 31, 0x2374C4u);
    ctx->pc = 0x234710u;
    if (runtime->hasFunction(0x234710u)) {
        auto targetFn = runtime->lookupFunction(0x234710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2374C4u; }
        if (ctx->pc != 0x2374C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234710_0x234710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2374C4u; }
        if (ctx->pc != 0x2374C4u) { return; }
    }
    ctx->pc = 0x2374C4u;
label_2374c4:
    // 0x2374c4: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x2374c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_2374c8:
    // 0x2374c8: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x2374c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x2374cc: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2374CCu;
    {
        const bool branch_taken_0x2374cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2374cc) {
            ctx->pc = 0x237570u;
            goto label_237570;
        }
    }
    ctx->pc = 0x2374D4u;
    // 0x2374d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2374d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2374d8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2374d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2374dc: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x2374dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
    // 0x2374e0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2374e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2374e4: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x2374e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
    // 0x2374e8: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2374e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2374ec: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2374ECu;
    {
        const bool branch_taken_0x2374ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2374F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2374ECu;
            // 0x2374f0: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2374ec) {
            ctx->pc = 0x23751Cu;
            goto label_23751c;
        }
    }
    ctx->pc = 0x2374F4u;
    // 0x2374f4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2374f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2374f8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2374f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2374fc: 0x2442cdf0  addiu       $v0, $v0, -0x3210
    ctx->pc = 0x2374fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954480));
    // 0x237500: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x237500u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x237504: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x237504u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
    // 0x237508: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x237508u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x23750c: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x23750cu;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
    // 0x237510: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x237510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x237514: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x237514u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x237518: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x237518u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_23751c:
    // 0x23751c: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x23751cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x237520: 0xc08e904  jal         func_23A410
    ctx->pc = 0x237520u;
    SET_GPR_U32(ctx, 31, 0x237528u);
    ctx->pc = 0x237524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237520u;
            // 0x237524: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A410u;
    if (runtime->hasFunction(0x23A410u)) {
        auto targetFn = runtime->lookupFunction(0x23A410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237528u; }
        if (ctx->pc != 0x237528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023A410_0x23a410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237528u; }
        if (ctx->pc != 0x237528u) { return; }
    }
    ctx->pc = 0x237528u;
label_237528:
    // 0x237528: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x237528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x23752c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x23752cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x237530: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x237530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
    // 0x237534: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x237534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x237538: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x237538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
    // 0x23753c: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x23753cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x237540: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x237540u;
    {
        const bool branch_taken_0x237540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x237544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237540u;
            // 0x237544: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237540) {
            ctx->pc = 0x237570u;
            goto label_237570;
        }
    }
    ctx->pc = 0x237548u;
    // 0x237548: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x237548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x23754c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x23754cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x237550: 0x2463cce0  addiu       $v1, $v1, -0x3320
    ctx->pc = 0x237550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954208));
    // 0x237554: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x237554u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x237558: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x237558u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
    // 0x23755c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x23755cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x237560: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x237560u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
    // 0x237564: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x237564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x237568: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x237568u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x23756c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x23756cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_237570:
    // 0x237570: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x237570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x237574: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x237574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x237578: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x237578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
    // 0x23757c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x23757cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x237580: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x237580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
    // 0x237584: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x237584u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x237588: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x237588u;
    {
        const bool branch_taken_0x237588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23758Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237588u;
            // 0x23758c: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237588) {
            ctx->pc = 0x2375B8u;
            goto label_2375b8;
        }
    }
    ctx->pc = 0x237590u;
    // 0x237590: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x237590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x237594: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x237594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x237598: 0x2463cd58  addiu       $v1, $v1, -0x32A8
    ctx->pc = 0x237598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954328));
    // 0x23759c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x23759cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2375a0: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2375a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
    // 0x2375a4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2375a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2375a8: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2375a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
    // 0x2375ac: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x2375acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x2375b0: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x2375b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x2375b4: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x2375b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_2375b8:
    // 0x2375b8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2375b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2375bc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2375bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2375c0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2375c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2375c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2375c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2375c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2375c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2375cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2375ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2375d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2375d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2375d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2375D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2375D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2375D4u;
            // 0x2375d8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2375DCu;
    // 0x2375dc: 0x0  nop
    ctx->pc = 0x2375dcu;
    // NOP
}
