#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00477240
// Address: 0x477240 - 0x4774a0
void sub_00477240_0x477240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00477240_0x477240");
#endif

    switch (ctx->pc) {
        case 0x477240u: goto label_477240;
        case 0x477244u: goto label_477244;
        case 0x477248u: goto label_477248;
        case 0x47724cu: goto label_47724c;
        case 0x477250u: goto label_477250;
        case 0x477254u: goto label_477254;
        case 0x477258u: goto label_477258;
        case 0x47725cu: goto label_47725c;
        case 0x477260u: goto label_477260;
        case 0x477264u: goto label_477264;
        case 0x477268u: goto label_477268;
        case 0x47726cu: goto label_47726c;
        case 0x477270u: goto label_477270;
        case 0x477274u: goto label_477274;
        case 0x477278u: goto label_477278;
        case 0x47727cu: goto label_47727c;
        case 0x477280u: goto label_477280;
        case 0x477284u: goto label_477284;
        case 0x477288u: goto label_477288;
        case 0x47728cu: goto label_47728c;
        case 0x477290u: goto label_477290;
        case 0x477294u: goto label_477294;
        case 0x477298u: goto label_477298;
        case 0x47729cu: goto label_47729c;
        case 0x4772a0u: goto label_4772a0;
        case 0x4772a4u: goto label_4772a4;
        case 0x4772a8u: goto label_4772a8;
        case 0x4772acu: goto label_4772ac;
        case 0x4772b0u: goto label_4772b0;
        case 0x4772b4u: goto label_4772b4;
        case 0x4772b8u: goto label_4772b8;
        case 0x4772bcu: goto label_4772bc;
        case 0x4772c0u: goto label_4772c0;
        case 0x4772c4u: goto label_4772c4;
        case 0x4772c8u: goto label_4772c8;
        case 0x4772ccu: goto label_4772cc;
        case 0x4772d0u: goto label_4772d0;
        case 0x4772d4u: goto label_4772d4;
        case 0x4772d8u: goto label_4772d8;
        case 0x4772dcu: goto label_4772dc;
        case 0x4772e0u: goto label_4772e0;
        case 0x4772e4u: goto label_4772e4;
        case 0x4772e8u: goto label_4772e8;
        case 0x4772ecu: goto label_4772ec;
        case 0x4772f0u: goto label_4772f0;
        case 0x4772f4u: goto label_4772f4;
        case 0x4772f8u: goto label_4772f8;
        case 0x4772fcu: goto label_4772fc;
        case 0x477300u: goto label_477300;
        case 0x477304u: goto label_477304;
        case 0x477308u: goto label_477308;
        case 0x47730cu: goto label_47730c;
        case 0x477310u: goto label_477310;
        case 0x477314u: goto label_477314;
        case 0x477318u: goto label_477318;
        case 0x47731cu: goto label_47731c;
        case 0x477320u: goto label_477320;
        case 0x477324u: goto label_477324;
        case 0x477328u: goto label_477328;
        case 0x47732cu: goto label_47732c;
        case 0x477330u: goto label_477330;
        case 0x477334u: goto label_477334;
        case 0x477338u: goto label_477338;
        case 0x47733cu: goto label_47733c;
        case 0x477340u: goto label_477340;
        case 0x477344u: goto label_477344;
        case 0x477348u: goto label_477348;
        case 0x47734cu: goto label_47734c;
        case 0x477350u: goto label_477350;
        case 0x477354u: goto label_477354;
        case 0x477358u: goto label_477358;
        case 0x47735cu: goto label_47735c;
        case 0x477360u: goto label_477360;
        case 0x477364u: goto label_477364;
        case 0x477368u: goto label_477368;
        case 0x47736cu: goto label_47736c;
        case 0x477370u: goto label_477370;
        case 0x477374u: goto label_477374;
        case 0x477378u: goto label_477378;
        case 0x47737cu: goto label_47737c;
        case 0x477380u: goto label_477380;
        case 0x477384u: goto label_477384;
        case 0x477388u: goto label_477388;
        case 0x47738cu: goto label_47738c;
        case 0x477390u: goto label_477390;
        case 0x477394u: goto label_477394;
        case 0x477398u: goto label_477398;
        case 0x47739cu: goto label_47739c;
        case 0x4773a0u: goto label_4773a0;
        case 0x4773a4u: goto label_4773a4;
        case 0x4773a8u: goto label_4773a8;
        case 0x4773acu: goto label_4773ac;
        case 0x4773b0u: goto label_4773b0;
        case 0x4773b4u: goto label_4773b4;
        case 0x4773b8u: goto label_4773b8;
        case 0x4773bcu: goto label_4773bc;
        case 0x4773c0u: goto label_4773c0;
        case 0x4773c4u: goto label_4773c4;
        case 0x4773c8u: goto label_4773c8;
        case 0x4773ccu: goto label_4773cc;
        case 0x4773d0u: goto label_4773d0;
        case 0x4773d4u: goto label_4773d4;
        case 0x4773d8u: goto label_4773d8;
        case 0x4773dcu: goto label_4773dc;
        case 0x4773e0u: goto label_4773e0;
        case 0x4773e4u: goto label_4773e4;
        case 0x4773e8u: goto label_4773e8;
        case 0x4773ecu: goto label_4773ec;
        case 0x4773f0u: goto label_4773f0;
        case 0x4773f4u: goto label_4773f4;
        case 0x4773f8u: goto label_4773f8;
        case 0x4773fcu: goto label_4773fc;
        case 0x477400u: goto label_477400;
        case 0x477404u: goto label_477404;
        case 0x477408u: goto label_477408;
        case 0x47740cu: goto label_47740c;
        case 0x477410u: goto label_477410;
        case 0x477414u: goto label_477414;
        case 0x477418u: goto label_477418;
        case 0x47741cu: goto label_47741c;
        case 0x477420u: goto label_477420;
        case 0x477424u: goto label_477424;
        case 0x477428u: goto label_477428;
        case 0x47742cu: goto label_47742c;
        case 0x477430u: goto label_477430;
        case 0x477434u: goto label_477434;
        case 0x477438u: goto label_477438;
        case 0x47743cu: goto label_47743c;
        case 0x477440u: goto label_477440;
        case 0x477444u: goto label_477444;
        case 0x477448u: goto label_477448;
        case 0x47744cu: goto label_47744c;
        case 0x477450u: goto label_477450;
        case 0x477454u: goto label_477454;
        case 0x477458u: goto label_477458;
        case 0x47745cu: goto label_47745c;
        case 0x477460u: goto label_477460;
        case 0x477464u: goto label_477464;
        case 0x477468u: goto label_477468;
        case 0x47746cu: goto label_47746c;
        case 0x477470u: goto label_477470;
        case 0x477474u: goto label_477474;
        case 0x477478u: goto label_477478;
        case 0x47747cu: goto label_47747c;
        case 0x477480u: goto label_477480;
        case 0x477484u: goto label_477484;
        case 0x477488u: goto label_477488;
        case 0x47748cu: goto label_47748c;
        case 0x477490u: goto label_477490;
        case 0x477494u: goto label_477494;
        case 0x477498u: goto label_477498;
        case 0x47749cu: goto label_47749c;
        default: break;
    }

    ctx->pc = 0x477240u;

