#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00201F80
// Address: 0x201f80 - 0x2026a0
void sub_00201F80_0x201f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201F80_0x201f80");
#endif

    switch (ctx->pc) {
        case 0x202020u: goto label_202020;
        case 0x202154u: goto label_202154;
        case 0x2022d0u: goto label_2022d0;
        case 0x202420u: goto label_202420;
        case 0x2024fcu: goto label_2024fc;
        default: break;
    }

    ctx->pc = 0x201f80u;

    // 0x201f80: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x201f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x201f84: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x201f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x201f88: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x201f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x201f8c: 0x2463db60  addiu       $v1, $v1, -0x24A0
    ctx->pc = 0x201f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957920));
    // 0x201f90: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x201f90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x201f94: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x201f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x201f98: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x201f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x201f9c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x201f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x201fa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x201fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201fa4: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x201fa4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x201fa8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x201fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x201fac: 0x2442e370  addiu       $v0, $v0, -0x1C90
    ctx->pc = 0x201facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959984));
    // 0x201fb0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x201fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x201fb4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x201fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x201fb8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x201fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x201fbc: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x201fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x201fc0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x201fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x201fc4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x201fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x201fc8: 0x2442e1e0  addiu       $v0, $v0, -0x1E20
    ctx->pc = 0x201fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959584));
    // 0x201fcc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x201fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x201fd0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x201fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x201fd4: 0x2463e140  addiu       $v1, $v1, -0x1EC0
    ctx->pc = 0x201fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959424));
    // 0x201fd8: 0xe48c0010  swc1        $f12, 0x10($a0)
    ctx->pc = 0x201fd8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x201fdc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x201fdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201fe0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x201fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x201fe4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x201fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x201fe8: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x201fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x201fec: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x201fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x201ff0: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x201ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x201ff4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x201ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x201ff8: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x201ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x201ffc: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x201ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202000: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x202000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x202004: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x202004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202008: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x202008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x20200c: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x20200cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202010: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x202010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x202014: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x202014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202018: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x202018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x20201c: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x20201cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_202020:
    // 0x202020: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x202020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x202024: 0xe48c002c  swc1        $f12, 0x2C($a0)
    ctx->pc = 0x202024u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x202028: 0x3e00008  jr          $ra
    ctx->pc = 0x202028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20202Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202028u;
            // 0x20202c: 0xe48c003c  swc1        $f12, 0x3C($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x202030u;
    // 0x202030: 0xc4810038  lwc1        $f1, 0x38($a0)
    ctx->pc = 0x202030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x202034: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x202034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202038: 0xc4830034  lwc1        $f3, 0x34($a0)
    ctx->pc = 0x202038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20203c: 0xc4820024  lwc1        $f2, 0x24($a0)
    ctx->pc = 0x20203cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x202040: 0x460009c1  sub.s       $f7, $f1, $f0
    ctx->pc = 0x202040u;
    ctx->f[7] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x202044: 0xc4890020  lwc1        $f9, 0x20($a0)
    ctx->pc = 0x202044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x202048: 0xc4880030  lwc1        $f8, 0x30($a0)
    ctx->pc = 0x202048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x20204c: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x20204cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x202050: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x202050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202054: 0x46094141  sub.s       $f5, $f8, $f9
    ctx->pc = 0x202054u;
    ctx->f[5] = FPU_SUB_S(ctx->f[8], ctx->f[9]);
    // 0x202058: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x202058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x20205c: 0x4600101a  mula.s      $f2, $f0
    ctx->pc = 0x20205cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x202060: 0xc4a60008  lwc1        $f6, 0x8($a1)
    ctx->pc = 0x202060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x202064: 0x4604281e  madda.s     $f5, $f4
    ctx->pc = 0x202064u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x202068: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x202068u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20206c: 0x4606381c  madd.s      $f0, $f7, $f6
    ctx->pc = 0x20206cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[6]));
    // 0x202070: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x202070u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x202074: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x202074u;
    {
        const bool branch_taken_0x202074 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x202074) {
            ctx->pc = 0x202078u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x202074u;
            // 0x202078: 0xe4c80000  swc1        $f8, 0x0($a2) (Delay Slot)
        { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2020A0u;
            goto label_2020a0;
        }
    }
    ctx->pc = 0x20207Cu;
    // 0x20207c: 0xe4c90000  swc1        $f9, 0x0($a2)
    ctx->pc = 0x20207cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x202080: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x202080u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202084: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x202084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202088: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x202088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x20208c: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x20208cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202090: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x202090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x202094: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x202094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202098: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x202098u;
    {
        const bool branch_taken_0x202098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20209Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202098u;
            // 0x20209c: 0xe4c0000c  swc1        $f0, 0xC($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x202098) {
            ctx->pc = 0x2020BCu;
            goto label_2020bc;
        }
    }
    ctx->pc = 0x2020A0u;
