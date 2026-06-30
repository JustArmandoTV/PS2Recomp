#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002276D0
// Address: 0x2276d0 - 0x228b30
void sub_002276D0_0x2276d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002276D0_0x2276d0");
#endif

    switch (ctx->pc) {
        case 0x227724u: goto label_227724;
        case 0x227880u: goto label_227880;
        case 0x2278e8u: goto label_2278e8;
        case 0x227e88u: goto label_227e88;
        case 0x227f30u: goto label_227f30;
        case 0x227f80u: goto label_227f80;
        case 0x228798u: goto label_228798;
        case 0x228ab0u: goto label_228ab0;
        default: break;
    }

    ctx->pc = 0x2276d0u;

    // 0x2276d0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2276d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x2276d4: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2276d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x2276d8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2276d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2276dc: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2276dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x2276e0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2276e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2276e4: 0x345effff  ori         $fp, $v0, 0xFFFF
    ctx->pc = 0x2276e4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2276e8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2276e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2276ec: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x2276ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2276f0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2276f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2276f4: 0x2516ffff  addiu       $s6, $t0, -0x1
    ctx->pc = 0x2276f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2276f8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2276f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2276fc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2276fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x227700: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x227700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x227704: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x227704u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227708: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x227708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x22770c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x22770cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227710: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x227710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x227714: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x227714u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227718: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x227718u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x22771c: 0x6c004f6  bltz        $s6, . + 4 + (0x4F6 << 2)
    ctx->pc = 0x22771Cu;
    {
        const bool branch_taken_0x22771c = (GPR_S32(ctx, 22) < 0);
        ctx->pc = 0x227720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22771Cu;
            // 0x227720: 0xafa900bc  sw          $t1, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22771c) {
            ctx->pc = 0x228AF8u;
            goto label_228af8;
        }
    }
    ctx->pc = 0x227724u;
label_227724:
    // 0x227724: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x227724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x227728: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x227728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x22772c: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x22772cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x227730: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x227730u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x227734: 0x92040008  lbu         $a0, 0x8($s0)
    ctx->pc = 0x227734u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x227738: 0x108302b1  beq         $a0, $v1, . + 4 + (0x2B1 << 2)
    ctx->pc = 0x227738u;
    {
        const bool branch_taken_0x227738 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x227738) {
            ctx->pc = 0x228200u;
            goto label_228200;
        }
    }
    ctx->pc = 0x227740u;
    // 0x227740: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x227740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x227744: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x227744u;
    {
        const bool branch_taken_0x227744 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x227744) {
            ctx->pc = 0x227760u;
            goto label_227760;
        }
    }
    ctx->pc = 0x22774Cu;
    // 0x22774c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x22774cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x227750: 0x108204e5  beq         $a0, $v0, . + 4 + (0x4E5 << 2)
    ctx->pc = 0x227750u;
    {
        const bool branch_taken_0x227750 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x227750) {
            ctx->pc = 0x228AE8u;
            goto label_228ae8;
        }
    }
    ctx->pc = 0x227758u;
    // 0x227758: 0x10000263  b           . + 4 + (0x263 << 2)
    ctx->pc = 0x227758u;
    {
        const bool branch_taken_0x227758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x227758) {
            ctx->pc = 0x2280E8u;
            goto label_2280e8;
        }
    }
    ctx->pc = 0x227760u;
label_227760:
    // 0x227760: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x227760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x227764: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x227764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227768: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x227768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22776c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x22776cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x227770: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x227770u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x227774: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x227774u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x227778: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x227778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x22777c: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x22777cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227780: 0xc60000e4  lwc1        $f0, 0xE4($s0)
    ctx->pc = 0x227780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227784: 0x46141818  adda.s      $f3, $f20
    ctx->pc = 0x227784u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[20]);
    // 0x227788: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x227788u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22778c: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x22778cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
    // 0x227790: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x227790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227794: 0xc60000e8  lwc1        $f0, 0xE8($s0)
    ctx->pc = 0x227794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227798: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x227798u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22779c: 0xe60000e8  swc1        $f0, 0xE8($s0)
    ctx->pc = 0x22779cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
    // 0x2277a0: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x2277a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2277a4: 0xc60000ec  lwc1        $f0, 0xEC($s0)
    ctx->pc = 0x2277a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2277a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2277a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2277ac: 0xe60000ec  swc1        $f0, 0xEC($s0)
    ctx->pc = 0x2277acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
    // 0x2277b0: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x2277b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2277b4: 0xc60000bc  lwc1        $f0, 0xBC($s0)
    ctx->pc = 0x2277b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2277b8: 0x4600201d  msub.s      $f0, $f4, $f0
    ctx->pc = 0x2277b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
    // 0x2277bc: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x2277bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2277c0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2277C0u;
    {
        const bool branch_taken_0x2277c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2277c0) {
            ctx->pc = 0x2277D0u;
            goto label_2277d0;
        }
    }
    ctx->pc = 0x2277C8u;
    // 0x2277c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2277C8u;
    {
        const bool branch_taken_0x2277c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2277c8) {
            ctx->pc = 0x2277D8u;
            goto label_2277d8;
        }
    }
    ctx->pc = 0x2277D0u;
label_2277d0:
    // 0x2277d0: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x2277d0u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x2277d4: 0x0  nop
    ctx->pc = 0x2277d4u;
    // NOP
label_2277d8:
    // 0x2277d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2277d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2277dc: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x2277dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2277e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2277e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2277e4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2277e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2277e8: 0x0  nop
    ctx->pc = 0x2277e8u;
    // NOP
    // 0x2277ec: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x2277ecu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2277f0: 0x46030802  mul.s       $f0, $f1, $f3
    ctx->pc = 0x2277f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2277f4: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x2277f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x2277f8: 0xc60000e4  lwc1        $f0, 0xE4($s0)
    ctx->pc = 0x2277f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2277fc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2277fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x227800: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x227800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
    // 0x227804: 0xc60000e8  lwc1        $f0, 0xE8($s0)
    ctx->pc = 0x227804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227808: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x227808u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x22780c: 0xe60000e8  swc1        $f0, 0xE8($s0)
    ctx->pc = 0x22780cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
    // 0x227810: 0xc60000ec  lwc1        $f0, 0xEC($s0)
    ctx->pc = 0x227810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227814: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x227814u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x227818: 0xe60000ec  swc1        $f0, 0xEC($s0)
    ctx->pc = 0x227818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
    // 0x22781c: 0xc60000c0  lwc1        $f0, 0xC0($s0)
    ctx->pc = 0x22781cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227820: 0x4600201d  msub.s      $f0, $f4, $f0
    ctx->pc = 0x227820u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
    // 0x227824: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x227824u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227828: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x227828u;
    {
        const bool branch_taken_0x227828 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x227828) {
            ctx->pc = 0x227838u;
            goto label_227838;
        }
    }
    ctx->pc = 0x227830u;
    // 0x227830: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x227830u;
    {
        const bool branch_taken_0x227830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x227830) {
            ctx->pc = 0x227840u;
            goto label_227840;
        }
    }
    ctx->pc = 0x227838u;
label_227838:
    // 0x227838: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x227838u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x22783c: 0x0  nop
    ctx->pc = 0x22783cu;
    // NOP
label_227840:
    // 0x227840: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x227840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x227844: 0xc60000f0  lwc1        $f0, 0xF0($s0)
    ctx->pc = 0x227844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227848: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x227848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x22784c: 0x260600f0  addiu       $a2, $s0, 0xF0
    ctx->pc = 0x22784cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x227850: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x227850u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x227854: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x227854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    // 0x227858: 0xc60000f4  lwc1        $f0, 0xF4($s0)
    ctx->pc = 0x227858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22785c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x22785cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x227860: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x227860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x227864: 0xc60000f8  lwc1        $f0, 0xF8($s0)
    ctx->pc = 0x227864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227868: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x227868u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x22786c: 0xe60000f8  swc1        $f0, 0xF8($s0)
    ctx->pc = 0x22786cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
    // 0x227870: 0xc60000fc  lwc1        $f0, 0xFC($s0)
    ctx->pc = 0x227870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227874: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x227874u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x227878: 0xc0a4644  jal         func_291910
    ctx->pc = 0x227878u;
    SET_GPR_U32(ctx, 31, 0x227880u);
    ctx->pc = 0x22787Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227878u;
            // 0x22787c: 0xe60000fc  swc1        $f0, 0xFC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x291910u;
    if (runtime->hasFunction(0x291910u)) {
        auto targetFn = runtime->lookupFunction(0x291910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227880u; }
        if (ctx->pc != 0x227880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291910_0x291910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227880u; }
        if (ctx->pc != 0x227880u) { return; }
    }
    ctx->pc = 0x227880u;
label_227880:
    // 0x227880: 0xc60400dc  lwc1        $f4, 0xDC($s0)
    ctx->pc = 0x227880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x227884: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x227884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x227888: 0x44823800  mtc1        $v0, $f7
    ctx->pc = 0x227888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x22788c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x22788cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x227890: 0xc60600d4  lwc1        $f6, 0xD4($s0)
    ctx->pc = 0x227890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x227894: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x227894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x227898: 0x46043903  div.s       $f4, $f7, $f4
    ctx->pc = 0x227898u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[7] * 0.0f); } else ctx->f[4] = ctx->f[7] / ctx->f[4];
    // 0x22789c: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x22789cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2278a0: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x2278a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2278a4: 0xc60500d8  lwc1        $f5, 0xD8($s0)
    ctx->pc = 0x2278a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2278a8: 0x46063983  div.s       $f6, $f7, $f6
    ctx->pc = 0x2278a8u;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[7] * 0.0f); } else ctx->f[6] = ctx->f[7] / ctx->f[6];
    // 0x2278ac: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2278acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2278b0: 0xc60400d0  lwc1        $f4, 0xD0($s0)
    ctx->pc = 0x2278b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2278b4: 0xc7a200f4  lwc1        $f2, 0xF4($sp)
    ctx->pc = 0x2278b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2278b8: 0x46053943  div.s       $f5, $f7, $f5
    ctx->pc = 0x2278b8u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[7] * 0.0f); } else ctx->f[5] = ctx->f[7] / ctx->f[5];
    // 0x2278bc: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x2278bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2278c0: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x2278c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x2278c4: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x2278c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2278c8: 0x46043903  div.s       $f4, $f7, $f4
    ctx->pc = 0x2278c8u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[7] * 0.0f); } else ctx->f[4] = ctx->f[7] / ctx->f[4];
    // 0x2278cc: 0xc7a300f0  lwc1        $f3, 0xF0($sp)
    ctx->pc = 0x2278ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2278d0: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x2278d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x2278d4: 0xe7a200f4  swc1        $f2, 0xF4($sp)
    ctx->pc = 0x2278d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x2278d8: 0x46041802  mul.s       $f0, $f3, $f4
    ctx->pc = 0x2278d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2278dc: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x2278dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2278e0: 0xc0a4628  jal         func_2918A0
    ctx->pc = 0x2278E0u;
    SET_GPR_U32(ctx, 31, 0x2278E8u);
    ctx->pc = 0x2278E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2278E0u;
            // 0x2278e4: 0xe7a000f0  swc1        $f0, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2918A0u;
    if (runtime->hasFunction(0x2918A0u)) {
        auto targetFn = runtime->lookupFunction(0x2918A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2278E8u; }
        if (ctx->pc != 0x2278E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002918A0_0x2918a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2278E8u; }
        if (ctx->pc != 0x2278E8u) { return; }
    }
    ctx->pc = 0x2278E8u;
label_2278e8:
    // 0x2278e8: 0xc60200e0  lwc1        $f2, 0xE0($s0)
    ctx->pc = 0x2278e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2278ec: 0x46001445  abs.s       $f17, $f2
    ctx->pc = 0x2278ecu;
    ctx->f[17] = FPU_ABS_S(ctx->f[2]);
    // 0x2278f0: 0xc60300e4  lwc1        $f3, 0xE4($s0)
    ctx->pc = 0x2278f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2278f4: 0x46001c05  abs.s       $f16, $f3
    ctx->pc = 0x2278f4u;
    ctx->f[16] = FPU_ABS_S(ctx->f[3]);
    // 0x2278f8: 0xc60100e8  lwc1        $f1, 0xE8($s0)
    ctx->pc = 0x2278f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2278fc: 0x46000bc5  abs.s       $f15, $f1
    ctx->pc = 0x2278fcu;
    ctx->f[15] = FPU_ABS_S(ctx->f[1]);
    // 0x227900: 0xc60000ec  lwc1        $f0, 0xEC($s0)
    ctx->pc = 0x227900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227904: 0x46000385  abs.s       $f14, $f0
    ctx->pc = 0x227904u;
    ctx->f[14] = FPU_ABS_S(ctx->f[0]);
    // 0x227908: 0xc60600f0  lwc1        $f6, 0xF0($s0)
    ctx->pc = 0x227908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x22790c: 0x46003345  abs.s       $f13, $f6
    ctx->pc = 0x22790cu;
    ctx->f[13] = FPU_ABS_S(ctx->f[6]);
    // 0x227910: 0xc60700f4  lwc1        $f7, 0xF4($s0)
    ctx->pc = 0x227910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x227914: 0x46003a45  abs.s       $f9, $f7
    ctx->pc = 0x227914u;
    ctx->f[9] = FPU_ABS_S(ctx->f[7]);
    // 0x227918: 0xc60500f8  lwc1        $f5, 0xF8($s0)
    ctx->pc = 0x227918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x22791c: 0x46002a05  abs.s       $f8, $f5
    ctx->pc = 0x22791cu;
    ctx->f[8] = FPU_ABS_S(ctx->f[5]);
    // 0x227920: 0xc60400fc  lwc1        $f4, 0xFC($s0)
    ctx->pc = 0x227920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x227924: 0x46002305  abs.s       $f12, $f4
    ctx->pc = 0x227924u;
    ctx->f[12] = FPU_ABS_S(ctx->f[4]);
    // 0x227928: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x227928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x22792c: 0x2463d1f0  addiu       $v1, $v1, -0x2E10
    ctx->pc = 0x22792cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955504));
    // 0x227930: 0xc46b0004  lwc1        $f11, 0x4($v1)
    ctx->pc = 0x227930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x227934: 0x460b4834  c.lt.s      $f9, $f11
    ctx->pc = 0x227934u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227938: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x227938u;
    {
        const bool branch_taken_0x227938 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x227938) {
            ctx->pc = 0x22793Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x227938u;
            // 0x22793c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x227944u;
            goto label_227944;
        }
    }
    ctx->pc = 0x227940u;
    // 0x227940: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x227940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_227944:
    // 0x227944: 0xc46a0000  lwc1        $f10, 0x0($v1)
    ctx->pc = 0x227944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x227948: 0x460a6834  c.lt.s      $f13, $f10
    ctx->pc = 0x227948u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22794c: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x22794Cu;
    {
        const bool branch_taken_0x22794c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22794c) {
            ctx->pc = 0x227950u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22794Cu;
            // 0x227950: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x227958u;
            goto label_227958;
        }
    }
    ctx->pc = 0x227954u;
    // 0x227954: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x227954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_227958:
    // 0x227958: 0xc4690008  lwc1        $f9, 0x8($v1)
    ctx->pc = 0x227958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x22795c: 0x46094034  c.lt.s      $f8, $f9
    ctx->pc = 0x22795cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227960: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x227960u;
    {
        const bool branch_taken_0x227960 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x227960) {
            ctx->pc = 0x227964u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x227960u;
            // 0x227964: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22796Cu;
            goto label_22796c;
        }
    }
    ctx->pc = 0x227968u;
    // 0x227968: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x227968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22796c:
    // 0x22796c: 0xc468000c  lwc1        $f8, 0xC($v1)
    ctx->pc = 0x22796cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x227970: 0x46086034  c.lt.s      $f12, $f8
    ctx->pc = 0x227970u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227974: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x227974u;
    {
        const bool branch_taken_0x227974 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x227978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227974u;
            // 0x227978: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227974) {
            ctx->pc = 0x227980u;
            goto label_227980;
        }
    }
    ctx->pc = 0x22797Cu;
    // 0x22797c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x22797cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227980:
    // 0x227980: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x227980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x227984: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x227984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x227988: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x227988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x22798c: 0x460b8034  c.lt.s      $f16, $f11
    ctx->pc = 0x22798cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[16], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227990: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x227990u;
    {
        const bool branch_taken_0x227990 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x227994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227990u;
            // 0x227994: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227990) {
            ctx->pc = 0x2279A0u;
            goto label_2279a0;
        }
    }
    ctx->pc = 0x227998u;
    // 0x227998: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x227998u;
    {
        const bool branch_taken_0x227998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22799Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227998u;
            // 0x22799c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227998) {
            ctx->pc = 0x2279A4u;
            goto label_2279a4;
        }
    }
    ctx->pc = 0x2279A0u;
