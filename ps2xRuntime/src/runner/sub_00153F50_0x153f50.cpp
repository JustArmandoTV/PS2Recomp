#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00153F50
// Address: 0x153f50 - 0x154160
void sub_00153F50_0x153f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153F50_0x153f50");
#endif

    switch (ctx->pc) {
        case 0x153fa4u: goto label_153fa4;
        case 0x153fc0u: goto label_153fc0;
        case 0x1540a0u: goto label_1540a0;
        case 0x1540b0u: goto label_1540b0;
        case 0x1540c4u: goto label_1540c4;
        case 0x1540d4u: goto label_1540d4;
        case 0x1540f0u: goto label_1540f0;
        case 0x154114u: goto label_154114;
        default: break;
    }

    ctx->pc = 0x153f50u;

    // 0x153f50: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x153f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x153f54: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x153f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x153f58: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x153f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x153f5c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x153f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x153f60: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x153f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x153f64: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x153f64u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153f68: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x153f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x153f6c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x153f6cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153f70: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x153f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x153f74: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x153f74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153f78: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x153f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x153f7c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x153f7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153f80: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x153f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x153f84: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x153f84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153f88: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x153f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x153f8c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x153f8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x153f90: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x153f90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x153f94: 0x8cb10030  lw          $s1, 0x30($a1)
    ctx->pc = 0x153f94u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x153f98: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x153f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x153f9c: 0x18600062  blez        $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x153F9Cu;
    {
        const bool branch_taken_0x153f9c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x153FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153F9Cu;
            // 0x153fa0: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153f9c) {
            ctx->pc = 0x154128u;
            goto label_154128;
        }
    }
    ctx->pc = 0x153FA4u;
label_153fa4:
    // 0x153fa4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x153fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x153fa8: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x153fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x153fac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x153FACu;
    {
        const bool branch_taken_0x153fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x153fac) {
            ctx->pc = 0x153FC8u;
            goto label_153fc8;
        }
    }
    ctx->pc = 0x153FB4u;
    // 0x153fb4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x153fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x153fb8: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x153FB8u;
    SET_GPR_U32(ctx, 31, 0x153FC0u);
    ctx->pc = 0x153FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153FB8u;
            // 0x153fbc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153FC0u; }
        if (ctx->pc != 0x153FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153FC0u; }
        if (ctx->pc != 0x153FC0u) { return; }
    }
    ctx->pc = 0x153FC0u;
label_153fc0:
    // 0x153fc0: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x153FC0u;
    {
        const bool branch_taken_0x153fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153fc0) {
            ctx->pc = 0x1540D8u;
            goto label_1540d8;
        }
    }
    ctx->pc = 0x153FC8u;