label_2020a0:
    // 0x2020a0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2020a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2020a4: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x2020a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2020a8: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x2020a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x2020ac: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x2020acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2020b0: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x2020b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x2020b4: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x2020b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2020b8: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x2020b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_2020bc:
    // 0x2020bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2020BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2020C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2020BCu;
            // 0x2020c0: 0xacc3000c  sw          $v1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2020C4u;
    // 0x2020c4: 0x0  nop
    ctx->pc = 0x2020c4u;
    // NOP
    // 0x2020c8: 0x0  nop
    ctx->pc = 0x2020c8u;
    // NOP
    // 0x2020cc: 0x0  nop
    ctx->pc = 0x2020ccu;
    // NOP
    // 0x2020d0: 0x24c8ffff  addiu       $t0, $a2, -0x1
    ctx->pc = 0x2020d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2020d4: 0x500008e  bltz        $t0, . + 4 + (0x8E << 2)
    ctx->pc = 0x2020D4u;
    {
        const bool branch_taken_0x2020d4 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x2020d4) {
            ctx->pc = 0x202310u;
            goto label_202310;
        }
    }
    ctx->pc = 0x2020DCu;
    // 0x2020dc: 0x500008c  bltz        $t0, . + 4 + (0x8C << 2)
    ctx->pc = 0x2020DCu;
    {
        const bool branch_taken_0x2020dc = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x2020E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2020DCu;
            // 0x2020e0: 0x24830020  addiu       $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2020dc) {
            ctx->pc = 0x202310u;
            goto label_202310;
        }
    }
    ctx->pc = 0x2020E4u;
    // 0x2020e4: 0x28c10009  slti        $at, $a2, 0x9
    ctx->pc = 0x2020e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2020e8: 0x14200077  bnez        $at, . + 4 + (0x77 << 2)
    ctx->pc = 0x2020E8u;
    {
        const bool branch_taken_0x2020e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2020e8) {
            ctx->pc = 0x2022C8u;
            goto label_2022c8;
        }
    }
    ctx->pc = 0x2020F0u;
    // 0x2020f0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2020f0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2020f4: 0x5000007  bltz        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2020F4u;
    {
        const bool branch_taken_0x2020f4 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x2020F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2020F4u;
            // 0x2020f8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2020f4) {
            ctx->pc = 0x202114u;
            goto label_202114;
        }
    }
    ctx->pc = 0x2020FCu;
    // 0x2020fc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2020fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x202100: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x202100u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x202104: 0x104202a  slt         $a0, $t0, $a0
    ctx->pc = 0x202104u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x202108: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x202108u;
    {
        const bool branch_taken_0x202108 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x202108) {
            ctx->pc = 0x202114u;
            goto label_202114;
        }
    }
    ctx->pc = 0x202110u;
    // 0x202110: 0x64090001  daddiu      $t1, $zero, 0x1
    ctx->pc = 0x202110u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_202114:
    // 0x202114: 0x1120000d  beqz        $t1, . + 4 + (0xD << 2)
    ctx->pc = 0x202114u;
    {
        const bool branch_taken_0x202114 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x202114) {
            ctx->pc = 0x20214Cu;
            goto label_20214c;
        }
    }
    ctx->pc = 0x20211Cu;
    // 0x20211c: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x20211cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x202120: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x202120u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x202124: 0x892024  and         $a0, $a0, $t1
    ctx->pc = 0x202124u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x202128: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x202128u;
    {
        const bool branch_taken_0x202128 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x20212Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202128u;
            // 0x20212c: 0x640a0001  daddiu      $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x202128) {
            ctx->pc = 0x202140u;
            goto label_202140;
        }
    }
    ctx->pc = 0x202130u;
    // 0x202130: 0xc92024  and         $a0, $a2, $t1
    ctx->pc = 0x202130u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 9));
    // 0x202134: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x202134u;
    {
        const bool branch_taken_0x202134 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x202134) {
            ctx->pc = 0x202140u;
            goto label_202140;
        }
    }
    ctx->pc = 0x20213Cu;
    // 0x20213c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20213cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202140:
    // 0x202140: 0x11400002  beqz        $t2, . + 4 + (0x2 << 2)
    ctx->pc = 0x202140u;
    {
        const bool branch_taken_0x202140 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x202140) {
            ctx->pc = 0x20214Cu;
            goto label_20214c;
        }
    }
    ctx->pc = 0x202148u;
    // 0x202148: 0x640b0001  daddiu      $t3, $zero, 0x1
    ctx->pc = 0x202148u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_20214c:
    // 0x20214c: 0x1160005e  beqz        $t3, . + 4 + (0x5E << 2)
    ctx->pc = 0x20214Cu;
    {
        const bool branch_taken_0x20214c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x20214c) {
            ctx->pc = 0x2022C8u;
            goto label_2022c8;
        }
    }
    ctx->pc = 0x202154u;