label_2279a0:
    // 0x2279a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2279a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2279a4:
    // 0x2279a4: 0x460a8834  c.lt.s      $f17, $f10
    ctx->pc = 0x2279a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[17], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2279a8: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x2279A8u;
    {
        const bool branch_taken_0x2279a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2279a8) {
            ctx->pc = 0x2279ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2279A8u;
            // 0x2279ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2279B4u;
            goto label_2279b4;
        }
    }
    ctx->pc = 0x2279B0u;
    // 0x2279b0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2279b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2279b4:
    // 0x2279b4: 0x46097834  c.lt.s      $f15, $f9
    ctx->pc = 0x2279b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[15], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2279b8: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x2279B8u;
    {
        const bool branch_taken_0x2279b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2279b8) {
            ctx->pc = 0x2279BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2279B8u;
            // 0x2279bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2279C4u;
            goto label_2279c4;
        }
    }
    ctx->pc = 0x2279C0u;
    // 0x2279c0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2279c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2279c4:
    // 0x2279c4: 0x46087034  c.lt.s      $f14, $f8
    ctx->pc = 0x2279c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2279c8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2279C8u;
    {
        const bool branch_taken_0x2279c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2279CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2279C8u;
            // 0x2279cc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2279c8) {
            ctx->pc = 0x2279D4u;
            goto label_2279d4;
        }
    }
    ctx->pc = 0x2279D0u;
    // 0x2279d0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2279d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2279d4:
    // 0x2279d4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2279d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2279d8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2279d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2279dc: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x2279dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2279e0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2279e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2279e4: 0x46073832  c.eq.s      $f7, $f7
    ctx->pc = 0x2279e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[7], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2279e8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2279E8u;
    {
        const bool branch_taken_0x2279e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2279ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2279E8u;
            // 0x2279ec: 0x461024  and         $v0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2279e8) {
            ctx->pc = 0x2279F8u;
            goto label_2279f8;
        }
    }
    ctx->pc = 0x2279F0u;
    // 0x2279f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2279F0u;
    {
        const bool branch_taken_0x2279f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2279F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2279F0u;
            // 0x2279f4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2279f0) {
            ctx->pc = 0x2279FCu;
            goto label_2279fc;
        }
    }
    ctx->pc = 0x2279F8u;
label_2279f8:
    // 0x2279f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2279f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2279fc:
    // 0x2279fc: 0x46063032  c.eq.s      $f6, $f6
    ctx->pc = 0x2279fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[6], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227a00: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x227A00u;
    {
        const bool branch_taken_0x227a00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x227a00) {
            ctx->pc = 0x227A04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x227A00u;
            // 0x227a04: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x227A0Cu;
            goto label_227a0c;
        }
    }
    ctx->pc = 0x227A08u;
    // 0x227a08: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x227a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_227a0c:
    // 0x227a0c: 0x46052832  c.eq.s      $f5, $f5
    ctx->pc = 0x227a0cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227a10: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x227A10u;
    {
        const bool branch_taken_0x227a10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x227a10) {
            ctx->pc = 0x227A14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x227A10u;
            // 0x227a14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x227A1Cu;
            goto label_227a1c;
        }
    }
    ctx->pc = 0x227A18u;
    // 0x227a18: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x227a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_227a1c:
    // 0x227a1c: 0x46042032  c.eq.s      $f4, $f4
    ctx->pc = 0x227a1cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227a20: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x227A20u;
    {
        const bool branch_taken_0x227a20 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x227A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227A20u;
            // 0x227a24: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227a20) {
            ctx->pc = 0x227A2Cu;
            goto label_227a2c;
        }
    }
    ctx->pc = 0x227A28u;
    // 0x227a28: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x227a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227a2c:
    // 0x227a2c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x227a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x227a30: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x227a30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x227a34: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x227a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x227a38: 0x46031832  c.eq.s      $f3, $f3
    ctx->pc = 0x227a38u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227a3c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x227A3Cu;
    {
        const bool branch_taken_0x227a3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x227A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227A3Cu;
            // 0x227a40: 0x833825  or          $a3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227a3c) {
            ctx->pc = 0x227A4Cu;
            goto label_227a4c;
        }
    }
    ctx->pc = 0x227A44u;
    // 0x227a44: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x227A44u;
    {
        const bool branch_taken_0x227a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227A44u;
            // 0x227a48: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227a44) {
            ctx->pc = 0x227A50u;
            goto label_227a50;
        }
    }
    ctx->pc = 0x227A4Cu;
label_227a4c:
    // 0x227a4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x227a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227a50:
    // 0x227a50: 0x46021032  c.eq.s      $f2, $f2
    ctx->pc = 0x227a50u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227a54: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x227A54u;
    {
        const bool branch_taken_0x227a54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x227a54) {
            ctx->pc = 0x227A58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x227A54u;
            // 0x227a58: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x227A60u;
            goto label_227a60;
        }
    }
    ctx->pc = 0x227A5Cu;
    // 0x227a5c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x227a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_227a60:
    // 0x227a60: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x227a60u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227a64: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x227A64u;
    {
        const bool branch_taken_0x227a64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x227a64) {
            ctx->pc = 0x227A68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x227A64u;
            // 0x227a68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x227A70u;
            goto label_227a70;
        }
    }
    ctx->pc = 0x227A6Cu;
    // 0x227a6c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x227a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_227a70:
    // 0x227a70: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x227a70u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227a74: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x227A74u;
    {
        const bool branch_taken_0x227a74 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x227A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227A74u;
            // 0x227a78: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227a74) {
            ctx->pc = 0x227A80u;
            goto label_227a80;
        }
    }
    ctx->pc = 0x227A7Cu;
    // 0x227a7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x227a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227a80:
    // 0x227a80: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x227a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x227a84: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x227a84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x227a88: 0xc32025  or          $a0, $a2, $v1
    ctx->pc = 0x227a88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x227a8c: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x227a8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x227a90: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x227a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x227a94: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x227a94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x227a98: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x227a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x227a9c: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x227a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x227aa0: 0x10430013  beq         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x227AA0u;
    {
        const bool branch_taken_0x227aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x227aa0) {
            ctx->pc = 0x227AF0u;
            goto label_227af0;
        }
    }
    ctx->pc = 0x227AA8u;
    // 0x227aa8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x227aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x227aac: 0x2442d6e0  addiu       $v0, $v0, -0x2920
    ctx->pc = 0x227aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956768));
    // 0x227ab0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x227ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227ab4: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x227ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x227ab8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x227ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227abc: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x227abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
    // 0x227ac0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x227ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227ac4: 0xe60000e8  swc1        $f0, 0xE8($s0)
    ctx->pc = 0x227ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
    // 0x227ac8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x227ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227acc: 0xe60000ec  swc1        $f0, 0xEC($s0)
    ctx->pc = 0x227accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
    // 0x227ad0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x227ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227ad4: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x227ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    // 0x227ad8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x227ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227adc: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x227adcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x227ae0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x227ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227ae4: 0xe60000f8  swc1        $f0, 0xF8($s0)
    ctx->pc = 0x227ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
    // 0x227ae8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x227ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227aec: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x227aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
label_227af0:
    // 0x227af0: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x227af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227af4: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x227af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x227af8: 0xc6000064  lwc1        $f0, 0x64($s0)
    ctx->pc = 0x227af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227afc: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x227afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x227b00: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x227b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227b04: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x227b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x227b08: 0xc600006c  lwc1        $f0, 0x6C($s0)
    ctx->pc = 0x227b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227b0c: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x227b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x227b10: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x227b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227b14: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x227b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x227b18: 0xc60200e4  lwc1        $f2, 0xE4($s0)
    ctx->pc = 0x227b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x227b1c: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x227b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227b20: 0xc60000e8  lwc1        $f0, 0xE8($s0)
    ctx->pc = 0x227b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227b24: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x227b24u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x227b28: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x227b28u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x227b2c: 0xc60100b4  lwc1        $f1, 0xB4($s0)
    ctx->pc = 0x227b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227b30: 0x4600009c  madd.s      $f2, $f0, $f0
    ctx->pc = 0x227b30u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x227b34: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x227b34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x227b38: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x227b38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227b3c: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x227B3Cu;
    {
        const bool branch_taken_0x227b3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x227b3c) {
            ctx->pc = 0x227B88u;
            goto label_227b88;
        }
    }
    ctx->pc = 0x227B44u;
    // 0x227b44: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x227b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x227b48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x227b48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227b4c: 0x0  nop
    ctx->pc = 0x227b4cu;
    // NOP
    // 0x227b50: 0x46020016  rsqrt.s     $f0, $f0, $f2
    ctx->pc = 0x227b50u;
    ctx->f[0] = 1.0f / sqrtf(ctx->f[0]);
    // 0x227b54: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x227b54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x227b58: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x227b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227b5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x227b5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x227b60: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x227b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x227b64: 0xc60000e4  lwc1        $f0, 0xE4($s0)
    ctx->pc = 0x227b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227b68: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x227b68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x227b6c: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x227b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
    // 0x227b70: 0xc60000e8  lwc1        $f0, 0xE8($s0)
    ctx->pc = 0x227b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227b74: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x227b74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x227b78: 0xe60000e8  swc1        $f0, 0xE8($s0)
    ctx->pc = 0x227b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
    // 0x227b7c: 0xc60000ec  lwc1        $f0, 0xEC($s0)
    ctx->pc = 0x227b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227b80: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x227b80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x227b84: 0xe60000ec  swc1        $f0, 0xEC($s0)
    ctx->pc = 0x227b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
label_227b88:
    // 0x227b88: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x227b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x227b8c: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x227b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227b90: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x227b90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x227b94: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x227b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x227b98: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x227b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227b9c: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x227b9cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x227ba0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x227ba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x227ba4: 0x4601201c  madd.s      $f0, $f4, $f1
    ctx->pc = 0x227ba4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
    // 0x227ba8: 0x3c023ecf  lui         $v0, 0x3ECF
    ctx->pc = 0x227ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16079 << 16));
    // 0x227bac: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x227bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x227bb0: 0x3443817a  ori         $v1, $v0, 0x817A
    ctx->pc = 0x227bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33146);
    // 0x227bb4: 0xc6000064  lwc1        $f0, 0x64($s0)
    ctx->pc = 0x227bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227bb8: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x227bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x227bbc: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x227bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227bc0: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x227bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x227bc4: 0x44835000  mtc1        $v1, $f10
    ctx->pc = 0x227bc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x227bc8: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x227bc8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x227bcc: 0x4601201c  madd.s      $f0, $f4, $f1
    ctx->pc = 0x227bccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
    // 0x227bd0: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x227bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x227bd4: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x227bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227bd8: 0xc60100e8  lwc1        $f1, 0xE8($s0)
    ctx->pc = 0x227bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227bdc: 0x44824000  mtc1        $v0, $f8
    ctx->pc = 0x227bdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x227be0: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x227be0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x227be4: 0x4601201c  madd.s      $f0, $f4, $f1
    ctx->pc = 0x227be4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
    // 0x227be8: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x227be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x227bec: 0xc600006c  lwc1        $f0, 0x6C($s0)
    ctx->pc = 0x227becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227bf0: 0xc60100ec  lwc1        $f1, 0xEC($s0)
    ctx->pc = 0x227bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227bf4: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x227bf4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x227bf8: 0x4601201c  madd.s      $f0, $f4, $f1
    ctx->pc = 0x227bf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
    // 0x227bfc: 0xe600006c  swc1        $f0, 0x6C($s0)
    ctx->pc = 0x227bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
    // 0x227c00: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x227c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227c04: 0xe600006c  swc1        $f0, 0x6C($s0)
    ctx->pc = 0x227c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
    // 0x227c08: 0xc6030080  lwc1        $f3, 0x80($s0)
    ctx->pc = 0x227c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x227c0c: 0xc6040084  lwc1        $f4, 0x84($s0)
    ctx->pc = 0x227c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x227c10: 0xc6050088  lwc1        $f5, 0x88($s0)
    ctx->pc = 0x227c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x227c14: 0xc606008c  lwc1        $f6, 0x8C($s0)
    ctx->pc = 0x227c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x227c18: 0xe6030070  swc1        $f3, 0x70($s0)
    ctx->pc = 0x227c18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x227c1c: 0xe6040074  swc1        $f4, 0x74($s0)
    ctx->pc = 0x227c1cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x227c20: 0xe6050078  swc1        $f5, 0x78($s0)
    ctx->pc = 0x227c20u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x227c24: 0xe606007c  swc1        $f6, 0x7C($s0)
    ctx->pc = 0x227c24u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x227c28: 0xc64b0008  lwc1        $f11, 0x8($s2)
    ctx->pc = 0x227c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x227c2c: 0xc60000f0  lwc1        $f0, 0xF0($s0)
    ctx->pc = 0x227c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227c30: 0xc60100f4  lwc1        $f1, 0xF4($s0)
    ctx->pc = 0x227c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227c34: 0x460b1242  mul.s       $f9, $f2, $f11
    ctx->pc = 0x227c34u;
    ctx->f[9] = FPU_MUL_S(ctx->f[2], ctx->f[11]);
    // 0x227c38: 0xc60200f8  lwc1        $f2, 0xF8($s0)
    ctx->pc = 0x227c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x227c3c: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x227c3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x227c40: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x227c40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x227c44: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x227c44u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x227c48: 0x46024882  mul.s       $f2, $f9, $f2
    ctx->pc = 0x227c48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x227c4c: 0xc60700b8  lwc1        $f7, 0xB8($s0)
    ctx->pc = 0x227c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x227c50: 0x4600001e  madda.s     $f0, $f0
    ctx->pc = 0x227c50u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x227c54: 0x460b3a42  mul.s       $f9, $f7, $f11
    ctx->pc = 0x227c54u;
    ctx->f[9] = FPU_MUL_S(ctx->f[7], ctx->f[11]);
    // 0x227c58: 0x460211dc  madd.s      $f7, $f2, $f2
    ctx->pc = 0x227c58u;
    ctx->f[7] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x227c5c: 0x46094034  c.lt.s      $f8, $f9
    ctx->pc = 0x227c5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227c60: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x227C60u;
    {
        const bool branch_taken_0x227c60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x227C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227C60u;
            // 0x227c64: 0x460751c2  mul.s       $f7, $f10, $f7 (Delay Slot)
        ctx->f[7] = FPU_MUL_S(ctx->f[10], ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x227c60) {
            ctx->pc = 0x227C70u;
            goto label_227c70;
        }
    }
    ctx->pc = 0x227C68u;
    // 0x227c68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x227C68u;
    {
        const bool branch_taken_0x227c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227C68u;
            // 0x227c6c: 0x460843c2  mul.s       $f15, $f8, $f8 (Delay Slot)
        ctx->f[15] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x227c68) {
            ctx->pc = 0x227C78u;
            goto label_227c78;
        }
    }
    ctx->pc = 0x227C70u;
