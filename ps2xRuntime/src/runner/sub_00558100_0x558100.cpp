#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00558100
// Address: 0x558100 - 0x558430
void sub_00558100_0x558100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00558100_0x558100");
#endif

    switch (ctx->pc) {
        case 0x558100u: goto label_558100;
        case 0x558104u: goto label_558104;
        case 0x558108u: goto label_558108;
        case 0x55810cu: goto label_55810c;
        case 0x558110u: goto label_558110;
        case 0x558114u: goto label_558114;
        case 0x558118u: goto label_558118;
        case 0x55811cu: goto label_55811c;
        case 0x558120u: goto label_558120;
        case 0x558124u: goto label_558124;
        case 0x558128u: goto label_558128;
        case 0x55812cu: goto label_55812c;
        case 0x558130u: goto label_558130;
        case 0x558134u: goto label_558134;
        case 0x558138u: goto label_558138;
        case 0x55813cu: goto label_55813c;
        case 0x558140u: goto label_558140;
        case 0x558144u: goto label_558144;
        case 0x558148u: goto label_558148;
        case 0x55814cu: goto label_55814c;
        case 0x558150u: goto label_558150;
        case 0x558154u: goto label_558154;
        case 0x558158u: goto label_558158;
        case 0x55815cu: goto label_55815c;
        case 0x558160u: goto label_558160;
        case 0x558164u: goto label_558164;
        case 0x558168u: goto label_558168;
        case 0x55816cu: goto label_55816c;
        case 0x558170u: goto label_558170;
        case 0x558174u: goto label_558174;
        case 0x558178u: goto label_558178;
        case 0x55817cu: goto label_55817c;
        case 0x558180u: goto label_558180;
        case 0x558184u: goto label_558184;
        case 0x558188u: goto label_558188;
        case 0x55818cu: goto label_55818c;
        case 0x558190u: goto label_558190;
        case 0x558194u: goto label_558194;
        case 0x558198u: goto label_558198;
        case 0x55819cu: goto label_55819c;
        case 0x5581a0u: goto label_5581a0;
        case 0x5581a4u: goto label_5581a4;
        case 0x5581a8u: goto label_5581a8;
        case 0x5581acu: goto label_5581ac;
        case 0x5581b0u: goto label_5581b0;
        case 0x5581b4u: goto label_5581b4;
        case 0x5581b8u: goto label_5581b8;
        case 0x5581bcu: goto label_5581bc;
        case 0x5581c0u: goto label_5581c0;
        case 0x5581c4u: goto label_5581c4;
        case 0x5581c8u: goto label_5581c8;
        case 0x5581ccu: goto label_5581cc;
        case 0x5581d0u: goto label_5581d0;
        case 0x5581d4u: goto label_5581d4;
        case 0x5581d8u: goto label_5581d8;
        case 0x5581dcu: goto label_5581dc;
        case 0x5581e0u: goto label_5581e0;
        case 0x5581e4u: goto label_5581e4;
        case 0x5581e8u: goto label_5581e8;
        case 0x5581ecu: goto label_5581ec;
        case 0x5581f0u: goto label_5581f0;
        case 0x5581f4u: goto label_5581f4;
        case 0x5581f8u: goto label_5581f8;
        case 0x5581fcu: goto label_5581fc;
        case 0x558200u: goto label_558200;
        case 0x558204u: goto label_558204;
        case 0x558208u: goto label_558208;
        case 0x55820cu: goto label_55820c;
        case 0x558210u: goto label_558210;
        case 0x558214u: goto label_558214;
        case 0x558218u: goto label_558218;
        case 0x55821cu: goto label_55821c;
        case 0x558220u: goto label_558220;
        case 0x558224u: goto label_558224;
        case 0x558228u: goto label_558228;
        case 0x55822cu: goto label_55822c;
        case 0x558230u: goto label_558230;
        case 0x558234u: goto label_558234;
        case 0x558238u: goto label_558238;
        case 0x55823cu: goto label_55823c;
        case 0x558240u: goto label_558240;
        case 0x558244u: goto label_558244;
        case 0x558248u: goto label_558248;
        case 0x55824cu: goto label_55824c;
        case 0x558250u: goto label_558250;
        case 0x558254u: goto label_558254;
        case 0x558258u: goto label_558258;
        case 0x55825cu: goto label_55825c;
        case 0x558260u: goto label_558260;
        case 0x558264u: goto label_558264;
        case 0x558268u: goto label_558268;
        case 0x55826cu: goto label_55826c;
        case 0x558270u: goto label_558270;
        case 0x558274u: goto label_558274;
        case 0x558278u: goto label_558278;
        case 0x55827cu: goto label_55827c;
        case 0x558280u: goto label_558280;
        case 0x558284u: goto label_558284;
        case 0x558288u: goto label_558288;
        case 0x55828cu: goto label_55828c;
        case 0x558290u: goto label_558290;
        case 0x558294u: goto label_558294;
        case 0x558298u: goto label_558298;
        case 0x55829cu: goto label_55829c;
        case 0x5582a0u: goto label_5582a0;
        case 0x5582a4u: goto label_5582a4;
        case 0x5582a8u: goto label_5582a8;
        case 0x5582acu: goto label_5582ac;
        case 0x5582b0u: goto label_5582b0;
        case 0x5582b4u: goto label_5582b4;
        case 0x5582b8u: goto label_5582b8;
        case 0x5582bcu: goto label_5582bc;
        case 0x5582c0u: goto label_5582c0;
        case 0x5582c4u: goto label_5582c4;
        case 0x5582c8u: goto label_5582c8;
        case 0x5582ccu: goto label_5582cc;
        case 0x5582d0u: goto label_5582d0;
        case 0x5582d4u: goto label_5582d4;
        case 0x5582d8u: goto label_5582d8;
        case 0x5582dcu: goto label_5582dc;
        case 0x5582e0u: goto label_5582e0;
        case 0x5582e4u: goto label_5582e4;
        case 0x5582e8u: goto label_5582e8;
        case 0x5582ecu: goto label_5582ec;
        case 0x5582f0u: goto label_5582f0;
        case 0x5582f4u: goto label_5582f4;
        case 0x5582f8u: goto label_5582f8;
        case 0x5582fcu: goto label_5582fc;
        case 0x558300u: goto label_558300;
        case 0x558304u: goto label_558304;
        case 0x558308u: goto label_558308;
        case 0x55830cu: goto label_55830c;
        case 0x558310u: goto label_558310;
        case 0x558314u: goto label_558314;
        case 0x558318u: goto label_558318;
        case 0x55831cu: goto label_55831c;
        case 0x558320u: goto label_558320;
        case 0x558324u: goto label_558324;
        case 0x558328u: goto label_558328;
        case 0x55832cu: goto label_55832c;
        case 0x558330u: goto label_558330;
        case 0x558334u: goto label_558334;
        case 0x558338u: goto label_558338;
        case 0x55833cu: goto label_55833c;
        case 0x558340u: goto label_558340;
        case 0x558344u: goto label_558344;
        case 0x558348u: goto label_558348;
        case 0x55834cu: goto label_55834c;
        case 0x558350u: goto label_558350;
        case 0x558354u: goto label_558354;
        case 0x558358u: goto label_558358;
        case 0x55835cu: goto label_55835c;
        case 0x558360u: goto label_558360;
        case 0x558364u: goto label_558364;
        case 0x558368u: goto label_558368;
        case 0x55836cu: goto label_55836c;
        case 0x558370u: goto label_558370;
        case 0x558374u: goto label_558374;
        case 0x558378u: goto label_558378;
        case 0x55837cu: goto label_55837c;
        case 0x558380u: goto label_558380;
        case 0x558384u: goto label_558384;
        case 0x558388u: goto label_558388;
        case 0x55838cu: goto label_55838c;
        case 0x558390u: goto label_558390;
        case 0x558394u: goto label_558394;
        case 0x558398u: goto label_558398;
        case 0x55839cu: goto label_55839c;
        case 0x5583a0u: goto label_5583a0;
        case 0x5583a4u: goto label_5583a4;
        case 0x5583a8u: goto label_5583a8;
        case 0x5583acu: goto label_5583ac;
        case 0x5583b0u: goto label_5583b0;
        case 0x5583b4u: goto label_5583b4;
        case 0x5583b8u: goto label_5583b8;
        case 0x5583bcu: goto label_5583bc;
        case 0x5583c0u: goto label_5583c0;
        case 0x5583c4u: goto label_5583c4;
        case 0x5583c8u: goto label_5583c8;
        case 0x5583ccu: goto label_5583cc;
        case 0x5583d0u: goto label_5583d0;
        case 0x5583d4u: goto label_5583d4;
        case 0x5583d8u: goto label_5583d8;
        case 0x5583dcu: goto label_5583dc;
        case 0x5583e0u: goto label_5583e0;
        case 0x5583e4u: goto label_5583e4;
        case 0x5583e8u: goto label_5583e8;
        case 0x5583ecu: goto label_5583ec;
        case 0x5583f0u: goto label_5583f0;
        case 0x5583f4u: goto label_5583f4;
        case 0x5583f8u: goto label_5583f8;
        case 0x5583fcu: goto label_5583fc;
        case 0x558400u: goto label_558400;
        case 0x558404u: goto label_558404;
        case 0x558408u: goto label_558408;
        case 0x55840cu: goto label_55840c;
        case 0x558410u: goto label_558410;
        case 0x558414u: goto label_558414;
        case 0x558418u: goto label_558418;
        case 0x55841cu: goto label_55841c;
        case 0x558420u: goto label_558420;
        case 0x558424u: goto label_558424;
        case 0x558428u: goto label_558428;
        case 0x55842cu: goto label_55842c;
        default: break;
    }

    ctx->pc = 0x558100u;