label_202154:
    // 0x202154: 0x94a60000  lhu         $a2, 0x0($a1)
    ctx->pc = 0x202154u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x202158: 0x2508fff8  addiu       $t0, $t0, -0x8
    ctx->pc = 0x202158u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967288));
    // 0x20215c: 0x29010008  slti        $at, $t0, 0x8
    ctx->pc = 0x20215cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x202160: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x202160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x202164: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x202164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202168: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x202168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x20216c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x20216cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202170: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x202170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x202174: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x202174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202178: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x202178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x20217c: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x20217cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202180: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x202180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x202184: 0xace6000c  sw          $a2, 0xC($a3)
    ctx->pc = 0x202184u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 6));
    // 0x202188: 0x94a60002  lhu         $a2, 0x2($a1)
    ctx->pc = 0x202188u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x20218c: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x20218cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x202190: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x202190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202194: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x202194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x202198: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x202198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20219c: 0xe4e00014  swc1        $f0, 0x14($a3)
    ctx->pc = 0x20219cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
    // 0x2021a0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2021a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2021a4: 0xe4e00018  swc1        $f0, 0x18($a3)
    ctx->pc = 0x2021a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
    // 0x2021a8: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x2021a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2021ac: 0xe4e0001c  swc1        $f0, 0x1C($a3)
    ctx->pc = 0x2021acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
    // 0x2021b0: 0xace6001c  sw          $a2, 0x1C($a3)
    ctx->pc = 0x2021b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 6));
    // 0x2021b4: 0x94a60004  lhu         $a2, 0x4($a1)
    ctx->pc = 0x2021b4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2021b8: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x2021b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2021bc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2021bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2021c0: 0xe4e00020  swc1        $f0, 0x20($a3)
    ctx->pc = 0x2021c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x2021c4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2021c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2021c8: 0xe4e00024  swc1        $f0, 0x24($a3)
    ctx->pc = 0x2021c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
    // 0x2021cc: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2021ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2021d0: 0xe4e00028  swc1        $f0, 0x28($a3)
    ctx->pc = 0x2021d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
    // 0x2021d4: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x2021d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2021d8: 0xe4e0002c  swc1        $f0, 0x2C($a3)
    ctx->pc = 0x2021d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 44), bits); }
    // 0x2021dc: 0xace6002c  sw          $a2, 0x2C($a3)
    ctx->pc = 0x2021dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 6));
    // 0x2021e0: 0x94a60006  lhu         $a2, 0x6($a1)
    ctx->pc = 0x2021e0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x2021e4: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x2021e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2021e8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2021e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2021ec: 0xe4e00030  swc1        $f0, 0x30($a3)
    ctx->pc = 0x2021ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 48), bits); }
    // 0x2021f0: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2021f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2021f4: 0xe4e00034  swc1        $f0, 0x34($a3)
    ctx->pc = 0x2021f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 52), bits); }
    // 0x2021f8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2021f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2021fc: 0xe4e00038  swc1        $f0, 0x38($a3)
    ctx->pc = 0x2021fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 56), bits); }
    // 0x202200: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x202200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202204: 0xe4e0003c  swc1        $f0, 0x3C($a3)
    ctx->pc = 0x202204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 60), bits); }
    // 0x202208: 0xace6003c  sw          $a2, 0x3C($a3)
    ctx->pc = 0x202208u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 60), GPR_U32(ctx, 6));
    // 0x20220c: 0x94a60008  lhu         $a2, 0x8($a1)
    ctx->pc = 0x20220cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x202210: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x202210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x202214: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x202214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202218: 0xe4e00040  swc1        $f0, 0x40($a3)
    ctx->pc = 0x202218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 64), bits); }
    // 0x20221c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x20221cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202220: 0xe4e00044  swc1        $f0, 0x44($a3)
    ctx->pc = 0x202220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 68), bits); }
    // 0x202224: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x202224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202228: 0xe4e00048  swc1        $f0, 0x48($a3)
    ctx->pc = 0x202228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 72), bits); }
    // 0x20222c: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x20222cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202230: 0xe4e0004c  swc1        $f0, 0x4C($a3)
    ctx->pc = 0x202230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 76), bits); }
    // 0x202234: 0xace6004c  sw          $a2, 0x4C($a3)
    ctx->pc = 0x202234u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 76), GPR_U32(ctx, 6));
    // 0x202238: 0x94a6000a  lhu         $a2, 0xA($a1)
    ctx->pc = 0x202238u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x20223c: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x20223cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x202240: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x202240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202244: 0xe4e00050  swc1        $f0, 0x50($a3)
    ctx->pc = 0x202244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 80), bits); }
    // 0x202248: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x202248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20224c: 0xe4e00054  swc1        $f0, 0x54($a3)
    ctx->pc = 0x20224cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 84), bits); }
    // 0x202250: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x202250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202254: 0xe4e00058  swc1        $f0, 0x58($a3)
    ctx->pc = 0x202254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 88), bits); }
    // 0x202258: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x202258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20225c: 0xe4e0005c  swc1        $f0, 0x5C($a3)
    ctx->pc = 0x20225cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 92), bits); }
    // 0x202260: 0xace6005c  sw          $a2, 0x5C($a3)
    ctx->pc = 0x202260u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 92), GPR_U32(ctx, 6));
    // 0x202264: 0x94a6000c  lhu         $a2, 0xC($a1)
    ctx->pc = 0x202264u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x202268: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x202268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x20226c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x20226cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202270: 0xe4e00060  swc1        $f0, 0x60($a3)
    ctx->pc = 0x202270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 96), bits); }
    // 0x202274: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x202274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202278: 0xe4e00064  swc1        $f0, 0x64($a3)
    ctx->pc = 0x202278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 100), bits); }
    // 0x20227c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x20227cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202280: 0xe4e00068  swc1        $f0, 0x68($a3)
    ctx->pc = 0x202280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 104), bits); }
    // 0x202284: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x202284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202288: 0xe4e0006c  swc1        $f0, 0x6C($a3)
    ctx->pc = 0x202288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 108), bits); }
    // 0x20228c: 0xace6006c  sw          $a2, 0x6C($a3)
    ctx->pc = 0x20228cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 108), GPR_U32(ctx, 6));
    // 0x202290: 0x94a6000e  lhu         $a2, 0xE($a1)
    ctx->pc = 0x202290u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x202294: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x202294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x202298: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x202298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x20229c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x20229cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2022a0: 0xe4e00070  swc1        $f0, 0x70($a3)
    ctx->pc = 0x2022a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 112), bits); }
    // 0x2022a4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2022a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2022a8: 0xe4e00074  swc1        $f0, 0x74($a3)
    ctx->pc = 0x2022a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 116), bits); }
    // 0x2022ac: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2022acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2022b0: 0xe4e00078  swc1        $f0, 0x78($a3)
    ctx->pc = 0x2022b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 120), bits); }
    // 0x2022b4: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x2022b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2022b8: 0xe4e0007c  swc1        $f0, 0x7C($a3)
    ctx->pc = 0x2022b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 124), bits); }
    // 0x2022bc: 0xace6007c  sw          $a2, 0x7C($a3)
    ctx->pc = 0x2022bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 124), GPR_U32(ctx, 6));
    // 0x2022c0: 0x1020ffa4  beqz        $at, . + 4 + (-0x5C << 2)
    ctx->pc = 0x2022C0u;
    {
        const bool branch_taken_0x2022c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2022C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2022C0u;
            // 0x2022c4: 0x24e70080  addiu       $a3, $a3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2022c0) {
            ctx->pc = 0x202154u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_202154;
        }
    }
    ctx->pc = 0x2022C8u;