label_227c70:
    // 0x227c70: 0x46004a06  mov.s       $f8, $f9
    ctx->pc = 0x227c70u;
    ctx->f[8] = FPU_MOV_S(ctx->f[9]);
    // 0x227c74: 0x460843c2  mul.s       $f15, $f8, $f8
    ctx->pc = 0x227c74u;
    ctx->f[15] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
label_227c78:
    // 0x227c78: 0x460f3836  c.le.s      $f7, $f15
    ctx->pc = 0x227c78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227c7c: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x227C7Cu;
    {
        const bool branch_taken_0x227c7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x227c7c) {
            ctx->pc = 0x227CD8u;
            goto label_227cd8;
        }
    }
    ctx->pc = 0x227C84u;
    // 0x227c84: 0x3c023d35  lui         $v0, 0x3D35
    ctx->pc = 0x227c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15669 << 16));
    // 0x227c88: 0x3445e52a  ori         $a1, $v0, 0xE52A
    ctx->pc = 0x227c88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58666);
    // 0x227c8c: 0x44854000  mtc1        $a1, $f8
    ctx->pc = 0x227c8cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x227c90: 0x3c023e05  lui         $v0, 0x3E05
    ctx->pc = 0x227c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15877 << 16));
    // 0x227c94: 0x46074302  mul.s       $f12, $f8, $f7
    ctx->pc = 0x227c94u;
    ctx->f[12] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x227c98: 0x3444a965  ori         $a0, $v0, 0xA965
    ctx->pc = 0x227c98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43365);
    // 0x227c9c: 0x3c023f52  lui         $v0, 0x3F52
    ctx->pc = 0x227c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16210 << 16));
    // 0x227ca0: 0x3443acb8  ori         $v1, $v0, 0xACB8
    ctx->pc = 0x227ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44216);
    // 0x227ca4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x227ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x227ca8: 0x46073b42  mul.s       $f13, $f7, $f7
    ctx->pc = 0x227ca8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x227cac: 0x44824800  mtc1        $v0, $f9
    ctx->pc = 0x227cacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x227cb0: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x227cb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x227cb4: 0x44835000  mtc1        $v1, $f10
    ctx->pc = 0x227cb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x227cb8: 0x46094018  adda.s      $f8, $f9
    ctx->pc = 0x227cb8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[8], ctx->f[9]);
    // 0x227cbc: 0x44845800  mtc1        $a0, $f11
    ctx->pc = 0x227cbcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x227cc0: 0x0  nop
    ctx->pc = 0x227cc0u;
    // NOP
    // 0x227cc4: 0x4607501f  msuba.s     $f10, $f7
    ctx->pc = 0x227cc4u;
    ctx->f[31] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[7]));
    // 0x227cc8: 0x460d581f  msuba.s     $f11, $f13
    ctx->pc = 0x227cc8u;
    ctx->f[31] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[13]));
    // 0x227ccc: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x227CCCu;
    {
        const bool branch_taken_0x227ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227CCCu;
            // 0x227cd0: 0x460c6add  msub.s      $f11, $f13, $f12 (Delay Slot)
        ctx->f[11] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[12]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227ccc) {
            ctx->pc = 0x227D78u;
            goto label_227d78;
        }
    }
    ctx->pc = 0x227CD4u;
    // 0x227cd4: 0x0  nop
    ctx->pc = 0x227cd4u;
    // NOP
label_227cd8:
    // 0x227cd8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x227cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x227cdc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x227cdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x227ce0: 0x0  nop
    ctx->pc = 0x227ce0u;
    // NOP
    // 0x227ce4: 0x460771d6  rsqrt.s     $f7, $f14, $f7
    ctx->pc = 0x227ce4u;
    ctx->f[7] = 1.0f / sqrtf(ctx->f[14]);
    // 0x227ce8: 0x3c023d35  lui         $v0, 0x3D35
    ctx->pc = 0x227ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15669 << 16));
    // 0x227cec: 0x3444e52a  ori         $a0, $v0, 0xE52A
    ctx->pc = 0x227cecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58666);
    // 0x227cf0: 0x3c023e05  lui         $v0, 0x3E05
    ctx->pc = 0x227cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15877 << 16));
    // 0x227cf4: 0x3443a965  ori         $v1, $v0, 0xA965
    ctx->pc = 0x227cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43365);
    // 0x227cf8: 0x3c023f52  lui         $v0, 0x3F52
    ctx->pc = 0x227cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16210 << 16));
    // 0x227cfc: 0x3442acb8  ori         $v0, $v0, 0xACB8
    ctx->pc = 0x227cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44216);
    // 0x227d00: 0x46074342  mul.s       $f13, $f8, $f7
    ctx->pc = 0x227d00u;
    ctx->f[13] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x227d04: 0x44844000  mtc1        $a0, $f8
    ctx->pc = 0x227d04u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x227d08: 0x0  nop
    ctx->pc = 0x227d08u;
    // NOP
    // 0x227d0c: 0x460f42c2  mul.s       $f11, $f8, $f15
    ctx->pc = 0x227d0cu;
    ctx->f[11] = FPU_MUL_S(ctx->f[8], ctx->f[15]);
    // 0x227d10: 0xc60800f0  lwc1        $f8, 0xF0($s0)
    ctx->pc = 0x227d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x227d14: 0x460f7b02  mul.s       $f12, $f15, $f15
    ctx->pc = 0x227d14u;
    ctx->f[12] = FPU_MUL_S(ctx->f[15], ctx->f[15]);
    // 0x227d18: 0x460d4202  mul.s       $f8, $f8, $f13
    ctx->pc = 0x227d18u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[13]);
    // 0x227d1c: 0xe60800f0  swc1        $f8, 0xF0($s0)
    ctx->pc = 0x227d1cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    // 0x227d20: 0xc60800f4  lwc1        $f8, 0xF4($s0)
    ctx->pc = 0x227d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x227d24: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x227d24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x227d28: 0x460d4202  mul.s       $f8, $f8, $f13
    ctx->pc = 0x227d28u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[13]);
    // 0x227d2c: 0xe60800f4  swc1        $f8, 0xF4($s0)
    ctx->pc = 0x227d2cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x227d30: 0xc60800f8  lwc1        $f8, 0xF8($s0)
    ctx->pc = 0x227d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x227d34: 0x460d0842  mul.s       $f1, $f1, $f13
    ctx->pc = 0x227d34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    // 0x227d38: 0x460d4202  mul.s       $f8, $f8, $f13
    ctx->pc = 0x227d38u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[13]);
    // 0x227d3c: 0xe60800f8  swc1        $f8, 0xF8($s0)
    ctx->pc = 0x227d3cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
    // 0x227d40: 0xc60800fc  lwc1        $f8, 0xFC($s0)
    ctx->pc = 0x227d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x227d44: 0x460d1082  mul.s       $f2, $f2, $f13
    ctx->pc = 0x227d44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[13]);
    // 0x227d48: 0x460d4202  mul.s       $f8, $f8, $f13
    ctx->pc = 0x227d48u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[13]);
    // 0x227d4c: 0xe60800fc  swc1        $f8, 0xFC($s0)
    ctx->pc = 0x227d4cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x227d50: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x227d50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x227d54: 0x44824800  mtc1        $v0, $f9
    ctx->pc = 0x227d54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x227d58: 0x0  nop
    ctx->pc = 0x227d58u;
    // NOP
    // 0x227d5c: 0x460e4018  adda.s      $f8, $f14
    ctx->pc = 0x227d5cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[8], ctx->f[14]);
    // 0x227d60: 0x44835000  mtc1        $v1, $f10
    ctx->pc = 0x227d60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x227d64: 0x460f481f  msuba.s     $f9, $f15
    ctx->pc = 0x227d64u;
    ctx->f[31] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[15]));
    // 0x227d68: 0x460c501f  msuba.s     $f10, $f12
    ctx->pc = 0x227d68u;
    ctx->f[31] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[12]));
    // 0x227d6c: 0x460079c6  mov.s       $f7, $f15
    ctx->pc = 0x227d6cu;
    ctx->f[7] = FPU_MOV_S(ctx->f[15]);
    // 0x227d70: 0x460b62dd  msub.s      $f11, $f12, $f11
    ctx->pc = 0x227d70u;
    ctx->f[11] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[11]));
    // 0x227d74: 0x0  nop
    ctx->pc = 0x227d74u;
    // NOP
label_227d78:
    // 0x227d78: 0x4605081a  mula.s      $f1, $f5
    ctx->pc = 0x227d78u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x227d7c: 0x4604129d  msub.s      $f10, $f2, $f4
    ctx->pc = 0x227d7cu;
    ctx->f[10] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x227d80: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x227d80u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x227d84: 0x4605025d  msub.s      $f9, $f0, $f5
    ctx->pc = 0x227d84u;
    ctx->f[9] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[5]));
    // 0x227d88: 0x4604001a  mula.s      $f0, $f4
    ctx->pc = 0x227d88u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x227d8c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x227d8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x227d90: 0x46030a1d  msub.s      $f8, $f1, $f3
    ctx->pc = 0x227d90u;
    ctx->f[8] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x227d94: 0x460a6018  adda.s      $f12, $f10
    ctx->pc = 0x227d94u;
    ctx->f[31] = FPU_ADD_S(ctx->f[12], ctx->f[10]);
    // 0x227d98: 0x46035a9c  madd.s      $f10, $f11, $f3
    ctx->pc = 0x227d98u;
    ctx->f[10] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[3]));
    // 0x227d9c: 0x46096018  adda.s      $f12, $f9
    ctx->pc = 0x227d9cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[12], ctx->f[9]);
    // 0x227da0: 0x46045a5c  madd.s      $f9, $f11, $f4
    ctx->pc = 0x227da0u;
    ctx->f[9] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[4]));
    // 0x227da4: 0x46086018  adda.s      $f12, $f8
    ctx->pc = 0x227da4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[12], ctx->f[8]);
    // 0x227da8: 0x46055a1c  madd.s      $f8, $f11, $f5
    ctx->pc = 0x227da8u;
    ctx->f[8] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[5]));
    // 0x227dac: 0x460a6018  adda.s      $f12, $f10
    ctx->pc = 0x227dacu;
    ctx->f[31] = FPU_ADD_S(ctx->f[12], ctx->f[10]);
    // 0x227db0: 0x4600329c  madd.s      $f10, $f6, $f0
    ctx->pc = 0x227db0u;
    ctx->f[10] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[0]));
    // 0x227db4: 0x46096018  adda.s      $f12, $f9
    ctx->pc = 0x227db4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[12], ctx->f[9]);
    // 0x227db8: 0x4601325c  madd.s      $f9, $f6, $f1
    ctx->pc = 0x227db8u;
    ctx->f[9] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[1]));
    // 0x227dbc: 0x46086018  adda.s      $f12, $f8
    ctx->pc = 0x227dbcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[12], ctx->f[8]);
    // 0x227dc0: 0x4602321c  madd.s      $f8, $f6, $f2
    ctx->pc = 0x227dc0u;
    ctx->f[8] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[2]));
    // 0x227dc4: 0x4604081a  mula.s      $f1, $f4
    ctx->pc = 0x227dc4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x227dc8: 0x4603001e  madda.s     $f0, $f3
    ctx->pc = 0x227dc8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x227dcc: 0x460658c2  mul.s       $f3, $f11, $f6
    ctx->pc = 0x227dccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[11], ctx->f[6]);
    // 0x227dd0: 0x4605111c  madd.s      $f4, $f2, $f5
    ctx->pc = 0x227dd0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x227dd4: 0x4609481a  mula.s      $f9, $f9
    ctx->pc = 0x227dd4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
    // 0x227dd8: 0x460a501e  madda.s     $f10, $f10
    ctx->pc = 0x227dd8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[10]));
    // 0x227ddc: 0x46041941  sub.s       $f5, $f3, $f4
    ctx->pc = 0x227ddcu;
    ctx->f[5] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x227de0: 0x4608401e  madda.s     $f8, $f8
    ctx->pc = 0x227de0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[8]));
    // 0x227de4: 0x4605291c  madd.s      $f4, $f5, $f5
    ctx->pc = 0x227de4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[5]));
    // 0x227de8: 0x460c2032  c.eq.s      $f4, $f12
    ctx->pc = 0x227de8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227dec: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x227DECu;
    {
        const bool branch_taken_0x227dec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x227dec) {
            ctx->pc = 0x227E18u;
            goto label_227e18;
        }
    }
    ctx->pc = 0x227DF4u;
    // 0x227df4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x227df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x227df8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x227df8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x227dfc: 0x0  nop
    ctx->pc = 0x227dfcu;
    // NOP
    // 0x227e00: 0x46041b16  rsqrt.s     $f12, $f3, $f4
    ctx->pc = 0x227e00u;
    ctx->f[12] = 1.0f / sqrtf(ctx->f[3]);
    // 0x227e04: 0x0  nop
    ctx->pc = 0x227e04u;
    // NOP
    // 0x227e08: 0x0  nop
    ctx->pc = 0x227e08u;
    // NOP
    // 0x227e0c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x227E0Cu;
    {
        const bool branch_taken_0x227e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x227e0c) {
            ctx->pc = 0x227E18u;
            goto label_227e18;
        }
    }
    ctx->pc = 0x227E14u;
    // 0x227e14: 0x0  nop
    ctx->pc = 0x227e14u;
    // NOP
