#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00339080
// Address: 0x339080 - 0x339330
void sub_00339080_0x339080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339080_0x339080");
#endif

    switch (ctx->pc) {
        case 0x339080u: goto label_339080;
        case 0x339084u: goto label_339084;
        case 0x339088u: goto label_339088;
        case 0x33908cu: goto label_33908c;
        case 0x339090u: goto label_339090;
        case 0x339094u: goto label_339094;
        case 0x339098u: goto label_339098;
        case 0x33909cu: goto label_33909c;
        case 0x3390a0u: goto label_3390a0;
        case 0x3390a4u: goto label_3390a4;
        case 0x3390a8u: goto label_3390a8;
        case 0x3390acu: goto label_3390ac;
        case 0x3390b0u: goto label_3390b0;
        case 0x3390b4u: goto label_3390b4;
        case 0x3390b8u: goto label_3390b8;
        case 0x3390bcu: goto label_3390bc;
        case 0x3390c0u: goto label_3390c0;
        case 0x3390c4u: goto label_3390c4;
        case 0x3390c8u: goto label_3390c8;
        case 0x3390ccu: goto label_3390cc;
        case 0x3390d0u: goto label_3390d0;
        case 0x3390d4u: goto label_3390d4;
        case 0x3390d8u: goto label_3390d8;
        case 0x3390dcu: goto label_3390dc;
        case 0x3390e0u: goto label_3390e0;
        case 0x3390e4u: goto label_3390e4;
        case 0x3390e8u: goto label_3390e8;
        case 0x3390ecu: goto label_3390ec;
        case 0x3390f0u: goto label_3390f0;
        case 0x3390f4u: goto label_3390f4;
        case 0x3390f8u: goto label_3390f8;
        case 0x3390fcu: goto label_3390fc;
        case 0x339100u: goto label_339100;
        case 0x339104u: goto label_339104;
        case 0x339108u: goto label_339108;
        case 0x33910cu: goto label_33910c;
        case 0x339110u: goto label_339110;
        case 0x339114u: goto label_339114;
        case 0x339118u: goto label_339118;
        case 0x33911cu: goto label_33911c;
        case 0x339120u: goto label_339120;
        case 0x339124u: goto label_339124;
        case 0x339128u: goto label_339128;
        case 0x33912cu: goto label_33912c;
        case 0x339130u: goto label_339130;
        case 0x339134u: goto label_339134;
        case 0x339138u: goto label_339138;
        case 0x33913cu: goto label_33913c;
        case 0x339140u: goto label_339140;
        case 0x339144u: goto label_339144;
        case 0x339148u: goto label_339148;
        case 0x33914cu: goto label_33914c;
        case 0x339150u: goto label_339150;
        case 0x339154u: goto label_339154;
        case 0x339158u: goto label_339158;
        case 0x33915cu: goto label_33915c;
        case 0x339160u: goto label_339160;
        case 0x339164u: goto label_339164;
        case 0x339168u: goto label_339168;
        case 0x33916cu: goto label_33916c;
        case 0x339170u: goto label_339170;
        case 0x339174u: goto label_339174;
        case 0x339178u: goto label_339178;
        case 0x33917cu: goto label_33917c;
        case 0x339180u: goto label_339180;
        case 0x339184u: goto label_339184;
        case 0x339188u: goto label_339188;
        case 0x33918cu: goto label_33918c;
        case 0x339190u: goto label_339190;
        case 0x339194u: goto label_339194;
        case 0x339198u: goto label_339198;
        case 0x33919cu: goto label_33919c;
        case 0x3391a0u: goto label_3391a0;
        case 0x3391a4u: goto label_3391a4;
        case 0x3391a8u: goto label_3391a8;
        case 0x3391acu: goto label_3391ac;
        case 0x3391b0u: goto label_3391b0;
        case 0x3391b4u: goto label_3391b4;
        case 0x3391b8u: goto label_3391b8;
        case 0x3391bcu: goto label_3391bc;
        case 0x3391c0u: goto label_3391c0;
        case 0x3391c4u: goto label_3391c4;
        case 0x3391c8u: goto label_3391c8;
        case 0x3391ccu: goto label_3391cc;
        case 0x3391d0u: goto label_3391d0;
        case 0x3391d4u: goto label_3391d4;
        case 0x3391d8u: goto label_3391d8;
        case 0x3391dcu: goto label_3391dc;
        case 0x3391e0u: goto label_3391e0;
        case 0x3391e4u: goto label_3391e4;
        case 0x3391e8u: goto label_3391e8;
        case 0x3391ecu: goto label_3391ec;
        case 0x3391f0u: goto label_3391f0;
        case 0x3391f4u: goto label_3391f4;
        case 0x3391f8u: goto label_3391f8;
        case 0x3391fcu: goto label_3391fc;
        case 0x339200u: goto label_339200;
        case 0x339204u: goto label_339204;
        case 0x339208u: goto label_339208;
        case 0x33920cu: goto label_33920c;
        case 0x339210u: goto label_339210;
        case 0x339214u: goto label_339214;
        case 0x339218u: goto label_339218;
        case 0x33921cu: goto label_33921c;
        case 0x339220u: goto label_339220;
        case 0x339224u: goto label_339224;
        case 0x339228u: goto label_339228;
        case 0x33922cu: goto label_33922c;
        case 0x339230u: goto label_339230;
        case 0x339234u: goto label_339234;
        case 0x339238u: goto label_339238;
        case 0x33923cu: goto label_33923c;
        case 0x339240u: goto label_339240;
        case 0x339244u: goto label_339244;
        case 0x339248u: goto label_339248;
        case 0x33924cu: goto label_33924c;
        case 0x339250u: goto label_339250;
        case 0x339254u: goto label_339254;
        case 0x339258u: goto label_339258;
        case 0x33925cu: goto label_33925c;
        case 0x339260u: goto label_339260;
        case 0x339264u: goto label_339264;
        case 0x339268u: goto label_339268;
        case 0x33926cu: goto label_33926c;
        case 0x339270u: goto label_339270;
        case 0x339274u: goto label_339274;
        case 0x339278u: goto label_339278;
        case 0x33927cu: goto label_33927c;
        case 0x339280u: goto label_339280;
        case 0x339284u: goto label_339284;
        case 0x339288u: goto label_339288;
        case 0x33928cu: goto label_33928c;
        case 0x339290u: goto label_339290;
        case 0x339294u: goto label_339294;
        case 0x339298u: goto label_339298;
        case 0x33929cu: goto label_33929c;
        case 0x3392a0u: goto label_3392a0;
        case 0x3392a4u: goto label_3392a4;
        case 0x3392a8u: goto label_3392a8;
        case 0x3392acu: goto label_3392ac;
        case 0x3392b0u: goto label_3392b0;
        case 0x3392b4u: goto label_3392b4;
        case 0x3392b8u: goto label_3392b8;
        case 0x3392bcu: goto label_3392bc;
        case 0x3392c0u: goto label_3392c0;
        case 0x3392c4u: goto label_3392c4;
        case 0x3392c8u: goto label_3392c8;
        case 0x3392ccu: goto label_3392cc;
        case 0x3392d0u: goto label_3392d0;
        case 0x3392d4u: goto label_3392d4;
        case 0x3392d8u: goto label_3392d8;
        case 0x3392dcu: goto label_3392dc;
        case 0x3392e0u: goto label_3392e0;
        case 0x3392e4u: goto label_3392e4;
        case 0x3392e8u: goto label_3392e8;
        case 0x3392ecu: goto label_3392ec;
        case 0x3392f0u: goto label_3392f0;
        case 0x3392f4u: goto label_3392f4;
        case 0x3392f8u: goto label_3392f8;
        case 0x3392fcu: goto label_3392fc;
        case 0x339300u: goto label_339300;
        case 0x339304u: goto label_339304;
        case 0x339308u: goto label_339308;
        case 0x33930cu: goto label_33930c;
        case 0x339310u: goto label_339310;
        case 0x339314u: goto label_339314;
        case 0x339318u: goto label_339318;
        case 0x33931cu: goto label_33931c;
        case 0x339320u: goto label_339320;
        case 0x339324u: goto label_339324;
        case 0x339328u: goto label_339328;
        case 0x33932cu: goto label_33932c;
        default: break;
    }

    ctx->pc = 0x339080u;