label_153fc8:
    // 0x153fc8: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x153fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x153fcc: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x153FCCu;
    {
        const bool branch_taken_0x153fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x153fcc) {
            ctx->pc = 0x154088u;
            goto label_154088;
        }
    }
    ctx->pc = 0x153FD4u;
    // 0x153fd4: 0xc60e0064  lwc1        $f14, 0x64($s0)
    ctx->pc = 0x153fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x153fd8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x153fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x153fdc: 0xc68b0010  lwc1        $f11, 0x10($s4)
    ctx->pc = 0x153fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x153fe0: 0xc60f0060  lwc1        $f15, 0x60($s0)
    ctx->pc = 0x153fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x153fe4: 0xc68c0000  lwc1        $f12, 0x0($s4)
    ctx->pc = 0x153fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x153fe8: 0x460e581a  mula.s      $f11, $f14
    ctx->pc = 0x153fe8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[11], ctx->f[14]);
    // 0x153fec: 0xc60d0068  lwc1        $f13, 0x68($s0)
    ctx->pc = 0x153fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x153ff0: 0xc68a0020  lwc1        $f10, 0x20($s4)
    ctx->pc = 0x153ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x153ff4: 0x460f601e  madda.s     $f12, $f15
    ctx->pc = 0x153ff4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[15]));
    // 0x153ff8: 0xc6890030  lwc1        $f9, 0x30($s4)
    ctx->pc = 0x153ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x153ffc: 0x460d501c  madd.s      $f0, $f10, $f13
    ctx->pc = 0x153ffcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[13]));
    // 0x154000: 0xc6870014  lwc1        $f7, 0x14($s4)
    ctx->pc = 0x154000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x154004: 0x46004801  sub.s       $f0, $f9, $f0
    ctx->pc = 0x154004u;
    ctx->f[0] = FPU_SUB_S(ctx->f[9], ctx->f[0]);
    // 0x154008: 0xc6880004  lwc1        $f8, 0x4($s4)
    ctx->pc = 0x154008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x15400c: 0x460e381a  mula.s      $f7, $f14
    ctx->pc = 0x15400cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[14]);
    // 0x154010: 0xc6860024  lwc1        $f6, 0x24($s4)
    ctx->pc = 0x154010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x154014: 0xc6850034  lwc1        $f5, 0x34($s4)
    ctx->pc = 0x154014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x154018: 0xc6840008  lwc1        $f4, 0x8($s4)
    ctx->pc = 0x154018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15401c: 0xc6830018  lwc1        $f3, 0x18($s4)
    ctx->pc = 0x15401cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x154020: 0xc6820028  lwc1        $f2, 0x28($s4)
    ctx->pc = 0x154020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x154024: 0xc6810038  lwc1        $f1, 0x38($s4)
    ctx->pc = 0x154024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x154028: 0x460f401e  madda.s     $f8, $f15
    ctx->pc = 0x154028u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[15]));
    // 0x15402c: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x15402cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x154030: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x154030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x154034: 0x460d301c  madd.s      $f0, $f6, $f13
    ctx->pc = 0x154034u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[13]));
    // 0x154038: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x154038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
    // 0x15403c: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x15403cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x154040: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x154040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x154044: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x154044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    // 0x154048: 0x460e181a  mula.s      $f3, $f14
    ctx->pc = 0x154048u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[14]);
    // 0x15404c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x15404cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x154050: 0x460f201e  madda.s     $f4, $f15
    ctx->pc = 0x154050u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[15]));
    // 0x154054: 0x460d101c  madd.s      $f0, $f2, $f13
    ctx->pc = 0x154054u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[13]));
    // 0x154058: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x154058u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15405c: 0xe7ac0090  swc1        $f12, 0x90($sp)
    ctx->pc = 0x15405cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x154060: 0xe7ab00a0  swc1        $f11, 0xA0($sp)
    ctx->pc = 0x154060u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x154064: 0xe7aa00b0  swc1        $f10, 0xB0($sp)
    ctx->pc = 0x154064u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x154068: 0xe7a700a4  swc1        $f7, 0xA4($sp)
    ctx->pc = 0x154068u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x15406c: 0xe7a80094  swc1        $f8, 0x94($sp)
    ctx->pc = 0x15406cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x154070: 0xe7a600b4  swc1        $f6, 0xB4($sp)
    ctx->pc = 0x154070u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x154074: 0xe7a40098  swc1        $f4, 0x98($sp)
    ctx->pc = 0x154074u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x154078: 0xe7a300a8  swc1        $f3, 0xA8($sp)
    ctx->pc = 0x154078u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x15407c: 0xe7a200b8  swc1        $f2, 0xB8($sp)
    ctx->pc = 0x15407cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x154080: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x154080u;
    {
        const bool branch_taken_0x154080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154080u;
            // 0x154084: 0xe7a000c8  swc1        $f0, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x154080) {
            ctx->pc = 0x1540D8u;
            goto label_1540d8;
        }
    }
    ctx->pc = 0x154088u;
label_154088:
    // 0x154088: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x154088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x15408c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x15408Cu;
    {
        const bool branch_taken_0x15408c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15408c) {
            ctx->pc = 0x1540B8u;
            goto label_1540b8;
        }
    }
    ctx->pc = 0x154094u;
    // 0x154094: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x154094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x154098: 0xc04cd44  jal         func_133510
    ctx->pc = 0x154098u;
    SET_GPR_U32(ctx, 31, 0x1540A0u);
    ctx->pc = 0x15409Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154098u;
            // 0x15409c: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133510u;
    if (runtime->hasFunction(0x133510u)) {
        auto targetFn = runtime->lookupFunction(0x133510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1540A0u; }
        if (ctx->pc != 0x1540A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133510_0x133510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1540A0u; }
        if (ctx->pc != 0x1540A0u) { return; }
    }
    ctx->pc = 0x1540A0u;
label_1540a0:
    // 0x1540a0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1540a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1540a4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1540a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1540a8: 0xc04cd60  jal         func_133580
    ctx->pc = 0x1540A8u;
    SET_GPR_U32(ctx, 31, 0x1540B0u);
    ctx->pc = 0x1540ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1540A8u;
            // 0x1540ac: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1540B0u; }
        if (ctx->pc != 0x1540B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1540B0u; }
        if (ctx->pc != 0x1540B0u) { return; }
    }
    ctx->pc = 0x1540B0u;