label_227e18:
    // 0x227e18: 0x460108c0  add.s       $f3, $f1, $f1
    ctx->pc = 0x227e18u;
    ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x227e1c: 0x46000100  add.s       $f4, $f0, $f0
    ctx->pc = 0x227e1cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x227e20: 0xe60400a0  swc1        $f4, 0xA0($s0)
    ctx->pc = 0x227e20u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x227e24: 0x46021040  add.s       $f1, $f2, $f2
    ctx->pc = 0x227e24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x227e28: 0xe60300a4  swc1        $f3, 0xA4($s0)
    ctx->pc = 0x227e28u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x227e2c: 0xe60100a8  swc1        $f1, 0xA8($s0)
    ctx->pc = 0x227e2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x227e30: 0x460b5800  add.s       $f0, $f11, $f11
    ctx->pc = 0x227e30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[11], ctx->f[11]);
    // 0x227e34: 0x460c2842  mul.s       $f1, $f5, $f12
    ctx->pc = 0x227e34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[12]);
    // 0x227e38: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x227e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x227e3c: 0x460c5102  mul.s       $f4, $f10, $f12
    ctx->pc = 0x227e3cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[10], ctx->f[12]);
    // 0x227e40: 0x460c48c2  mul.s       $f3, $f9, $f12
    ctx->pc = 0x227e40u;
    ctx->f[3] = FPU_MUL_S(ctx->f[9], ctx->f[12]);
    // 0x227e44: 0x460c4082  mul.s       $f2, $f8, $f12
    ctx->pc = 0x227e44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[12]);
    // 0x227e48: 0x46070144  c1          0x70144
    ctx->pc = 0x227e48u;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
    // 0x227e4c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x227e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x227e50: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x227e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x227e54: 0x26150010  addiu       $s5, $s0, 0x10
    ctx->pc = 0x227e54u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x227e58: 0x26140050  addiu       $s4, $s0, 0x50
    ctx->pc = 0x227e58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x227e5c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x227e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227e60: 0x26850030  addiu       $a1, $s4, 0x30
    ctx->pc = 0x227e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x227e64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x227e64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227e68: 0x0  nop
    ctx->pc = 0x227e68u;
    // NOP
    // 0x227e6c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x227e6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x227e70: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x227e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x227e74: 0xe6040080  swc1        $f4, 0x80($s0)
    ctx->pc = 0x227e74u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x227e78: 0xe6030084  swc1        $f3, 0x84($s0)
    ctx->pc = 0x227e78u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x227e7c: 0xe6020088  swc1        $f2, 0x88($s0)
    ctx->pc = 0x227e7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x227e80: 0xc0a3830  jal         func_28E0C0
    ctx->pc = 0x227E80u;
    SET_GPR_U32(ctx, 31, 0x227E88u);
    ctx->pc = 0x227E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227E80u;
            // 0x227e84: 0xe601008c  swc1        $f1, 0x8C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227E88u; }
        if (ctx->pc != 0x227E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227E88u; }
        if (ctx->pc != 0x227E88u) { return; }
    }
    ctx->pc = 0x227E88u;
label_227e88:
    // 0x227e88: 0xc6880044  lwc1        $f8, 0x44($s4)
    ctx->pc = 0x227e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x227e8c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x227e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x227e90: 0xc6a00010  lwc1        $f0, 0x10($s5)
    ctx->pc = 0x227e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227e94: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x227e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227e98: 0xc6890040  lwc1        $f9, 0x40($s4)
    ctx->pc = 0x227e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x227e9c: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x227e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x227ea0: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x227ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227ea4: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x227ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
    // 0x227ea8: 0x4600401a  mula.s      $f8, $f0
    ctx->pc = 0x227ea8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x227eac: 0xc6870048  lwc1        $f7, 0x48($s4)
    ctx->pc = 0x227eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x227eb0: 0x4601481e  madda.s     $f9, $f1
    ctx->pc = 0x227eb0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[1]));
    // 0x227eb4: 0xc6a20020  lwc1        $f2, 0x20($s5)
    ctx->pc = 0x227eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x227eb8: 0xc6a00014  lwc1        $f0, 0x14($s5)
    ctx->pc = 0x227eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227ebc: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x227ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227ec0: 0x4602395c  madd.s      $f5, $f7, $f2
    ctx->pc = 0x227ec0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[2]));
    // 0x227ec4: 0x4600401a  mula.s      $f8, $f0
    ctx->pc = 0x227ec4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x227ec8: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x227ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227ecc: 0x4601481e  madda.s     $f9, $f1
    ctx->pc = 0x227eccu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[1]));
    // 0x227ed0: 0xc6a40024  lwc1        $f4, 0x24($s5)
    ctx->pc = 0x227ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x227ed4: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x227ed4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x227ed8: 0x4604391c  madd.s      $f4, $f7, $f4
    ctx->pc = 0x227ed8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[4]));
    // 0x227edc: 0xc6a10018  lwc1        $f1, 0x18($s5)
    ctx->pc = 0x227edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227ee0: 0xc6a30028  lwc1        $f3, 0x28($s5)
    ctx->pc = 0x227ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x227ee4: 0xc6a20008  lwc1        $f2, 0x8($s5)
    ctx->pc = 0x227ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x227ee8: 0x4601401a  mula.s      $f8, $f1
    ctx->pc = 0x227ee8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x227eec: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x227eecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x227ef0: 0xe6a00030  swc1        $f0, 0x30($s5)
    ctx->pc = 0x227ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 48), bits); }
    // 0x227ef4: 0xc6800014  lwc1        $f0, 0x14($s4)
    ctx->pc = 0x227ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227ef8: 0x4602481e  madda.s     $f9, $f2
    ctx->pc = 0x227ef8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[2]));
    // 0x227efc: 0x4603385c  madd.s      $f1, $f7, $f3
    ctx->pc = 0x227efcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[3]));
    // 0x227f00: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x227f00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x227f04: 0xe6a00034  swc1        $f0, 0x34($s5)
    ctx->pc = 0x227f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 52), bits); }
    // 0x227f08: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x227f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227f0c: 0xe7a500d0  swc1        $f5, 0xD0($sp)
    ctx->pc = 0x227f0cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x227f10: 0xe7a400d4  swc1        $f4, 0xD4($sp)
    ctx->pc = 0x227f10u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x227f14: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x227f14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x227f18: 0xe6a00038  swc1        $f0, 0x38($s5)
    ctx->pc = 0x227f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 56), bits); }
    // 0x227f1c: 0xc680001c  lwc1        $f0, 0x1C($s4)
    ctx->pc = 0x227f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227f20: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x227f20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x227f24: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x227f24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x227f28: 0xc0a4644  jal         func_291910
    ctx->pc = 0x227F28u;
    SET_GPR_U32(ctx, 31, 0x227F30u);
    ctx->pc = 0x227F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227F28u;
            // 0x227f2c: 0xe6a0003c  swc1        $f0, 0x3C($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x291910u;
    if (runtime->hasFunction(0x291910u)) {
        auto targetFn = runtime->lookupFunction(0x291910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227F30u; }
        if (ctx->pc != 0x227F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291910_0x291910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227F30u; }
        if (ctx->pc != 0x227F30u) { return; }
    }
    ctx->pc = 0x227F30u;
label_227f30:
    // 0x227f30: 0xc60300d0  lwc1        $f3, 0xD0($s0)
    ctx->pc = 0x227f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x227f34: 0x260400f0  addiu       $a0, $s0, 0xF0
    ctx->pc = 0x227f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x227f38: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x227f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227f3c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x227f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227f40: 0xc7a200e4  lwc1        $f2, 0xE4($sp)
    ctx->pc = 0x227f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x227f44: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x227f44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x227f48: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x227f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227f4c: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x227f4cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x227f50: 0xe7a300e0  swc1        $f3, 0xE0($sp)
    ctx->pc = 0x227f50u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x227f54: 0xc60300d4  lwc1        $f3, 0xD4($s0)
    ctx->pc = 0x227f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x227f58: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x227f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227f5c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x227f5cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x227f60: 0xe7a200e4  swc1        $f2, 0xE4($sp)
    ctx->pc = 0x227f60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x227f64: 0xc60200d8  lwc1        $f2, 0xD8($s0)
    ctx->pc = 0x227f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x227f68: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x227f68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x227f6c: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x227f6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x227f70: 0xc60100dc  lwc1        $f1, 0xDC($s0)
    ctx->pc = 0x227f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227f74: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x227f74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x227f78: 0xc0a4628  jal         func_2918A0
    ctx->pc = 0x227F78u;
    SET_GPR_U32(ctx, 31, 0x227F80u);
    ctx->pc = 0x227F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227F78u;
            // 0x227f7c: 0xe7a000ec  swc1        $f0, 0xEC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2918A0u;
    if (runtime->hasFunction(0x2918A0u)) {
        auto targetFn = runtime->lookupFunction(0x2918A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227F80u; }
        if (ctx->pc != 0x227F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002918A0_0x2918a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227F80u; }
        if (ctx->pc != 0x227F80u) { return; }
    }
    ctx->pc = 0x227F80u;
label_227f80:
    // 0x227f80: 0xc60200e4  lwc1        $f2, 0xE4($s0)
    ctx->pc = 0x227f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x227f84: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x227f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227f88: 0xc60000e8  lwc1        $f0, 0xE8($s0)
    ctx->pc = 0x227f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227f8c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x227f8cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x227f90: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x227f90u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x227f94: 0x460000dc  madd.s      $f3, $f0, $f0
    ctx->pc = 0x227f94u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x227f98: 0xc60200f4  lwc1        $f2, 0xF4($s0)
    ctx->pc = 0x227f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x227f9c: 0xc60100f0  lwc1        $f1, 0xF0($s0)
    ctx->pc = 0x227f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227fa0: 0xc60000f8  lwc1        $f0, 0xF8($s0)
    ctx->pc = 0x227fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227fa4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x227fa4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x227fa8: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x227fa8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x227fac: 0x4600009c  madd.s      $f2, $f0, $f0
    ctx->pc = 0x227facu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x227fb0: 0xc60000b8  lwc1        $f0, 0xB8($s0)
    ctx->pc = 0x227fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227fb4: 0xc60100b4  lwc1        $f1, 0xB4($s0)
    ctx->pc = 0x227fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227fb8: 0x46000102  mul.s       $f4, $f0, $f0
    ctx->pc = 0x227fb8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x227fbc: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x227fbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x227fc0: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x227fc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227fc4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x227FC4u;
    {
        const bool branch_taken_0x227fc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x227fc4) {
            ctx->pc = 0x227FD8u;
            goto label_227fd8;
        }
    }
    ctx->pc = 0x227FCCu;
    // 0x227fcc: 0x46031832  c.eq.s      $f3, $f3
    ctx->pc = 0x227fccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227fd0: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
    ctx->pc = 0x227FD0u;
    {
        const bool branch_taken_0x227fd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x227fd0) {
            ctx->pc = 0x228050u;
            goto label_228050;
        }
    }
    ctx->pc = 0x227FD8u;
label_227fd8:
    // 0x227fd8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x227fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x227fdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x227fdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227fe0: 0x0  nop
    ctx->pc = 0x227fe0u;
    // NOP
    // 0x227fe4: 0x46030016  rsqrt.s     $f0, $f0, $f3
    ctx->pc = 0x227fe4u;
    ctx->f[0] = 1.0f / sqrtf(ctx->f[0]);
    // 0x227fe8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x227fe8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x227fec: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x227fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227ff0: 0x46031832  c.eq.s      $f3, $f3
    ctx->pc = 0x227ff0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227ff4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x227ff4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x227ff8: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x227ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x227ffc: 0xc60000e4  lwc1        $f0, 0xE4($s0)
    ctx->pc = 0x227ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228000: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x228000u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x228004: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x228004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
    // 0x228008: 0xc60000e8  lwc1        $f0, 0xE8($s0)
    ctx->pc = 0x228008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22800c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22800cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x228010: 0xe60000e8  swc1        $f0, 0xE8($s0)
    ctx->pc = 0x228010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
    // 0x228014: 0xc60000ec  lwc1        $f0, 0xEC($s0)
    ctx->pc = 0x228014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228018: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x228018u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22801c: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x22801Cu;
    {
        const bool branch_taken_0x22801c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x228020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22801Cu;
            // 0x228020: 0xe60000ec  swc1        $f0, 0xEC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22801c) {
            ctx->pc = 0x228050u;
            goto label_228050;
        }
    }
    ctx->pc = 0x228024u;
    // 0x228024: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x228024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x228028: 0x2442d6e0  addiu       $v0, $v0, -0x2920
    ctx->pc = 0x228028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956768));
    // 0x22802c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x22802cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228030: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x228030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x228034: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x228034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228038: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x228038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
    // 0x22803c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x22803cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228040: 0xe60000e8  swc1        $f0, 0xE8($s0)
    ctx->pc = 0x228040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
    // 0x228044: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x228044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228048: 0xe60000ec  swc1        $f0, 0xEC($s0)
    ctx->pc = 0x228048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
    // 0x22804c: 0x0  nop
    ctx->pc = 0x22804cu;
    // NOP
label_228050:
    // 0x228050: 0x46041036  c.le.s      $f2, $f4
    ctx->pc = 0x228050u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228054: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x228054u;
    {
        const bool branch_taken_0x228054 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x228054) {
            ctx->pc = 0x228068u;
            goto label_228068;
        }
    }
    ctx->pc = 0x22805Cu;
    // 0x22805c: 0x46021032  c.eq.s      $f2, $f2
    ctx->pc = 0x22805cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228060: 0x450101f3  bc1t        . + 4 + (0x1F3 << 2)
    ctx->pc = 0x228060u;
    {
        const bool branch_taken_0x228060 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x228060) {
            ctx->pc = 0x228830u;
            goto label_228830;
        }
    }
    ctx->pc = 0x228068u;
label_228068:
    // 0x228068: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x228068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x22806c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22806cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228070: 0x0  nop
    ctx->pc = 0x228070u;
    // NOP
    // 0x228074: 0x460200d6  rsqrt.s     $f3, $f0, $f2
    ctx->pc = 0x228074u;
    ctx->f[3] = 1.0f / sqrtf(ctx->f[0]);
    // 0x228078: 0xc60100b8  lwc1        $f1, 0xB8($s0)
    ctx->pc = 0x228078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22807c: 0xc60000f0  lwc1        $f0, 0xF0($s0)
    ctx->pc = 0x22807cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228080: 0x46021032  c.eq.s      $f2, $f2
    ctx->pc = 0x228080u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228084: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x228084u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x228088: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x228088u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22808c: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x22808cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    // 0x228090: 0xc60000f4  lwc1        $f0, 0xF4($s0)
    ctx->pc = 0x228090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228094: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x228094u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x228098: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x228098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x22809c: 0xc60000f8  lwc1        $f0, 0xF8($s0)
    ctx->pc = 0x22809cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2280a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2280a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2280a4: 0xe60000f8  swc1        $f0, 0xF8($s0)
    ctx->pc = 0x2280a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
    // 0x2280a8: 0xc60000fc  lwc1        $f0, 0xFC($s0)
    ctx->pc = 0x2280a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2280ac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2280acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2280b0: 0x450101df  bc1t        . + 4 + (0x1DF << 2)
    ctx->pc = 0x2280B0u;
    {
        const bool branch_taken_0x2280b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2280B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2280B0u;
            // 0x2280b4: 0xe60000fc  swc1        $f0, 0xFC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2280b0) {
            ctx->pc = 0x228830u;
            goto label_228830;
        }
    }
    ctx->pc = 0x2280B8u;
    // 0x2280b8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2280b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2280bc: 0x2442d6e0  addiu       $v0, $v0, -0x2920
    ctx->pc = 0x2280bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956768));
    // 0x2280c0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2280c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2280c4: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x2280c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    // 0x2280c8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2280c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2280cc: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2280ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2280d0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2280d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2280d4: 0xe60000f8  swc1        $f0, 0xF8($s0)
    ctx->pc = 0x2280d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
    // 0x2280d8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2280d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2280dc: 0x100001d4  b           . + 4 + (0x1D4 << 2)
    ctx->pc = 0x2280DCu;
    {
        const bool branch_taken_0x2280dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2280E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2280DCu;
            // 0x2280e0: 0xe60000fc  swc1        $f0, 0xFC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2280dc) {
            ctx->pc = 0x228830u;
            goto label_228830;
        }
    }
    ctx->pc = 0x2280E4u;
    // 0x2280e4: 0x0  nop
    ctx->pc = 0x2280e4u;
    // NOP
