#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002691F0
// Address: 0x2691f0 - 0x2693f0
void sub_002691F0_0x2691f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002691F0_0x2691f0");
#endif

    switch (ctx->pc) {
        case 0x269240u: goto label_269240;
        case 0x269334u: goto label_269334;
        default: break;
    }

    ctx->pc = 0x2691f0u;

label_2691f0:
    // 0x2691f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2691f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2691f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2691f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2691f8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2691f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2691fc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2691fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x269200: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x269200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x269204: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x269204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x269208: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x269208u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26920c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x26920cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x269210: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x269210u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269214: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x269214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x269218: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x269218u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26921c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26921cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x269220: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x269220u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269224: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x269224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x269228: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x269228u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26922c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26922cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x269230: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x269230u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269234: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x269234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x269238: 0x2a0f02d  daddu       $fp, $s5, $zero
    ctx->pc = 0x269238u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26923c: 0x0  nop
    ctx->pc = 0x26923cu;
    // NOP
label_269240:
    // 0x269240: 0x8fd10018  lw          $s1, 0x18($fp)
    ctx->pc = 0x269240u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x269244: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x269244u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x269248: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x269248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x26924c: 0x14600044  bnez        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x26924Cu;
    {
        const bool branch_taken_0x26924c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26924c) {
            ctx->pc = 0x269360u;
            goto label_269360;
        }
    }
    ctx->pc = 0x269254u;
    // 0x269254: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x269254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x269258: 0xc6880004  lwc1        $f8, 0x4($s4)
    ctx->pc = 0x269258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x26925c: 0xc6850000  lwc1        $f5, 0x0($s4)
    ctx->pc = 0x26925cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x269260: 0xc6060004  lwc1        $f6, 0x4($s0)
    ctx->pc = 0x269260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x269264: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x269264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x269268: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x269268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26926c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x26926cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269270: 0xc4670004  lwc1        $f7, 0x4($v1)
    ctx->pc = 0x269270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x269274: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x269274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x269278: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x269278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26927c: 0xc6c90000  lwc1        $f9, 0x0($s6)
    ctx->pc = 0x26927cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x269280: 0x460741c1  sub.s       $f7, $f8, $f7
    ctx->pc = 0x269280u;
    ctx->f[7] = FPU_SUB_S(ctx->f[8], ctx->f[7]);
    // 0x269284: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x269284u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x269288: 0x46073182  mul.s       $f6, $f6, $f7
    ctx->pc = 0x269288u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x26928c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x26928cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x269290: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x269290u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x269294: 0x46061818  adda.s      $f3, $f6
    ctx->pc = 0x269294u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x269298: 0x4601005c  madd.s      $f1, $f0, $f1
    ctx->pc = 0x269298u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
    // 0x26929c: 0x46090836  c.le.s      $f1, $f9
    ctx->pc = 0x26929cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2692a0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2692A0u;
    {
        const bool branch_taken_0x2692a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2692A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2692A0u;
            // 0x2692a4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2692a0) {
            ctx->pc = 0x2692C0u;
            goto label_2692c0;
        }
    }
    ctx->pc = 0x2692A8u;
    // 0x2692a8: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x2692a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2692ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2692acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2692b0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x2692B0u;
    {
        const bool branch_taken_0x2692b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2692b0) {
            ctx->pc = 0x2692F0u;
            goto label_2692f0;
        }
    }
    ctx->pc = 0x2692B8u;
    // 0x2692b8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2692B8u;
    {
        const bool branch_taken_0x2692b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2692BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2692B8u;
            // 0x2692bc: 0xe6c10004  swc1        $f1, 0x4($s6) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2692b8) {
            ctx->pc = 0x2692F0u;
            goto label_2692f0;
        }
    }
    ctx->pc = 0x2692C0u;
label_2692c0:
    // 0x2692c0: 0x3c0333d6  lui         $v1, 0x33D6
    ctx->pc = 0x2692c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13270 << 16));
    // 0x2692c4: 0x3463bf95  ori         $v1, $v1, 0xBF95
    ctx->pc = 0x2692c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49045);
    // 0x2692c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2692c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2692cc: 0x0  nop
    ctx->pc = 0x2692ccu;
    // NOP
    // 0x2692d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2692d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2692d4: 0x46090036  c.le.s      $f0, $f9
    ctx->pc = 0x2692d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2692d8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2692D8u;
    {
        const bool branch_taken_0x2692d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2692d8) {
            ctx->pc = 0x2692E8u;
            goto label_2692e8;
        }
    }
    ctx->pc = 0x2692E0u;
    // 0x2692e0: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x2692e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x2692e4: 0x0  nop
    ctx->pc = 0x2692e4u;
    // NOP
label_2692e8:
    // 0x2692e8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2692e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2692ec: 0x0  nop
    ctx->pc = 0x2692ecu;
    // NOP
