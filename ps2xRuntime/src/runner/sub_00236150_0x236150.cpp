#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00236150
// Address: 0x236150 - 0x236350
void sub_00236150_0x236150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236150_0x236150");
#endif

    switch (ctx->pc) {
        case 0x236150u: goto label_236150;
        case 0x236154u: goto label_236154;
        case 0x236158u: goto label_236158;
        case 0x23615cu: goto label_23615c;
        case 0x236160u: goto label_236160;
        case 0x236164u: goto label_236164;
        case 0x236168u: goto label_236168;
        case 0x23616cu: goto label_23616c;
        case 0x236170u: goto label_236170;
        case 0x236174u: goto label_236174;
        case 0x236178u: goto label_236178;
        case 0x23617cu: goto label_23617c;
        case 0x236180u: goto label_236180;
        case 0x236184u: goto label_236184;
        case 0x236188u: goto label_236188;
        case 0x23618cu: goto label_23618c;
        case 0x236190u: goto label_236190;
        case 0x236194u: goto label_236194;
        case 0x236198u: goto label_236198;
        case 0x23619cu: goto label_23619c;
        case 0x2361a0u: goto label_2361a0;
        case 0x2361a4u: goto label_2361a4;
        case 0x2361a8u: goto label_2361a8;
        case 0x2361acu: goto label_2361ac;
        case 0x2361b0u: goto label_2361b0;
        case 0x2361b4u: goto label_2361b4;
        case 0x2361b8u: goto label_2361b8;
        case 0x2361bcu: goto label_2361bc;
        case 0x2361c0u: goto label_2361c0;
        case 0x2361c4u: goto label_2361c4;
        case 0x2361c8u: goto label_2361c8;
        case 0x2361ccu: goto label_2361cc;
        case 0x2361d0u: goto label_2361d0;
        case 0x2361d4u: goto label_2361d4;
        case 0x2361d8u: goto label_2361d8;
        case 0x2361dcu: goto label_2361dc;
        case 0x2361e0u: goto label_2361e0;
        case 0x2361e4u: goto label_2361e4;
        case 0x2361e8u: goto label_2361e8;
        case 0x2361ecu: goto label_2361ec;
        case 0x2361f0u: goto label_2361f0;
        case 0x2361f4u: goto label_2361f4;
        case 0x2361f8u: goto label_2361f8;
        case 0x2361fcu: goto label_2361fc;
        case 0x236200u: goto label_236200;
        case 0x236204u: goto label_236204;
        case 0x236208u: goto label_236208;
        case 0x23620cu: goto label_23620c;
        case 0x236210u: goto label_236210;
        case 0x236214u: goto label_236214;
        case 0x236218u: goto label_236218;
        case 0x23621cu: goto label_23621c;
        case 0x236220u: goto label_236220;
        case 0x236224u: goto label_236224;
        case 0x236228u: goto label_236228;
        case 0x23622cu: goto label_23622c;
        case 0x236230u: goto label_236230;
        case 0x236234u: goto label_236234;
        case 0x236238u: goto label_236238;
        case 0x23623cu: goto label_23623c;
        case 0x236240u: goto label_236240;
        case 0x236244u: goto label_236244;
        case 0x236248u: goto label_236248;
        case 0x23624cu: goto label_23624c;
        case 0x236250u: goto label_236250;
        case 0x236254u: goto label_236254;
        case 0x236258u: goto label_236258;
        case 0x23625cu: goto label_23625c;
        case 0x236260u: goto label_236260;
        case 0x236264u: goto label_236264;
        case 0x236268u: goto label_236268;
        case 0x23626cu: goto label_23626c;
        case 0x236270u: goto label_236270;
        case 0x236274u: goto label_236274;
        case 0x236278u: goto label_236278;
        case 0x23627cu: goto label_23627c;
        case 0x236280u: goto label_236280;
        case 0x236284u: goto label_236284;
        case 0x236288u: goto label_236288;
        case 0x23628cu: goto label_23628c;
        case 0x236290u: goto label_236290;
        case 0x236294u: goto label_236294;
        case 0x236298u: goto label_236298;
        case 0x23629cu: goto label_23629c;
        case 0x2362a0u: goto label_2362a0;
        case 0x2362a4u: goto label_2362a4;
        case 0x2362a8u: goto label_2362a8;
        case 0x2362acu: goto label_2362ac;
        case 0x2362b0u: goto label_2362b0;
        case 0x2362b4u: goto label_2362b4;
        case 0x2362b8u: goto label_2362b8;
        case 0x2362bcu: goto label_2362bc;
        case 0x2362c0u: goto label_2362c0;
        case 0x2362c4u: goto label_2362c4;
        case 0x2362c8u: goto label_2362c8;
        case 0x2362ccu: goto label_2362cc;
        case 0x2362d0u: goto label_2362d0;
        case 0x2362d4u: goto label_2362d4;
        case 0x2362d8u: goto label_2362d8;
        case 0x2362dcu: goto label_2362dc;
        case 0x2362e0u: goto label_2362e0;
        case 0x2362e4u: goto label_2362e4;
        case 0x2362e8u: goto label_2362e8;
        case 0x2362ecu: goto label_2362ec;
        case 0x2362f0u: goto label_2362f0;
        case 0x2362f4u: goto label_2362f4;
        case 0x2362f8u: goto label_2362f8;
        case 0x2362fcu: goto label_2362fc;
        case 0x236300u: goto label_236300;
        case 0x236304u: goto label_236304;
        case 0x236308u: goto label_236308;
        case 0x23630cu: goto label_23630c;
        case 0x236310u: goto label_236310;
        case 0x236314u: goto label_236314;
        case 0x236318u: goto label_236318;
        case 0x23631cu: goto label_23631c;
        case 0x236320u: goto label_236320;
        case 0x236324u: goto label_236324;
        case 0x236328u: goto label_236328;
        case 0x23632cu: goto label_23632c;
        case 0x236330u: goto label_236330;
        case 0x236334u: goto label_236334;
        case 0x236338u: goto label_236338;
        case 0x23633cu: goto label_23633c;
        case 0x236340u: goto label_236340;
        case 0x236344u: goto label_236344;
        case 0x236348u: goto label_236348;
        case 0x23634cu: goto label_23634c;
        default: break;
    }

    ctx->pc = 0x236150u;