label_477240:
    // 0x477240: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x477240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_477244:
    // 0x477244: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x477244u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_477248:
    // 0x477248: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x477248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_47724c:
    // 0x47724c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x47724cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_477250:
    // 0x477250: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x477250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_477254:
    // 0x477254: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x477254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_477258:
    // 0x477258: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x477258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_47725c:
    // 0x47725c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x47725cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_477260:
    // 0x477260: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x477260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_477264:
    // 0x477264: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x477264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_477268:
    // 0x477268: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x477268u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_47726c:
    // 0x47726c: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x47726cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_477270:
    // 0x477270: 0x30680002  andi        $t0, $v1, 0x2
    ctx->pc = 0x477270u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_477274:
    // 0x477274: 0x15000008  bnez        $t0, . + 4 + (0x8 << 2)
label_477278:
    if (ctx->pc == 0x477278u) {
        ctx->pc = 0x477278u;
            // 0x477278: 0x24c6f300  addiu       $a2, $a2, -0xD00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963968));
        ctx->pc = 0x47727Cu;
        goto label_47727c;
    }
    ctx->pc = 0x477274u;
    {
        const bool branch_taken_0x477274 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x477278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x477274u;
            // 0x477278: 0x24c6f300  addiu       $a2, $a2, -0xD00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x477274) {
            ctx->pc = 0x477298u;
            goto label_477298;
        }
    }
    ctx->pc = 0x47727Cu;