label_339080:
    // 0x339080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x339080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_339084:
    // 0x339084: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x339084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_339088:
    // 0x339088: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x339088u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33908c:
    // 0x33908c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x33908cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_339090:
    // 0x339090: 0x8c6300c8  lw          $v1, 0xC8($v1)
    ctx->pc = 0x339090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 200)));
label_339094:
    // 0x339094: 0xc4620544  lwc1        $f2, 0x544($v1)
    ctx->pc = 0x339094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_339098:
    // 0x339098: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x339098u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_33909c:
    // 0x33909c: 0x4503001f  bc1tl       . + 4 + (0x1F << 2)
label_3390a0:
    if (ctx->pc == 0x3390A0u) {
        ctx->pc = 0x3390A0u;
            // 0x3390a0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x3390A4u;
        goto label_3390a4;
    }
    ctx->pc = 0x33909Cu;
    {
        const bool branch_taken_0x33909c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33909c) {
            ctx->pc = 0x3390A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33909Cu;
            // 0x3390a0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33911Cu;
            goto label_33911c;
        }
    }
    ctx->pc = 0x3390A4u;
label_3390a4:
    // 0x3390a4: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x3390a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_3390a8:
    // 0x3390a8: 0x3c09447a  lui         $t1, 0x447A
    ctx->pc = 0x3390a8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17530 << 16));