label_558100:
    // 0x558100: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x558100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_558104:
    // 0x558104: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x558104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_558108:
    // 0x558108: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x558108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_55810c:
    // 0x55810c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x55810cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_558110:
    // 0x558110: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x558110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_558114:
    // 0x558114: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x558114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_558118:
    // 0x558118: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x558118u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_55811c:
    // 0x55811c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x55811cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_558120:
    // 0x558120: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x558120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_558124:
    // 0x558124: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x558124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_558128:
    // 0x558128: 0xc440dc90  lwc1        $f0, -0x2370($v0)
    ctx->pc = 0x558128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294958224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55812c:
    // 0x55812c: 0x8c730e68  lw          $s3, 0xE68($v1)
    ctx->pc = 0x55812cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3688)));
label_558130:
    // 0x558130: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x558130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_558134:
    // 0x558134: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x558134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_558138:
    // 0x558138: 0xc441dc94  lwc1        $f1, -0x236C($v0)
    ctx->pc = 0x558138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294958228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55813c:
    // 0x55813c: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x55813cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_558140:
    // 0x558140: 0xc460dc98  lwc1        $f0, -0x2368($v1)
    ctx->pc = 0x558140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294958232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_558144:
    // 0x558144: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x558144u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_558148:
    // 0x558148: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x558148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_55814c:
    // 0x55814c: 0x8c5289e0  lw          $s2, -0x7620($v0)
    ctx->pc = 0x55814cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_558150:
    // 0x558150: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x558150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_558154:
    // 0x558154: 0xc4810068  lwc1        $f1, 0x68($a0)
    ctx->pc = 0x558154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_558158:
    // 0x558158: 0xc480006c  lwc1        $f0, 0x6C($a0)
    ctx->pc = 0x558158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55815c:
    // 0x55815c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x55815cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_558160:
    // 0x558160: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x558160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_558164:
    // 0x558164: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x558164u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_558168:
    // 0x558168: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x558168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_55816c:
    // 0x55816c: 0x8c4460a8  lw          $a0, 0x60A8($v0)
    ctx->pc = 0x55816cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24744)));
