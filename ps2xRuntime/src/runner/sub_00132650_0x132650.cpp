#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00132650
// Address: 0x132650 - 0x132860
void sub_00132650_0x132650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132650_0x132650");
#endif

    ctx->pc = 0x132650u;

    // 0x132650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x132650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x132654: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x132654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x132658: 0xc4621f48  lwc1        $f2, 0x1F48($v1)
    ctx->pc = 0x132658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13265c: 0xc4a30014  lwc1        $f3, 0x14($a1)
    ctx->pc = 0x13265cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x132660: 0xc4a40028  lwc1        $f4, 0x28($a1)
    ctx->pc = 0x132660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x132664: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x132664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x132668: 0xc4611f4c  lwc1        $f1, 0x1F4C($v1)
    ctx->pc = 0x132668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13266c: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x13266cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x132670: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x132670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x132674: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x132674u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x132678: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x132678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x13267c: 0xc4601f50  lwc1        $f0, 0x1F50($v1)
    ctx->pc = 0x13267cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132680: 0x46031040  add.s       $f1, $f2, $f3
    ctx->pc = 0x132680u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x132684: 0x46012040  add.s       $f1, $f4, $f1
    ctx->pc = 0x132684u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x132688: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x132688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x13268c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13268cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x132690: 0x0  nop
    ctx->pc = 0x132690u;
    // NOP
    // 0x132694: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x132694u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x132698: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x132698u;
    {
        const bool branch_taken_0x132698 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x132698) {
            ctx->pc = 0x13270Cu;
            goto label_13270c;
        }
    }
    ctx->pc = 0x1326A0u;
    // 0x1326a0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1326a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1326a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1326a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1326a8: 0x0  nop
    ctx->pc = 0x1326a8u;
    // NOP
    // 0x1326ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1326acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1326b0: 0x46000084  c1          0x84
    ctx->pc = 0x1326b0u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x1326b4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1326b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1326b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1326b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1326bc: 0x0  nop
    ctx->pc = 0x1326bcu;
    // NOP
    // 0x1326c0: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x1326c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1326c4: 0x46020883  div.s       $f2, $f1, $f2
    ctx->pc = 0x1326c4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[2];
    // 0x1326c8: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1326c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1326cc: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x1326ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1326d0: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x1326d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1326d4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1326d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1326d8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1326d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1326dc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1326dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1326e0: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x1326e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1326e4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1326e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1326e8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1326e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1326ec: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1326ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1326f0: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1326f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1326f4: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1326f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1326f8: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x1326f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1326fc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1326fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x132700: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x132700u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x132704: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x132704u;
    {
        const bool branch_taken_0x132704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132704u;
            // 0x132708: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x132704) {
            ctx->pc = 0x13284Cu;
            goto label_13284c;
        }
    }
    ctx->pc = 0x13270Cu;
