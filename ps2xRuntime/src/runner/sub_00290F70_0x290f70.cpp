#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00290F70
// Address: 0x290f70 - 0x2910f0
void sub_00290F70_0x290f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290F70_0x290f70");
#endif

    switch (ctx->pc) {
        case 0x290fe8u: goto label_290fe8;
        default: break;
    }

    ctx->pc = 0x290f70u;

    // 0x290f70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x290f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x290f74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x290f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x290f78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x290f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x290f7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x290f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x290f80: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x290f80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290f84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x290f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x290f88: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x290f88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290f8c: 0xacc0009c  sw          $zero, 0x9C($a2)
    ctx->pc = 0x290f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 156), GPR_U32(ctx, 0));
    // 0x290f90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x290f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290f94: 0xacc00098  sw          $zero, 0x98($a2)
    ctx->pc = 0x290f94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 152), GPR_U32(ctx, 0));
    // 0x290f98: 0x26300040  addiu       $s0, $s1, 0x40
    ctx->pc = 0x290f98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x290f9c: 0xacc00094  sw          $zero, 0x94($a2)
    ctx->pc = 0x290f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 148), GPR_U32(ctx, 0));
    // 0x290fa0: 0xacc00090  sw          $zero, 0x90($a2)
    ctx->pc = 0x290fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 0));
    // 0x290fa4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x290fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290fa8: 0xe4c00060  swc1        $f0, 0x60($a2)
    ctx->pc = 0x290fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 96), bits); }
    // 0x290fac: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x290facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290fb0: 0xe4c00064  swc1        $f0, 0x64($a2)
    ctx->pc = 0x290fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 100), bits); }
    // 0x290fb4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x290fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290fb8: 0xe4c00068  swc1        $f0, 0x68($a2)
    ctx->pc = 0x290fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 104), bits); }
    // 0x290fbc: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x290fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290fc0: 0xe4c0006c  swc1        $f0, 0x6C($a2)
    ctx->pc = 0x290fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 108), bits); }
    // 0x290fc4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x290fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290fc8: 0xe4c00070  swc1        $f0, 0x70($a2)
    ctx->pc = 0x290fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 112), bits); }
    // 0x290fcc: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x290fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290fd0: 0xe4c00074  swc1        $f0, 0x74($a2)
    ctx->pc = 0x290fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 116), bits); }
    // 0x290fd4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x290fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290fd8: 0xe4c00078  swc1        $f0, 0x78($a2)
    ctx->pc = 0x290fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 120), bits); }
    // 0x290fdc: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x290fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290fe0: 0xc0a3830  jal         func_28E0C0
    ctx->pc = 0x290FE0u;
    SET_GPR_U32(ctx, 31, 0x290FE8u);
    ctx->pc = 0x290FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290FE0u;
            // 0x290fe4: 0xe4c0007c  swc1        $f0, 0x7C($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 124), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290FE8u; }
        if (ctx->pc != 0x290FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290FE8u; }
        if (ctx->pc != 0x290FE8u) { return; }
    }
    ctx->pc = 0x290FE8u;
label_290fe8:
    // 0x290fe8: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x290fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290fec: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x290fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x290ff0: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x290ff0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x290ff4: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x290ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x290ff8: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x290ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290ffc: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x290ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x291000: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x291000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291004: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x291004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x291008: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x291008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29100c: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x29100cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x291010: 0xc6090044  lwc1        $f9, 0x44($s0)
    ctx->pc = 0x291010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x291014: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x291014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291018: 0xc60a0040  lwc1        $f10, 0x40($s0)
    ctx->pc = 0x291018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x29101c: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x29101cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x291020: 0x4600481a  mula.s      $f9, $f0
    ctx->pc = 0x291020u;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x291024: 0xc6080048  lwc1        $f8, 0x48($s0)
    ctx->pc = 0x291024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x291028: 0x4603501e  madda.s     $f10, $f3
    ctx->pc = 0x291028u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[3]));
    // 0x29102c: 0xc6240020  lwc1        $f4, 0x20($s1)
    ctx->pc = 0x29102cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x291030: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x291030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291034: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x291034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291038: 0x4604419c  madd.s      $f6, $f8, $f4
    ctx->pc = 0x291038u;
    ctx->f[6] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[4]));
    // 0x29103c: 0x4600481a  mula.s      $f9, $f0
    ctx->pc = 0x29103cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x291040: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x291040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291044: 0x4601501e  madda.s     $f10, $f1
    ctx->pc = 0x291044u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[1]));
    // 0x291048: 0xc6220024  lwc1        $f2, 0x24($s1)
    ctx->pc = 0x291048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29104c: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x29104cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x291050: 0x4602415c  madd.s      $f5, $f8, $f2
    ctx->pc = 0x291050u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[2]));
    // 0x291054: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x291054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x291058: 0xc6240028  lwc1        $f4, 0x28($s1)
    ctx->pc = 0x291058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x29105c: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x29105cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x291060: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x291060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291064: 0x4602481a  mula.s      $f9, $f2
    ctx->pc = 0x291064u;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x291068: 0x4603501e  madda.s     $f10, $f3
    ctx->pc = 0x291068u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[3]));
    // 0x29106c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x29106cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x291070: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x291070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291074: 0x4604409c  madd.s      $f2, $f8, $f4
    ctx->pc = 0x291074u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[4]));
    // 0x291078: 0xe7a60040  swc1        $f6, 0x40($sp)
    ctx->pc = 0x291078u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x29107c: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x29107cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x291080: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x291080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x291084: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x291084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291088: 0xe7a50044  swc1        $f5, 0x44($sp)
    ctx->pc = 0x291088u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x29108c: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x29108cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x291090: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x291090u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x291094: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x291094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x291098: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x291098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29109c: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x29109cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x2910a0: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x2910a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2910a4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2910a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2910a8: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x2910a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2910ac: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2910acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2910b0: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x2910b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2910b4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2910b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2910b8: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x2910b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2910bc: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2910bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2910c0: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x2910c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x2910c4: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x2910c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2910c8: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2910c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x2910cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2910ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2910d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2910d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2910d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2910d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2910d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2910d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2910dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2910DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2910E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2910DCu;
            // 0x2910e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2910E4u;
    // 0x2910e4: 0x0  nop
    ctx->pc = 0x2910e4u;
    // NOP
    // 0x2910e8: 0x0  nop
    ctx->pc = 0x2910e8u;
    // NOP
    // 0x2910ec: 0x0  nop
    ctx->pc = 0x2910ecu;
    // NOP
}