label_558170:
    // 0x558170: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x558170u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_558174:
    // 0x558174: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x558174u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_558178:
    // 0x558178: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x558178u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_55817c:
    // 0x55817c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x55817cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_558180:
    // 0x558180: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x558180u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_558184:
    // 0x558184: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x558184u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_558188:
    // 0x558188: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x558188u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_55818c:
    // 0x55818c: 0xc0506ac  jal         func_141AB0
label_558190:
    if (ctx->pc == 0x558190u) {
        ctx->pc = 0x558190u;
            // 0x558190: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x558194u;
        goto label_558194;
    }
    ctx->pc = 0x55818Cu;
    SET_GPR_U32(ctx, 31, 0x558194u);
    ctx->pc = 0x558190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55818Cu;
            // 0x558190: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x558194u; }
        if (ctx->pc != 0x558194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x558194u; }
        if (ctx->pc != 0x558194u) { return; }
    }
    ctx->pc = 0x558194u;
label_558194:
    // 0x558194: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x558194u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_558198:
    // 0x558198: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x558198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_55819c:
    // 0x55819c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x55819cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_5581a0:
    // 0x5581a0: 0x320f809  jalr        $t9
label_5581a4:
    if (ctx->pc == 0x5581A4u) {
        ctx->pc = 0x5581A4u;
            // 0x5581a4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x5581A8u;
        goto label_5581a8;
    }
    ctx->pc = 0x5581A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5581A8u);
        ctx->pc = 0x5581A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5581A0u;
            // 0x5581a4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5581A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5581A8u; }
            if (ctx->pc != 0x5581A8u) { return; }
        }
        }
    }
    ctx->pc = 0x5581A8u;