label_2280e8:
    // 0x2280e8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2280e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2280ec: 0xc60200e0  lwc1        $f2, 0xE0($s0)
    ctx->pc = 0x2280ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2280f0: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2280f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2280f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2280f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2280f8: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2280f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2280fc: 0x0  nop
    ctx->pc = 0x2280fcu;
    // NOP
    // 0x228100: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x228100u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x228104: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x228104u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x228108: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x228108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x22810c: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x22810cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228110: 0xc60000e4  lwc1        $f0, 0xE4($s0)
    ctx->pc = 0x228110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228114: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x228114u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x228118: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x228118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
    // 0x22811c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x22811cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228120: 0xc60000e8  lwc1        $f0, 0xE8($s0)
    ctx->pc = 0x228120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228124: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x228124u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x228128: 0xe60000e8  swc1        $f0, 0xE8($s0)
    ctx->pc = 0x228128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
    // 0x22812c: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x22812cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228130: 0xc60000ec  lwc1        $f0, 0xEC($s0)
    ctx->pc = 0x228130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228134: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x228134u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x228138: 0xe60000ec  swc1        $f0, 0xEC($s0)
    ctx->pc = 0x228138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
    // 0x22813c: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x22813cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x228140: 0xc60000bc  lwc1        $f0, 0xBC($s0)
    ctx->pc = 0x228140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228144: 0x4600201d  msub.s      $f0, $f4, $f0
    ctx->pc = 0x228144u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
    // 0x228148: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x228148u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22814c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x22814Cu;
    {
        const bool branch_taken_0x22814c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22814c) {
            ctx->pc = 0x228160u;
            goto label_228160;
        }
    }
    ctx->pc = 0x228154u;
    // 0x228154: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x228154u;
    {
        const bool branch_taken_0x228154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x228154) {
            ctx->pc = 0x228168u;
            goto label_228168;
        }
    }
    ctx->pc = 0x22815Cu;
    // 0x22815c: 0x0  nop
    ctx->pc = 0x22815cu;
    // NOP
label_228160:
    // 0x228160: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x228160u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x228164: 0x0  nop
    ctx->pc = 0x228164u;
    // NOP
label_228168:
    // 0x228168: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x228168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x22816c: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x22816cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228170: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228174: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x228174u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x228178: 0x0  nop
    ctx->pc = 0x228178u;
    // NOP
    // 0x22817c: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x22817cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x228180: 0x46030802  mul.s       $f0, $f1, $f3
    ctx->pc = 0x228180u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x228184: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x228184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x228188: 0xc60000e4  lwc1        $f0, 0xE4($s0)
    ctx->pc = 0x228188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22818c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x22818cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x228190: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x228190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
    // 0x228194: 0xc60000e8  lwc1        $f0, 0xE8($s0)
    ctx->pc = 0x228194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228198: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x228198u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x22819c: 0xe60000e8  swc1        $f0, 0xE8($s0)
    ctx->pc = 0x22819cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
    // 0x2281a0: 0xc60000ec  lwc1        $f0, 0xEC($s0)
    ctx->pc = 0x2281a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2281a4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2281a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2281a8: 0xe60000ec  swc1        $f0, 0xEC($s0)
    ctx->pc = 0x2281a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
    // 0x2281ac: 0xc60000c0  lwc1        $f0, 0xC0($s0)
    ctx->pc = 0x2281acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2281b0: 0x4600201d  msub.s      $f0, $f4, $f0
    ctx->pc = 0x2281b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
    // 0x2281b4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2281b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2281b8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2281B8u;
    {
        const bool branch_taken_0x2281b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2281b8) {
            ctx->pc = 0x2281C8u;
            goto label_2281c8;
        }
    }
    ctx->pc = 0x2281C0u;
    // 0x2281c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2281C0u;
    {
        const bool branch_taken_0x2281c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2281c0) {
            ctx->pc = 0x2281D0u;
            goto label_2281d0;
        }
    }
    ctx->pc = 0x2281C8u;
label_2281c8:
    // 0x2281c8: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2281c8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x2281cc: 0x0  nop
    ctx->pc = 0x2281ccu;
    // NOP
label_2281d0:
    // 0x2281d0: 0xc60000f0  lwc1        $f0, 0xF0($s0)
    ctx->pc = 0x2281d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2281d4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2281d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2281d8: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x2281d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    // 0x2281dc: 0xc60000f4  lwc1        $f0, 0xF4($s0)
    ctx->pc = 0x2281dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2281e0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2281e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2281e4: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2281e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2281e8: 0xc60000f8  lwc1        $f0, 0xF8($s0)
    ctx->pc = 0x2281e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2281ec: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2281ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2281f0: 0xe60000f8  swc1        $f0, 0xF8($s0)
    ctx->pc = 0x2281f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
    // 0x2281f4: 0xc60000fc  lwc1        $f0, 0xFC($s0)
    ctx->pc = 0x2281f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2281f8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2281f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2281fc: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x2281fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
label_228200:
    // 0x228200: 0xc60200e0  lwc1        $f2, 0xE0($s0)
    ctx->pc = 0x228200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x228204: 0x46001445  abs.s       $f17, $f2
    ctx->pc = 0x228204u;
    ctx->f[17] = FPU_ABS_S(ctx->f[2]);
    // 0x228208: 0xc60300e4  lwc1        $f3, 0xE4($s0)
    ctx->pc = 0x228208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22820c: 0x46001c05  abs.s       $f16, $f3
    ctx->pc = 0x22820cu;
    ctx->f[16] = FPU_ABS_S(ctx->f[3]);
    // 0x228210: 0xc60100e8  lwc1        $f1, 0xE8($s0)
    ctx->pc = 0x228210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228214: 0x46000bc5  abs.s       $f15, $f1
    ctx->pc = 0x228214u;
    ctx->f[15] = FPU_ABS_S(ctx->f[1]);
    // 0x228218: 0xc60000ec  lwc1        $f0, 0xEC($s0)
    ctx->pc = 0x228218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22821c: 0x46000385  abs.s       $f14, $f0
    ctx->pc = 0x22821cu;
    ctx->f[14] = FPU_ABS_S(ctx->f[0]);
    // 0x228220: 0xc60600f0  lwc1        $f6, 0xF0($s0)
    ctx->pc = 0x228220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x228224: 0x46003345  abs.s       $f13, $f6
    ctx->pc = 0x228224u;
    ctx->f[13] = FPU_ABS_S(ctx->f[6]);
    // 0x228228: 0xc60700f4  lwc1        $f7, 0xF4($s0)
    ctx->pc = 0x228228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x22822c: 0x46003a45  abs.s       $f9, $f7
    ctx->pc = 0x22822cu;
    ctx->f[9] = FPU_ABS_S(ctx->f[7]);
    // 0x228230: 0xc60500f8  lwc1        $f5, 0xF8($s0)
    ctx->pc = 0x228230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x228234: 0x46002a05  abs.s       $f8, $f5
    ctx->pc = 0x228234u;
    ctx->f[8] = FPU_ABS_S(ctx->f[5]);
    // 0x228238: 0xc60400fc  lwc1        $f4, 0xFC($s0)
    ctx->pc = 0x228238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x22823c: 0x46002305  abs.s       $f12, $f4
    ctx->pc = 0x22823cu;
    ctx->f[12] = FPU_ABS_S(ctx->f[4]);
    // 0x228240: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x228240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x228244: 0x2463d1f0  addiu       $v1, $v1, -0x2E10
    ctx->pc = 0x228244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955504));
    // 0x228248: 0xc46b0004  lwc1        $f11, 0x4($v1)
    ctx->pc = 0x228248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x22824c: 0x460b4834  c.lt.s      $f9, $f11
    ctx->pc = 0x22824cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228250: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x228250u;
    {
        const bool branch_taken_0x228250 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x228250) {
            ctx->pc = 0x228254u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x228250u;
            // 0x228254: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22825Cu;
            goto label_22825c;
        }
    }
    ctx->pc = 0x228258u;
    // 0x228258: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x228258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_22825c:
    // 0x22825c: 0xc46a0000  lwc1        $f10, 0x0($v1)
    ctx->pc = 0x22825cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x228260: 0x460a6834  c.lt.s      $f13, $f10
    ctx->pc = 0x228260u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228264: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x228264u;
    {
        const bool branch_taken_0x228264 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x228264) {
            ctx->pc = 0x228268u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x228264u;
            // 0x228268: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x228270u;
            goto label_228270;
        }
    }
    ctx->pc = 0x22826Cu;
    // 0x22826c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x22826cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_228270:
    // 0x228270: 0xc4690008  lwc1        $f9, 0x8($v1)
    ctx->pc = 0x228270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x228274: 0x46094034  c.lt.s      $f8, $f9
    ctx->pc = 0x228274u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228278: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x228278u;
    {
        const bool branch_taken_0x228278 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x228278) {
            ctx->pc = 0x22827Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x228278u;
            // 0x22827c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x228284u;
            goto label_228284;
        }
    }
    ctx->pc = 0x228280u;
    // 0x228280: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x228280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_228284:
    // 0x228284: 0xc468000c  lwc1        $f8, 0xC($v1)
    ctx->pc = 0x228284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x228288: 0x46086034  c.lt.s      $f12, $f8
    ctx->pc = 0x228288u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22828c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x22828Cu;
    {
        const bool branch_taken_0x22828c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x228290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22828Cu;
            // 0x228290: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22828c) {
            ctx->pc = 0x228298u;
            goto label_228298;
        }
    }
    ctx->pc = 0x228294u;
    // 0x228294: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x228294u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228298:
    // 0x228298: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x228298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x22829c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x22829cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2282a0: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x2282a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2282a4: 0x460b8034  c.lt.s      $f16, $f11
    ctx->pc = 0x2282a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[16], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2282a8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2282A8u;
    {
        const bool branch_taken_0x2282a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2282ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2282A8u;
            // 0x2282ac: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2282a8) {
            ctx->pc = 0x2282B8u;
            goto label_2282b8;
        }
    }
    ctx->pc = 0x2282B0u;
    // 0x2282b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2282B0u;
    {
        const bool branch_taken_0x2282b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2282B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2282B0u;
            // 0x2282b4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2282b0) {
            ctx->pc = 0x2282BCu;
            goto label_2282bc;
        }
    }
    ctx->pc = 0x2282B8u;
label_2282b8:
    // 0x2282b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2282b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2282bc:
    // 0x2282bc: 0x460a8834  c.lt.s      $f17, $f10
    ctx->pc = 0x2282bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[17], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2282c0: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x2282C0u;
    {
        const bool branch_taken_0x2282c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2282c0) {
            ctx->pc = 0x2282C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2282C0u;
            // 0x2282c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2282CCu;
            goto label_2282cc;
        }
    }
    ctx->pc = 0x2282C8u;
    // 0x2282c8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2282c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2282cc:
    // 0x2282cc: 0x46097834  c.lt.s      $f15, $f9
    ctx->pc = 0x2282ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[15], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2282d0: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x2282D0u;
    {
        const bool branch_taken_0x2282d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2282d0) {
            ctx->pc = 0x2282D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2282D0u;
            // 0x2282d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2282DCu;
            goto label_2282dc;
        }
    }
    ctx->pc = 0x2282D8u;
    // 0x2282d8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2282d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2282dc:
    // 0x2282dc: 0x46087034  c.lt.s      $f14, $f8
    ctx->pc = 0x2282dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2282e0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2282E0u;
    {
        const bool branch_taken_0x2282e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2282E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2282E0u;
            // 0x2282e4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2282e0) {
            ctx->pc = 0x2282ECu;
            goto label_2282ec;
        }
    }
    ctx->pc = 0x2282E8u;
    // 0x2282e8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2282e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2282ec:
    // 0x2282ec: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2282ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2282f0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2282f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2282f4: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x2282f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2282f8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2282f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2282fc: 0x46073832  c.eq.s      $f7, $f7
    ctx->pc = 0x2282fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[7], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228300: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x228300u;
    {
        const bool branch_taken_0x228300 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x228304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228300u;
            // 0x228304: 0x461024  and         $v0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228300) {
            ctx->pc = 0x228310u;
            goto label_228310;
        }
    }
    ctx->pc = 0x228308u;
    // 0x228308: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x228308u;
    {
        const bool branch_taken_0x228308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22830Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228308u;
            // 0x22830c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228308) {
            ctx->pc = 0x228314u;
            goto label_228314;
        }
    }
    ctx->pc = 0x228310u;
label_228310:
    // 0x228310: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x228310u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228314:
    // 0x228314: 0x46063032  c.eq.s      $f6, $f6
    ctx->pc = 0x228314u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[6], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228318: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x228318u;
    {
        const bool branch_taken_0x228318 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x228318) {
            ctx->pc = 0x22831Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x228318u;
            // 0x22831c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x228324u;
            goto label_228324;
        }
    }
    ctx->pc = 0x228320u;
    // 0x228320: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x228320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_228324:
    // 0x228324: 0x46052832  c.eq.s      $f5, $f5
    ctx->pc = 0x228324u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228328: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x228328u;
    {
        const bool branch_taken_0x228328 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x228328) {
            ctx->pc = 0x22832Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x228328u;
            // 0x22832c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x228334u;
            goto label_228334;
        }
    }
    ctx->pc = 0x228330u;
    // 0x228330: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x228330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_228334:
    // 0x228334: 0x46042032  c.eq.s      $f4, $f4
    ctx->pc = 0x228334u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228338: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x228338u;
    {
        const bool branch_taken_0x228338 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22833Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228338u;
            // 0x22833c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228338) {
            ctx->pc = 0x228344u;
            goto label_228344;
        }
    }
    ctx->pc = 0x228340u;
    // 0x228340: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x228340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228344:
    // 0x228344: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x228344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x228348: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x228348u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x22834c: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x22834cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x228350: 0x46031832  c.eq.s      $f3, $f3
    ctx->pc = 0x228350u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228354: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x228354u;
    {
        const bool branch_taken_0x228354 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x228358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228354u;
            // 0x228358: 0x833825  or          $a3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228354) {
            ctx->pc = 0x228364u;
            goto label_228364;
        }
    }
    ctx->pc = 0x22835Cu;
    // 0x22835c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22835Cu;
    {
        const bool branch_taken_0x22835c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22835Cu;
            // 0x228360: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22835c) {
            ctx->pc = 0x228368u;
            goto label_228368;
        }
    }
    ctx->pc = 0x228364u;