label_3390ac:
    // 0x3390ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3390acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3390b0:
    // 0x3390b0: 0x806511aa  lb          $a1, 0x11AA($v1)
    ctx->pc = 0x3390b0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4522)));
label_3390b4:
    // 0x3390b4: 0x46001043  div.s       $f1, $f2, $f0
    ctx->pc = 0x3390b4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[0];
label_3390b8:
    // 0x3390b8: 0x246402c0  addiu       $a0, $v1, 0x2C0
    ctx->pc = 0x3390b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 704));
label_3390bc:
    // 0x3390bc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3390bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3390c0:
    // 0x3390c0: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x3390c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3390c4:
    // 0x3390c4: 0x8c43d130  lw          $v1, -0x2ED0($v0)
    ctx->pc = 0x3390c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3390c8:
    // 0x3390c8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x3390c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3390cc:
    // 0x3390cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3390ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3390d0:
    // 0x3390d0: 0x8c660130  lw          $a2, 0x130($v1)
    ctx->pc = 0x3390d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_3390d4:
    // 0x3390d4: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x3390d4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3390d8:
    // 0x3390d8: 0x0  nop
    ctx->pc = 0x3390d8u;
    // NOP
label_3390dc:
    // 0x3390dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3390dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3390e0:
    // 0x3390e0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3390e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3390e4:
    // 0x3390e4: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x3390e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_3390e8:
    // 0x3390e8: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3390e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3390ec:
    // 0x3390ec: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3390ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3390f0:
    // 0x3390f0: 0x0  nop
    ctx->pc = 0x3390f0u;
    // NOP
label_3390f4:
    // 0x3390f4: 0x67001a  div         $zero, $v1, $a3
    ctx->pc = 0x3390f4u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3390f8:
    // 0x3390f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3390f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3390fc:
    // 0x3390fc: 0x0  nop
    ctx->pc = 0x3390fcu;
    // NOP
label_339100:
    // 0x339100: 0x1810  mfhi        $v1
    ctx->pc = 0x339100u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_339104:
    // 0x339104: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x339104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_339108:
    // 0x339108: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x339108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33910c:
    // 0x33910c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x33910cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_339110:
    // 0x339110: 0xc156a54  jal         func_55A950