label_5581a8:
    // 0x5581a8: 0x8e8600a8  lw          $a2, 0xA8($s4)
    ctx->pc = 0x5581a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 168)));
label_5581ac:
    // 0x5581ac: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x5581acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_5581b0:
    // 0x5581b0: 0x8444f150  lh          $a0, -0xEB0($v0)
    ctx->pc = 0x5581b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963536)));
label_5581b4:
    // 0x5581b4: 0x8e8700a4  lw          $a3, 0xA4($s4)
    ctx->pc = 0x5581b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 164)));
label_5581b8:
    // 0x5581b8: 0xd02823  subu        $a1, $a2, $s0
    ctx->pc = 0x5581b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_5581bc:
    // 0x5581bc: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x5581bcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_5581c0:
    // 0x5581c0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x5581c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_5581c4:
    // 0x5581c4: 0x46800b60  cvt.s.w     $f13, $f1
    ctx->pc = 0x5581c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_5581c8:
    // 0x5581c8: 0xf14021  addu        $t0, $a3, $s1
    ctx->pc = 0x5581c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
label_5581cc:
    // 0x5581cc: 0x8443f152  lh          $v1, -0xEAE($v0)
    ctx->pc = 0x5581ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963538)));
label_5581d0:
    // 0x5581d0: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x5581d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_5581d4:
    // 0x5581d4: 0x24a5f160  addiu       $a1, $a1, -0xEA0
    ctx->pc = 0x5581d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963552));
label_5581d8:
    // 0x5581d8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x5581d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_5581dc:
    // 0x5581dc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x5581dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5581e0:
    // 0x5581e0: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x5581e0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_5581e4:
    // 0x5581e4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x5581e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5581e8:
    // 0x5581e8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x5581e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_5581ec:
    // 0x5581ec: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x5581ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_5581f0:
    // 0x5581f0: 0xd01021  addu        $v0, $a2, $s0
    ctx->pc = 0x5581f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_5581f4:
    // 0x5581f4: 0xf13023  subu        $a2, $a3, $s1
    ctx->pc = 0x5581f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