label_228364:
    // 0x228364: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x228364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228368:
    // 0x228368: 0x46021032  c.eq.s      $f2, $f2
    ctx->pc = 0x228368u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22836c: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x22836Cu;
    {
        const bool branch_taken_0x22836c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22836c) {
            ctx->pc = 0x228370u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22836Cu;
            // 0x228370: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x228378u;
            goto label_228378;
        }
    }
    ctx->pc = 0x228374u;
    // 0x228374: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x228374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_228378:
    // 0x228378: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x228378u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22837c: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x22837Cu;
    {
        const bool branch_taken_0x22837c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22837c) {
            ctx->pc = 0x228380u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22837Cu;
            // 0x228380: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x228388u;
            goto label_228388;
        }
    }
    ctx->pc = 0x228384u;
    // 0x228384: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x228384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_228388:
    // 0x228388: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x228388u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22838c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x22838Cu;
    {
        const bool branch_taken_0x22838c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x228390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22838Cu;
            // 0x228390: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22838c) {
            ctx->pc = 0x228398u;
            goto label_228398;
        }
    }
    ctx->pc = 0x228394u;
    // 0x228394: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x228394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228398:
    // 0x228398: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x228398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x22839c: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x22839cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2283a0: 0xc32025  or          $a0, $a2, $v1
    ctx->pc = 0x2283a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2283a4: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x2283a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2283a8: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2283a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2283ac: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x2283acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x2283b0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2283b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2283b4: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x2283b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x2283b8: 0x10430013  beq         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2283B8u;
    {
        const bool branch_taken_0x2283b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2283b8) {
            ctx->pc = 0x228408u;
            goto label_228408;
        }
    }
    ctx->pc = 0x2283C0u;
    // 0x2283c0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2283c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2283c4: 0x2442d6e0  addiu       $v0, $v0, -0x2920
    ctx->pc = 0x2283c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956768));
    // 0x2283c8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2283c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2283cc: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x2283ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x2283d0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2283d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2283d4: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x2283d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
    // 0x2283d8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2283d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2283dc: 0xe60000e8  swc1        $f0, 0xE8($s0)
    ctx->pc = 0x2283dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
    // 0x2283e0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2283e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2283e4: 0xe60000ec  swc1        $f0, 0xEC($s0)
    ctx->pc = 0x2283e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
    // 0x2283e8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2283e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2283ec: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x2283ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    // 0x2283f0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2283f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2283f4: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2283f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2283f8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2283f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2283fc: 0xe60000f8  swc1        $f0, 0xF8($s0)
    ctx->pc = 0x2283fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
    // 0x228400: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x228400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228404: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x228404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
label_228408:
    // 0x228408: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x228408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22840c: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x22840cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x228410: 0xc6000064  lwc1        $f0, 0x64($s0)
    ctx->pc = 0x228410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228414: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x228414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x228418: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x228418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22841c: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x22841cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x228420: 0xc600006c  lwc1        $f0, 0x6C($s0)
    ctx->pc = 0x228420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228424: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x228424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x228428: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x228428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22842c: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x22842cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x228430: 0xc60200e4  lwc1        $f2, 0xE4($s0)
    ctx->pc = 0x228430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x228434: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x228434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228438: 0xc60000e8  lwc1        $f0, 0xE8($s0)
    ctx->pc = 0x228438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22843c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x22843cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x228440: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x228440u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x228444: 0xc60100b4  lwc1        $f1, 0xB4($s0)
    ctx->pc = 0x228444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228448: 0x4600009c  madd.s      $f2, $f0, $f0
    ctx->pc = 0x228448u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x22844c: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x22844cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x228450: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x228450u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228454: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x228454u;
    {
        const bool branch_taken_0x228454 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x228454) {
            ctx->pc = 0x2284A0u;
            goto label_2284a0;
        }
    }
    ctx->pc = 0x22845Cu;
    // 0x22845c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22845cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x228460: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228460u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228464: 0x0  nop
    ctx->pc = 0x228464u;
    // NOP
    // 0x228468: 0x46020016  rsqrt.s     $f0, $f0, $f2
    ctx->pc = 0x228468u;
    ctx->f[0] = 1.0f / sqrtf(ctx->f[0]);
    // 0x22846c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x22846cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x228470: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x228470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228474: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x228474u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x228478: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x228478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x22847c: 0xc60000e4  lwc1        $f0, 0xE4($s0)
    ctx->pc = 0x22847cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228480: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x228480u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x228484: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x228484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
    // 0x228488: 0xc60000e8  lwc1        $f0, 0xE8($s0)
    ctx->pc = 0x228488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22848c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22848cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x228490: 0xe60000e8  swc1        $f0, 0xE8($s0)
    ctx->pc = 0x228490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
    // 0x228494: 0xc60000ec  lwc1        $f0, 0xEC($s0)
    ctx->pc = 0x228494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228498: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x228498u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22849c: 0xe60000ec  swc1        $f0, 0xEC($s0)
    ctx->pc = 0x22849cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
label_2284a0:
    // 0x2284a0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2284a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2284a4: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x2284a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2284a8: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2284a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2284ac: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x2284acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2284b0: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x2284b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2284b4: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x2284b4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2284b8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2284b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2284bc: 0x4601201c  madd.s      $f0, $f4, $f1
    ctx->pc = 0x2284bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
    // 0x2284c0: 0x3c023ecf  lui         $v0, 0x3ECF
    ctx->pc = 0x2284c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16079 << 16));
    // 0x2284c4: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2284c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2284c8: 0x3443817a  ori         $v1, $v0, 0x817A
    ctx->pc = 0x2284c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33146);
    // 0x2284cc: 0xc6000064  lwc1        $f0, 0x64($s0)
    ctx->pc = 0x2284ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2284d0: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2284d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2284d4: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x2284d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2284d8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2284d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2284dc: 0x44835000  mtc1        $v1, $f10
    ctx->pc = 0x2284dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x2284e0: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x2284e0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2284e4: 0x4601201c  madd.s      $f0, $f4, $f1
    ctx->pc = 0x2284e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
    // 0x2284e8: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2284e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2284ec: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x2284ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2284f0: 0xc60100e8  lwc1        $f1, 0xE8($s0)
    ctx->pc = 0x2284f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2284f4: 0x44824000  mtc1        $v0, $f8
    ctx->pc = 0x2284f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x2284f8: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x2284f8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2284fc: 0x4601201c  madd.s      $f0, $f4, $f1
    ctx->pc = 0x2284fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
    // 0x228500: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x228500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x228504: 0xc600006c  lwc1        $f0, 0x6C($s0)
    ctx->pc = 0x228504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228508: 0xc60100ec  lwc1        $f1, 0xEC($s0)
    ctx->pc = 0x228508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22850c: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x22850cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x228510: 0x4601201c  madd.s      $f0, $f4, $f1
    ctx->pc = 0x228510u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
    // 0x228514: 0xe600006c  swc1        $f0, 0x6C($s0)
    ctx->pc = 0x228514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
    // 0x228518: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x228518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22851c: 0xe600006c  swc1        $f0, 0x6C($s0)
    ctx->pc = 0x22851cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
    // 0x228520: 0xc6030080  lwc1        $f3, 0x80($s0)
    ctx->pc = 0x228520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x228524: 0xc6040084  lwc1        $f4, 0x84($s0)
    ctx->pc = 0x228524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x228528: 0xc6050088  lwc1        $f5, 0x88($s0)
    ctx->pc = 0x228528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x22852c: 0xc606008c  lwc1        $f6, 0x8C($s0)
    ctx->pc = 0x22852cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x228530: 0xe6030070  swc1        $f3, 0x70($s0)
    ctx->pc = 0x228530u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x228534: 0xe6040074  swc1        $f4, 0x74($s0)
    ctx->pc = 0x228534u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x228538: 0xe6050078  swc1        $f5, 0x78($s0)
    ctx->pc = 0x228538u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x22853c: 0xe606007c  swc1        $f6, 0x7C($s0)
    ctx->pc = 0x22853cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x228540: 0xc64b0008  lwc1        $f11, 0x8($s2)
    ctx->pc = 0x228540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x228544: 0xc60000f0  lwc1        $f0, 0xF0($s0)
    ctx->pc = 0x228544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228548: 0xc60100f4  lwc1        $f1, 0xF4($s0)
    ctx->pc = 0x228548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22854c: 0x460b1242  mul.s       $f9, $f2, $f11
    ctx->pc = 0x22854cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[2], ctx->f[11]);
    // 0x228550: 0xc60200f8  lwc1        $f2, 0xF8($s0)
    ctx->pc = 0x228550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x228554: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x228554u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x228558: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x228558u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x22855c: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x22855cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x228560: 0x46024882  mul.s       $f2, $f9, $f2
    ctx->pc = 0x228560u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x228564: 0xc60700b8  lwc1        $f7, 0xB8($s0)
    ctx->pc = 0x228564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x228568: 0x4600001e  madda.s     $f0, $f0
    ctx->pc = 0x228568u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x22856c: 0x460b3a42  mul.s       $f9, $f7, $f11
    ctx->pc = 0x22856cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[7], ctx->f[11]);
    // 0x228570: 0x460211dc  madd.s      $f7, $f2, $f2
    ctx->pc = 0x228570u;
    ctx->f[7] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x228574: 0x46094034  c.lt.s      $f8, $f9
    ctx->pc = 0x228574u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228578: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x228578u;
    {
        const bool branch_taken_0x228578 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22857Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228578u;
            // 0x22857c: 0x460751c2  mul.s       $f7, $f10, $f7 (Delay Slot)
        ctx->f[7] = FPU_MUL_S(ctx->f[10], ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x228578) {
            ctx->pc = 0x228588u;
            goto label_228588;
        }
    }
    ctx->pc = 0x228580u;
    // 0x228580: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x228580u;
    {
        const bool branch_taken_0x228580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228580u;
            // 0x228584: 0x46084382  mul.s       $f14, $f8, $f8 (Delay Slot)
        ctx->f[14] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x228580) {
            ctx->pc = 0x228590u;
            goto label_228590;
        }
    }
    ctx->pc = 0x228588u;
label_228588:
    // 0x228588: 0x46004a06  mov.s       $f8, $f9
    ctx->pc = 0x228588u;
    ctx->f[8] = FPU_MOV_S(ctx->f[9]);
    // 0x22858c: 0x46084382  mul.s       $f14, $f8, $f8
    ctx->pc = 0x22858cu;
    ctx->f[14] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
label_228590:
    // 0x228590: 0x460e3836  c.le.s      $f7, $f14
    ctx->pc = 0x228590u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228594: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x228594u;
    {
        const bool branch_taken_0x228594 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x228594) {
            ctx->pc = 0x2285F0u;
            goto label_2285f0;
        }
    }
    ctx->pc = 0x22859Cu;
    // 0x22859c: 0x3c033d35  lui         $v1, 0x3D35
    ctx->pc = 0x22859cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15669 << 16));
    // 0x2285a0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x2285a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x2285a4: 0x3464e52a  ori         $a0, $v1, 0xE52A
    ctx->pc = 0x2285a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)58666);
    // 0x2285a8: 0x3c023e05  lui         $v0, 0x3E05
    ctx->pc = 0x2285a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15877 << 16));
    // 0x2285ac: 0x44844000  mtc1        $a0, $f8
    ctx->pc = 0x2285acu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x2285b0: 0x3443a965  ori         $v1, $v0, 0xA965
    ctx->pc = 0x2285b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43365);
    // 0x2285b4: 0x460742c2  mul.s       $f11, $f8, $f7
    ctx->pc = 0x2285b4u;
    ctx->f[11] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x2285b8: 0x3c023f52  lui         $v0, 0x3F52
    ctx->pc = 0x2285b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16210 << 16));
    // 0x2285bc: 0x3442acb8  ori         $v0, $v0, 0xACB8
    ctx->pc = 0x2285bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44216);
    // 0x2285c0: 0x46073b02  mul.s       $f12, $f7, $f7
    ctx->pc = 0x2285c0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x2285c4: 0x4485a000  mtc1        $a1, $f20
    ctx->pc = 0x2285c4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2285c8: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x2285c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x2285cc: 0x44824800  mtc1        $v0, $f9
    ctx->pc = 0x2285ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x2285d0: 0x0  nop
    ctx->pc = 0x2285d0u;
    // NOP
    // 0x2285d4: 0x46144018  adda.s      $f8, $f20
    ctx->pc = 0x2285d4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[8], ctx->f[20]);
    // 0x2285d8: 0x44835000  mtc1        $v1, $f10
    ctx->pc = 0x2285d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x2285dc: 0x4607481f  msuba.s     $f9, $f7
    ctx->pc = 0x2285dcu;
    ctx->f[31] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[7]));
    // 0x2285e0: 0x460c501f  msuba.s     $f10, $f12
    ctx->pc = 0x2285e0u;
    ctx->f[31] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[12]));
    // 0x2285e4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2285E4u;
    {
        const bool branch_taken_0x2285e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2285E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2285E4u;
            // 0x2285e8: 0x460b62dd  msub.s      $f11, $f12, $f11 (Delay Slot)
        ctx->f[11] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[11]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2285e4) {
            ctx->pc = 0x228690u;
            goto label_228690;
        }
    }
    ctx->pc = 0x2285ECu;
    // 0x2285ec: 0x0  nop
    ctx->pc = 0x2285ecu;
    // NOP