label_47727c:
    // 0x47727c: 0xc4820064  lwc1        $f2, 0x64($a0)
    ctx->pc = 0x47727cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_477280:
    // 0x477280: 0xc4c10068  lwc1        $f1, 0x68($a2)
    ctx->pc = 0x477280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_477284:
    // 0x477284: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x477284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_477288:
    // 0x477288: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x477288u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_47728c:
    // 0x47728c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x47728cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_477290:
    // 0x477290: 0x45030078  bc1tl       . + 4 + (0x78 << 2)
label_477294:
    if (ctx->pc == 0x477294u) {
        ctx->pc = 0x477294u;
            // 0x477294: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x477298u;
        goto label_477298;
    }
    ctx->pc = 0x477290u;
    {
        const bool branch_taken_0x477290 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x477290) {
            ctx->pc = 0x477294u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x477290u;
            // 0x477294: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x477474u;
            goto label_477474;
        }
    }
    ctx->pc = 0x477298u;
label_477298:
    // 0x477298: 0xc4c40068  lwc1        $f4, 0x68($a2)
    ctx->pc = 0x477298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_47729c:
    // 0x47729c: 0x90c20066  lbu         $v0, 0x66($a2)
    ctx->pc = 0x47729cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 102)));
label_4772a0:
    // 0x4772a0: 0xc4830064  lwc1        $f3, 0x64($a0)
    ctx->pc = 0x4772a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4772a4:
    // 0x4772a4: 0x84870290  lh          $a3, 0x290($a0)
    ctx->pc = 0x4772a4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 656)));
label_4772a8:
    // 0x4772a8: 0xc4a20030  lwc1        $f2, 0x30($a1)
    ctx->pc = 0x4772a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4772ac:
    // 0x4772ac: 0x84a3001e  lh          $v1, 0x1E($a1)
    ctx->pc = 0x4772acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 30)));
label_4772b0:
    // 0x4772b0: 0x84a6001c  lh          $a2, 0x1C($a1)
    ctx->pc = 0x4772b0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 28)));
label_4772b4:
    // 0x4772b4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4772b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_4772b8:
    // 0x4772b8: 0x46041801  sub.s       $f0, $f3, $f4
    ctx->pc = 0x4772b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
label_4772bc:
    // 0x4772bc: 0x640900ff  daddiu      $t1, $zero, 0xFF
    ctx->pc = 0x4772bcu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)255);
label_4772c0:
    // 0x4772c0: 0x62b021  addu        $s6, $v1, $v0
    ctx->pc = 0x4772c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4772c4:
    // 0x4772c4: 0xc79021  addu        $s2, $a2, $a3
    ctx->pc = 0x4772c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_4772c8:
    // 0x4772c8: 0x1100001b  beqz        $t0, . + 4 + (0x1B << 2)
label_4772cc:
    if (ctx->pc == 0x4772CCu) {
        ctx->pc = 0x4772CCu;
            // 0x4772cc: 0x46001041  sub.s       $f1, $f2, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x4772D0u;
        goto label_4772d0;
    }
    ctx->pc = 0x4772C8u;
    {
        const bool branch_taken_0x4772c8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4772CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4772C8u;
            // 0x4772cc: 0x46001041  sub.s       $f1, $f2, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4772c8) {
            ctx->pc = 0x477338u;
            goto label_477338;
        }
    }
    ctx->pc = 0x4772D0u;
label_4772d0:
    // 0x4772d0: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x4772d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_4772d4:
    // 0x4772d4: 0x8483029c  lh          $v1, 0x29C($a0)
    ctx->pc = 0x4772d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 668)));
label_4772d8:
    // 0x4772d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4772d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4772dc:
    // 0x4772dc: 0x0  nop
    ctx->pc = 0x4772dcu;
    // NOP
label_4772e0:
    // 0x4772e0: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x4772e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_4772e4:
    // 0x4772e4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4772e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_4772e8:
    // 0x4772e8: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x4772e8u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
label_4772ec:
    // 0x4772ec: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x4772ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4772f0:
    // 0x4772f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4772f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4772f4:
    // 0x4772f4: 0x0  nop
    ctx->pc = 0x4772f4u;
    // NOP
