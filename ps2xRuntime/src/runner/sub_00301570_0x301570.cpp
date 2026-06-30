#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00301570
// Address: 0x301570 - 0x3016e0
void sub_00301570_0x301570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00301570_0x301570");
#endif

    switch (ctx->pc) {
        case 0x3015f0u: goto label_3015f0;
        case 0x3015f8u: goto label_3015f8;
        case 0x3016c8u: goto label_3016c8;
        default: break;
    }

    ctx->pc = 0x301570u;

    // 0x301570: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x301570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x301574: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x301574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x301578: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x301578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x30157c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30157cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x301580: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x301580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x301584: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x301584u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301588: 0xc48202c0  lwc1        $f2, 0x2C0($a0)
    ctx->pc = 0x301588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30158c: 0x8c500e80  lw          $s0, 0xE80($v0)
    ctx->pc = 0x30158cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x301590: 0xc48102c4  lwc1        $f1, 0x2C4($a0)
    ctx->pc = 0x301590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301594: 0xc48002c8  lwc1        $f0, 0x2C8($a0)
    ctx->pc = 0x301594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301598: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x301598u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x30159c: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x30159cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x3015a0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x3015a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x3015a4: 0x8e020968  lw          $v0, 0x968($s0)
    ctx->pc = 0x3015a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2408)));
    // 0x3015a8: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x3015a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x3015ac: 0x2c41000c  sltiu       $at, $v0, 0xC
    ctx->pc = 0x3015acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x3015b0: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x3015B0u;
    {
        const bool branch_taken_0x3015b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3015B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3015B0u;
            // 0x3015b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3015b0) {
            ctx->pc = 0x3015D0u;
            goto label_3015d0;
        }
    }
    ctx->pc = 0x3015B8u;
    // 0x3015b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3015b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3015bc: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x3015bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x3015c0: 0x30420905  andi        $v0, $v0, 0x905
    ctx->pc = 0x3015c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2309);
    // 0x3015c4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3015C4u;
    {
        const bool branch_taken_0x3015c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3015c4) {
            ctx->pc = 0x3015C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3015C4u;
            // 0x3015c8: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3015D4u;
            goto label_3015d4;
        }
    }
    ctx->pc = 0x3015CCu;
    // 0x3015cc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3015ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3015d0:
    // 0x3015d0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x3015d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3015d4:
    // 0x3015d4: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3015d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x3015d8: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x3015d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
    // 0x3015dc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3015dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3015e0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3015e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3015e4: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x3015e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3015e8: 0xc04cca0  jal         func_133280
    ctx->pc = 0x3015E8u;
    SET_GPR_U32(ctx, 31, 0x3015F0u);
    ctx->pc = 0x3015ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3015E8u;
            // 0x3015ec: 0x26250890  addiu       $a1, $s1, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3015F0u; }
        if (ctx->pc != 0x3015F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3015F0u; }
        if (ctx->pc != 0x3015F0u) { return; }
    }
    ctx->pc = 0x3015F0u;
label_3015f0:
    // 0x3015f0: 0xc040180  jal         func_100600
    ctx->pc = 0x3015F0u;
    SET_GPR_U32(ctx, 31, 0x3015F8u);
    ctx->pc = 0x3015F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3015F0u;
            // 0x3015f4: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3015F8u; }
        if (ctx->pc != 0x3015F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3015F8u; }
        if (ctx->pc != 0x3015F8u) { return; }
    }
    ctx->pc = 0x3015F8u;