label_2022c8:
    // 0x2022c8: 0x5000011  bltz        $t0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2022C8u;
    {
        const bool branch_taken_0x2022c8 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x2022c8) {
            ctx->pc = 0x202310u;
            goto label_202310;
        }
    }
    ctx->pc = 0x2022D0u;
label_2022d0:
    // 0x2022d0: 0x94a60000  lhu         $a2, 0x0($a1)
    ctx->pc = 0x2022d0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2022d4: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x2022d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2022d8: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x2022d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2022dc: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x2022dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x2022e0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2022e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2022e4: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x2022e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x2022e8: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2022e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2022ec: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x2022ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x2022f0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2022f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2022f4: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x2022f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x2022f8: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x2022f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2022fc: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x2022fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x202300: 0xace6000c  sw          $a2, 0xC($a3)
    ctx->pc = 0x202300u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 6));
    // 0x202304: 0x501fff2  bgez        $t0, . + 4 + (-0xE << 2)
    ctx->pc = 0x202304u;
    {
        const bool branch_taken_0x202304 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x202308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202304u;
            // 0x202308: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202304) {
            ctx->pc = 0x2022D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2022d0;
        }
    }
    ctx->pc = 0x20230Cu;
    // 0x20230c: 0x0  nop
    ctx->pc = 0x20230cu;
    // NOP