label_339114:
    if (ctx->pc == 0x339114u) {
        ctx->pc = 0x339114u;
            // 0x339114: 0x1223821  addu        $a3, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->pc = 0x339118u;
        goto label_339118;
    }
    ctx->pc = 0x339110u;
    SET_GPR_U32(ctx, 31, 0x339118u);
    ctx->pc = 0x339114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x339110u;
            // 0x339114: 0x1223821  addu        $a3, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55A950u;
    if (runtime->hasFunction(0x55A950u)) {
        auto targetFn = runtime->lookupFunction(0x55A950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339118u; }
        if (ctx->pc != 0x339118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055A950_0x55a950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339118u; }
        if (ctx->pc != 0x339118u) { return; }
    }
    ctx->pc = 0x339118u;
label_339118:
    // 0x339118: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x339118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33911c:
    // 0x33911c: 0x3e00008  jr          $ra
label_339120:
    if (ctx->pc == 0x339120u) {
        ctx->pc = 0x339120u;
            // 0x339120: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x339124u;
        goto label_339124;
    }
    ctx->pc = 0x33911Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33911Cu;
            // 0x339120: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x339124u;
label_339124:
    // 0x339124: 0x0  nop
    ctx->pc = 0x339124u;
    // NOP
label_339128:
    // 0x339128: 0x0  nop
    ctx->pc = 0x339128u;
    // NOP
label_33912c:
    // 0x33912c: 0x0  nop
    ctx->pc = 0x33912cu;
    // NOP
label_339130:
    // 0x339130: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x339130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_339134:
    // 0x339134: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x339134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_339138:
    // 0x339138: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x339138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_33913c:
    // 0x33913c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x33913cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_339140:
    // 0x339140: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x339140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_339144:
    // 0x339144: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x339144u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_339148:
    // 0x339148: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x339148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_33914c:
    // 0x33914c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x33914cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_339150:
    // 0x339150: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x339150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_339154:
    // 0x339154: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x339154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_339158:
    // 0x339158: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x339158u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_33915c:
    // 0x33915c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x33915cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_339160:
    // 0x339160: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x339160u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_339164:
    // 0x339164: 0x8c920010  lw          $s2, 0x10($a0)
    ctx->pc = 0x339164u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_339168:
    // 0x339168: 0x8c51e378  lw          $s1, -0x1C88($v0)
    ctx->pc = 0x339168u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_33916c:
    // 0x33916c: 0xc68c0020  lwc1        $f12, 0x20($s4)
    ctx->pc = 0x33916cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_339170:
    // 0x339170: 0xc68d0024  lwc1        $f13, 0x24($s4)
    ctx->pc = 0x339170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_339174:
    // 0x339174: 0xc68e0028  lwc1        $f14, 0x28($s4)
    ctx->pc = 0x339174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_339178:
    // 0x339178: 0xc04ce64  jal         func_133990
label_33917c:
    if (ctx->pc == 0x33917Cu) {
        ctx->pc = 0x33917Cu;
            // 0x33917c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x339180u;
        goto label_339180;
    }
    ctx->pc = 0x339178u;
    SET_GPR_U32(ctx, 31, 0x339180u);
    ctx->pc = 0x33917Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x339178u;
            // 0x33917c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339180u; }
        if (ctx->pc != 0x339180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339180u; }
        if (ctx->pc != 0x339180u) { return; }
    }
    ctx->pc = 0x339180u;
label_339180:
    // 0x339180: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x339180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_339184:
    // 0x339184: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x339184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_339188:
    // 0x339188: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x339188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_33918c:
    // 0x33918c: 0xc6820030  lwc1        $f2, 0x30($s4)
    ctx->pc = 0x33918cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_339190:
    // 0x339190: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x339190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_339194:
    // 0x339194: 0xc6810034  lwc1        $f1, 0x34($s4)
    ctx->pc = 0x339194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_339198:
    // 0x339198: 0xc6800038  lwc1        $f0, 0x38($s4)
    ctx->pc = 0x339198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_33919c:
    // 0x33919c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x33919cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_3391a0:
    // 0x3391a0: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x3391a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_3391a4:
    // 0x3391a4: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x3391a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_3391a8:
    // 0x3391a8: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3391a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_3391ac:
    // 0x3391ac: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3391acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3391b0:
    // 0x3391b0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3391b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3391b4:
    // 0x3391b4: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x3391b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_3391b8:
    // 0x3391b8: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x3391b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_3391bc:
    // 0x3391bc: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x3391bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_3391c0:
    // 0x3391c0: 0xc04ce30  jal         func_1338C0