label_2285f0:
    // 0x2285f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2285f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2285f4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2285f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2285f8: 0x0  nop
    ctx->pc = 0x2285f8u;
    // NOP
    // 0x2285fc: 0x4607a1d6  rsqrt.s     $f7, $f20, $f7
    ctx->pc = 0x2285fcu;
    ctx->f[7] = 1.0f / sqrtf(ctx->f[20]);
    // 0x228600: 0x3c023d35  lui         $v0, 0x3D35
    ctx->pc = 0x228600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15669 << 16));
    // 0x228604: 0x3444e52a  ori         $a0, $v0, 0xE52A
    ctx->pc = 0x228604u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58666);
    // 0x228608: 0x3c023e05  lui         $v0, 0x3E05
    ctx->pc = 0x228608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15877 << 16));
    // 0x22860c: 0x3443a965  ori         $v1, $v0, 0xA965
    ctx->pc = 0x22860cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43365);
    // 0x228610: 0x3c023f52  lui         $v0, 0x3F52
    ctx->pc = 0x228610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16210 << 16));
    // 0x228614: 0x3442acb8  ori         $v0, $v0, 0xACB8
    ctx->pc = 0x228614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44216);
    // 0x228618: 0x46074342  mul.s       $f13, $f8, $f7
    ctx->pc = 0x228618u;
    ctx->f[13] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x22861c: 0x44844000  mtc1        $a0, $f8
    ctx->pc = 0x22861cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x228620: 0x0  nop
    ctx->pc = 0x228620u;
    // NOP
    // 0x228624: 0x460e42c2  mul.s       $f11, $f8, $f14
    ctx->pc = 0x228624u;
    ctx->f[11] = FPU_MUL_S(ctx->f[8], ctx->f[14]);
    // 0x228628: 0xc60800f0  lwc1        $f8, 0xF0($s0)
    ctx->pc = 0x228628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x22862c: 0x460e7302  mul.s       $f12, $f14, $f14
    ctx->pc = 0x22862cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
    // 0x228630: 0x460d4202  mul.s       $f8, $f8, $f13
    ctx->pc = 0x228630u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[13]);
    // 0x228634: 0xe60800f0  swc1        $f8, 0xF0($s0)
    ctx->pc = 0x228634u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    // 0x228638: 0xc60800f4  lwc1        $f8, 0xF4($s0)
    ctx->pc = 0x228638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x22863c: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x22863cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x228640: 0x460d4202  mul.s       $f8, $f8, $f13
    ctx->pc = 0x228640u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[13]);
    // 0x228644: 0xe60800f4  swc1        $f8, 0xF4($s0)
    ctx->pc = 0x228644u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x228648: 0xc60800f8  lwc1        $f8, 0xF8($s0)
    ctx->pc = 0x228648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x22864c: 0x460d0842  mul.s       $f1, $f1, $f13
    ctx->pc = 0x22864cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    // 0x228650: 0x460d4202  mul.s       $f8, $f8, $f13
    ctx->pc = 0x228650u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[13]);
    // 0x228654: 0xe60800f8  swc1        $f8, 0xF8($s0)
    ctx->pc = 0x228654u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
    // 0x228658: 0xc60800fc  lwc1        $f8, 0xFC($s0)
    ctx->pc = 0x228658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x22865c: 0x460d1082  mul.s       $f2, $f2, $f13
    ctx->pc = 0x22865cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[13]);
    // 0x228660: 0x460d4202  mul.s       $f8, $f8, $f13
    ctx->pc = 0x228660u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[13]);
    // 0x228664: 0xe60800fc  swc1        $f8, 0xFC($s0)
    ctx->pc = 0x228664u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x228668: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x228668u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x22866c: 0x44824800  mtc1        $v0, $f9
    ctx->pc = 0x22866cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x228670: 0x0  nop
    ctx->pc = 0x228670u;
    // NOP
    // 0x228674: 0x46144018  adda.s      $f8, $f20
    ctx->pc = 0x228674u;
    ctx->f[31] = FPU_ADD_S(ctx->f[8], ctx->f[20]);
    // 0x228678: 0x44835000  mtc1        $v1, $f10
    ctx->pc = 0x228678u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x22867c: 0x460e481f  msuba.s     $f9, $f14
    ctx->pc = 0x22867cu;
    ctx->f[31] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[14]));
    // 0x228680: 0x460c501f  msuba.s     $f10, $f12
    ctx->pc = 0x228680u;
    ctx->f[31] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[12]));
    // 0x228684: 0x460071c6  mov.s       $f7, $f14
    ctx->pc = 0x228684u;
    ctx->f[7] = FPU_MOV_S(ctx->f[14]);
    // 0x228688: 0x460b62dd  msub.s      $f11, $f12, $f11
    ctx->pc = 0x228688u;
    ctx->f[11] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[11]));
    // 0x22868c: 0x0  nop
    ctx->pc = 0x22868cu;
    // NOP
label_228690:
    // 0x228690: 0x4605081a  mula.s      $f1, $f5
    ctx->pc = 0x228690u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x228694: 0x4604129d  msub.s      $f10, $f2, $f4
    ctx->pc = 0x228694u;
    ctx->f[10] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x228698: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x228698u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x22869c: 0x4605025d  msub.s      $f9, $f0, $f5
    ctx->pc = 0x22869cu;
    ctx->f[9] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[5]));
    // 0x2286a0: 0x4604001a  mula.s      $f0, $f4
    ctx->pc = 0x2286a0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2286a4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2286a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2286a8: 0x46030a1d  msub.s      $f8, $f1, $f3
    ctx->pc = 0x2286a8u;
    ctx->f[8] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x2286ac: 0x460a6018  adda.s      $f12, $f10
    ctx->pc = 0x2286acu;
    ctx->f[31] = FPU_ADD_S(ctx->f[12], ctx->f[10]);
    // 0x2286b0: 0x46035a9c  madd.s      $f10, $f11, $f3
    ctx->pc = 0x2286b0u;
    ctx->f[10] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[3]));
    // 0x2286b4: 0x46096018  adda.s      $f12, $f9
    ctx->pc = 0x2286b4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[12], ctx->f[9]);
    // 0x2286b8: 0x46045a5c  madd.s      $f9, $f11, $f4
    ctx->pc = 0x2286b8u;
    ctx->f[9] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[4]));
    // 0x2286bc: 0x46086018  adda.s      $f12, $f8
    ctx->pc = 0x2286bcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[12], ctx->f[8]);
    // 0x2286c0: 0x46055a1c  madd.s      $f8, $f11, $f5
    ctx->pc = 0x2286c0u;
    ctx->f[8] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[5]));
    // 0x2286c4: 0x460a6018  adda.s      $f12, $f10
    ctx->pc = 0x2286c4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[12], ctx->f[10]);
    // 0x2286c8: 0x4600329c  madd.s      $f10, $f6, $f0
    ctx->pc = 0x2286c8u;
    ctx->f[10] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[0]));
    // 0x2286cc: 0x46096018  adda.s      $f12, $f9
    ctx->pc = 0x2286ccu;
    ctx->f[31] = FPU_ADD_S(ctx->f[12], ctx->f[9]);
    // 0x2286d0: 0x4601325c  madd.s      $f9, $f6, $f1
    ctx->pc = 0x2286d0u;
    ctx->f[9] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[1]));
    // 0x2286d4: 0x46086018  adda.s      $f12, $f8
    ctx->pc = 0x2286d4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[12], ctx->f[8]);
    // 0x2286d8: 0x4602321c  madd.s      $f8, $f6, $f2
    ctx->pc = 0x2286d8u;
    ctx->f[8] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[2]));
    // 0x2286dc: 0x4604081a  mula.s      $f1, $f4
    ctx->pc = 0x2286dcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2286e0: 0x4603001e  madda.s     $f0, $f3
    ctx->pc = 0x2286e0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x2286e4: 0x460658c2  mul.s       $f3, $f11, $f6
    ctx->pc = 0x2286e4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[11], ctx->f[6]);
    // 0x2286e8: 0x4605111c  madd.s      $f4, $f2, $f5
    ctx->pc = 0x2286e8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x2286ec: 0x4609481a  mula.s      $f9, $f9
    ctx->pc = 0x2286ecu;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
    // 0x2286f0: 0x460a501e  madda.s     $f10, $f10
    ctx->pc = 0x2286f0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[10]));
    // 0x2286f4: 0x46041941  sub.s       $f5, $f3, $f4
    ctx->pc = 0x2286f4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x2286f8: 0x4608401e  madda.s     $f8, $f8
    ctx->pc = 0x2286f8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[8]));
    // 0x2286fc: 0x460528dc  madd.s      $f3, $f5, $f5
    ctx->pc = 0x2286fcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[5]));
    // 0x228700: 0x460c1832  c.eq.s      $f3, $f12
    ctx->pc = 0x228700u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228704: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x228704u;
    {
        const bool branch_taken_0x228704 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x228704) {
            ctx->pc = 0x228728u;
            goto label_228728;
        }
    }
    ctx->pc = 0x22870Cu;
    // 0x22870c: 0x0  nop
    ctx->pc = 0x22870cu;
    // NOP
    // 0x228710: 0x0  nop
    ctx->pc = 0x228710u;
    // NOP
    // 0x228714: 0x4603a316  rsqrt.s     $f12, $f20, $f3
    ctx->pc = 0x228714u;
    ctx->f[12] = 1.0f / sqrtf(ctx->f[20]);
    // 0x228718: 0x0  nop
    ctx->pc = 0x228718u;
    // NOP
    // 0x22871c: 0x0  nop
    ctx->pc = 0x22871cu;
    // NOP
    // 0x228720: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x228720u;
    {
        const bool branch_taken_0x228720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x228720) {
            ctx->pc = 0x228728u;
            goto label_228728;
        }
    }
    ctx->pc = 0x228728u;
label_228728:
    // 0x228728: 0x460108c0  add.s       $f3, $f1, $f1
    ctx->pc = 0x228728u;
    ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x22872c: 0x46000100  add.s       $f4, $f0, $f0
    ctx->pc = 0x22872cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x228730: 0xe60400a0  swc1        $f4, 0xA0($s0)
    ctx->pc = 0x228730u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x228734: 0x46021040  add.s       $f1, $f2, $f2
    ctx->pc = 0x228734u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x228738: 0xe60300a4  swc1        $f3, 0xA4($s0)
    ctx->pc = 0x228738u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x22873c: 0xe60100a8  swc1        $f1, 0xA8($s0)
    ctx->pc = 0x22873cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x228740: 0x460b5800  add.s       $f0, $f11, $f11
    ctx->pc = 0x228740u;
    ctx->f[0] = FPU_ADD_S(ctx->f[11], ctx->f[11]);
    // 0x228744: 0x460c2842  mul.s       $f1, $f5, $f12
    ctx->pc = 0x228744u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[12]);
    // 0x228748: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x228748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x22874c: 0x460c5102  mul.s       $f4, $f10, $f12
    ctx->pc = 0x22874cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[10], ctx->f[12]);
    // 0x228750: 0x460c48c2  mul.s       $f3, $f9, $f12
    ctx->pc = 0x228750u;
    ctx->f[3] = FPU_MUL_S(ctx->f[9], ctx->f[12]);
    // 0x228754: 0x460c4082  mul.s       $f2, $f8, $f12
    ctx->pc = 0x228754u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[12]);
    // 0x228758: 0x46070144  c1          0x70144
    ctx->pc = 0x228758u;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
    // 0x22875c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x22875cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x228760: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x228760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x228764: 0x26150010  addiu       $s5, $s0, 0x10
    ctx->pc = 0x228764u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x228768: 0x26140050  addiu       $s4, $s0, 0x50
    ctx->pc = 0x228768u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x22876c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x22876cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228770: 0x26850030  addiu       $a1, $s4, 0x30
    ctx->pc = 0x228770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x228774: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228778: 0x0  nop
    ctx->pc = 0x228778u;
    // NOP
    // 0x22877c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x22877cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x228780: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x228780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x228784: 0xe6040080  swc1        $f4, 0x80($s0)
    ctx->pc = 0x228784u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x228788: 0xe6030084  swc1        $f3, 0x84($s0)
    ctx->pc = 0x228788u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x22878c: 0xe6020088  swc1        $f2, 0x88($s0)
    ctx->pc = 0x22878cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x228790: 0xc0a3830  jal         func_28E0C0
    ctx->pc = 0x228790u;
    SET_GPR_U32(ctx, 31, 0x228798u);
    ctx->pc = 0x228794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228790u;
            // 0x228794: 0xe601008c  swc1        $f1, 0x8C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228798u; }
        if (ctx->pc != 0x228798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228798u; }
        if (ctx->pc != 0x228798u) { return; }
    }
    ctx->pc = 0x228798u;
label_228798:
    // 0x228798: 0xc6880044  lwc1        $f8, 0x44($s4)
    ctx->pc = 0x228798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x22879c: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x22879cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
    // 0x2287a0: 0xc6a00010  lwc1        $f0, 0x10($s5)
    ctx->pc = 0x2287a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2287a4: 0xc6890040  lwc1        $f9, 0x40($s4)
    ctx->pc = 0x2287a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2287a8: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x2287a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2287ac: 0x4600401a  mula.s      $f8, $f0
    ctx->pc = 0x2287acu;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x2287b0: 0xc6870048  lwc1        $f7, 0x48($s4)
    ctx->pc = 0x2287b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2287b4: 0x4601481e  madda.s     $f9, $f1
    ctx->pc = 0x2287b4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[1]));
    // 0x2287b8: 0xc6a20020  lwc1        $f2, 0x20($s5)
    ctx->pc = 0x2287b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2287bc: 0xc6a00014  lwc1        $f0, 0x14($s5)
    ctx->pc = 0x2287bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2287c0: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x2287c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2287c4: 0x4602395c  madd.s      $f5, $f7, $f2
    ctx->pc = 0x2287c4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[2]));
    // 0x2287c8: 0x4600401a  mula.s      $f8, $f0
    ctx->pc = 0x2287c8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x2287cc: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x2287ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2287d0: 0x4601481e  madda.s     $f9, $f1
    ctx->pc = 0x2287d0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[1]));
    // 0x2287d4: 0xc6a40024  lwc1        $f4, 0x24($s5)
    ctx->pc = 0x2287d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2287d8: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x2287d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x2287dc: 0x4604391c  madd.s      $f4, $f7, $f4
    ctx->pc = 0x2287dcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[4]));
    // 0x2287e0: 0xc6a10018  lwc1        $f1, 0x18($s5)
    ctx->pc = 0x2287e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2287e4: 0xc6a30028  lwc1        $f3, 0x28($s5)
    ctx->pc = 0x2287e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2287e8: 0xc6a20008  lwc1        $f2, 0x8($s5)
    ctx->pc = 0x2287e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2287ec: 0x4601401a  mula.s      $f8, $f1
    ctx->pc = 0x2287ecu;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x2287f0: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x2287f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2287f4: 0xe6a00030  swc1        $f0, 0x30($s5)
    ctx->pc = 0x2287f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 48), bits); }
    // 0x2287f8: 0xc6800014  lwc1        $f0, 0x14($s4)
    ctx->pc = 0x2287f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2287fc: 0x4602481e  madda.s     $f9, $f2
    ctx->pc = 0x2287fcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[2]));
    // 0x228800: 0x4603385c  madd.s      $f1, $f7, $f3
    ctx->pc = 0x228800u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[3]));
    // 0x228804: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x228804u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x228808: 0xe6a00034  swc1        $f0, 0x34($s5)
    ctx->pc = 0x228808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 52), bits); }
    // 0x22880c: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x22880cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228810: 0xe7a500c0  swc1        $f5, 0xC0($sp)
    ctx->pc = 0x228810u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x228814: 0xe7a400c4  swc1        $f4, 0xC4($sp)
    ctx->pc = 0x228814u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x228818: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x228818u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22881c: 0xe6a00038  swc1        $f0, 0x38($s5)
    ctx->pc = 0x22881cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 56), bits); }
    // 0x228820: 0xc680001c  lwc1        $f0, 0x1C($s4)
    ctx->pc = 0x228820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228824: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x228824u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x228828: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x228828u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x22882c: 0xe6a0003c  swc1        $f0, 0x3C($s5)
    ctx->pc = 0x22882cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 60), bits); }
label_228830:
    // 0x228830: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x228830u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x228834: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x228834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x228838: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x228838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x22883c: 0x1440009e  bnez        $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x22883Cu;
    {
        const bool branch_taken_0x22883c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x228840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22883Cu;
            // 0x228840: 0xa2030009  sb          $v1, 0x9($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22883c) {
            ctx->pc = 0x228AB8u;
            goto label_228ab8;
        }
    }
    ctx->pc = 0x228844u;
    // 0x228844: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x228844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x228848: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x228848u;
    {
        const bool branch_taken_0x228848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x228848) {
            ctx->pc = 0x228858u;
            goto label_228858;
        }
    }
    ctx->pc = 0x228850u;
    // 0x228850: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x228850u;
    {
        const bool branch_taken_0x228850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228850u;
            // 0x228854: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228850) {
            ctx->pc = 0x228878u;
            goto label_228878;
        }
    }
    ctx->pc = 0x228858u;