label_202310:
    // 0x202310: 0x3e00008  jr          $ra
    ctx->pc = 0x202310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x202318u;
    // 0x202318: 0x0  nop
    ctx->pc = 0x202318u;
    // NOP
    // 0x20231c: 0x0  nop
    ctx->pc = 0x20231cu;
    // NOP
    // 0x202320: 0xc4820020  lwc1        $f2, 0x20($a0)
    ctx->pc = 0x202320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x202324: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x202324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x202328: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x202328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20232c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20232cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x202330: 0x0  nop
    ctx->pc = 0x202330u;
    // NOP
    // 0x202334: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x202334u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x202338: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x202338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x20233c: 0xc4820024  lwc1        $f2, 0x24($a0)
    ctx->pc = 0x20233cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x202340: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x202340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202344: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x202344u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x202348: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x202348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x20234c: 0xc4820028  lwc1        $f2, 0x28($a0)
    ctx->pc = 0x20234cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x202350: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x202350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202354: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x202354u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x202358: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x202358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x20235c: 0xc482002c  lwc1        $f2, 0x2C($a0)
    ctx->pc = 0x20235cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x202360: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x202360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202364: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x202364u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x202368: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x202368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x20236c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x20236cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202370: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x202370u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x202374: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x202374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x202378: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x202378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20237c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20237cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x202380: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x202380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x202384: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x202384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202388: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x202388u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20238c: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x20238cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x202390: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x202390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202394: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x202394u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x202398: 0x3e00008  jr          $ra
    ctx->pc = 0x202398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20239Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202398u;
            // 0x20239c: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2023A0u;
    // 0x2023a0: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x2023a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2023a4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2023a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2023a8: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x2023a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2023ac: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x2023acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2023b0: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x2023b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2023b4: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x2023b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x2023b8: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x2023b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2023bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2023BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2023C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2023BCu;
            // 0x2023c0: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2023C4u;
    // 0x2023c4: 0x0  nop
    ctx->pc = 0x2023c4u;
    // NOP
    // 0x2023c8: 0x0  nop
    ctx->pc = 0x2023c8u;
    // NOP
    // 0x2023cc: 0x0  nop
    ctx->pc = 0x2023ccu;
    // NOP
    // 0x2023d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2023D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2023D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2023D0u;
            // 0x2023d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2023D8u;
    // 0x2023d8: 0x0  nop
    ctx->pc = 0x2023d8u;
    // NOP
    // 0x2023dc: 0x0  nop
    ctx->pc = 0x2023dcu;
    // NOP
    // 0x2023e0: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x2023e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2023e4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2023e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2023e8: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2023e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2023ec: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x2023ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2023f0: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x2023f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2023f4: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x2023f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2023f8: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x2023f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x2023fc: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x2023fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202400: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x202400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x202404: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x202404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202408: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x202408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x20240c: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x20240cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202410: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x202410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x202414: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x202414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202418: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x202418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x20241c: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x20241cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_202420:
    // 0x202420: 0x3e00008  jr          $ra
    ctx->pc = 0x202420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202420u;
            // 0x202424: 0xe4a0001c  swc1        $f0, 0x1C($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x202428u;
    // 0x202428: 0x0  nop
    ctx->pc = 0x202428u;
    // NOP
    // 0x20242c: 0x0  nop
    ctx->pc = 0x20242cu;
    // NOP
    // 0x202430: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x202430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x202434: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x202434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x202438: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x202438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20243c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20243cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202440: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x202440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202444: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x202444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x202448: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x202448u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x20244c: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x20244cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x202450: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x202450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x202454: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x202454u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x202458: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x202458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20245c: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x20245cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x202460: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x202460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x202464: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x202464u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x202468: 0xc4ad0010  lwc1        $f13, 0x10($a1)
    ctx->pc = 0x202468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20246c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x20246cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x202470: 0xc4ac0014  lwc1        $f12, 0x14($a1)
    ctx->pc = 0x202470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x202474: 0xe7ad0010  swc1        $f13, 0x10($sp)
    ctx->pc = 0x202474u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x202478: 0xc4ab0018  lwc1        $f11, 0x18($a1)
    ctx->pc = 0x202478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x20247c: 0xe7ac0014  swc1        $f12, 0x14($sp)
    ctx->pc = 0x20247cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x202480: 0xc4aa001c  lwc1        $f10, 0x1C($a1)
    ctx->pc = 0x202480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x202484: 0xe7ab0018  swc1        $f11, 0x18($sp)
    ctx->pc = 0x202484u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x202488: 0xc4a90020  lwc1        $f9, 0x20($a1)
    ctx->pc = 0x202488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x20248c: 0xe7aa001c  swc1        $f10, 0x1C($sp)
    ctx->pc = 0x20248cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x202490: 0xc4a80024  lwc1        $f8, 0x24($a1)
    ctx->pc = 0x202490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x202494: 0xe7a90020  swc1        $f9, 0x20($sp)
    ctx->pc = 0x202494u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x202498: 0xc4a70028  lwc1        $f7, 0x28($a1)
    ctx->pc = 0x202498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x20249c: 0xe7a80024  swc1        $f8, 0x24($sp)
    ctx->pc = 0x20249cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2024a0: 0xc4a6002c  lwc1        $f6, 0x2C($a1)
    ctx->pc = 0x2024a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2024a4: 0xe7a70028  swc1        $f7, 0x28($sp)
    ctx->pc = 0x2024a4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2024a8: 0xc4a50030  lwc1        $f5, 0x30($a1)
    ctx->pc = 0x2024a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2024ac: 0xe7a6002c  swc1        $f6, 0x2C($sp)
    ctx->pc = 0x2024acu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2024b0: 0xc4a40034  lwc1        $f4, 0x34($a1)
    ctx->pc = 0x2024b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2024b4: 0xe7a50030  swc1        $f5, 0x30($sp)
    ctx->pc = 0x2024b4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2024b8: 0xc4a30038  lwc1        $f3, 0x38($a1)
    ctx->pc = 0x2024b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2024bc: 0xe7a40034  swc1        $f4, 0x34($sp)
    ctx->pc = 0x2024bcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2024c0: 0xc4a2003c  lwc1        $f2, 0x3C($a1)
    ctx->pc = 0x2024c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2024c4: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x2024c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2024c8: 0xe7a2003c  swc1        $f2, 0x3C($sp)
    ctx->pc = 0x2024c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2024cc: 0xc7ad0020  lwc1        $f13, 0x20($sp)
    ctx->pc = 0x2024ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2024d0: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x2024d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2024d4: 0xc7ab0010  lwc1        $f11, 0x10($sp)
    ctx->pc = 0x2024d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2024d8: 0xc7aa0030  lwc1        $f10, 0x30($sp)
    ctx->pc = 0x2024d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2024dc: 0xc7a90024  lwc1        $f9, 0x24($sp)
    ctx->pc = 0x2024dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2024e0: 0xc7a80004  lwc1        $f8, 0x4($sp)
    ctx->pc = 0x2024e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2024e4: 0xc7a70014  lwc1        $f7, 0x14($sp)
    ctx->pc = 0x2024e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2024e8: 0xc7a60034  lwc1        $f6, 0x34($sp)
    ctx->pc = 0x2024e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2024ec: 0xc7a50028  lwc1        $f5, 0x28($sp)
    ctx->pc = 0x2024ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2024f0: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x2024f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2024f4: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x2024f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2024f8: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x2024f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2024fc:
    // 0x2024fc: 0xc48f0004  lwc1        $f15, 0x4($a0)
    ctx->pc = 0x2024fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x202500: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x202500u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x202504: 0xc4900000  lwc1        $f16, 0x0($a0)
    ctx->pc = 0x202504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x202508: 0xc48e0008  lwc1        $f14, 0x8($a0)
    ctx->pc = 0x202508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x20250c: 0x460b781a  mula.s      $f15, $f11
    ctx->pc = 0x20250cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[15], ctx->f[11]);
    // 0x202510: 0x460c801e  madda.s     $f16, $f12
    ctx->pc = 0x202510u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[16], ctx->f[12]));
    // 0x202514: 0x460d705c  madd.s      $f1, $f14, $f13
    ctx->pc = 0x202514u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[14], ctx->f[13]));
    // 0x202518: 0x2484fff0  addiu       $a0, $a0, -0x10
    ctx->pc = 0x202518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    // 0x20251c: 0x46015040  add.s       $f1, $f10, $f1
    ctx->pc = 0x20251cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[10], ctx->f[1]);
    // 0x202520: 0x4607781a  mula.s      $f15, $f7
    ctx->pc = 0x202520u;
    ctx->f[31] = FPU_MUL_S(ctx->f[15], ctx->f[7]);
    // 0x202524: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x202524u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x202528: 0x4608801e  madda.s     $f16, $f8
    ctx->pc = 0x202528u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[16], ctx->f[8]));
    // 0x20252c: 0x4609705c  madd.s      $f1, $f14, $f9
    ctx->pc = 0x20252cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[14], ctx->f[9]));
    // 0x202530: 0x46013040  add.s       $f1, $f6, $f1
    ctx->pc = 0x202530u;
    ctx->f[1] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x202534: 0x4603781a  mula.s      $f15, $f3
    ctx->pc = 0x202534u;
    ctx->f[31] = FPU_MUL_S(ctx->f[15], ctx->f[3]);
    // 0x202538: 0x4604801e  madda.s     $f16, $f4
    ctx->pc = 0x202538u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[16], ctx->f[4]));
    // 0x20253c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x20253cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x202540: 0x4605705c  madd.s      $f1, $f14, $f5
    ctx->pc = 0x202540u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[14], ctx->f[5]));
    // 0x202544: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x202544u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x202548: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x202548u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x20254c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x20254cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x202550: 0x4e1ffea  bgez        $a3, . + 4 + (-0x16 << 2)
    ctx->pc = 0x202550u;
    {
        const bool branch_taken_0x202550 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x202554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202550u;
            // 0x202554: 0x2463fff0  addiu       $v1, $v1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202550) {
            ctx->pc = 0x2024FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2024fc;
        }
    }
    ctx->pc = 0x202558u;
    // 0x202558: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x202558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20255c: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x20255cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x202560: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x202560u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x202564: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x202564u;
    {
        const bool branch_taken_0x202564 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x202568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202564u;
            // 0x202568: 0xc7a20040  lwc1        $f2, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x202564) {
            ctx->pc = 0x202574u;
            goto label_202574;
        }
    }
    ctx->pc = 0x20256Cu;
    // 0x20256c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20256Cu;
    {
        const bool branch_taken_0x20256c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20256Cu;
            // 0x202570: 0xe4c20000  swc1        $f2, 0x0($a2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20256c) {
            ctx->pc = 0x20257Cu;
            goto label_20257c;
        }
    }
    ctx->pc = 0x202574u;