label_5581f8:
    // 0x5581f8: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x5581f8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_5581fc:
    // 0x5581fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5581fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_558200:
    // 0x558200: 0x46800ba0  cvt.s.w     $f14, $f1
    ctx->pc = 0x558200u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_558204:
    // 0x558204: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x558204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_558208:
    // 0x558208: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x558208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_55820c:
    // 0x55820c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55820cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558210:
    // 0x558210: 0x46801320  cvt.s.w     $f12, $f2
    ctx->pc = 0x558210u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_558214:
    // 0x558214: 0x46800be0  cvt.s.w     $f15, $f1
    ctx->pc = 0x558214u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_558218:
    // 0x558218: 0xc0bc284  jal         func_2F0A10
label_55821c:
    if (ctx->pc == 0x55821Cu) {
        ctx->pc = 0x55821Cu;
            // 0x55821c: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x558220u;
        goto label_558220;
    }
    ctx->pc = 0x558218u;
    SET_GPR_U32(ctx, 31, 0x558220u);
    ctx->pc = 0x55821Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x558218u;
            // 0x55821c: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x558220u; }
        if (ctx->pc != 0x558220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x558220u; }
        if (ctx->pc != 0x558220u) { return; }
    }
    ctx->pc = 0x558220u;
label_558220:
    // 0x558220: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x558220u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_558224:
    // 0x558224: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x558224u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_558228:
    // 0x558228: 0x320f809  jalr        $t9
label_55822c:
    if (ctx->pc == 0x55822Cu) {
        ctx->pc = 0x55822Cu;
            // 0x55822c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x558230u;
        goto label_558230;
    }
    ctx->pc = 0x558228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x558230u);
        ctx->pc = 0x55822Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x558228u;
            // 0x55822c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x558230u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x558230u; }
            if (ctx->pc != 0x558230u) { return; }
        }
        }
    }
    ctx->pc = 0x558230u;
label_558230:
    // 0x558230: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x558230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_558234:
    // 0x558234: 0x8c4460b0  lw          $a0, 0x60B0($v0)
    ctx->pc = 0x558234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24752)));
label_558238:
    // 0x558238: 0xc0506ac  jal         func_141AB0
label_55823c:
    if (ctx->pc == 0x55823Cu) {
        ctx->pc = 0x55823Cu;
            // 0x55823c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x558240u;
        goto label_558240;
    }
    ctx->pc = 0x558238u;
    SET_GPR_U32(ctx, 31, 0x558240u);
    ctx->pc = 0x55823Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x558238u;
            // 0x55823c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x558240u; }
        if (ctx->pc != 0x558240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x558240u; }
        if (ctx->pc != 0x558240u) { return; }
    }
    ctx->pc = 0x558240u;
label_558240:
    // 0x558240: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x558240u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_558244:
    // 0x558244: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x558244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_558248:
    // 0x558248: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x558248u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_55824c:
    // 0x55824c: 0x320f809  jalr        $t9
label_558250:
    if (ctx->pc == 0x558250u) {
        ctx->pc = 0x558250u;
            // 0x558250: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x558254u;
        goto label_558254;
    }
    ctx->pc = 0x55824Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x558254u);
        ctx->pc = 0x558250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55824Cu;
            // 0x558250: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x558254u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x558254u; }
            if (ctx->pc != 0x558254u) { return; }
        }
        }
    }
    ctx->pc = 0x558254u;
label_558254:
    // 0x558254: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x558254u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_558258:
    // 0x558258: 0x3c024342  lui         $v0, 0x4342
    ctx->pc = 0x558258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17218 << 16));
label_55825c:
    // 0x55825c: 0x2484f154  addiu       $a0, $a0, -0xEAC
    ctx->pc = 0x55825cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963540));
label_558260:
    // 0x558260: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x558260u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_558264:
    // 0x558264: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x558264u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_558268:
    // 0x558268: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x558268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_55826c:
    // 0x55826c: 0x84890002  lh          $t1, 0x2($a0)
    ctx->pc = 0x55826cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_558270:
    // 0x558270: 0x3c0242dc  lui         $v0, 0x42DC
    ctx->pc = 0x558270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17116 << 16));
label_558274:
    // 0x558274: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x558274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_558278:
    // 0x558278: 0x24a5f230  addiu       $a1, $a1, -0xDD0
    ctx->pc = 0x558278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963760));