label_1540b0:
    // 0x1540b0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1540B0u;
    {
        const bool branch_taken_0x1540b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1540b0) {
            ctx->pc = 0x1540D8u;
            goto label_1540d8;
        }
    }
    ctx->pc = 0x1540B8u;
label_1540b8:
    // 0x1540b8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1540b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1540bc: 0xc04ccf4  jal         func_1333D0
    ctx->pc = 0x1540BCu;
    SET_GPR_U32(ctx, 31, 0x1540C4u);
    ctx->pc = 0x1540C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1540BCu;
            // 0x1540c0: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1540C4u; }
        if (ctx->pc != 0x1540C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1540C4u; }
        if (ctx->pc != 0x1540C4u) { return; }
    }
    ctx->pc = 0x1540C4u;
label_1540c4:
    // 0x1540c4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1540c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1540c8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1540c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1540cc: 0xc04cd60  jal         func_133580
    ctx->pc = 0x1540CCu;
    SET_GPR_U32(ctx, 31, 0x1540D4u);
    ctx->pc = 0x1540D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1540CCu;
            // 0x1540d0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1540D4u; }
        if (ctx->pc != 0x1540D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1540D4u; }
        if (ctx->pc != 0x1540D4u) { return; }
    }
    ctx->pc = 0x1540D4u;
label_1540d4:
    // 0x1540d4: 0x0  nop
    ctx->pc = 0x1540d4u;
    // NOP
label_1540d8:
    // 0x1540d8: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1540D8u;
    {
        const bool branch_taken_0x1540d8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1540d8) {
            ctx->pc = 0x1540F8u;
            goto label_1540f8;
        }
    }
    ctx->pc = 0x1540E0u;
    // 0x1540e0: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1540E0u;
    {
        const bool branch_taken_0x1540e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1540e0) {
            ctx->pc = 0x1540F8u;
            goto label_1540f8;
        }
    }
    ctx->pc = 0x1540E8u;
    // 0x1540e8: 0xc04c6ac  jal         func_131AB0
    ctx->pc = 0x1540E8u;
    SET_GPR_U32(ctx, 31, 0x1540F0u);
    ctx->pc = 0x1540ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1540E8u;
            // 0x1540ec: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131AB0u;
    if (runtime->hasFunction(0x131AB0u)) {
        auto targetFn = runtime->lookupFunction(0x131AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1540F0u; }
        if (ctx->pc != 0x1540F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131AB0_0x131ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1540F0u; }
        if (ctx->pc != 0x1540F0u) { return; }
    }
    ctx->pc = 0x1540F0u;
label_1540f0:
    // 0x1540f0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1540f0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1540f4: 0x0  nop
    ctx->pc = 0x1540f4u;
    // NOP
label_1540f8:
    // 0x1540f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1540f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1540fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1540fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154100: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x154100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154104: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x154104u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x154108: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x154108u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15410c: 0xc04c54c  jal         func_131530
    ctx->pc = 0x15410Cu;
    SET_GPR_U32(ctx, 31, 0x154114u);
    ctx->pc = 0x154110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15410Cu;
            // 0x154110: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131530u;
    if (runtime->hasFunction(0x131530u)) {
        auto targetFn = runtime->lookupFunction(0x131530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154114u; }
        if (ctx->pc != 0x154114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131530_0x131530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154114u; }
        if (ctx->pc != 0x154114u) { return; }
    }
    ctx->pc = 0x154114u;
label_154114:
    // 0x154114: 0x8ec30028  lw          $v1, 0x28($s6)
    ctx->pc = 0x154114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 40)));
    // 0x154118: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x154118u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x15411c: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x15411cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x154120: 0x1460ffa0  bnez        $v1, . + 4 + (-0x60 << 2)
    ctx->pc = 0x154120u;
    {
        const bool branch_taken_0x154120 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x154124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154120u;
            // 0x154124: 0x26100090  addiu       $s0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154120) {
            ctx->pc = 0x153FA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_153fa4;
        }
    }
    ctx->pc = 0x154128u;
label_154128:
    // 0x154128: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x154128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15412c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x15412cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x154130: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x154130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x154134: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x154134u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x154138: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x154138u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15413c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x15413cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x154140: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x154140u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x154144: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x154144u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x154148: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x154148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15414c: 0x3e00008  jr          $ra
    ctx->pc = 0x15414Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15414Cu;
            // 0x154150: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154154u;
    // 0x154154: 0x0  nop
    ctx->pc = 0x154154u;
    // NOP
    // 0x154158: 0x0  nop
    ctx->pc = 0x154158u;
    // NOP
    // 0x15415c: 0x0  nop
    ctx->pc = 0x15415cu;
    // NOP
}