label_236150:
    // 0x236150: 0xc482001c  lwc1        $f2, 0x1C($a0)
    ctx->pc = 0x236150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_236154:
    // 0x236154: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x236154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_236158:
    // 0x236158: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x236158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23615c:
    // 0x23615c: 0x0  nop
    ctx->pc = 0x23615cu;
    // NOP
label_236160:
    // 0x236160: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x236160u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_236164:
    // 0x236164: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
label_236168:
    if (ctx->pc == 0x236168u) {
        ctx->pc = 0x236168u;
            // 0x236168: 0xc481001c  lwc1        $f1, 0x1C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x23616Cu;
        goto label_23616c;
    }
    ctx->pc = 0x236164u;
    {
        const bool branch_taken_0x236164 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x236164) {
            ctx->pc = 0x236168u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x236164u;
            // 0x236168: 0xc481001c  lwc1        $f1, 0x1C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x236190u;
            goto label_236190;
        }
    }
    ctx->pc = 0x23616Cu;
label_23616c:
    // 0x23616c: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x23616cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_236170:
    // 0x236170: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x236170u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_236174:
    // 0x236174: 0x46000085  abs.s       $f2, $f0
    ctx->pc = 0x236174u;
    ctx->f[2] = FPU_ABS_S(ctx->f[0]);