label_3391c4:
    if (ctx->pc == 0x3391C4u) {
        ctx->pc = 0x3391C4u;
            // 0x3391c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3391C8u;
        goto label_3391c8;
    }
    ctx->pc = 0x3391C0u;
    SET_GPR_U32(ctx, 31, 0x3391C8u);
    ctx->pc = 0x3391C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3391C0u;
            // 0x3391c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1338C0u;
    if (runtime->hasFunction(0x1338C0u)) {
        auto targetFn = runtime->lookupFunction(0x1338C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3391C8u; }
        if (ctx->pc != 0x3391C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001338C0_0x1338c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3391C8u; }
        if (ctx->pc != 0x3391C8u) { return; }
    }
    ctx->pc = 0x3391C8u;
label_3391c8:
    // 0x3391c8: 0xc68c003c  lwc1        $f12, 0x3C($s4)
    ctx->pc = 0x3391c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3391cc:
    // 0x3391cc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3391ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3391d0:
    // 0x3391d0: 0xc68d0040  lwc1        $f13, 0x40($s4)
    ctx->pc = 0x3391d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3391d4:
    // 0x3391d4: 0xc68e0044  lwc1        $f14, 0x44($s4)
    ctx->pc = 0x3391d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_3391d8:
    // 0x3391d8: 0xc04ce50  jal         func_133940
label_3391dc:
    if (ctx->pc == 0x3391DCu) {
        ctx->pc = 0x3391DCu;
            // 0x3391dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3391E0u;
        goto label_3391e0;
    }
    ctx->pc = 0x3391D8u;
    SET_GPR_U32(ctx, 31, 0x3391E0u);
    ctx->pc = 0x3391DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3391D8u;
            // 0x3391dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3391E0u; }
        if (ctx->pc != 0x3391E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3391E0u; }
        if (ctx->pc != 0x3391E0u) { return; }
    }
    ctx->pc = 0x3391E0u;
label_3391e0:
    // 0x3391e0: 0xc68d0050  lwc1        $f13, 0x50($s4)
    ctx->pc = 0x3391e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3391e4:
    // 0x3391e4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3391e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3391e8:
    // 0x3391e8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3391e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3391ec:
    // 0x3391ec: 0xc04f3fc  jal         func_13CFF0
label_3391f0:
    if (ctx->pc == 0x3391F0u) {
        ctx->pc = 0x3391F0u;
            // 0x3391f0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3391F4u;
        goto label_3391f4;
    }
    ctx->pc = 0x3391ECu;
    SET_GPR_U32(ctx, 31, 0x3391F4u);
    ctx->pc = 0x3391F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3391ECu;
            // 0x3391f0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3391F4u; }
        if (ctx->pc != 0x3391F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3391F4u; }
        if (ctx->pc != 0x3391F4u) { return; }
    }
    ctx->pc = 0x3391F4u;
label_3391f4:
    // 0x3391f4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3391f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3391f8:
    // 0x3391f8: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x3391f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3391fc:
    // 0x3391fc: 0xc04cd60  jal         func_133580
label_339200:
    if (ctx->pc == 0x339200u) {
        ctx->pc = 0x339200u;
            // 0x339200: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x339204u;
        goto label_339204;
    }
    ctx->pc = 0x3391FCu;
    SET_GPR_U32(ctx, 31, 0x339204u);
    ctx->pc = 0x339200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3391FCu;
            // 0x339200: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339204u; }
        if (ctx->pc != 0x339204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339204u; }
        if (ctx->pc != 0x339204u) { return; }
    }
    ctx->pc = 0x339204u;