label_4772f8:
    // 0x4772f8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4772f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4772fc:
    // 0x4772fc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_477300:
    if (ctx->pc == 0x477300u) {
        ctx->pc = 0x477300u;
            // 0x477300: 0x67a823  subu        $s5, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->pc = 0x477304u;
        goto label_477304;
    }
    ctx->pc = 0x4772FCu;
    {
        const bool branch_taken_0x4772fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x477300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4772FCu;
            // 0x477300: 0x67a823  subu        $s5, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4772fc) {
            ctx->pc = 0x477314u;
            goto label_477314;
        }
    }
    ctx->pc = 0x477304u;
label_477304:
    // 0x477304: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x477304u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_477308:
    // 0x477308: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x477308u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_47730c:
    // 0x47730c: 0x10000008  b           . + 4 + (0x8 << 2)
label_477310:
    if (ctx->pc == 0x477310u) {
        ctx->pc = 0x477310u;
            // 0x477310: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x477314u;
        goto label_477314;
    }
    ctx->pc = 0x47730Cu;
    {
        const bool branch_taken_0x47730c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x477310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47730Cu;
            // 0x477310: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x47730c) {
            ctx->pc = 0x477330u;
            goto label_477330;
        }
    }
    ctx->pc = 0x477314u;
label_477314:
    // 0x477314: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x477314u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_477318:
    // 0x477318: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x477318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_47731c:
    // 0x47731c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x47731cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_477320:
    // 0x477320: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x477320u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_477324:
    // 0x477324: 0x0  nop
    ctx->pc = 0x477324u;
    // NOP
label_477328:
    // 0x477328: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x477328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_47732c:
    // 0x47732c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x47732cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_477330:
    // 0x477330: 0x1000000a  b           . + 4 + (0xA << 2)
label_477334:
    if (ctx->pc == 0x477334u) {
        ctx->pc = 0x477334u;
            // 0x477334: 0x306900ff  andi        $t1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x477338u;
        goto label_477338;
    }
    ctx->pc = 0x477330u;
    {
        const bool branch_taken_0x477330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x477334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x477330u;
            // 0x477334: 0x306900ff  andi        $t1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x477330) {
            ctx->pc = 0x47735Cu;
            goto label_47735c;
        }
    }
    ctx->pc = 0x477338u;
label_477338:
    // 0x477338: 0x8482029c  lh          $v0, 0x29C($a0)
    ctx->pc = 0x477338u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 668)));
label_47733c:
    // 0x47733c: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x47733cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_477340:
    // 0x477340: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x477340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477344:
    // 0x477344: 0x0  nop
    ctx->pc = 0x477344u;
    // NOP
label_477348:
    // 0x477348: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x477348u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_47734c:
    // 0x47734c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x47734cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_477350:
    // 0x477350: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x477350u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
label_477354:
    // 0x477354: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x477354u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_477358:
    // 0x477358: 0x44150000  mfc1        $s5, $f0
    ctx->pc = 0x477358u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
label_47735c:
    // 0x47735c: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x47735cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
label_477360:
    // 0x477360: 0x3c110067  lui         $s1, 0x67
    ctx->pc = 0x477360u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)103 << 16));
label_477364:
    // 0x477364: 0x3c100064  lui         $s0, 0x64
    ctx->pc = 0x477364u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
label_477368:
    // 0x477368: 0x313300ff  andi        $s3, $t1, 0xFF
    ctx->pc = 0x477368u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
label_47736c:
    // 0x47736c: 0x2631ab70  addiu       $s1, $s1, -0x5490
    ctx->pc = 0x47736cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945648));
label_477370:
    // 0x477370: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_477374:
    if (ctx->pc == 0x477374u) {
        ctx->pc = 0x477374u;
            // 0x477374: 0x26102110  addiu       $s0, $s0, 0x2110 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8464));
        ctx->pc = 0x477378u;
        goto label_477378;
    }
    ctx->pc = 0x477370u;
    {
        const bool branch_taken_0x477370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x477374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x477370u;
            // 0x477374: 0x26102110  addiu       $s0, $s0, 0x2110 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x477370) {
            ctx->pc = 0x4773C8u;
            goto label_4773c8;
        }
    }
    ctx->pc = 0x477378u;