label_13270c:
    // 0x13270c: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x13270cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x132710: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x132710u;
    {
        const bool branch_taken_0x132710 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x132714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132710u;
            // 0x132714: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132710) {
            ctx->pc = 0x13271Cu;
            goto label_13271c;
        }
    }
    ctx->pc = 0x132718u;
    // 0x132718: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x132718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13271c:
    // 0x13271c: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x13271cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x132720: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x132720u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x132724: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x132724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x132728: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x132728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x13272c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x13272cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132730: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x132730u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x132734: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x132734u;
    {
        const bool branch_taken_0x132734 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x132734) {
            ctx->pc = 0x132738u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x132734u;
            // 0x132738: 0x71900  sll         $v1, $a3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x132744u;
            goto label_132744;
        }
    }
    ctx->pc = 0x13273Cu;
    // 0x13273c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x13273cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x132740: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x132740u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_132744:
    // 0x132744: 0x76880  sll         $t5, $a3, 2
    ctx->pc = 0x132744u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x132748: 0xa35021  addu        $t2, $a1, $v1
    ctx->pc = 0x132748u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x13274c: 0x1bd4021  addu        $t0, $t5, $sp
    ctx->pc = 0x13274cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 29)));
    // 0x132750: 0x14d1821  addu        $v1, $t2, $t5
    ctx->pc = 0x132750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
    // 0x132754: 0x8d060010  lw          $a2, 0x10($t0)
    ctx->pc = 0x132754u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x132758: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x132758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13275c: 0x66080  sll         $t4, $a2, 2
    ctx->pc = 0x13275cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x132760: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x132760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x132764: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x132764u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x132768: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x132768u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x13276c: 0xa33021  addu        $a2, $a1, $v1
    ctx->pc = 0x13276cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x132770: 0x19d1821  addu        $v1, $t4, $sp
    ctx->pc = 0x132770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 29)));
    // 0x132774: 0x8c670010  lw          $a3, 0x10($v1)
    ctx->pc = 0x132774u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x132778: 0xcc1821  addu        $v1, $a2, $t4
    ctx->pc = 0x132778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x13277c: 0x75880  sll         $t3, $a3, 2
    ctx->pc = 0x13277cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x132780: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x132780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x132784: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x132784u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x132788: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x132788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x13278c: 0xab1821  addu        $v1, $a1, $t3
    ctx->pc = 0x13278cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x132790: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x132790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x132794: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x132794u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x132798: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x132798u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x13279c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13279cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1327a0: 0x46000104  c1          0x104
    ctx->pc = 0x1327a0u;
    ctx->f[4] = FPU_SQRT_S(ctx->f[0]);
    // 0x1327a4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1327a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1327a8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1327a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1327ac: 0x0  nop
    ctx->pc = 0x1327acu;
    // NOP
    // 0x1327b0: 0x46040802  mul.s       $f0, $f1, $f4
    ctx->pc = 0x1327b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1327b4: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x1327b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x1327b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1327b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1327bc: 0x0  nop
    ctx->pc = 0x1327bcu;
    // NOP
    // 0x1327c0: 0x46040032  c.eq.s      $f0, $f4
    ctx->pc = 0x1327c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1327c4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1327C4u;
    {
        const bool branch_taken_0x1327c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1327c4) {
            ctx->pc = 0x1327C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1327C4u;
            // 0x1327c8: 0xcb1821  addu        $v1, $a2, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1327DCu;
            goto label_1327dc;
        }
    }
    ctx->pc = 0x1327CCu;
    // 0x1327cc: 0x0  nop
    ctx->pc = 0x1327ccu;
    // NOP
    // 0x1327d0: 0x0  nop
    ctx->pc = 0x1327d0u;
    // NOP
    // 0x1327d4: 0x46040903  div.s       $f4, $f1, $f4
    ctx->pc = 0x1327d4u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[4] = ctx->f[1] / ctx->f[4];
    // 0x1327d8: 0xcb1821  addu        $v1, $a2, $t3
    ctx->pc = 0x1327d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
label_1327dc:
    // 0x1327dc: 0xcd4821  addu        $t1, $a2, $t5
    ctx->pc = 0x1327dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x1327e0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1327e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1327e4: 0xad3021  addu        $a2, $a1, $t5
    ctx->pc = 0x1327e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
    // 0x1327e8: 0x14c4021  addu        $t0, $t2, $t4
    ctx->pc = 0x1327e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x1327ec: 0x19d3821  addu        $a3, $t4, $sp
    ctx->pc = 0x1327ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 29)));
    // 0x1327f0: 0xac1821  addu        $v1, $a1, $t4
    ctx->pc = 0x1327f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x1327f4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1327f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1327f8: 0x14b2821  addu        $a1, $t2, $t3
    ctx->pc = 0x1327f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x1327fc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1327fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x132800: 0x17d1821  addu        $v1, $t3, $sp
    ctx->pc = 0x132800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 29)));
    // 0x132804: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x132804u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x132808: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x132808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x13280c: 0xc5230000  lwc1        $f3, 0x0($t1)
    ctx->pc = 0x13280cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x132810: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x132810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x132814: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x132814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132818: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x132818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13281c: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x13281cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x132820: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x132820u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x132824: 0x46022042  mul.s       $f1, $f4, $f2
    ctx->pc = 0x132824u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x132828: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x132828u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x13282c: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x13282cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x132830: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x132830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x132834: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x132834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x132838: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x132838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13283c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x13283cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132840: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x132840u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x132844: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x132844u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x132848: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x132848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_13284c:
    // 0x13284c: 0x3e00008  jr          $ra
    ctx->pc = 0x13284Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13284Cu;
            // 0x132850: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x132854u;
    // 0x132854: 0x0  nop
    ctx->pc = 0x132854u;
    // NOP
    // 0x132858: 0x0  nop
    ctx->pc = 0x132858u;
    // NOP
    // 0x13285c: 0x0  nop
    ctx->pc = 0x13285cu;
    // NOP
}