label_339204:
    // 0x339204: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x339204u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_339208:
    // 0x339208: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x339208u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_33920c:
    // 0x33920c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x33920cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_339210:
    // 0x339210: 0x320f809  jalr        $t9
label_339214:
    if (ctx->pc == 0x339214u) {
        ctx->pc = 0x339214u;
            // 0x339214: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x339218u;
        goto label_339218;
    }
    ctx->pc = 0x339210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x339218u);
        ctx->pc = 0x339214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x339210u;
            // 0x339214: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x339218u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x339218u; }
            if (ctx->pc != 0x339218u) { return; }
        }
        }
    }
    ctx->pc = 0x339218u;
label_339218:
    // 0x339218: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x339218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_33921c:
    // 0x33921c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33921cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_339220:
    // 0x339220: 0x0  nop
    ctx->pc = 0x339220u;
    // NOP
label_339224:
    // 0x339224: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x339224u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_339228:
    // 0x339228: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_33922c:
    if (ctx->pc == 0x33922Cu) {
        ctx->pc = 0x33922Cu;
            // 0x33922c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x339230u;
        goto label_339230;
    }
    ctx->pc = 0x339228u;
    {
        const bool branch_taken_0x339228 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33922Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x339228u;
            // 0x33922c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x339228) {
            ctx->pc = 0x33923Cu;
            goto label_33923c;
        }
    }
    ctx->pc = 0x339230u;
label_339230:
    // 0x339230: 0xc0747dc  jal         func_1D1F70
label_339234:
    if (ctx->pc == 0x339234u) {
        ctx->pc = 0x339234u;
            // 0x339234: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x339238u;
        goto label_339238;
    }
    ctx->pc = 0x339230u;
    SET_GPR_U32(ctx, 31, 0x339238u);
    ctx->pc = 0x339234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x339230u;
            // 0x339234: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1F70u;
    if (runtime->hasFunction(0x1D1F70u)) {
        auto targetFn = runtime->lookupFunction(0x1D1F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339238u; }
        if (ctx->pc != 0x339238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1F70_0x1d1f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339238u; }
        if (ctx->pc != 0x339238u) { return; }
    }
    ctx->pc = 0x339238u;
label_339238:
    // 0x339238: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x339238u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_33923c:
    // 0x33923c: 0xc04e738  jal         func_139CE0
label_339240:
    if (ctx->pc == 0x339240u) {
        ctx->pc = 0x339240u;
            // 0x339240: 0x8e840014  lw          $a0, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->pc = 0x339244u;
        goto label_339244;
    }
    ctx->pc = 0x33923Cu;
    SET_GPR_U32(ctx, 31, 0x339244u);
    ctx->pc = 0x339240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33923Cu;
            // 0x339240: 0x8e840014  lw          $a0, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339244u; }
        if (ctx->pc != 0x339244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339244u; }
        if (ctx->pc != 0x339244u) { return; }
    }
    ctx->pc = 0x339244u;
label_339244:
    // 0x339244: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x339244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_339248:
    // 0x339248: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x339248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33924c:
    // 0x33924c: 0xc04e4a4  jal         func_139290
label_339250:
    if (ctx->pc == 0x339250u) {
        ctx->pc = 0x339250u;
            // 0x339250: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x339254u;
        goto label_339254;
    }
    ctx->pc = 0x33924Cu;
    SET_GPR_U32(ctx, 31, 0x339254u);
    ctx->pc = 0x339250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33924Cu;
            // 0x339250: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339254u; }
        if (ctx->pc != 0x339254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339254u; }
        if (ctx->pc != 0x339254u) { return; }
    }
    ctx->pc = 0x339254u;
label_339254:
    // 0x339254: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x339254u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_339258:
    // 0x339258: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x339258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_33925c:
    // 0x33925c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x33925cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_339260:
    // 0x339260: 0x320f809  jalr        $t9