label_477378:
    // 0x477378: 0x90820068  lbu         $v0, 0x68($a0)
    ctx->pc = 0x477378u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 104)));
label_47737c:
    // 0x47737c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x47737cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_477380:
    // 0x477380: 0x2c61006f  sltiu       $at, $v1, 0x6F
    ctx->pc = 0x477380u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)111) ? 1 : 0);
label_477384:
    // 0x477384: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_477388:
    if (ctx->pc == 0x477388u) {
        ctx->pc = 0x477388u;
            // 0x477388: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47738Cu;
        goto label_47738c;
    }
    ctx->pc = 0x477384u;
    {
        const bool branch_taken_0x477384 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x477388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x477384u;
            // 0x477388: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x477384) {
            ctx->pc = 0x477394u;
            goto label_477394;
        }
    }
    ctx->pc = 0x47738Cu;
label_47738c:
    // 0x47738c: 0x10000007  b           . + 4 + (0x7 << 2)
label_477390:
    if (ctx->pc == 0x477390u) {
        ctx->pc = 0x477390u;
            // 0x477390: 0x306400ff  andi        $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x477394u;
        goto label_477394;
    }
    ctx->pc = 0x47738Cu;
    {
        const bool branch_taken_0x47738c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x477390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47738Cu;
            // 0x477390: 0x306400ff  andi        $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x47738c) {
            ctx->pc = 0x4773ACu;
            goto label_4773ac;
        }
    }
    ctx->pc = 0x477394u;
label_477394:
    // 0x477394: 0x2c6100de  sltiu       $at, $v1, 0xDE
    ctx->pc = 0x477394u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)222) ? 1 : 0);
label_477398:
    // 0x477398: 0x50200005  beql        $at, $zero, . + 4 + (0x5 << 2)
label_47739c:
    if (ctx->pc == 0x47739Cu) {
        ctx->pc = 0x47739Cu;
            // 0x47739c: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x4773A0u;
        goto label_4773a0;
    }
    ctx->pc = 0x477398u;
    {
        const bool branch_taken_0x477398 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x477398) {
            ctx->pc = 0x47739Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x477398u;
            // 0x47739c: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4773B0u;
            goto label_4773b0;
        }
    }
    ctx->pc = 0x4773A0u;
label_4773a0:
    // 0x4773a0: 0x240200de  addiu       $v0, $zero, 0xDE
    ctx->pc = 0x4773a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 222));
label_4773a4:
    // 0x4773a4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4773a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4773a8:
    // 0x4773a8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x4773a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4773ac:
    // 0x4773ac: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x4773acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_4773b0:
    // 0x4773b0: 0x41e00  sll         $v1, $a0, 24
    ctx->pc = 0x4773b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_4773b4:
    // 0x4773b4: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x4773b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_4773b8:
    // 0x4773b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4773b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4773bc:
    // 0x4773bc: 0x41200  sll         $v0, $a0, 8
    ctx->pc = 0x4773bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_4773c0:
    // 0x4773c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4773c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4773c4:
    // 0x4773c4: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x4773c4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_4773c8:
    // 0x4773c8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4773c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4773cc:
    // 0x4773cc: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x4773ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_4773d0:
    // 0x4773d0: 0xc0506ac  jal         func_141AB0
label_4773d4:
    if (ctx->pc == 0x4773D4u) {
        ctx->pc = 0x4773D4u;
            // 0x4773d4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4773D8u;
        goto label_4773d8;
    }
    ctx->pc = 0x4773D0u;
    SET_GPR_U32(ctx, 31, 0x4773D8u);
    ctx->pc = 0x4773D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4773D0u;
            // 0x4773d4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4773D8u; }
        if (ctx->pc != 0x4773D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4773D8u; }
        if (ctx->pc != 0x4773D8u) { return; }
    }
    ctx->pc = 0x4773D8u;
label_4773d8:
    // 0x4773d8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4773d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4773dc:
    // 0x4773dc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4773dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4773e0:
    // 0x4773e0: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x4773e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4773e4:
    // 0x4773e4: 0xc634019c  lwc1        $f20, 0x19C($s1)
    ctx->pc = 0x4773e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4773e8:
    // 0x4773e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4773e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4773ec:
    // 0x4773ec: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4773ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4773f0:
    // 0x4773f0: 0x320f809  jalr        $t9