label_236178:
    // 0x236178: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x236178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23617c:
    // 0x23617c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x23617cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_236180:
    // 0x236180: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_236184:
    if (ctx->pc == 0x236184u) {
        ctx->pc = 0x236188u;
        goto label_236188;
    }
    ctx->pc = 0x236180u;
    {
        const bool branch_taken_0x236180 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x236180) {
            ctx->pc = 0x23618Cu;
            goto label_23618c;
        }
    }
    ctx->pc = 0x236188u;
label_236188:
    // 0x236188: 0xe481001c  swc1        $f1, 0x1C($a0)
    ctx->pc = 0x236188u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
label_23618c:
    // 0x23618c: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x23618cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_236190:
    // 0x236190: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x236190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_236194:
    // 0x236194: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x236194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_236198:
    // 0x236198: 0x0  nop
    ctx->pc = 0x236198u;
    // NOP
label_23619c:
    // 0x23619c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x23619cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2361a0:
    // 0x2361a0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_2361a4:
    if (ctx->pc == 0x2361A4u) {
        ctx->pc = 0x2361A4u;
            // 0x2361a4: 0xc4800014  lwc1        $f0, 0x14($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x2361A8u;
        goto label_2361a8;
    }
    ctx->pc = 0x2361A0u;
    {
        const bool branch_taken_0x2361a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2361a0) {
            ctx->pc = 0x2361A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2361A0u;
            // 0x2361a4: 0xc4800014  lwc1        $f0, 0x14($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2361B0u;
            goto label_2361b0;
        }
    }
    ctx->pc = 0x2361A8u;
label_2361a8:
    // 0x2361a8: 0x10000006  b           . + 4 + (0x6 << 2)
label_2361ac:
    if (ctx->pc == 0x2361ACu) {
        ctx->pc = 0x2361ACu;
            // 0x2361ac: 0xc4800014  lwc1        $f0, 0x14($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x2361B0u;
        goto label_2361b0;
    }
    ctx->pc = 0x2361A8u;
    {
        const bool branch_taken_0x2361a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2361ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2361A8u;
            // 0x2361ac: 0xc4800014  lwc1        $f0, 0x14($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2361a8) {
            ctx->pc = 0x2361C4u;
            goto label_2361c4;
        }
    }
    ctx->pc = 0x2361B0u;
label_2361b0:
    // 0x2361b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2361b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2361b4:
    // 0x2361b4: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_2361b8:
    if (ctx->pc == 0x2361B8u) {
        ctx->pc = 0x2361B8u;
            // 0x2361b8: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x2361BCu;
        goto label_2361bc;
    }
    ctx->pc = 0x2361B4u;
    {
        const bool branch_taken_0x2361b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2361b4) {
            ctx->pc = 0x2361B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2361B4u;
            // 0x2361b8: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2361C4u;
            goto label_2361c4;
        }
    }
    ctx->pc = 0x2361BCu;
label_2361bc:
    // 0x2361bc: 0x10000001  b           . + 4 + (0x1 << 2)
label_2361c0:
    if (ctx->pc == 0x2361C0u) {
        ctx->pc = 0x2361C4u;
        goto label_2361c4;
    }
    ctx->pc = 0x2361BCu;
    {
        const bool branch_taken_0x2361bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2361bc) {
            ctx->pc = 0x2361C4u;
            goto label_2361c4;
        }
    }
    ctx->pc = 0x2361C4u;
label_2361c4:
    // 0x2361c4: 0x3e00008  jr          $ra
label_2361c8:
    if (ctx->pc == 0x2361C8u) {
        ctx->pc = 0x2361CCu;
        goto label_2361cc;
    }
    ctx->pc = 0x2361C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2361CCu;
label_2361cc:
    // 0x2361cc: 0x0  nop
    ctx->pc = 0x2361ccu;
    // NOP