label_228858:
    // 0x228858: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x228858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22885c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22885Cu;
    {
        const bool branch_taken_0x22885c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22885c) {
            ctx->pc = 0x228870u;
            goto label_228870;
        }
    }
    ctx->pc = 0x228864u;
    // 0x228864: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x228864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x228868: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x228868u;
    {
        const bool branch_taken_0x228868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22886Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228868u;
            // 0x22886c: 0xa2020009  sb          $v0, 0x9($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228868) {
            ctx->pc = 0x228AB8u;
            goto label_228ab8;
        }
    }
    ctx->pc = 0x228870u;
label_228870:
    // 0x228870: 0xa2000009  sb          $zero, 0x9($s0)
    ctx->pc = 0x228870u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x228874: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x228874u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_228878:
    // 0x228878: 0xc60000b0  lwc1        $f0, 0xB0($s0)
    ctx->pc = 0x228878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22887c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x22887cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228880: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x228880u;
    {
        const bool branch_taken_0x228880 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x228880) {
            ctx->pc = 0x228884u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x228880u;
            // 0x228884: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x228888u;
            goto label_228888;
        }
    }
    ctx->pc = 0x228888u;
label_228888:
    // 0x228888: 0xc60400f4  lwc1        $f4, 0xF4($s0)
    ctx->pc = 0x228888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x22888c: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x22888cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x228890: 0xc60300f0  lwc1        $f3, 0xF0($s0)
    ctx->pc = 0x228890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x228894: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x228894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x228898: 0xc60200f8  lwc1        $f2, 0xF8($s0)
    ctx->pc = 0x228898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22889c: 0x24650100  addiu       $a1, $v1, 0x100
    ctx->pc = 0x22889cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x2288a0: 0x4604201a  mula.s      $f4, $f4
    ctx->pc = 0x2288a0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2288a4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2288a4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x2288a8: 0xc60700e4  lwc1        $f7, 0xE4($s0)
    ctx->pc = 0x2288a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2288ac: 0x4602109c  madd.s      $f2, $f2, $f2
    ctx->pc = 0x2288acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2288b0: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x2288b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2288b4: 0xc60600e0  lwc1        $f6, 0xE0($s0)
    ctx->pc = 0x2288b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2288b8: 0x4607381a  mula.s      $f7, $f7
    ctx->pc = 0x2288b8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x2288bc: 0xc60500e8  lwc1        $f5, 0xE8($s0)
    ctx->pc = 0x2288bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2288c0: 0x4606301e  madda.s     $f6, $f6
    ctx->pc = 0x2288c0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[6]));
    // 0x2288c4: 0xc460010c  lwc1        $f0, 0x10C($v1)
    ctx->pc = 0x2288c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2288c8: 0x4605281e  madda.s     $f5, $f5
    ctx->pc = 0x2288c8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[5]));
    // 0x2288cc: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x2288ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x2288d0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2288d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2288d4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2288D4u;
    {
        const bool branch_taken_0x2288d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2288D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2288D4u;
            // 0x2288d8: 0x24a2000c  addiu       $v0, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2288d4) {
            ctx->pc = 0x2288E4u;
            goto label_2288e4;
        }
    }
    ctx->pc = 0x2288DCu;
    // 0x2288dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2288DCu;
    {
        const bool branch_taken_0x2288dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2288E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2288DCu;
            // 0x2288e0: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2288dc) {
            ctx->pc = 0x2288ECu;
            goto label_2288ec;
        }
    }
    ctx->pc = 0x2288E4u;
label_2288e4:
    // 0x2288e4: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x2288e4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x2288e8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2288e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2288ec:
    // 0x2288ec: 0x74880  sll         $t1, $a3, 2
    ctx->pc = 0x2288ecu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2288f0: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2288f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2288f4: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x2288f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x2288f8: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x2288f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2288fc: 0x2091821  addu        $v1, $s0, $t1
    ctx->pc = 0x2288fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x228900: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x228900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x228904: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x228904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x228908: 0x960200c4  lhu         $v0, 0xC4($s0)
    ctx->pc = 0x228908u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x22890c: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x22890cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x228910: 0x46000941  sub.s       $f5, $f1, $f0
    ctx->pc = 0x228910u;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x228914: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x228914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x228918: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x228918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x22891c: 0xc6030064  lwc1        $f3, 0x64($s0)
    ctx->pc = 0x22891cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x228920: 0x24480064  addiu       $t0, $v0, 0x64
    ctx->pc = 0x228920u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x228924: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x228924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x228928: 0x1091021  addu        $v0, $t0, $t1
    ctx->pc = 0x228928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x22892c: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x22892cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228930: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x228930u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x228934: 0x4603181a  mula.s      $f3, $f3
    ctx->pc = 0x228934u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x228938: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x228938u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x22893c: 0x4605281e  madda.s     $f5, $f5
    ctx->pc = 0x22893cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[5]));
    // 0x228940: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x228940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228944: 0x4601085c  madd.s      $f1, $f1, $f1
    ctx->pc = 0x228944u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x228948: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x228948u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x22894c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22894cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228950: 0x45000045  bc1f        . + 4 + (0x45 << 2)
    ctx->pc = 0x228950u;
    {
        const bool branch_taken_0x228950 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x228954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228950u;
            // 0x228954: 0x247400c8  addiu       $s4, $v1, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228950) {
            ctx->pc = 0x228A68u;
            goto label_228a68;
        }
    }
    ctx->pc = 0x228958u;
    // 0x228958: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x228958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x22895c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x22895cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x228960: 0x1024821  addu        $t1, $t0, $v0
    ctx->pc = 0x228960u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x228964: 0x3c083c0c  lui         $t0, 0x3C0C
    ctx->pc = 0x228964u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15372 << 16));
    // 0x228968: 0x852a001c  lh          $t2, 0x1C($t1)
    ctx->pc = 0x228968u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 28)));
    // 0x22896c: 0x3508cccd  ori         $t0, $t0, 0xCCCD
    ctx->pc = 0x22896cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)52429);
    // 0x228970: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x228970u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x228974: 0x306800ff  andi        $t0, $v1, 0xFF
    ctx->pc = 0x228974u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x228978: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x228978u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x22897c: 0x2509ff80  addiu       $t1, $t0, -0x80
    ctx->pc = 0x22897cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967168));
    // 0x228980: 0xafaa011c  sw          $t2, 0x11C($sp)
    ctx->pc = 0x228980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 10));
    // 0x228984: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x228984u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228988: 0x34202  srl         $t0, $v1, 8
    ctx->pc = 0x228988u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x22898c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x22898cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x228990: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x228990u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x228994: 0x2509ff80  addiu       $t1, $t0, -0x80
    ctx->pc = 0x228994u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967168));
    // 0x228998: 0x34402  srl         $t0, $v1, 16
    ctx->pc = 0x228998u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x22899c: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x22899cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2289a0: 0x31e02  srl         $v1, $v1, 24
    ctx->pc = 0x2289a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x2289a4: 0x2508ff80  addiu       $t0, $t0, -0x80
    ctx->pc = 0x2289a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967168));
    // 0x2289a8: 0x2463ff80  addiu       $v1, $v1, -0x80
    ctx->pc = 0x2289a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
    // 0x2289ac: 0x460111c2  mul.s       $f7, $f2, $f1
    ctx->pc = 0x2289acu;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2289b0: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x2289b0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2289b4: 0x0  nop
    ctx->pc = 0x2289b4u;
    // NOP
    // 0x2289b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2289b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2289bc: 0x46011142  mul.s       $f5, $f2, $f1
    ctx->pc = 0x2289bcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2289c0: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x2289c0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2289c4: 0x0  nop
    ctx->pc = 0x2289c4u;
    // NOP
    // 0x2289c8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2289c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2289cc: 0x460110c2  mul.s       $f3, $f2, $f1
    ctx->pc = 0x2289ccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2289d0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2289d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2289d4: 0x0  nop
    ctx->pc = 0x2289d4u;
    // NOP
    // 0x2289d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2289d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2289dc: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2289dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2289e0: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x2289e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2289e4: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2289e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2289e8: 0xc4860000  lwc1        $f6, 0x0($a0)
    ctx->pc = 0x2289e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2289ec: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x2289ecu;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x2289f0: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x2289f0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2289f4: 0x46042042  mul.s       $f1, $f4, $f4
    ctx->pc = 0x2289f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2289f8: 0x46063981  sub.s       $f6, $f7, $f6
    ctx->pc = 0x2289f8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x2289fc: 0x46014018  adda.s      $f8, $f1
    ctx->pc = 0x2289fcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[8], ctx->f[1]);
    // 0x228a00: 0x4606305c  madd.s      $f1, $f6, $f6
    ctx->pc = 0x228a00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[6]));
    // 0x228a04: 0x46014018  adda.s      $f8, $f1
    ctx->pc = 0x228a04u;
    ctx->f[31] = FPU_ADD_S(ctx->f[8], ctx->f[1]);
    // 0x228a08: 0x4603185c  madd.s      $f1, $f3, $f3
    ctx->pc = 0x228a08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x228a0c: 0x46014018  adda.s      $f8, $f1
    ctx->pc = 0x228a0cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[8], ctx->f[1]);
    // 0x228a10: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x228a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228a14: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x228a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228a18: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x228a18u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x228a1c: 0x4601085c  madd.s      $f1, $f1, $f1
    ctx->pc = 0x228a1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x228a20: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x228a20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228a24: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x228A24u;
    {
        const bool branch_taken_0x228a24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x228a24) {
            ctx->pc = 0x228A68u;
            goto label_228a68;
        }
    }
    ctx->pc = 0x228A2Cu;
    // 0x228a2c: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x228a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x228a30: 0x2671021  addu        $v0, $s3, $a3
    ctx->pc = 0x228a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x228a34: 0x94c3000a  lhu         $v1, 0xA($a2)
    ctx->pc = 0x228a34u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x228a38: 0x9042013d  lbu         $v0, 0x13D($v0)
    ctx->pc = 0x228a38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 317)));
    // 0x228a3c: 0x3065007f  andi        $a1, $v1, 0x7F
    ctx->pc = 0x228a3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x228a40: 0x22380  sll         $a0, $v0, 14
    ctx->pc = 0x228a40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
    // 0x228a44: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x228a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x228a48: 0x51183  sra         $v0, $a1, 6
    ctx->pc = 0x228a48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 6));
    // 0x228a4c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x228a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x228a50: 0x511c0  sll         $v0, $a1, 7
    ctx->pc = 0x228a50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x228a54: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x228a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x228a58: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x228a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x228a5c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x228A5Cu;
    {
        const bool branch_taken_0x228a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228A5Cu;
            // 0x228a60: 0xa4c2000a  sh          $v0, 0xA($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 10), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228a5c) {
            ctx->pc = 0x228AB8u;
            goto label_228ab8;
        }
    }
    ctx->pc = 0x228A64u;
    // 0x228a64: 0x0  nop
    ctx->pc = 0x228a64u;
    // NOP
label_228a68:
    // 0x228a68: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x228a68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x228a6c: 0x2024021  addu        $t0, $s0, $v0
    ctx->pc = 0x228a6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x228a70: 0x2671021  addu        $v0, $s3, $a3
    ctx->pc = 0x228a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x228a74: 0x9042013d  lbu         $v0, 0x13D($v0)
    ctx->pc = 0x228a74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 317)));
    // 0x228a78: 0x9507000a  lhu         $a3, 0xA($t0)
    ctx->pc = 0x228a78u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 10)));
    // 0x228a7c: 0x21b80  sll         $v1, $v0, 14
    ctx->pc = 0x228a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
    // 0x228a80: 0x30e2007f  andi        $v0, $a3, 0x7F
    ctx->pc = 0x228a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)127);
    // 0x228a84: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x228a84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x228a88: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x228a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x228a8c: 0xa502000a  sh          $v0, 0xA($t0)
    ctx->pc = 0x228a8cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x228a90: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x228a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x228a94: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x228a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228a98: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x228a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228a9c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x228a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x228aa0: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x228aa0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x228aa4: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x228aa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x228aa8: 0xc0a467c  jal         func_2919F0
    ctx->pc = 0x228AA8u;
    SET_GPR_U32(ctx, 31, 0x228AB0u);
    ctx->pc = 0x228AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228AA8u;
            // 0x228aac: 0xaca0000c  sw          $zero, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2919F0u;
    if (runtime->hasFunction(0x2919F0u)) {
        auto targetFn = runtime->lookupFunction(0x2919F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228AB0u; }
        if (ctx->pc != 0x228AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002919F0_0x2919f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228AB0u; }
        if (ctx->pc != 0x228AB0u) { return; }
    }
    ctx->pc = 0x228AB0u;
label_228ab0:
    // 0x228ab0: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x228ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x228ab4: 0x0  nop
    ctx->pc = 0x228ab4u;
    // NOP
label_228ab8:
    // 0x228ab8: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x228ab8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x228abc: 0x9602000a  lhu         $v0, 0xA($s0)
    ctx->pc = 0x228abcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x228ac0: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x228ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x228ac4: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x228ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x228ac8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x228ac8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x228acc: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x228ACCu;
    {
        const bool branch_taken_0x228acc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x228acc) {
            ctx->pc = 0x228AD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x228ACCu;
            // 0x228ad0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x228AD4u;
            goto label_228ad4;
        }
    }
    ctx->pc = 0x228AD4u;
label_228ad4:
    // 0x228ad4: 0x3c2082a  slt         $at, $fp, $v0
    ctx->pc = 0x228ad4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x228ad8: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x228AD8u;
    {
        const bool branch_taken_0x228ad8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x228ad8) {
            ctx->pc = 0x228ADCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x228AD8u;
            // 0x228adc: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x228AE8u;
            goto label_228ae8;
        }
    }
    ctx->pc = 0x228AE0u;
    // 0x228ae0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x228AE0u;
    {
        const bool branch_taken_0x228ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x228ae0) {
            ctx->pc = 0x228AE8u;
            goto label_228ae8;
        }
    }
    ctx->pc = 0x228AE8u;
label_228ae8:
    // 0x228ae8: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x228ae8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x228aec: 0x6c1fb0d  bgez        $s6, . + 4 + (-0x4F3 << 2)
    ctx->pc = 0x228AECu;
    {
        const bool branch_taken_0x228aec = (GPR_S32(ctx, 22) >= 0);
        ctx->pc = 0x228AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228AECu;
            // 0x228af0: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228aec) {
            ctx->pc = 0x227724u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_227724;
        }
    }
    ctx->pc = 0x228AF4u;
    // 0x228af4: 0x0  nop
    ctx->pc = 0x228af4u;
    // NOP
label_228af8:
    // 0x228af8: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x228af8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228afc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x228afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x228b00: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x228b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x228b04: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x228b04u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x228b08: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x228b08u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x228b0c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x228b0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x228b10: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x228b10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x228b14: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x228b14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x228b18: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x228b18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x228b1c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x228b1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x228b20: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x228b20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228b24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x228b24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228b28: 0x3e00008  jr          $ra
    ctx->pc = 0x228B28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228B28u;
            // 0x228b2c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x228B30u;
}