label_55827c:
    // 0x55827c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55827cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558280:
    // 0x558280: 0x3c02442d  lui         $v0, 0x442D
    ctx->pc = 0x558280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17453 << 16));
label_558284:
    // 0x558284: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x558284u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_558288:
    // 0x558288: 0x34488000  ori         $t0, $v0, 0x8000
    ctx->pc = 0x558288u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_55828c:
    // 0x55828c: 0x3c024403  lui         $v0, 0x4403
    ctx->pc = 0x55828cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17411 << 16));
label_558290:
    // 0x558290: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x558290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_558294:
    // 0x558294: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x558294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_558298:
    // 0x558298: 0x2406ff80  addiu       $a2, $zero, -0x80
    ctx->pc = 0x558298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
label_55829c:
    // 0x55829c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x55829cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_5582a0:
    // 0x5582a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5582a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5582a4:
    // 0x5582a4: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x5582a4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5582a8:
    // 0x5582a8: 0x44887000  mtc1        $t0, $f14
    ctx->pc = 0x5582a8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_5582ac:
    // 0x5582ac: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x5582acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_5582b0:
    // 0x5582b0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x5582b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_5582b4:
    // 0x5582b4: 0xc0bc284  jal         func_2F0A10
label_5582b8:
    if (ctx->pc == 0x5582B8u) {
        ctx->pc = 0x5582B8u;
            // 0x5582b8: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x5582BCu;
        goto label_5582bc;
    }
    ctx->pc = 0x5582B4u;
    SET_GPR_U32(ctx, 31, 0x5582BCu);
    ctx->pc = 0x5582B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5582B4u;
            // 0x5582b8: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5582BCu; }
        if (ctx->pc != 0x5582BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5582BCu; }
        if (ctx->pc != 0x5582BCu) { return; }
    }
    ctx->pc = 0x5582BCu;
label_5582bc:
    // 0x5582bc: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x5582bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_5582c0:
    // 0x5582c0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x5582c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_5582c4:
    // 0x5582c4: 0x320f809  jalr        $t9
label_5582c8:
    if (ctx->pc == 0x5582C8u) {
        ctx->pc = 0x5582C8u;
            // 0x5582c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5582CCu;
        goto label_5582cc;
    }
    ctx->pc = 0x5582C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5582CCu);
        ctx->pc = 0x5582C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5582C4u;
            // 0x5582c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5582CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5582CCu; }
            if (ctx->pc != 0x5582CCu) { return; }
        }
        }
    }
    ctx->pc = 0x5582CCu;
label_5582cc:
    // 0x5582cc: 0x8e870088  lw          $a3, 0x88($s4)
    ctx->pc = 0x5582ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
label_5582d0:
    // 0x5582d0: 0x3c02440e  lui         $v0, 0x440E
    ctx->pc = 0x5582d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17422 << 16));
label_5582d4:
    // 0x5582d4: 0x344d8000  ori         $t5, $v0, 0x8000
    ctx->pc = 0x5582d4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_5582d8:
    // 0x5582d8: 0x8e86008c  lw          $a2, 0x8C($s4)
    ctx->pc = 0x5582d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
label_5582dc:
    // 0x5582dc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x5582dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_5582e0:
    // 0x5582e0: 0x3c0c43aa  lui         $t4, 0x43AA
    ctx->pc = 0x5582e0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)17322 << 16));
label_5582e4:
    // 0x5582e4: 0x24e7fee3  addiu       $a3, $a3, -0x11D
    ctx->pc = 0x5582e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967011));
label_5582e8:
    // 0x5582e8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x5582e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_5582ec:
    // 0x5582ec: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x5582ecu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5582f0:
    // 0x5582f0: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x5582f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
label_5582f4:
    // 0x5582f4: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x5582f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_5582f8:
    // 0x5582f8: 0x24c9ff38  addiu       $t1, $a2, -0xC8
    ctx->pc = 0x5582f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967096));
label_5582fc:
    // 0x5582fc: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x5582fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