label_202574:
    // 0x202574: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x202574u;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
    // 0x202578: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x202578u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_20257c:
    // 0x20257c: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x20257cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x202580: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x202580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x202584: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x202584u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x202588: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x202588u;
    {
        const bool branch_taken_0x202588 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x202588) {
            ctx->pc = 0x20258Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x202588u;
            // 0x20258c: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x202590u;
            goto label_202590;
        }
    }
    ctx->pc = 0x202590u;
label_202590:
    // 0x202590: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x202590u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x202594: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x202594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x202598: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x202598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20259c: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x20259cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2025a0: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2025A0u;
    {
        const bool branch_taken_0x2025a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2025a0) {
            ctx->pc = 0x2025A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2025A0u;
            // 0x2025a4: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2025A8u;
            goto label_2025a8;
        }
    }
    ctx->pc = 0x2025A8u;
label_2025a8:
    // 0x2025a8: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x2025a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x2025ac: 0xc7a2005c  lwc1        $f2, 0x5C($sp)
    ctx->pc = 0x2025acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2025b0: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x2025b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2025b4: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2025b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2025b8: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2025B8u;
    {
        const bool branch_taken_0x2025b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2025b8) {
            ctx->pc = 0x2025BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2025B8u;
            // 0x2025bc: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2025C0u;
            goto label_2025c0;
        }
    }
    ctx->pc = 0x2025C0u;