label_339264:
    if (ctx->pc == 0x339264u) {
        ctx->pc = 0x339264u;
            // 0x339264: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x339268u;
        goto label_339268;
    }
    ctx->pc = 0x339260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x339268u);
        ctx->pc = 0x339264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x339260u;
            // 0x339264: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x339268u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x339268u; }
            if (ctx->pc != 0x339268u) { return; }
        }
        }
    }
    ctx->pc = 0x339268u;
label_339268:
    // 0x339268: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x339268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_33926c:
    // 0x33926c: 0x8c8200c8  lw          $v0, 0xC8($a0)
    ctx->pc = 0x33926cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
label_339270:
    // 0x339270: 0x8c420d6c  lw          $v0, 0xD6C($v0)
    ctx->pc = 0x339270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3436)));
label_339274:
    // 0x339274: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x339274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_339278:
    // 0x339278: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x339278u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
label_33927c:
    // 0x33927c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x33927cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_339280:
    // 0x339280: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x339280u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_339284:
    // 0x339284: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_339288:
    if (ctx->pc == 0x339288u) {
        ctx->pc = 0x339288u;
            // 0x339288: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x33928Cu;
        goto label_33928c;
    }
    ctx->pc = 0x339284u;
    {
        const bool branch_taken_0x339284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339284) {
            ctx->pc = 0x339288u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x339284u;
            // 0x339288: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3392A0u;
            goto label_3392a0;
        }
    }
    ctx->pc = 0x33928Cu;
label_33928c:
    // 0x33928c: 0xc0bd780  jal         func_2F5E00
label_339290:
    if (ctx->pc == 0x339290u) {
        ctx->pc = 0x339294u;
        goto label_339294;
    }
    ctx->pc = 0x33928Cu;
    SET_GPR_U32(ctx, 31, 0x339294u);
    ctx->pc = 0x2F5E00u;
    if (runtime->hasFunction(0x2F5E00u)) {
        auto targetFn = runtime->lookupFunction(0x2F5E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339294u; }
        if (ctx->pc != 0x339294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5E00_0x2f5e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339294u; }
        if (ctx->pc != 0x339294u) { return; }
    }
    ctx->pc = 0x339294u;
label_339294:
    // 0x339294: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x339294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
label_339298:
    // 0x339298: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x339298u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_33929c:
    // 0x33929c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x33929cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3392a0:
    // 0x3392a0: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x3392a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_3392a4:
    // 0x3392a4: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x3392a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_3392a8:
    // 0x3392a8: 0x2031825  or          $v1, $s0, $v1
    ctx->pc = 0x3392a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
label_3392ac:
    // 0x3392ac: 0x2634025  or          $t0, $s3, $v1
    ctx->pc = 0x3392acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
label_3392b0:
    // 0x3392b0: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x3392b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_3392b4:
    // 0x3392b4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_3392b8:
    if (ctx->pc == 0x3392B8u) {
        ctx->pc = 0x3392B8u;
            // 0x3392b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3392BCu;
        goto label_3392bc;
    }
    ctx->pc = 0x3392B4u;
    {
        const bool branch_taken_0x3392b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3392b4) {
            ctx->pc = 0x3392B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3392B4u;
            // 0x3392b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3392D8u;
            goto label_3392d8;
        }
    }
    ctx->pc = 0x3392BCu;
label_3392bc:
    // 0x3392bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3392bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3392c0:
    // 0x3392c0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3392c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3392c4:
    // 0x3392c4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x3392c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3392c8:
    // 0x3392c8: 0xc055234  jal         func_1548D0
label_3392cc:
    if (ctx->pc == 0x3392CCu) {
        ctx->pc = 0x3392CCu;
            // 0x3392cc: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->pc = 0x3392D0u;
        goto label_3392d0;
    }
    ctx->pc = 0x3392C8u;
    SET_GPR_U32(ctx, 31, 0x3392D0u);
    ctx->pc = 0x3392CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3392C8u;
            // 0x3392cc: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1548D0u;
    if (runtime->hasFunction(0x1548D0u)) {
        auto targetFn = runtime->lookupFunction(0x1548D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3392D0u; }
        if (ctx->pc != 0x3392D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001548D0_0x1548d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3392D0u; }
        if (ctx->pc != 0x3392D0u) { return; }
    }
    ctx->pc = 0x3392D0u;