label_558300:
    // 0x558300: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x558300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_558304:
    // 0x558304: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x558304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_558308:
    // 0x558308: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x558308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_55830c:
    // 0x55830c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x55830cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_558310:
    // 0x558310: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x558310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_558314:
    // 0x558314: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x558314u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_558318:
    // 0x558318: 0x8c4760b0  lw          $a3, 0x60B0($v0)
    ctx->pc = 0x558318u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24752)));
label_55831c:
    // 0x55831c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x55831cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_558320:
    // 0x558320: 0x24a5f160  addiu       $a1, $a1, -0xEA0
    ctx->pc = 0x558320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963552));
label_558324:
    // 0x558324: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x558324u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558328:
    // 0x558328: 0x24c6f154  addiu       $a2, $a2, -0xEAC
    ctx->pc = 0x558328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963540));
label_55832c:
    // 0x55832c: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x55832cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_558330:
    // 0x558330: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x558330u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_558334:
    // 0x558334: 0x24090011  addiu       $t1, $zero, 0x11
    ctx->pc = 0x558334u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_558338:
    // 0x558338: 0x240a0012  addiu       $t2, $zero, 0x12
    ctx->pc = 0x558338u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_55833c:
    // 0x55833c: 0x448d7000  mtc1        $t5, $f14
    ctx->pc = 0x55833cu;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_558340:
    // 0x558340: 0x448c7800  mtc1        $t4, $f15
    ctx->pc = 0x558340u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_558344:
    // 0x558344: 0x44838000  mtc1        $v1, $f16
    ctx->pc = 0x558344u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_558348:
    // 0x558348: 0xc129cfc  jal         func_4A73F0
label_55834c:
    if (ctx->pc == 0x55834Cu) {
        ctx->pc = 0x55834Cu;
            // 0x55834c: 0x240b0013  addiu       $t3, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x558350u;
        goto label_558350;
    }
    ctx->pc = 0x558348u;
    SET_GPR_U32(ctx, 31, 0x558350u);
    ctx->pc = 0x55834Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x558348u;
            // 0x55834c: 0x240b0013  addiu       $t3, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A73F0u;
    if (runtime->hasFunction(0x4A73F0u)) {
        auto targetFn = runtime->lookupFunction(0x4A73F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x558350u; }
        if (ctx->pc != 0x558350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A73F0_0x4a73f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x558350u; }
        if (ctx->pc != 0x558350u) { return; }
    }
    ctx->pc = 0x558350u;
label_558350:
    // 0x558350: 0x8e700010  lw          $s0, 0x10($s3)
    ctx->pc = 0x558350u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_558354:
    // 0x558354: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x558354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_558358:
    // 0x558358: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x558358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_55835c:
    // 0x55835c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x55835cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_558360:
    // 0x558360: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x558360u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_558364:
    // 0x558364: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x558364u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_558368:
    // 0x558368: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x558368u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
label_55836c:
    // 0x55836c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x55836cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_558370:
    // 0x558370: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x558370u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_558374:
    // 0x558374: 0xc0ee398  jal         func_3B8E60
label_558378:
    if (ctx->pc == 0x558378u) {
        ctx->pc = 0x558378u;
            // 0x558378: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55837Cu;
        goto label_55837c;
    }
    ctx->pc = 0x558374u;
    SET_GPR_U32(ctx, 31, 0x55837Cu);
    ctx->pc = 0x558378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x558374u;
            // 0x558378: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8E60u;
    if (runtime->hasFunction(0x3B8E60u)) {
        auto targetFn = runtime->lookupFunction(0x3B8E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55837Cu; }
        if (ctx->pc != 0x55837Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8E60_0x3b8e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55837Cu; }
        if (ctx->pc != 0x55837Cu) { return; }
    }
    ctx->pc = 0x55837Cu;
label_55837c:
    // 0x55837c: 0xae700010  sw          $s0, 0x10($s3)
    ctx->pc = 0x55837cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 16));
