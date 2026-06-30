#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00175530
// Address: 0x175530 - 0x175650
void sub_00175530_0x175530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175530_0x175530");
#endif

    switch (ctx->pc) {
        case 0x175568u: goto label_175568;
        case 0x175570u: goto label_175570;
        case 0x175588u: goto label_175588;
        case 0x17562cu: goto label_17562c;
        case 0x175634u: goto label_175634;
        case 0x17563cu: goto label_17563c;
        default: break;
    }

    ctx->pc = 0x175530u;

    // 0x175530: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x175530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x175534: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x175534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x175538: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x175538u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17553c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x17553cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x175540: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x175540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x175544: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x175544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x175548: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x175548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17554c: 0x82630072  lb          $v1, 0x72($s3)
    ctx->pc = 0x17554cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 114)));
    // 0x175550: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x175550u;
    {
        const bool branch_taken_0x175550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x175554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175550u;
            // 0x175554: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175550) {
            ctx->pc = 0x1755F8u;
            goto label_1755f8;
        }
    }
    ctx->pc = 0x175558u;
    // 0x175558: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x175558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x17555c: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x17555cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    // 0x175560: 0xc05baea  jal         func_16EBA8
    ctx->pc = 0x175560u;
    SET_GPR_U32(ctx, 31, 0x175568u);
    ctx->pc = 0x175564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175560u;
            // 0x175564: 0x26103f1c  addiu       $s0, $s0, 0x3F1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16156));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16EBA8u;
    if (runtime->hasFunction(0x16EBA8u)) {
        auto targetFn = runtime->lookupFunction(0x16EBA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175568u; }
        if (ctx->pc != 0x175568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016EBA8_0x16eba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175568u; }
        if (ctx->pc != 0x175568u) { return; }
    }
    ctx->pc = 0x175568u;
label_175568:
    // 0x175568: 0xc05d2aa  jal         func_174AA8
    ctx->pc = 0x175568u;
    SET_GPR_U32(ctx, 31, 0x175570u);
    ctx->pc = 0x17556Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175568u;
            // 0x17556c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174AA8u;
    if (runtime->hasFunction(0x174AA8u)) {
        auto targetFn = runtime->lookupFunction(0x174AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175570u; }
        if (ctx->pc != 0x175570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174AA8_0x174aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175570u; }
        if (ctx->pc != 0x175570u) { return; }
    }
    ctx->pc = 0x175570u;
label_175570:
    // 0x175570: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x175570u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x175574: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x175574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175578: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x175578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x17557c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17557cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175580: 0xc05cdb4  jal         func_1736D0
    ctx->pc = 0x175580u;
    SET_GPR_U32(ctx, 31, 0x175588u);
    ctx->pc = 0x175584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175580u;
            // 0x175584: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1736D0u;
    if (runtime->hasFunction(0x1736D0u)) {
        auto targetFn = runtime->lookupFunction(0x1736D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175588u; }
        if (ctx->pc != 0x175588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001736D0_0x1736d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175588u; }
        if (ctx->pc != 0x175588u) { return; }
    }
    ctx->pc = 0x175588u;
label_175588:
    // 0x175588: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x175588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17558c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x17558cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175590: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x175590u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x175594: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x175594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x175598: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x175598u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x17559c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x17559cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1755a0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1755a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1755a4: 0xc4413f68  lwc1        $f1, 0x3F68($v0)
    ctx->pc = 0x1755a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1755a8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1755a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1755ac: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1755acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x1755b0: 0x0  nop
    ctx->pc = 0x1755b0u;
    // NOP
    // 0x1755b4: 0x0  nop
    ctx->pc = 0x1755b4u;
    // NOP
    // 0x1755b8: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1755b8u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x1755bc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1755bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1755c0: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1755c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1755c4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1755c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1755c8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1755c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1755cc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1755CCu;
    {
        const bool branch_taken_0x1755cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1755D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1755CCu;
            // 0x1755d0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1755cc) {
            ctx->pc = 0x1755E8u;
            goto label_1755e8;
        }
    }
    ctx->pc = 0x1755D4u;
    // 0x1755d4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1755d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1755d8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1755d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1755dc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1755dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1755e0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1755e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1755e4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1755e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1755e8:
    // 0x1755e8: 0xae64009c  sw          $a0, 0x9C($s3)
    ctx->pc = 0x1755e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 4));
    // 0x1755ec: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x1755ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x1755f0: 0x8c649d88  lw          $a0, -0x6278($v1)
    ctx->pc = 0x1755f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942088)));
    // 0x1755f4: 0xae6400a0  sw          $a0, 0xA0($s3)
    ctx->pc = 0x1755f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 4));
label_1755f8:
    // 0x1755f8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1755f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1755fc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1755fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x175600: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x175600u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x175604: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x175604u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x175608: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x175608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17560c: 0x3e00008  jr          $ra
    ctx->pc = 0x17560Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17560Cu;
            // 0x175610: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175614u;
    // 0x175614: 0x0  nop
    ctx->pc = 0x175614u;
    // NOP
    // 0x175618: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17561c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17561cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175620: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x175620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x175624: 0xc0599de  jal         func_166778
    ctx->pc = 0x175624u;
    SET_GPR_U32(ctx, 31, 0x17562Cu);
    ctx->pc = 0x175628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175624u;
            // 0x175628: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17562Cu; }
        if (ctx->pc != 0x17562Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17562Cu; }
        if (ctx->pc != 0x17562Cu) { return; }
    }
    ctx->pc = 0x17562Cu;
label_17562c:
    // 0x17562c: 0xc05d594  jal         func_175650
    ctx->pc = 0x17562Cu;
    SET_GPR_U32(ctx, 31, 0x175634u);
    ctx->pc = 0x175630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17562Cu;
            // 0x175630: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175650u;
    if (runtime->hasFunction(0x175650u)) {
        auto targetFn = runtime->lookupFunction(0x175650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175634u; }
        if (ctx->pc != 0x175634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175650_0x175650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175634u; }
        if (ctx->pc != 0x175634u) { return; }
    }
    ctx->pc = 0x175634u;
label_175634:
    // 0x175634: 0xc0599e0  jal         func_166780
    ctx->pc = 0x175634u;
    SET_GPR_U32(ctx, 31, 0x17563Cu);
    ctx->pc = 0x175638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175634u;
            // 0x175638: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17563Cu; }
        if (ctx->pc != 0x17563Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166780_0x166780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17563Cu; }
        if (ctx->pc != 0x17563Cu) { return; }
    }
    ctx->pc = 0x17563Cu;
label_17563c:
    // 0x17563c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17563cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175640: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x175640u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175644: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x175644u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175648: 0x3e00008  jr          $ra
    ctx->pc = 0x175648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17564Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175648u;
            // 0x17564c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175650u;
}