label_2361d0:
    // 0x2361d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2361d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2361d4:
    // 0x2361d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2361d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2361d8:
    // 0x2361d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2361d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2361dc:
    // 0x2361dc: 0xc08d854  jal         func_236150
label_2361e0:
    if (ctx->pc == 0x2361E0u) {
        ctx->pc = 0x2361E0u;
            // 0x2361e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2361E4u;
        goto label_2361e4;
    }
    ctx->pc = 0x2361DCu;
    SET_GPR_U32(ctx, 31, 0x2361E4u);
    ctx->pc = 0x2361E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2361DCu;
            // 0x2361e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x236150u;
    goto label_236150;
    ctx->pc = 0x2361E4u;
label_2361e4:
    // 0x2361e4: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x2361e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_2361e8:
    // 0x2361e8: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x2361e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2361ec:
    // 0x2361ec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2361ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2361f0:
    // 0x2361f0: 0x4503002c  bc1tl       . + 4 + (0x2C << 2)
label_2361f4:
    if (ctx->pc == 0x2361F4u) {
        ctx->pc = 0x2361F4u;
            // 0x2361f4: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x2361F8u;
        goto label_2361f8;
    }
    ctx->pc = 0x2361F0u;
    {
        const bool branch_taken_0x2361f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2361f0) {
            ctx->pc = 0x2361F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2361F0u;
            // 0x2361f4: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2362A4u;
            goto label_2362a4;
        }
    }
    ctx->pc = 0x2361F8u;
label_2361f8:
    // 0x2361f8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2361f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2361fc:
    // 0x2361fc: 0x8c420144  lw          $v0, 0x144($v0)
    ctx->pc = 0x2361fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 324)));
label_236200:
    // 0x236200: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_236204:
    if (ctx->pc == 0x236204u) {
        ctx->pc = 0x236208u;
        goto label_236208;
    }
    ctx->pc = 0x236200u;
    {
        const bool branch_taken_0x236200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236200) {
            ctx->pc = 0x2362A0u;
            goto label_2362a0;
        }
    }
    ctx->pc = 0x236208u;
label_236208:
    // 0x236208: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x236208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23620c:
    // 0x23620c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x23620cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_236210:
    // 0x236210: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x236210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_236214:
    // 0x236214: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x236214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_236218:
    // 0x236218: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x236218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_23621c:
    // 0x23621c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x23621cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_236220:
    // 0x236220: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_236224:
    if (ctx->pc == 0x236224u) {
        ctx->pc = 0x236224u;
            // 0x236224: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x236228u;
        goto label_236228;
    }
    ctx->pc = 0x236220u;
    {
        const bool branch_taken_0x236220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236220u;
            // 0x236224: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236220) {
            ctx->pc = 0x236250u;
            goto label_236250;
        }
    }
    ctx->pc = 0x236228u;
label_236228:
    // 0x236228: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x236228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_23622c:
    // 0x23622c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x23622cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_236230:
    // 0x236230: 0x2442cce8  addiu       $v0, $v0, -0x3318
    ctx->pc = 0x236230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954216));
label_236234:
    // 0x236234: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x236234u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_236238:
    // 0x236238: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x236238u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_23623c:
    // 0x23623c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x23623cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_236240:
    // 0x236240: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x236240u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_236244:
    // 0x236244: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x236244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_236248:
    // 0x236248: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x236248u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_23624c:
    // 0x23624c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x23624cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_236250:
    // 0x236250: 0xc08e8c0  jal         func_23A300
label_236254:
    if (ctx->pc == 0x236254u) {
        ctx->pc = 0x236254u;
            // 0x236254: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x236258u;
        goto label_236258;
    }
    ctx->pc = 0x236250u;
    SET_GPR_U32(ctx, 31, 0x236258u);
    ctx->pc = 0x236254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236250u;
            // 0x236254: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (runtime->hasFunction(0x23A300u)) {
        auto targetFn = runtime->lookupFunction(0x23A300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236258u; }
        if (ctx->pc != 0x236258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023A300_0x23a300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236258u; }
        if (ctx->pc != 0x236258u) { return; }
    }
    ctx->pc = 0x236258u;