label_3015f8:
    // 0x3015f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3015f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3015fc: 0x50800033  beql        $a0, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x3015FCu;
    {
        const bool branch_taken_0x3015fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3015fc) {
            ctx->pc = 0x301600u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3015FCu;
            // 0x301600: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3016CCu;
            goto label_3016cc;
        }
    }
    ctx->pc = 0x301604u;
    // 0x301604: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x301604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x301608: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x301608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x30160c: 0xc4412678  lwc1        $f1, 0x2678($v0)
    ctx->pc = 0x30160cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 9848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301610: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x301610u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x301614: 0x0  nop
    ctx->pc = 0x301614u;
    // NOP
    // 0x301618: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x301618u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30161c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x30161Cu;
    {
        const bool branch_taken_0x30161c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30161c) {
            ctx->pc = 0x301620u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30161Cu;
            // 0x301620: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x301634u;
            goto label_301634;
        }
    }
    ctx->pc = 0x301624u;
    // 0x301624: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x301624u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x301628: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x301628u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x30162c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30162Cu;
    {
        const bool branch_taken_0x30162c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30162c) {
            ctx->pc = 0x301648u;
            goto label_301648;
        }
    }
    ctx->pc = 0x301634u;
label_301634:
    // 0x301634: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x301634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x301638: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x301638u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x30163c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x30163cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x301640: 0x0  nop
    ctx->pc = 0x301640u;
    // NOP
    // 0x301644: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x301644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_301648:
    // 0x301648: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x301648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x30164c: 0x3c090064  lui         $t1, 0x64
    ctx->pc = 0x30164cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)100 << 16));
    // 0x301650: 0x24422640  addiu       $v0, $v0, 0x2640
    ctx->pc = 0x301650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9792));
    // 0x301654: 0x25292650  addiu       $t1, $t1, 0x2650
    ctx->pc = 0x301654u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 9808));
    // 0x301658: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x301658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x30165c: 0x26270890  addiu       $a3, $s1, 0x890
    ctx->pc = 0x30165cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
    // 0x301660: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x301660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x301664: 0x3c02c47a  lui         $v0, 0xC47A
    ctx->pc = 0x301664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50298 << 16));
    // 0x301668: 0x8e05095c  lw          $a1, 0x95C($s0)
    ctx->pc = 0x301668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2396)));
    // 0x30166c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x30166cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x301670: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x301670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x301674: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x301674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x301678: 0x344670a4  ori         $a2, $v0, 0x70A4
    ctx->pc = 0x301678u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x30167c: 0x27ab0040  addiu       $t3, $sp, 0x40
    ctx->pc = 0x30167cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x301680: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x301680u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x301684: 0x3c02bf33  lui         $v0, 0xBF33
    ctx->pc = 0x301684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48947 << 16));
    // 0x301688: 0x2ca80001  sltiu       $t0, $a1, 0x1
    ctx->pc = 0x301688u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x30168c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x30168cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x301690: 0x44866800  mtc1        $a2, $f13
    ctx->pc = 0x301690u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x301694: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x301694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301698: 0x83040  sll         $a2, $t0, 1
    ctx->pc = 0x301698u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x30169c: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x30169cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x3016a0: 0x85080  sll         $t2, $t0, 2
    ctx->pc = 0x3016a0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x3016a4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3016a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3016a8: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x3016a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x3016ac: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x3016acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3016b0: 0x3c0a0064  lui         $t2, 0x64
    ctx->pc = 0x3016b0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)100 << 16));
    // 0x3016b4: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x3016b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3016b8: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x3016b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x3016bc: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x3016bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x3016c0: 0xc0db488  jal         func_36D220
    ctx->pc = 0x3016C0u;
    SET_GPR_U32(ctx, 31, 0x3016C8u);
    ctx->pc = 0x3016C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3016C0u;
            // 0x3016c4: 0x254a2668  addiu       $t2, $t2, 0x2668 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 9832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36D220u;
    if (runtime->hasFunction(0x36D220u)) {
        auto targetFn = runtime->lookupFunction(0x36D220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3016C8u; }
        if (ctx->pc != 0x3016C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036D220_0x36d220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3016C8u; }
        if (ctx->pc != 0x3016C8u) { return; }
    }
    ctx->pc = 0x3016C8u;
label_3016c8:
    // 0x3016c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3016c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3016cc:
    // 0x3016cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3016ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3016d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3016d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3016d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3016D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3016D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3016D4u;
            // 0x3016d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3016DCu;
    // 0x3016dc: 0x0  nop
    ctx->pc = 0x3016dcu;
    // NOP
}