label_4773f4:
    if (ctx->pc == 0x4773F4u) {
        ctx->pc = 0x4773F4u;
            // 0x4773f4: 0x26340190  addiu       $s4, $s1, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
        ctx->pc = 0x4773F8u;
        goto label_4773f8;
    }
    ctx->pc = 0x4773F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4773F8u);
        ctx->pc = 0x4773F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4773F0u;
            // 0x4773f4: 0x26340190  addiu       $s4, $s1, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4773F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4773F8u; }
            if (ctx->pc != 0x4773F8u) { return; }
        }
        }
    }
    ctx->pc = 0x4773F8u;
label_4773f8:
    // 0x4773f8: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x4773f8u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4773fc:
    // 0x4773fc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4773fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_477400:
    // 0x477400: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x477400u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_477404:
    // 0x477404: 0x2554821  addu        $t1, $s2, $s5
    ctx->pc = 0x477404u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_477408:
    // 0x477408: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x477408u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_47740c:
    // 0x47740c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x47740cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_477410:
    // 0x477410: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x477410u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_477414:
    // 0x477414: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x477414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_477418:
    // 0x477418: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x477418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_47741c:
    // 0x47741c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x47741cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_477420:
    // 0x477420: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x477420u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477424:
    // 0x477424: 0x0  nop
    ctx->pc = 0x477424u;
    // NOP
label_477428:
    // 0x477428: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x477428u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_47742c:
    // 0x47742c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x47742cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477430:
    // 0x477430: 0x0  nop
    ctx->pc = 0x477430u;
    // NOP
label_477434:
    // 0x477434: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x477434u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_477438:
    // 0x477438: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x477438u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_47743c:
    // 0x47743c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x47743cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477440:
    // 0x477440: 0x0  nop
    ctx->pc = 0x477440u;
    // NOP
label_477444:
    // 0x477444: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x477444u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_477448:
    // 0x477448: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x477448u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_47744c:
    // 0x47744c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x47744cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_477450:
    // 0x477450: 0xc0bc284  jal         func_2F0A10
label_477454:
    if (ctx->pc == 0x477454u) {
        ctx->pc = 0x477454u;
            // 0x477454: 0x46147b41  sub.s       $f13, $f15, $f20 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[20]);
        ctx->pc = 0x477458u;
        goto label_477458;
    }
    ctx->pc = 0x477450u;
    SET_GPR_U32(ctx, 31, 0x477458u);
    ctx->pc = 0x477454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x477450u;
            // 0x477454: 0x46147b41  sub.s       $f13, $f15, $f20 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x477458u; }
        if (ctx->pc != 0x477458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x477458u; }
        if (ctx->pc != 0x477458u) { return; }
    }
    ctx->pc = 0x477458u;
label_477458:
    // 0x477458: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x477458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_47745c:
    // 0x47745c: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x47745cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_477460:
    // 0x477460: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x477460u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_477464:
    // 0x477464: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x477464u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_477468:
    // 0x477468: 0x320f809  jalr        $t9
label_47746c:
    if (ctx->pc == 0x47746Cu) {
        ctx->pc = 0x477470u;
        goto label_477470;
    }
    ctx->pc = 0x477468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x477470u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x477470u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x477470u; }
            if (ctx->pc != 0x477470u) { return; }
        }
        }
    }
    ctx->pc = 0x477470u;
label_477470:
    // 0x477470: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x477470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_477474:
    // 0x477474: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x477474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_477478:
    // 0x477478: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x477478u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_47747c:
    // 0x47747c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x47747cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_477480:
    // 0x477480: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x477480u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_477484:
    // 0x477484: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x477484u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_477488:
    // 0x477488: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x477488u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47748c:
    // 0x47748c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x47748cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_477490:
    // 0x477490: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x477490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_477494:
    // 0x477494: 0x3e00008  jr          $ra
label_477498:
    if (ctx->pc == 0x477498u) {
        ctx->pc = 0x477498u;
            // 0x477498: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x47749Cu;
        goto label_47749c;
    }
    ctx->pc = 0x477494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x477498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x477494u;
            // 0x477498: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47749Cu;
label_47749c:
    // 0x47749c: 0x0  nop
    ctx->pc = 0x47749cu;
    // NOP
}