label_2692f0:
    // 0x2692f0: 0xc6c10000  lwc1        $f1, 0x0($s6)
    ctx->pc = 0x2692f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2692f4: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x2692f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2692f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2692f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2692fc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2692FCu;
    {
        const bool branch_taken_0x2692fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2692fc) {
            ctx->pc = 0x269308u;
            goto label_269308;
        }
    }
    ctx->pc = 0x269304u;
    // 0x269304: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x269304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_269308:
    // 0x269308: 0xae040044  sw          $a0, 0x44($s0)
    ctx->pc = 0x269308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 4));
    // 0x26930c: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x26930cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x269310: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x269310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x269314: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x269314u;
    {
        const bool branch_taken_0x269314 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x269314) {
            ctx->pc = 0x269348u;
            goto label_269348;
        }
    }
    ctx->pc = 0x26931Cu;
    // 0x26931c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26931cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269320: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x269320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269324: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x269324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269328: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x269328u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26932c: 0xc09a47c  jal         func_2691F0
    ctx->pc = 0x26932Cu;
    SET_GPR_U32(ctx, 31, 0x269334u);
    ctx->pc = 0x269330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26932Cu;
            // 0x269330: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2691F0u;
    goto label_2691f0;
    ctx->pc = 0x269334u;
label_269334:
    // 0x269334: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x269334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x269338: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x269338u;
    {
        const bool branch_taken_0x269338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x269338) {
            ctx->pc = 0x269360u;
            goto label_269360;
        }
    }
    ctx->pc = 0x269340u;
    // 0x269340: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x269340u;
    {
        const bool branch_taken_0x269340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269340) {
            ctx->pc = 0x269398u;
            goto label_269398;
        }
    }
    ctx->pc = 0x269348u;
label_269348:
    // 0x269348: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x269348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26934c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26934Cu;
    {
        const bool branch_taken_0x26934c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x26934c) {
            ctx->pc = 0x269360u;
            goto label_269360;
        }
    }
    ctx->pc = 0x269354u;
    // 0x269354: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x269354u;
    {
        const bool branch_taken_0x269354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269354u;
            // 0x269358: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269354) {
            ctx->pc = 0x269398u;
            goto label_269398;
        }
    }
    ctx->pc = 0x26935Cu;
    // 0x26935c: 0x0  nop
    ctx->pc = 0x26935cu;
    // NOP
label_269360:
    // 0x269360: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x269360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x269364: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x269364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x269368: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x269368u;
    {
        const bool branch_taken_0x269368 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x269368) {
            ctx->pc = 0x269388u;
            goto label_269388;
        }
    }
    ctx->pc = 0x269370u;
    // 0x269370: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x269370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x269374: 0xac710030  sw          $s1, 0x30($v1)
    ctx->pc = 0x269374u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 17));
    // 0x269378: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x269378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x26937c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26937cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x269380: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x269380u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x269384: 0xaef10000  sw          $s1, 0x0($s7)
    ctx->pc = 0x269384u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 17));
label_269388:
    // 0x269388: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x269388u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x26938c: 0x2a430003  slti        $v1, $s2, 0x3
    ctx->pc = 0x26938cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x269390: 0x1460ffab  bnez        $v1, . + 4 + (-0x55 << 2)
    ctx->pc = 0x269390u;
    {
        const bool branch_taken_0x269390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x269394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269390u;
            // 0x269394: 0x27de0010  addiu       $fp, $fp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269390) {
            ctx->pc = 0x269240u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_269240;
        }
    }
    ctx->pc = 0x269398u;
label_269398:
    // 0x269398: 0x3c037f7f  lui         $v1, 0x7F7F
    ctx->pc = 0x269398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32639 << 16));
    // 0x26939c: 0x3463ffee  ori         $v1, $v1, 0xFFEE
    ctx->pc = 0x26939cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65518);
    // 0x2693a0: 0xaea30040  sw          $v1, 0x40($s5)
    ctx->pc = 0x2693a0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 64), GPR_U32(ctx, 3));
    // 0x2693a4: 0x8ec3000c  lw          $v1, 0xC($s6)
    ctx->pc = 0x2693a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x2693a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2693a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2693ac: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x2693acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x2693b0: 0xac750de0  sw          $s5, 0xDE0($v1)
    ctx->pc = 0x2693b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3552), GPR_U32(ctx, 21));
    // 0x2693b4: 0x8ec3000c  lw          $v1, 0xC($s6)
    ctx->pc = 0x2693b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x2693b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2693b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2693bc: 0xaec3000c  sw          $v1, 0xC($s6)
    ctx->pc = 0x2693bcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 3));
    // 0x2693c0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2693c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2693c4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2693c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2693c8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2693c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2693cc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2693ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2693d0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2693d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2693d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2693d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2693d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2693d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2693dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2693dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2693e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2693e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2693e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2693e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2693e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2693E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2693ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2693E8u;
            // 0x2693ec: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2693F0u;
}