label_2025c0:
    // 0x2025c0: 0xe4c1000c  swc1        $f1, 0xC($a2)
    ctx->pc = 0x2025c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x2025c4: 0xc4c40000  lwc1        $f4, 0x0($a2)
    ctx->pc = 0x2025c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2025c8: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x2025c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2025cc: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x2025ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2025d0: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x2025d0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2025d4: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x2025d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2025d8: 0xe4c40000  swc1        $f4, 0x0($a2)
    ctx->pc = 0x2025d8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2025dc: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x2025dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2025e0: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x2025e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2025e4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2025e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2025e8: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x2025e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x2025ec: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x2025ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2025f0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2025f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2025f4: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x2025f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x2025f8: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x2025f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2025fc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2025fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x202600: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x202600u;
    {
        const bool branch_taken_0x202600 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x202604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202600u;
            // 0x202604: 0xe4c1000c  swc1        $f1, 0xC($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x202600) {
            ctx->pc = 0x202610u;
            goto label_202610;
        }
    }
    ctx->pc = 0x202608u;
    // 0x202608: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x202608u;
    {
        const bool branch_taken_0x202608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20260Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202608u;
            // 0x20260c: 0xe4c20010  swc1        $f2, 0x10($a2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x202608) {
            ctx->pc = 0x202618u;
            goto label_202618;
        }
    }
    ctx->pc = 0x202610u;
