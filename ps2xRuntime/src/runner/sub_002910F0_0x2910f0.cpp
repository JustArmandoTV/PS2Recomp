#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002910F0
// Address: 0x2910f0 - 0x2912d0
void sub_002910F0_0x2910f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002910F0_0x2910f0");
#endif

    switch (ctx->pc) {
        case 0x29112cu: goto label_29112c;
        default: break;
    }

    ctx->pc = 0x2910f0u;

    // 0x2910f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2910f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2910f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2910f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2910f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2910f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2910fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2910fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x291100: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x291100u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291104: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x291104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x291108: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x291108u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29110c: 0xaca0009c  sw          $zero, 0x9C($a1)
    ctx->pc = 0x29110cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 156), GPR_U32(ctx, 0));
    // 0x291110: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x291110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x291114: 0xaca00098  sw          $zero, 0x98($a1)
    ctx->pc = 0x291114u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 152), GPR_U32(ctx, 0));
    // 0x291118: 0x26300040  addiu       $s0, $s1, 0x40
    ctx->pc = 0x291118u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x29111c: 0xaca00094  sw          $zero, 0x94($a1)
    ctx->pc = 0x29111cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 148), GPR_U32(ctx, 0));
    // 0x291120: 0xaca00090  sw          $zero, 0x90($a1)
    ctx->pc = 0x291120u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 0));
    // 0x291124: 0xc0a3828  jal         func_28E0A0
    ctx->pc = 0x291124u;
    SET_GPR_U32(ctx, 31, 0x29112Cu);
    ctx->pc = 0x291128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291124u;
            // 0x291128: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0A0u;
    if (runtime->hasFunction(0x28E0A0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29112Cu; }
        if (ctx->pc != 0x29112Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0A0_0x28e0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29112Cu; }
        if (ctx->pc != 0x29112Cu) { return; }
    }
    ctx->pc = 0x29112Cu;
label_29112c:
    // 0x29112c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x29112cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291130: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x291130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x291134: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x291134u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x291138: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x291138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x29113c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x29113cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291140: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x291140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x291144: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x291144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291148: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x291148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x29114c: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x29114cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291150: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x291150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x291154: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x291154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291158: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x291158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x29115c: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x29115cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291160: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x291160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x291164: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x291164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291168: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x291168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x29116c: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x29116cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291170: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x291170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x291174: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x291174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291178: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x291178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x29117c: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x29117cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291180: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x291180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x291184: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x291184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291188: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x291188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x29118c: 0xc640002c  lwc1        $f0, 0x2C($s2)
    ctx->pc = 0x29118cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291190: 0xe620002c  swc1        $f0, 0x2C($s1)
    ctx->pc = 0x291190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x291194: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x291194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291198: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x291198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x29119c: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x29119cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2911a0: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x2911a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x2911a4: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x2911a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2911a8: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x2911a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x2911ac: 0xc640003c  lwc1        $f0, 0x3C($s2)
    ctx->pc = 0x2911acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2911b0: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x2911b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x2911b4: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2911b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2911b8: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x2911b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2911bc: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x2911bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2911c0: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x2911c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x2911c4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2911c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2911c8: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x2911c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x2911cc: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2911ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2911d0: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x2911d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x2911d4: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2911d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2911d8: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2911d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2911dc: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x2911dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2911e0: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x2911e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x2911e4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2911e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2911e8: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2911e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2911ec: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2911ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2911f0: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x2911f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x2911f4: 0xc6090044  lwc1        $f9, 0x44($s0)
    ctx->pc = 0x2911f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2911f8: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x2911f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2911fc: 0xc60a0040  lwc1        $f10, 0x40($s0)
    ctx->pc = 0x2911fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x291200: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x291200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x291204: 0x4600481a  mula.s      $f9, $f0
    ctx->pc = 0x291204u;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x291208: 0xc6080048  lwc1        $f8, 0x48($s0)
    ctx->pc = 0x291208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x29120c: 0x4603501e  madda.s     $f10, $f3
    ctx->pc = 0x29120cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[3]));
    // 0x291210: 0xc6440020  lwc1        $f4, 0x20($s2)
    ctx->pc = 0x291210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x291214: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x291214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291218: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x291218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29121c: 0x4604419c  madd.s      $f6, $f8, $f4
    ctx->pc = 0x29121cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[4]));
    // 0x291220: 0x4600481a  mula.s      $f9, $f0
    ctx->pc = 0x291220u;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x291224: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x291224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291228: 0x4601501e  madda.s     $f10, $f1
    ctx->pc = 0x291228u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[1]));
    // 0x29122c: 0xc6420024  lwc1        $f2, 0x24($s2)
    ctx->pc = 0x29122cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x291230: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x291230u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x291234: 0x4602415c  madd.s      $f5, $f8, $f2
    ctx->pc = 0x291234u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[2]));
    // 0x291238: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x291238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29123c: 0xc6440028  lwc1        $f4, 0x28($s2)
    ctx->pc = 0x29123cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x291240: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x291240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x291244: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x291244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291248: 0x4602481a  mula.s      $f9, $f2
    ctx->pc = 0x291248u;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x29124c: 0x4603501e  madda.s     $f10, $f3
    ctx->pc = 0x29124cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[3]));
    // 0x291250: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x291250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x291254: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x291254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291258: 0x4604409c  madd.s      $f2, $f8, $f4
    ctx->pc = 0x291258u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[4]));
    // 0x29125c: 0xe7a60040  swc1        $f6, 0x40($sp)
    ctx->pc = 0x29125cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x291260: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x291260u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x291264: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x291264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x291268: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x291268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29126c: 0xe7a50044  swc1        $f5, 0x44($sp)
    ctx->pc = 0x29126cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x291270: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x291270u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x291274: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x291274u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x291278: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x291278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x29127c: 0xc640003c  lwc1        $f0, 0x3C($s2)
    ctx->pc = 0x29127cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291280: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x291280u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x291284: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x291284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x291288: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x291288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29128c: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x29128cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x291290: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x291290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291294: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x291294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x291298: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x291298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29129c: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x29129cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2912a0: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2912a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2912a4: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x2912a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x2912a8: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x2912a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2912ac: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2912acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x2912b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2912b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2912b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2912b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2912b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2912b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2912bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2912bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2912c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2912C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2912C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2912C0u;
            // 0x2912c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2912C8u;
    // 0x2912c8: 0x0  nop
    ctx->pc = 0x2912c8u;
    // NOP
    // 0x2912cc: 0x0  nop
    ctx->pc = 0x2912ccu;
    // NOP
}