label_236258:
    // 0x236258: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x236258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23625c:
    // 0x23625c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x23625cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_236260:
    // 0x236260: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x236260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_236264:
    // 0x236264: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x236264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_236268:
    // 0x236268: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x236268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_23626c:
    // 0x23626c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x23626cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_236270:
    // 0x236270: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_236274:
    if (ctx->pc == 0x236274u) {
        ctx->pc = 0x236274u;
            // 0x236274: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x236278u;
        goto label_236278;
    }
    ctx->pc = 0x236270u;
    {
        const bool branch_taken_0x236270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236270u;
            // 0x236274: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236270) {
            ctx->pc = 0x2362A0u;
            goto label_2362a0;
        }
    }
    ctx->pc = 0x236278u;
label_236278:
    // 0x236278: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x236278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_23627c:
    // 0x23627c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x23627cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_236280:
    // 0x236280: 0x2442d618  addiu       $v0, $v0, -0x29E8
    ctx->pc = 0x236280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956568));
label_236284:
    // 0x236284: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x236284u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_236288:
    // 0x236288: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x236288u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_23628c:
    // 0x23628c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x23628cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_236290:
    // 0x236290: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x236290u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_236294:
    // 0x236294: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x236294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_236298:
    // 0x236298: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x236298u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_23629c:
    // 0x23629c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x23629cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_2362a0:
    // 0x2362a0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x2362a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_2362a4:
    // 0x2362a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2362a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2362a8:
    // 0x2362a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2362a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2362ac:
    // 0x2362ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2362acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2362b0:
    // 0x2362b0: 0x3e00008  jr          $ra
label_2362b4:
    if (ctx->pc == 0x2362B4u) {
        ctx->pc = 0x2362B4u;
            // 0x2362b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2362B8u;
        goto label_2362b8;
    }
    ctx->pc = 0x2362B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2362B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2362B0u;
            // 0x2362b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2362B8u;
label_2362b8:
    // 0x2362b8: 0x0  nop
    ctx->pc = 0x2362b8u;
    // NOP
label_2362bc:
    // 0x2362bc: 0x0  nop
    ctx->pc = 0x2362bcu;
    // NOP
label_2362c0:
    // 0x2362c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2362c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2362c4:
    // 0x2362c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2362c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2362c8:
    // 0x2362c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2362c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2362cc:
    // 0x2362cc: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x2362ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_2362d0:
    // 0x2362d0: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x2362d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2362d4:
    // 0x2362d4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_2362d8:
    if (ctx->pc == 0x2362D8u) {
        ctx->pc = 0x2362D8u;
            // 0x2362d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2362DCu;
        goto label_2362dc;
    }
    ctx->pc = 0x2362D4u;
    {
        const bool branch_taken_0x2362d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2362D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2362D4u;
            // 0x2362d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2362d4) {
            ctx->pc = 0x2362ECu;
            goto label_2362ec;
        }
    }
    ctx->pc = 0x2362DCu;
label_2362dc:
    // 0x2362dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2362dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2362e0:
    // 0x2362e0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2362e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2362e4:
    // 0x2362e4: 0x320f809  jalr        $t9
label_2362e8:
    if (ctx->pc == 0x2362E8u) {
        ctx->pc = 0x2362ECu;
        goto label_2362ec;
    }
    ctx->pc = 0x2362E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2362ECu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2362ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2362ECu; }
            if (ctx->pc != 0x2362ECu) { return; }
        }
        }
    }
    ctx->pc = 0x2362ECu;