label_3392d0:
    // 0x3392d0: 0x10000006  b           . + 4 + (0x6 << 2)
label_3392d4:
    if (ctx->pc == 0x3392D4u) {
        ctx->pc = 0x3392D4u;
            // 0x3392d4: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x3392D8u;
        goto label_3392d8;
    }
    ctx->pc = 0x3392D0u;
    {
        const bool branch_taken_0x3392d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3392D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3392D0u;
            // 0x3392d4: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3392d0) {
            ctx->pc = 0x3392ECu;
            goto label_3392ec;
        }
    }
    ctx->pc = 0x3392D8u;
label_3392d8:
    // 0x3392d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3392d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3392dc:
    // 0x3392dc: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x3392dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3392e0:
    // 0x3392e0: 0xc0550f8  jal         func_1543E0
label_3392e4:
    if (ctx->pc == 0x3392E4u) {
        ctx->pc = 0x3392E4u;
            // 0x3392e4: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->pc = 0x3392E8u;
        goto label_3392e8;
    }
    ctx->pc = 0x3392E0u;
    SET_GPR_U32(ctx, 31, 0x3392E8u);
    ctx->pc = 0x3392E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3392E0u;
            // 0x3392e4: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1543E0u;
    if (runtime->hasFunction(0x1543E0u)) {
        auto targetFn = runtime->lookupFunction(0x1543E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3392E8u; }
        if (ctx->pc != 0x3392E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001543E0_0x1543e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3392E8u; }
        if (ctx->pc != 0x3392E8u) { return; }
    }
    ctx->pc = 0x3392E8u;
label_3392e8:
    // 0x3392e8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3392e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3392ec:
    // 0x3392ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3392ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3392f0:
    // 0x3392f0: 0x0  nop
    ctx->pc = 0x3392f0u;
    // NOP
label_3392f4:
    // 0x3392f4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3392f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3392f8:
    // 0x3392f8: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_3392fc:
    if (ctx->pc == 0x3392FCu) {
        ctx->pc = 0x3392FCu;
            // 0x3392fc: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x339300u;
        goto label_339300;
    }
    ctx->pc = 0x3392F8u;
    {
        const bool branch_taken_0x3392f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3392f8) {
            ctx->pc = 0x3392FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3392F8u;
            // 0x3392fc: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33930Cu;
            goto label_33930c;
        }
    }
    ctx->pc = 0x339300u;
label_339300:
    // 0x339300: 0xc0747d0  jal         func_1D1F40
label_339304:
    if (ctx->pc == 0x339304u) {
        ctx->pc = 0x339308u;
        goto label_339308;
    }
    ctx->pc = 0x339300u;
    SET_GPR_U32(ctx, 31, 0x339308u);
    ctx->pc = 0x1D1F40u;
    if (runtime->hasFunction(0x1D1F40u)) {
        auto targetFn = runtime->lookupFunction(0x1D1F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339308u; }
        if (ctx->pc != 0x339308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1F40_0x1d1f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339308u; }
        if (ctx->pc != 0x339308u) { return; }
    }
    ctx->pc = 0x339308u;
label_339308:
    // 0x339308: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x339308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_33930c:
    // 0x33930c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x33930cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_339310:
    // 0x339310: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x339310u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_339314:
    // 0x339314: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x339314u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_339318:
    // 0x339318: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x339318u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_33931c:
    // 0x33931c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x33931cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_339320:
    // 0x339320: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x339320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_339324:
    // 0x339324: 0x3e00008  jr          $ra
label_339328:
    if (ctx->pc == 0x339328u) {
        ctx->pc = 0x339328u;
            // 0x339328: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x33932Cu;
        goto label_33932c;
    }
    ctx->pc = 0x339324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x339324u;
            // 0x339328: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33932Cu;
label_33932c:
    // 0x33932c: 0x0  nop
    ctx->pc = 0x33932cu;
    // NOP
}