label_558380:
    // 0x558380: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x558380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_558384:
    // 0x558384: 0xc6800088  lwc1        $f0, 0x88($s4)
    ctx->pc = 0x558384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_558388:
    // 0x558388: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x558388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55838c:
    // 0x55838c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x55838cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_558390:
    // 0x558390: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x558390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_558394:
    // 0x558394: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x558394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_558398:
    // 0x558398: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x558398u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_55839c:
    // 0x55839c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x55839cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_5583a0:
    // 0x5583a0: 0x8c510e68  lw          $s1, 0xE68($v0)
    ctx->pc = 0x5583a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_5583a4:
    // 0x5583a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x5583a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5583a8:
    // 0x5583a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x5583a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5583ac:
    // 0x5583ac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x5583acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5583b0:
    // 0x5583b0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x5583b0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5583b4:
    // 0x5583b4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x5583b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_5583b8:
    // 0x5583b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5583b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5583bc:
    // 0x5583bc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x5583bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_5583c0:
    // 0x5583c0: 0xc7a30088  lwc1        $f3, 0x88($sp)
    ctx->pc = 0x5583c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_5583c4:
    // 0x5583c4: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x5583c4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_5583c8:
    // 0x5583c8: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x5583c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5583cc:
    // 0x5583cc: 0x4603201d  msub.s      $f0, $f4, $f3
    ctx->pc = 0x5583ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
label_5583d0:
    // 0x5583d0: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x5583d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_5583d4:
    // 0x5583d4: 0x8e83008c  lw          $v1, 0x8C($s4)
    ctx->pc = 0x5583d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
label_5583d8:
    // 0x5583d8: 0x2463ffe2  addiu       $v1, $v1, -0x1E
    ctx->pc = 0x5583d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967266));
label_5583dc:
    // 0x5583dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5583dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5583e0:
    // 0x5583e0: 0x0  nop
    ctx->pc = 0x5583e0u;
    // NOP
label_5583e4:
    // 0x5583e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x5583e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_5583e8:
    // 0x5583e8: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x5583e8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_5583ec:
    // 0x5583ec: 0x4601201d  msub.s      $f0, $f4, $f1
    ctx->pc = 0x5583ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
label_5583f0:
    // 0x5583f0: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x5583f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_5583f4:
    // 0x5583f4: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x5583f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_5583f8:
    // 0x5583f8: 0xc0ee334  jal         func_3B8CD0
label_5583fc:
    if (ctx->pc == 0x5583FCu) {
        ctx->pc = 0x5583FCu;
            // 0x5583fc: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x558400u;
        goto label_558400;
    }
    ctx->pc = 0x5583F8u;
    SET_GPR_U32(ctx, 31, 0x558400u);
    ctx->pc = 0x5583FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5583F8u;
            // 0x5583fc: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8CD0u;
    if (runtime->hasFunction(0x3B8CD0u)) {
        auto targetFn = runtime->lookupFunction(0x3B8CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x558400u; }
        if (ctx->pc != 0x558400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8CD0_0x3b8cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x558400u; }
        if (ctx->pc != 0x558400u) { return; }
    }
    ctx->pc = 0x558400u;
label_558400:
    // 0x558400: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x558400u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
label_558404:
    // 0x558404: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x558404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_558408:
    // 0x558408: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x558408u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_55840c:
    // 0x55840c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x55840cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_558410:
    // 0x558410: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x558410u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_558414:
    // 0x558414: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x558414u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_558418:
    // 0x558418: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x558418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_55841c:
    // 0x55841c: 0x3e00008  jr          $ra
label_558420:
    if (ctx->pc == 0x558420u) {
        ctx->pc = 0x558420u;
            // 0x558420: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x558424u;
        goto label_558424;
    }
    ctx->pc = 0x55841Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x558420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55841Cu;
            // 0x558420: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x558424u;
label_558424:
    // 0x558424: 0x0  nop
    ctx->pc = 0x558424u;
    // NOP
label_558428:
    // 0x558428: 0x0  nop
    ctx->pc = 0x558428u;
    // NOP
label_55842c:
    // 0x55842c: 0x0  nop
    ctx->pc = 0x55842cu;
    // NOP
}