label_2362ec:
    // 0x2362ec: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x2362ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2362f0:
    // 0x2362f0: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_2362f4:
    if (ctx->pc == 0x2362F4u) {
        ctx->pc = 0x2362F4u;
            // 0x2362f4: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x2362F8u;
        goto label_2362f8;
    }
    ctx->pc = 0x2362F0u;
    {
        const bool branch_taken_0x2362f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2362f0) {
            ctx->pc = 0x2362F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2362F0u;
            // 0x2362f4: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x236308u;
            goto label_236308;
        }
    }
    ctx->pc = 0x2362F8u;
label_2362f8:
    // 0x2362f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2362f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2362fc:
    // 0x2362fc: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_236300:
    if (ctx->pc == 0x236300u) {
        ctx->pc = 0x236300u;
            // 0x236300: 0x8e030024  lw          $v1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x236304u;
        goto label_236304;
    }
    ctx->pc = 0x2362FCu;
    {
        const bool branch_taken_0x2362fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2362fc) {
            ctx->pc = 0x236300u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2362FCu;
            // 0x236300: 0x8e030024  lw          $v1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x236318u;
            goto label_236318;
        }
    }
    ctx->pc = 0x236304u;
label_236304:
    // 0x236304: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x236304u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_236308:
    // 0x236308: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x236308u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_23630c:
    // 0x23630c: 0x320f809  jalr        $t9
label_236310:
    if (ctx->pc == 0x236310u) {
        ctx->pc = 0x236310u;
            // 0x236310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x236314u;
        goto label_236314;
    }
    ctx->pc = 0x23630Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x236314u);
        ctx->pc = 0x236310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23630Cu;
            // 0x236310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x236314u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x236314u; }
            if (ctx->pc != 0x236314u) { return; }
        }
        }
    }
    ctx->pc = 0x236314u;
label_236314:
    // 0x236314: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x236314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_236318:
    // 0x236318: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_23631c:
    if (ctx->pc == 0x23631Cu) {
        ctx->pc = 0x23631Cu;
            // 0x23631c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x236320u;
        goto label_236320;
    }
    ctx->pc = 0x236318u;
    {
        const bool branch_taken_0x236318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x236318) {
            ctx->pc = 0x23631Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x236318u;
            // 0x23631c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x236330u;
            goto label_236330;
        }
    }
    ctx->pc = 0x236320u;
label_236320:
    // 0x236320: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x236320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_236324:
    // 0x236324: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_236328:
    if (ctx->pc == 0x236328u) {
        ctx->pc = 0x236328u;
            // 0x236328: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x23632Cu;
        goto label_23632c;
    }
    ctx->pc = 0x236324u;
    {
        const bool branch_taken_0x236324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x236324) {
            ctx->pc = 0x236328u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x236324u;
            // 0x236328: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x236340u;
            goto label_236340;
        }
    }
    ctx->pc = 0x23632Cu;
label_23632c:
    // 0x23632c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x23632cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_236330:
    // 0x236330: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x236330u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_236334:
    // 0x236334: 0x320f809  jalr        $t9
label_236338:
    if (ctx->pc == 0x236338u) {
        ctx->pc = 0x236338u;
            // 0x236338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23633Cu;
        goto label_23633c;
    }
    ctx->pc = 0x236334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23633Cu);
        ctx->pc = 0x236338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236334u;
            // 0x236338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23633Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23633Cu; }
            if (ctx->pc != 0x23633Cu) { return; }
        }
        }
    }
    ctx->pc = 0x23633Cu;
label_23633c:
    // 0x23633c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x23633cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_236340:
    // 0x236340: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x236340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_236344:
    // 0x236344: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x236344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_236348:
    // 0x236348: 0x3e00008  jr          $ra
label_23634c:
    if (ctx->pc == 0x23634Cu) {
        ctx->pc = 0x23634Cu;
            // 0x23634c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x236350u;
        goto label_fallthrough_0x236348;
    }
    ctx->pc = 0x236348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23634Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236348u;
            // 0x23634c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x236348:
    ctx->pc = 0x236350u;
}