label_202610:
    // 0x202610: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x202610u;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
    // 0x202614: 0xe4c20010  swc1        $f2, 0x10($a2)
    ctx->pc = 0x202614u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
label_202618:
    // 0x202618: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x202618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20261c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x20261cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x202620: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x202620u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x202624: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x202624u;
    {
        const bool branch_taken_0x202624 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x202624) {
            ctx->pc = 0x202628u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x202624u;
            // 0x202628: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20262Cu;
            goto label_20262c;
        }
    }
    ctx->pc = 0x20262Cu;
label_20262c:
    // 0x20262c: 0xe4c10014  swc1        $f1, 0x14($a2)
    ctx->pc = 0x20262cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x202630: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x202630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x202634: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x202634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x202638: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x202638u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20263c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x20263Cu;
    {
        const bool branch_taken_0x20263c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20263c) {
            ctx->pc = 0x202640u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20263Cu;
            // 0x202640: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x202644u;
            goto label_202644;
        }
    }
    ctx->pc = 0x202644u;
label_202644:
    // 0x202644: 0xe4c10018  swc1        $f1, 0x18($a2)
    ctx->pc = 0x202644u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
    // 0x202648: 0xc7a2005c  lwc1        $f2, 0x5C($sp)
    ctx->pc = 0x202648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20264c: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x20264cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x202650: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x202650u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x202654: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x202654u;
    {
        const bool branch_taken_0x202654 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x202654) {
            ctx->pc = 0x202658u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x202654u;
            // 0x202658: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20265Cu;
            goto label_20265c;
        }
    }
    ctx->pc = 0x20265Cu;
label_20265c:
    // 0x20265c: 0xe4c1001c  swc1        $f1, 0x1C($a2)
    ctx->pc = 0x20265cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
    // 0x202660: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x202660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x202664: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x202664u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x202668: 0xe4c10010  swc1        $f1, 0x10($a2)
    ctx->pc = 0x202668u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x20266c: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x20266cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x202670: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x202670u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x202674: 0xe4c10014  swc1        $f1, 0x14($a2)
    ctx->pc = 0x202674u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x202678: 0xc4c10018  lwc1        $f1, 0x18($a2)
    ctx->pc = 0x202678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20267c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x20267cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x202680: 0xe4c10018  swc1        $f1, 0x18($a2)
    ctx->pc = 0x202680u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
    // 0x202684: 0xc4c1001c  lwc1        $f1, 0x1C($a2)
    ctx->pc = 0x202684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x202688: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x202688u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20268c: 0xe4c0001c  swc1        $f0, 0x1C($a2)
    ctx->pc = 0x20268cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
    // 0x202690: 0x3e00008  jr          $ra
    ctx->pc = 0x202690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202690u;
            // 0x202694: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x202698u;
    // 0x202698: 0x0  nop
    ctx->pc = 0x202698u;
    // NOP
    // 0x20269c: 0x0  nop
    ctx->pc = 0x20269cu;
    // NOP
}
