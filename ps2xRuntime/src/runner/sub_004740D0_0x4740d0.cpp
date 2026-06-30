#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004740D0
// Address: 0x4740d0 - 0x4744a0
void sub_004740D0_0x4740d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004740D0_0x4740d0");
#endif

    switch (ctx->pc) {
        case 0x4740d0u: goto label_4740d0;
        case 0x4740d4u: goto label_4740d4;
        case 0x4740d8u: goto label_4740d8;
        case 0x4740dcu: goto label_4740dc;
        case 0x4740e0u: goto label_4740e0;
        case 0x4740e4u: goto label_4740e4;
        case 0x4740e8u: goto label_4740e8;
        case 0x4740ecu: goto label_4740ec;
        case 0x4740f0u: goto label_4740f0;
        case 0x4740f4u: goto label_4740f4;
        case 0x4740f8u: goto label_4740f8;
        case 0x4740fcu: goto label_4740fc;
        case 0x474100u: goto label_474100;
        case 0x474104u: goto label_474104;
        case 0x474108u: goto label_474108;
        case 0x47410cu: goto label_47410c;
        case 0x474110u: goto label_474110;
        case 0x474114u: goto label_474114;
        case 0x474118u: goto label_474118;
        case 0x47411cu: goto label_47411c;
        case 0x474120u: goto label_474120;
        case 0x474124u: goto label_474124;
        case 0x474128u: goto label_474128;
        case 0x47412cu: goto label_47412c;
        case 0x474130u: goto label_474130;
        case 0x474134u: goto label_474134;
        case 0x474138u: goto label_474138;
        case 0x47413cu: goto label_47413c;
        case 0x474140u: goto label_474140;
        case 0x474144u: goto label_474144;
        case 0x474148u: goto label_474148;
        case 0x47414cu: goto label_47414c;
        case 0x474150u: goto label_474150;
        case 0x474154u: goto label_474154;
        case 0x474158u: goto label_474158;
        case 0x47415cu: goto label_47415c;
        case 0x474160u: goto label_474160;
        case 0x474164u: goto label_474164;
        case 0x474168u: goto label_474168;
        case 0x47416cu: goto label_47416c;
        case 0x474170u: goto label_474170;
        case 0x474174u: goto label_474174;
        case 0x474178u: goto label_474178;
        case 0x47417cu: goto label_47417c;
        case 0x474180u: goto label_474180;
        case 0x474184u: goto label_474184;
        case 0x474188u: goto label_474188;
        case 0x47418cu: goto label_47418c;
        case 0x474190u: goto label_474190;
        case 0x474194u: goto label_474194;
        case 0x474198u: goto label_474198;
        case 0x47419cu: goto label_47419c;
        case 0x4741a0u: goto label_4741a0;
        case 0x4741a4u: goto label_4741a4;
        case 0x4741a8u: goto label_4741a8;
        case 0x4741acu: goto label_4741ac;
        case 0x4741b0u: goto label_4741b0;
        case 0x4741b4u: goto label_4741b4;
        case 0x4741b8u: goto label_4741b8;
        case 0x4741bcu: goto label_4741bc;
        case 0x4741c0u: goto label_4741c0;
        case 0x4741c4u: goto label_4741c4;
        case 0x4741c8u: goto label_4741c8;
        case 0x4741ccu: goto label_4741cc;
        case 0x4741d0u: goto label_4741d0;
        case 0x4741d4u: goto label_4741d4;
        case 0x4741d8u: goto label_4741d8;
        case 0x4741dcu: goto label_4741dc;
        case 0x4741e0u: goto label_4741e0;
        case 0x4741e4u: goto label_4741e4;
        case 0x4741e8u: goto label_4741e8;
        case 0x4741ecu: goto label_4741ec;
        case 0x4741f0u: goto label_4741f0;
        case 0x4741f4u: goto label_4741f4;
        case 0x4741f8u: goto label_4741f8;
        case 0x4741fcu: goto label_4741fc;
        case 0x474200u: goto label_474200;
        case 0x474204u: goto label_474204;
        case 0x474208u: goto label_474208;
        case 0x47420cu: goto label_47420c;
        case 0x474210u: goto label_474210;
        case 0x474214u: goto label_474214;
        case 0x474218u: goto label_474218;
        case 0x47421cu: goto label_47421c;
        case 0x474220u: goto label_474220;
        case 0x474224u: goto label_474224;
        case 0x474228u: goto label_474228;
        case 0x47422cu: goto label_47422c;
        case 0x474230u: goto label_474230;
        case 0x474234u: goto label_474234;
        case 0x474238u: goto label_474238;
        case 0x47423cu: goto label_47423c;
        case 0x474240u: goto label_474240;
        case 0x474244u: goto label_474244;
        case 0x474248u: goto label_474248;
        case 0x47424cu: goto label_47424c;
        case 0x474250u: goto label_474250;
        case 0x474254u: goto label_474254;
        case 0x474258u: goto label_474258;
        case 0x47425cu: goto label_47425c;
        case 0x474260u: goto label_474260;
        case 0x474264u: goto label_474264;
        case 0x474268u: goto label_474268;
        case 0x47426cu: goto label_47426c;
        case 0x474270u: goto label_474270;
        case 0x474274u: goto label_474274;
        case 0x474278u: goto label_474278;
        case 0x47427cu: goto label_47427c;
        case 0x474280u: goto label_474280;
        case 0x474284u: goto label_474284;
        case 0x474288u: goto label_474288;
        case 0x47428cu: goto label_47428c;
        case 0x474290u: goto label_474290;
        case 0x474294u: goto label_474294;
        case 0x474298u: goto label_474298;
        case 0x47429cu: goto label_47429c;
        case 0x4742a0u: goto label_4742a0;
        case 0x4742a4u: goto label_4742a4;
        case 0x4742a8u: goto label_4742a8;
        case 0x4742acu: goto label_4742ac;
        case 0x4742b0u: goto label_4742b0;
        case 0x4742b4u: goto label_4742b4;
        case 0x4742b8u: goto label_4742b8;
        case 0x4742bcu: goto label_4742bc;
        case 0x4742c0u: goto label_4742c0;
        case 0x4742c4u: goto label_4742c4;
        case 0x4742c8u: goto label_4742c8;
        case 0x4742ccu: goto label_4742cc;
        case 0x4742d0u: goto label_4742d0;
        case 0x4742d4u: goto label_4742d4;
        case 0x4742d8u: goto label_4742d8;
        case 0x4742dcu: goto label_4742dc;
        case 0x4742e0u: goto label_4742e0;
        case 0x4742e4u: goto label_4742e4;
        case 0x4742e8u: goto label_4742e8;
        case 0x4742ecu: goto label_4742ec;
        case 0x4742f0u: goto label_4742f0;
        case 0x4742f4u: goto label_4742f4;
        case 0x4742f8u: goto label_4742f8;
        case 0x4742fcu: goto label_4742fc;
        case 0x474300u: goto label_474300;
        case 0x474304u: goto label_474304;
        case 0x474308u: goto label_474308;
        case 0x47430cu: goto label_47430c;
        case 0x474310u: goto label_474310;
        case 0x474314u: goto label_474314;
        case 0x474318u: goto label_474318;
        case 0x47431cu: goto label_47431c;
        case 0x474320u: goto label_474320;
        case 0x474324u: goto label_474324;
        case 0x474328u: goto label_474328;
        case 0x47432cu: goto label_47432c;
        case 0x474330u: goto label_474330;
        case 0x474334u: goto label_474334;
        case 0x474338u: goto label_474338;
        case 0x47433cu: goto label_47433c;
        case 0x474340u: goto label_474340;
        case 0x474344u: goto label_474344;
        case 0x474348u: goto label_474348;
        case 0x47434cu: goto label_47434c;
        case 0x474350u: goto label_474350;
        case 0x474354u: goto label_474354;
        case 0x474358u: goto label_474358;
        case 0x47435cu: goto label_47435c;
        case 0x474360u: goto label_474360;
        case 0x474364u: goto label_474364;
        case 0x474368u: goto label_474368;
        case 0x47436cu: goto label_47436c;
        case 0x474370u: goto label_474370;
        case 0x474374u: goto label_474374;
        case 0x474378u: goto label_474378;
        case 0x47437cu: goto label_47437c;
        case 0x474380u: goto label_474380;
        case 0x474384u: goto label_474384;
        case 0x474388u: goto label_474388;
        case 0x47438cu: goto label_47438c;
        case 0x474390u: goto label_474390;
        case 0x474394u: goto label_474394;
        case 0x474398u: goto label_474398;
        case 0x47439cu: goto label_47439c;
        case 0x4743a0u: goto label_4743a0;
        case 0x4743a4u: goto label_4743a4;
        case 0x4743a8u: goto label_4743a8;
        case 0x4743acu: goto label_4743ac;
        case 0x4743b0u: goto label_4743b0;
        case 0x4743b4u: goto label_4743b4;
        case 0x4743b8u: goto label_4743b8;
        case 0x4743bcu: goto label_4743bc;
        case 0x4743c0u: goto label_4743c0;
        case 0x4743c4u: goto label_4743c4;
        case 0x4743c8u: goto label_4743c8;
        case 0x4743ccu: goto label_4743cc;
        case 0x4743d0u: goto label_4743d0;
        case 0x4743d4u: goto label_4743d4;
        case 0x4743d8u: goto label_4743d8;
        case 0x4743dcu: goto label_4743dc;
        case 0x4743e0u: goto label_4743e0;
        case 0x4743e4u: goto label_4743e4;
        case 0x4743e8u: goto label_4743e8;
        case 0x4743ecu: goto label_4743ec;
        case 0x4743f0u: goto label_4743f0;
        case 0x4743f4u: goto label_4743f4;
        case 0x4743f8u: goto label_4743f8;
        case 0x4743fcu: goto label_4743fc;
        case 0x474400u: goto label_474400;
        case 0x474404u: goto label_474404;
        case 0x474408u: goto label_474408;
        case 0x47440cu: goto label_47440c;
        case 0x474410u: goto label_474410;
        case 0x474414u: goto label_474414;
        case 0x474418u: goto label_474418;
        case 0x47441cu: goto label_47441c;
        case 0x474420u: goto label_474420;
        case 0x474424u: goto label_474424;
        case 0x474428u: goto label_474428;
        case 0x47442cu: goto label_47442c;
        case 0x474430u: goto label_474430;
        case 0x474434u: goto label_474434;
        case 0x474438u: goto label_474438;
        case 0x47443cu: goto label_47443c;
        case 0x474440u: goto label_474440;
        case 0x474444u: goto label_474444;
        case 0x474448u: goto label_474448;
        case 0x47444cu: goto label_47444c;
        case 0x474450u: goto label_474450;
        case 0x474454u: goto label_474454;
        case 0x474458u: goto label_474458;
        case 0x47445cu: goto label_47445c;
        case 0x474460u: goto label_474460;
        case 0x474464u: goto label_474464;
        case 0x474468u: goto label_474468;
        case 0x47446cu: goto label_47446c;
        case 0x474470u: goto label_474470;
        case 0x474474u: goto label_474474;
        case 0x474478u: goto label_474478;
        case 0x47447cu: goto label_47447c;
        case 0x474480u: goto label_474480;
        case 0x474484u: goto label_474484;
        case 0x474488u: goto label_474488;
        case 0x47448cu: goto label_47448c;
        case 0x474490u: goto label_474490;
        case 0x474494u: goto label_474494;
        case 0x474498u: goto label_474498;
        case 0x47449cu: goto label_47449c;
        default: break;
    }

    ctx->pc = 0x4740d0u;

label_4740d0:
    // 0x4740d0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x4740d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_4740d4:
    // 0x4740d4: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x4740d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_4740d8:
    // 0x4740d8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x4740d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_4740dc:
    // 0x4740dc: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x4740dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_4740e0:
    // 0x4740e0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x4740e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_4740e4:
    // 0x4740e4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4740e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_4740e8:
    // 0x4740e8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4740e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4740ec:
    // 0x4740ec: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4740ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4740f0:
    // 0x4740f0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4740f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4740f4:
    // 0x4740f4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4740f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4740f8:
    // 0x4740f8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4740f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4740fc:
    // 0x4740fc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4740fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_474100:
    // 0x474100: 0x3c1200af  lui         $s2, 0xAF
    ctx->pc = 0x474100u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)175 << 16));
label_474104:
    // 0x474104: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x474104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_474108:
    // 0x474108: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x474108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_47410c:
    // 0x47410c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x47410cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_474110:
    // 0x474110: 0x26520e84  addiu       $s2, $s2, 0xE84
    ctx->pc = 0x474110u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3716));
label_474114:
    // 0x474114: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x474114u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_474118:
    // 0x474118: 0x2671008c  addiu       $s1, $s3, 0x8C
    ctx->pc = 0x474118u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 140));
label_47411c:
    // 0x47411c: 0xc4751360  lwc1        $f21, 0x1360($v1)
    ctx->pc = 0x47411cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_474120:
    // 0x474120: 0x8c840e80  lw          $a0, 0xE80($a0)
    ctx->pc = 0x474120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3712)));
label_474124:
    // 0x474124: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x474124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_474128:
    // 0x474128: 0x8c96077c  lw          $s6, 0x77C($a0)
    ctx->pc = 0x474128u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1916)));
label_47412c:
    // 0x47412c: 0x907ef259  lbu         $fp, -0xDA7($v1)
    ctx->pc = 0x47412cu;
    SET_GPR_U32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294963801)));
label_474130:
    // 0x474130: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x474130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_474134:
    // 0x474134: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x474134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_474138:
    // 0x474138: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
label_47413c:
    if (ctx->pc == 0x47413Cu) {
        ctx->pc = 0x474140u;
        goto label_474140;
    }
    ctx->pc = 0x474138u;
    {
        const bool branch_taken_0x474138 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x474138) {
            ctx->pc = 0x4741A8u;
            goto label_4741a8;
        }
    }
    ctx->pc = 0x474140u;
label_474140:
    // 0x474140: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x474140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_474144:
    // 0x474144: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_474148:
    if (ctx->pc == 0x474148u) {
        ctx->pc = 0x47414Cu;
        goto label_47414c;
    }
    ctx->pc = 0x474144u;
    {
        const bool branch_taken_0x474144 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x474144) {
            ctx->pc = 0x474160u;
            goto label_474160;
        }
    }
    ctx->pc = 0x47414Cu;
label_47414c:
    // 0x47414c: 0x108000c0  beqz        $a0, . + 4 + (0xC0 << 2)
label_474150:
    if (ctx->pc == 0x474150u) {
        ctx->pc = 0x474154u;
        goto label_474154;
    }
    ctx->pc = 0x47414Cu;
    {
        const bool branch_taken_0x47414c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x47414c) {
            ctx->pc = 0x474450u;
            goto label_474450;
        }
    }
    ctx->pc = 0x474154u;
label_474154:
    // 0x474154: 0x100000be  b           . + 4 + (0xBE << 2)
label_474158:
    if (ctx->pc == 0x474158u) {
        ctx->pc = 0x47415Cu;
        goto label_47415c;
    }
    ctx->pc = 0x474154u;
    {
        const bool branch_taken_0x474154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x474154) {
            ctx->pc = 0x474450u;
            goto label_474450;
        }
    }
    ctx->pc = 0x47415Cu;
label_47415c:
    // 0x47415c: 0x0  nop
    ctx->pc = 0x47415cu;
    // NOP
label_474160:
    // 0x474160: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x474160u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_474164:
    // 0x474164: 0x26650070  addiu       $a1, $s3, 0x70
    ctx->pc = 0x474164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_474168:
    // 0x474168: 0xc04cc34  jal         func_1330D0
label_47416c:
    if (ctx->pc == 0x47416Cu) {
        ctx->pc = 0x47416Cu;
            // 0x47416c: 0x260402c0  addiu       $a0, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->pc = 0x474170u;
        goto label_474170;
    }
    ctx->pc = 0x474168u;
    SET_GPR_U32(ctx, 31, 0x474170u);
    ctx->pc = 0x47416Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474168u;
            // 0x47416c: 0x260402c0  addiu       $a0, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474170u; }
        if (ctx->pc != 0x474170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474170u; }
        if (ctx->pc != 0x474170u) { return; }
    }
    ctx->pc = 0x474170u;
label_474170:
    // 0x474170: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x474170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
label_474174:
    // 0x474174: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x474174u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_474178:
    // 0x474178: 0x0  nop
    ctx->pc = 0x474178u;
    // NOP
label_47417c:
    // 0x47417c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x47417cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_474180:
    // 0x474180: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_474184:
    if (ctx->pc == 0x474184u) {
        ctx->pc = 0x474188u;
        goto label_474188;
    }
    ctx->pc = 0x474180u;
    {
        const bool branch_taken_0x474180 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x474180) {
            ctx->pc = 0x474198u;
            goto label_474198;
        }
    }
    ctx->pc = 0x474188u;
label_474188:
    // 0x474188: 0xae000de4  sw          $zero, 0xDE4($s0)
    ctx->pc = 0x474188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3556), GPR_U32(ctx, 0));
label_47418c:
    // 0x47418c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x47418cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_474190:
    // 0x474190: 0x100000af  b           . + 4 + (0xAF << 2)
label_474194:
    if (ctx->pc == 0x474194u) {
        ctx->pc = 0x474194u;
            // 0x474194: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x474198u;
        goto label_474198;
    }
    ctx->pc = 0x474190u;
    {
        const bool branch_taken_0x474190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x474194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x474190u;
            // 0x474194: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474190) {
            ctx->pc = 0x474450u;
            goto label_474450;
        }
    }
    ctx->pc = 0x474198u;
label_474198:
    // 0x474198: 0x3c033e6d  lui         $v1, 0x3E6D
    ctx->pc = 0x474198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15981 << 16));
label_47419c:
    // 0x47419c: 0x3463097b  ori         $v1, $v1, 0x97B
    ctx->pc = 0x47419cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2427);
label_4741a0:
    // 0x4741a0: 0x100000ab  b           . + 4 + (0xAB << 2)
label_4741a4:
    if (ctx->pc == 0x4741A4u) {
        ctx->pc = 0x4741A4u;
            // 0x4741a4: 0xae030de4  sw          $v1, 0xDE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3556), GPR_U32(ctx, 3));
        ctx->pc = 0x4741A8u;
        goto label_4741a8;
    }
    ctx->pc = 0x4741A0u;
    {
        const bool branch_taken_0x4741a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4741A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4741A0u;
            // 0x4741a4: 0xae030de4  sw          $v1, 0xDE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3556), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4741a0) {
            ctx->pc = 0x474450u;
            goto label_474450;
        }
    }
    ctx->pc = 0x4741A8u;
label_4741a8:
    // 0x4741a8: 0x8e6600b0  lw          $a2, 0xB0($s3)
    ctx->pc = 0x4741a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_4741ac:
    // 0x4741ac: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
label_4741b0:
    if (ctx->pc == 0x4741B0u) {
        ctx->pc = 0x4741B0u;
            // 0x4741b0: 0x8e550000  lw          $s5, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x4741B4u;
        goto label_4741b4;
    }
    ctx->pc = 0x4741ACu;
    {
        const bool branch_taken_0x4741ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4741B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4741ACu;
            // 0x4741b0: 0x8e550000  lw          $s5, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4741ac) {
            ctx->pc = 0x4741F0u;
            goto label_4741f0;
        }
    }
    ctx->pc = 0x4741B4u;
label_4741b4:
    // 0x4741b4: 0x8e6500c0  lw          $a1, 0xC0($s3)
    ctx->pc = 0x4741b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
label_4741b8:
    // 0x4741b8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x4741b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_4741bc:
    // 0x4741bc: 0x0  nop
    ctx->pc = 0x4741bcu;
    // NOP
label_4741c0:
    // 0x4741c0: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x4741c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4741c4:
    // 0x4741c4: 0x8e0401c4  lw          $a0, 0x1C4($s0)
    ctx->pc = 0x4741c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
label_4741c8:
    // 0x4741c8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_4741cc:
    if (ctx->pc == 0x4741CCu) {
        ctx->pc = 0x4741D0u;
        goto label_4741d0;
    }
    ctx->pc = 0x4741C8u;
    {
        const bool branch_taken_0x4741c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4741c8) {
            ctx->pc = 0x4741D8u;
            goto label_4741d8;
        }
    }
    ctx->pc = 0x4741D0u;
label_4741d0:
    // 0x4741d0: 0x10000009  b           . + 4 + (0x9 << 2)
label_4741d4:
    if (ctx->pc == 0x4741D4u) {
        ctx->pc = 0x4741D8u;
        goto label_4741d8;
    }
    ctx->pc = 0x4741D0u;
    {
        const bool branch_taken_0x4741d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4741d0) {
            ctx->pc = 0x4741F8u;
            goto label_4741f8;
        }
    }
    ctx->pc = 0x4741D8u;
label_4741d8:
    // 0x4741d8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4741d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_4741dc:
    // 0x4741dc: 0x14c0fff8  bnez        $a2, . + 4 + (-0x8 << 2)
label_4741e0:
    if (ctx->pc == 0x4741E0u) {
        ctx->pc = 0x4741E0u;
            // 0x4741e0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x4741E4u;
        goto label_4741e4;
    }
    ctx->pc = 0x4741DCu;
    {
        const bool branch_taken_0x4741dc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4741E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4741DCu;
            // 0x4741e0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4741dc) {
            ctx->pc = 0x4741C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4741c0;
        }
    }
    ctx->pc = 0x4741E4u;
label_4741e4:
    // 0x4741e4: 0x10000004  b           . + 4 + (0x4 << 2)
label_4741e8:
    if (ctx->pc == 0x4741E8u) {
        ctx->pc = 0x4741E8u;
            // 0x4741e8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4741ECu;
        goto label_4741ec;
    }
    ctx->pc = 0x4741E4u;
    {
        const bool branch_taken_0x4741e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4741E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4741E4u;
            // 0x4741e8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4741e4) {
            ctx->pc = 0x4741F8u;
            goto label_4741f8;
        }
    }
    ctx->pc = 0x4741ECu;
label_4741ec:
    // 0x4741ec: 0x0  nop
    ctx->pc = 0x4741ecu;
    // NOP
label_4741f0:
    // 0x4741f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4741f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4741f4:
    // 0x4741f4: 0x0  nop
    ctx->pc = 0x4741f4u;
    // NOP
label_4741f8:
    // 0x4741f8: 0x12000095  beqz        $s0, . + 4 + (0x95 << 2)
label_4741fc:
    if (ctx->pc == 0x4741FCu) {
        ctx->pc = 0x474200u;
        goto label_474200;
    }
    ctx->pc = 0x4741F8u;
    {
        const bool branch_taken_0x4741f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4741f8) {
            ctx->pc = 0x474450u;
            goto label_474450;
        }
    }
    ctx->pc = 0x474200u;
label_474200:
    // 0x474200: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x474200u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_474204:
    // 0x474204: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x474204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_474208:
    // 0x474208: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x474208u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_47420c:
    // 0x47420c: 0x320f809  jalr        $t9
label_474210:
    if (ctx->pc == 0x474210u) {
        ctx->pc = 0x474210u;
            // 0x474210: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x474214u;
        goto label_474214;
    }
    ctx->pc = 0x47420Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x474214u);
        ctx->pc = 0x474210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47420Cu;
            // 0x474210: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x474214u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x474214u; }
            if (ctx->pc != 0x474214u) { return; }
        }
        }
    }
    ctx->pc = 0x474214u;
label_474214:
    // 0x474214: 0x8eb40550  lw          $s4, 0x550($s5)
    ctx->pc = 0x474214u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1360)));
label_474218:
    // 0x474218: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x474218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_47421c:
    // 0x47421c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x47421cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_474220:
    // 0x474220: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x474220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_474224:
    // 0x474224: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x474224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_474228:
    // 0x474228: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x474228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_47422c:
    // 0x47422c: 0x8282010c  lb          $v0, 0x10C($s4)
    ctx->pc = 0x47422cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 268)));
label_474230:
    // 0x474230: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x474230u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_474234:
    // 0x474234: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x474234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_474238:
    // 0x474238: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x474238u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_47423c:
    // 0x47423c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x47423cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_474240:
    // 0x474240: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x474240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_474244:
    // 0x474244: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x474244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_474248:
    // 0x474248: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x474248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_47424c:
    // 0x47424c: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x47424cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_474250:
    // 0x474250: 0x8e990058  lw          $t9, 0x58($s4)
    ctx->pc = 0x474250u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
label_474254:
    // 0x474254: 0x8285010d  lb          $a1, 0x10D($s4)
    ctx->pc = 0x474254u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 269)));
label_474258:
    // 0x474258: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x474258u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_47425c:
    // 0x47425c: 0x320f809  jalr        $t9
label_474260:
    if (ctx->pc == 0x474260u) {
        ctx->pc = 0x474260u;
            // 0x474260: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x474264u;
        goto label_474264;
    }
    ctx->pc = 0x47425Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x474264u);
        ctx->pc = 0x474260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47425Cu;
            // 0x474260: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x474264u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x474264u; }
            if (ctx->pc != 0x474264u) { return; }
        }
        }
    }
    ctx->pc = 0x474264u;
label_474264:
    // 0x474264: 0x8e990058  lw          $t9, 0x58($s4)
    ctx->pc = 0x474264u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
label_474268:
    // 0x474268: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x474268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_47426c:
    // 0x47426c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x47426cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_474270:
    // 0x474270: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x474270u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_474274:
    // 0x474274: 0x320f809  jalr        $t9
label_474278:
    if (ctx->pc == 0x474278u) {
        ctx->pc = 0x474278u;
            // 0x474278: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x47427Cu;
        goto label_47427c;
    }
    ctx->pc = 0x474274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47427Cu);
        ctx->pc = 0x474278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x474274u;
            // 0x474278: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47427Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47427Cu; }
            if (ctx->pc != 0x47427Cu) { return; }
        }
        }
    }
    ctx->pc = 0x47427Cu;
label_47427c:
    // 0x47427c: 0x26a402c0  addiu       $a0, $s5, 0x2C0
    ctx->pc = 0x47427cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 704));
label_474280:
    // 0x474280: 0xc04cc34  jal         func_1330D0
label_474284:
    if (ctx->pc == 0x474284u) {
        ctx->pc = 0x474284u;
            // 0x474284: 0x26650070  addiu       $a1, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->pc = 0x474288u;
        goto label_474288;
    }
    ctx->pc = 0x474280u;
    SET_GPR_U32(ctx, 31, 0x474288u);
    ctx->pc = 0x474284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474280u;
            // 0x474284: 0x26650070  addiu       $a1, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474288u; }
        if (ctx->pc != 0x474288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474288u; }
        if (ctx->pc != 0x474288u) { return; }
    }
    ctx->pc = 0x474288u;
label_474288:
    // 0x474288: 0x3c023e6d  lui         $v0, 0x3E6D
    ctx->pc = 0x474288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15981 << 16));
label_47428c:
    // 0x47428c: 0xaea00de8  sw          $zero, 0xDE8($s5)
    ctx->pc = 0x47428cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3560), GPR_U32(ctx, 0));
label_474290:
    // 0x474290: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x474290u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_474294:
    // 0x474294: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x474294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_474298:
    // 0x474298: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x474298u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_47429c:
    // 0x47429c: 0x26a40320  addiu       $a0, $s5, 0x320
    ctx->pc = 0x47429cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 800));
label_4742a0:
    // 0x4742a0: 0xaea20de4  sw          $v0, 0xDE4($s5)
    ctx->pc = 0x4742a0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3556), GPR_U32(ctx, 2));
label_4742a4:
    // 0x4742a4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4742a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4742a8:
    // 0x4742a8: 0xc04cbd8  jal         func_132F60
label_4742ac:
    if (ctx->pc == 0x4742ACu) {
        ctx->pc = 0x4742ACu;
            // 0x4742ac: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4742B0u;
        goto label_4742b0;
    }
    ctx->pc = 0x4742A8u;
    SET_GPR_U32(ctx, 31, 0x4742B0u);
    ctx->pc = 0x4742ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4742A8u;
            // 0x4742ac: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4742B0u; }
        if (ctx->pc != 0x4742B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4742B0u; }
        if (ctx->pc != 0x4742B0u) { return; }
    }
    ctx->pc = 0x4742B0u;
label_4742b0:
    // 0x4742b0: 0x0  nop
    ctx->pc = 0x4742b0u;
    // NOP
label_4742b4:
    // 0x4742b4: 0x0  nop
    ctx->pc = 0x4742b4u;
    // NOP
label_4742b8:
    // 0x4742b8: 0x46140044  c1          0x140044
    ctx->pc = 0x4742b8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_4742bc:
    // 0x4742bc: 0x3c023e6d  lui         $v0, 0x3E6D
    ctx->pc = 0x4742bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15981 << 16));
label_4742c0:
    // 0x4742c0: 0x3443097b  ori         $v1, $v0, 0x97B
    ctx->pc = 0x4742c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_4742c4:
    // 0x4742c4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4742c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4742c8:
    // 0x4742c8: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x4742c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_4742cc:
    // 0x4742cc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4742ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4742d0:
    // 0x4742d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4742d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4742d4:
    // 0x4742d4: 0x0  nop
    ctx->pc = 0x4742d4u;
    // NOP
label_4742d8:
    // 0x4742d8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x4742d8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_4742dc:
    // 0x4742dc: 0x4600a842  mul.s       $f1, $f21, $f0
    ctx->pc = 0x4742dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_4742e0:
    // 0x4742e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4742e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4742e4:
    // 0x4742e4: 0x0  nop
    ctx->pc = 0x4742e4u;
    // NOP
label_4742e8:
    // 0x4742e8: 0x46010342  mul.s       $f13, $f0, $f1
    ctx->pc = 0x4742e8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_4742ec:
    // 0x4742ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4742ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4742f0:
    // 0x4742f0: 0xc04cbd8  jal         func_132F60
label_4742f4:
    if (ctx->pc == 0x4742F4u) {
        ctx->pc = 0x4742F4u;
            // 0x4742f4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4742F8u;
        goto label_4742f8;
    }
    ctx->pc = 0x4742F0u;
    SET_GPR_U32(ctx, 31, 0x4742F8u);
    ctx->pc = 0x4742F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4742F0u;
            // 0x4742f4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4742F8u; }
        if (ctx->pc != 0x4742F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4742F8u; }
        if (ctx->pc != 0x4742F8u) { return; }
    }
    ctx->pc = 0x4742F8u;
label_4742f8:
    // 0x4742f8: 0x26a40320  addiu       $a0, $s5, 0x320
    ctx->pc = 0x4742f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 800));
label_4742fc:
    // 0x4742fc: 0x26a507e0  addiu       $a1, $s5, 0x7E0
    ctx->pc = 0x4742fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 2016));
label_474300:
    // 0x474300: 0xc04cca0  jal         func_133280
label_474304:
    if (ctx->pc == 0x474304u) {
        ctx->pc = 0x474304u;
            // 0x474304: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x474308u;
        goto label_474308;
    }
    ctx->pc = 0x474300u;
    SET_GPR_U32(ctx, 31, 0x474308u);
    ctx->pc = 0x474304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474300u;
            // 0x474304: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474308u; }
        if (ctx->pc != 0x474308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474308u; }
        if (ctx->pc != 0x474308u) { return; }
    }
    ctx->pc = 0x474308u;
label_474308:
    // 0x474308: 0x8eb40d74  lw          $s4, 0xD74($s5)
    ctx->pc = 0x474308u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3444)));
label_47430c:
    // 0x47430c: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x47430cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_474310:
    // 0x474310: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x474310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_474314:
    // 0x474314: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x474314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_474318:
    // 0x474318: 0x8e8202c8  lw          $v0, 0x2C8($s4)
    ctx->pc = 0x474318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 712)));
label_47431c:
    // 0x47431c: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x47431cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_474320:
    // 0x474320: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x474320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_474324:
    // 0x474324: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x474324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_474328:
    // 0x474328: 0xc0a545c  jal         func_295170
label_47432c:
    if (ctx->pc == 0x47432Cu) {
        ctx->pc = 0x47432Cu;
            // 0x47432c: 0x62b824  and         $s7, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x474330u;
        goto label_474330;
    }
    ctx->pc = 0x474328u;
    SET_GPR_U32(ctx, 31, 0x474330u);
    ctx->pc = 0x47432Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474328u;
            // 0x47432c: 0x62b824  and         $s7, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474330u; }
        if (ctx->pc != 0x474330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474330u; }
        if (ctx->pc != 0x474330u) { return; }
    }
    ctx->pc = 0x474330u;
label_474330:
    // 0x474330: 0xac57002c  sw          $s7, 0x2C($v0)
    ctx->pc = 0x474330u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 23));
label_474334:
    // 0x474334: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x474334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_474338:
    // 0x474338: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x474338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_47433c:
    // 0x47433c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x47433cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_474340:
    // 0x474340: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x474340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_474344:
    // 0x474344: 0xc08bf20  jal         func_22FC80
label_474348:
    if (ctx->pc == 0x474348u) {
        ctx->pc = 0x474348u;
            // 0x474348: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47434Cu;
        goto label_47434c;
    }
    ctx->pc = 0x474344u;
    SET_GPR_U32(ctx, 31, 0x47434Cu);
    ctx->pc = 0x474348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474344u;
            // 0x474348: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47434Cu; }
        if (ctx->pc != 0x47434Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47434Cu; }
        if (ctx->pc != 0x47434Cu) { return; }
    }
    ctx->pc = 0x47434Cu;
label_47434c:
    // 0x47434c: 0xc6610030  lwc1        $f1, 0x30($s3)
    ctx->pc = 0x47434cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_474350:
    // 0x474350: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x474350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_474354:
    // 0x474354: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x474354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_474358:
    // 0x474358: 0x0  nop
    ctx->pc = 0x474358u;
    // NOP
label_47435c:
    // 0x47435c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x47435cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_474360:
    // 0x474360: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_474364:
    if (ctx->pc == 0x474364u) {
        ctx->pc = 0x474364u;
            // 0x474364: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x474368u;
        goto label_474368;
    }
    ctx->pc = 0x474360u;
    {
        const bool branch_taken_0x474360 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x474360) {
            ctx->pc = 0x474364u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x474360u;
            // 0x474364: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x474378u;
            goto label_474378;
        }
    }
    ctx->pc = 0x474368u;
label_474368:
    // 0x474368: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x474368u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_47436c:
    // 0x47436c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x47436cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_474370:
    // 0x474370: 0x10000007  b           . + 4 + (0x7 << 2)
label_474374:
    if (ctx->pc == 0x474374u) {
        ctx->pc = 0x474374u;
            // 0x474374: 0xc66c0084  lwc1        $f12, 0x84($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x474378u;
        goto label_474378;
    }
    ctx->pc = 0x474370u;
    {
        const bool branch_taken_0x474370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x474374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x474370u;
            // 0x474374: 0xc66c0084  lwc1        $f12, 0x84($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x474370) {
            ctx->pc = 0x474390u;
            goto label_474390;
        }
    }
    ctx->pc = 0x474378u;
label_474378:
    // 0x474378: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x474378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_47437c:
    // 0x47437c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x47437cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_474380:
    // 0x474380: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x474380u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_474384:
    // 0x474384: 0x0  nop
    ctx->pc = 0x474384u;
    // NOP
label_474388:
    // 0x474388: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x474388u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_47438c:
    // 0x47438c: 0xc66c0084  lwc1        $f12, 0x84($s3)
    ctx->pc = 0x47438cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_474390:
    // 0x474390: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x474390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_474394:
    // 0x474394: 0xc66d0038  lwc1        $f13, 0x38($s3)
    ctx->pc = 0x474394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_474398:
    // 0x474398: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x474398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_47439c:
    // 0x47439c: 0xc122b58  jal         func_48AD60
label_4743a0:
    if (ctx->pc == 0x4743A0u) {
        ctx->pc = 0x4743A0u;
            // 0x4743a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4743A4u;
        goto label_4743a4;
    }
    ctx->pc = 0x47439Cu;
    SET_GPR_U32(ctx, 31, 0x4743A4u);
    ctx->pc = 0x4743A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47439Cu;
            // 0x4743a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48AD60u;
    if (runtime->hasFunction(0x48AD60u)) {
        auto targetFn = runtime->lookupFunction(0x48AD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4743A4u; }
        if (ctx->pc != 0x4743A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048AD60_0x48ad60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4743A4u; }
        if (ctx->pc != 0x4743A4u) { return; }
    }
    ctx->pc = 0x4743A4u;
label_4743a4:
    // 0x4743a4: 0x260401d0  addiu       $a0, $s0, 0x1D0
    ctx->pc = 0x4743a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
label_4743a8:
    // 0x4743a8: 0xc04cc04  jal         func_133010
label_4743ac:
    if (ctx->pc == 0x4743ACu) {
        ctx->pc = 0x4743ACu;
            // 0x4743ac: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x4743B0u;
        goto label_4743b0;
    }
    ctx->pc = 0x4743A8u;
    SET_GPR_U32(ctx, 31, 0x4743B0u);
    ctx->pc = 0x4743ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4743A8u;
            // 0x4743ac: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4743B0u; }
        if (ctx->pc != 0x4743B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4743B0u; }
        if (ctx->pc != 0x4743B0u) { return; }
    }
    ctx->pc = 0x4743B0u;
label_4743b0:
    // 0x4743b0: 0xae150008  sw          $s5, 0x8($s0)
    ctx->pc = 0x4743b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 21));
label_4743b4:
    // 0x4743b4: 0x267400ac  addiu       $s4, $s3, 0xAC
    ctx->pc = 0x4743b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 172));
label_4743b8:
    // 0x4743b8: 0xae1301c8  sw          $s3, 0x1C8($s0)
    ctx->pc = 0x4743b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 19));
label_4743bc:
    // 0x4743bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4743bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4743c0:
    // 0x4743c0: 0xae0001c0  sw          $zero, 0x1C0($s0)
    ctx->pc = 0x4743c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 0));
label_4743c4:
    // 0x4743c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4743c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4743c8:
    // 0x4743c8: 0xae0501c4  sw          $a1, 0x1C4($s0)
    ctx->pc = 0x4743c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 5));
label_4743cc:
    // 0x4743cc: 0xae0001e0  sw          $zero, 0x1E0($s0)
    ctx->pc = 0x4743ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 0));
label_4743d0:
    // 0x4743d0: 0xae0001e4  sw          $zero, 0x1E4($s0)
    ctx->pc = 0x4743d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 0));
label_4743d4:
    // 0x4743d4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x4743d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_4743d8:
    // 0x4743d8: 0x8ea30d98  lw          $v1, 0xD98($s5)
    ctx->pc = 0x4743d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3480)));
label_4743dc:
    // 0x4743dc: 0x8e620088  lw          $v0, 0x88($s3)
    ctx->pc = 0x4743dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
label_4743e0:
    // 0x4743e0: 0x651804  sllv        $v1, $a1, $v1
    ctx->pc = 0x4743e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
label_4743e4:
    // 0x4743e4: 0x601827  not         $v1, $v1
    ctx->pc = 0x4743e4u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_4743e8:
    // 0x4743e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4743e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4743ec:
    // 0x4743ec: 0xc11d470  jal         func_4751C0
label_4743f0:
    if (ctx->pc == 0x4743F0u) {
        ctx->pc = 0x4743F0u;
            // 0x4743f0: 0xae620088  sw          $v0, 0x88($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 2));
        ctx->pc = 0x4743F4u;
        goto label_4743f4;
    }
    ctx->pc = 0x4743ECu;
    SET_GPR_U32(ctx, 31, 0x4743F4u);
    ctx->pc = 0x4743F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4743ECu;
            // 0x4743f0: 0xae620088  sw          $v0, 0x88($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4751C0u;
    if (runtime->hasFunction(0x4751C0u)) {
        auto targetFn = runtime->lookupFunction(0x4751C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4743F4u; }
        if (ctx->pc != 0x4743F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004751C0_0x4751c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4743F4u; }
        if (ctx->pc != 0x4743F4u) { return; }
    }
    ctx->pc = 0x4743F4u;
label_4743f4:
    // 0x4743f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4743f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4743f8:
    // 0x4743f8: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x4743f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_4743fc:
    // 0x4743fc: 0x3c023eed  lui         $v0, 0x3EED
    ctx->pc = 0x4743fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16109 << 16));
label_474400:
    // 0x474400: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x474400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_474404:
    // 0x474404: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x474404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_474408:
    // 0x474408: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x474408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_47440c:
    // 0x47440c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x47440cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_474410:
    // 0x474410: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x474410u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_474414:
    // 0x474414: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x474414u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_474418:
    // 0x474418: 0xc122b58  jal         func_48AD60
label_47441c:
    if (ctx->pc == 0x47441Cu) {
        ctx->pc = 0x47441Cu;
            // 0x47441c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x474420u;
        goto label_474420;
    }
    ctx->pc = 0x474418u;
    SET_GPR_U32(ctx, 31, 0x474420u);
    ctx->pc = 0x47441Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474418u;
            // 0x47441c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48AD60u;
    if (runtime->hasFunction(0x48AD60u)) {
        auto targetFn = runtime->lookupFunction(0x48AD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474420u; }
        if (ctx->pc != 0x474420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048AD60_0x48ad60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474420u; }
        if (ctx->pc != 0x474420u) { return; }
    }
    ctx->pc = 0x474420u;
label_474420:
    // 0x474420: 0x260401d0  addiu       $a0, $s0, 0x1D0
    ctx->pc = 0x474420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
label_474424:
    // 0x474424: 0xc04cc04  jal         func_133010
label_474428:
    if (ctx->pc == 0x474428u) {
        ctx->pc = 0x474428u;
            // 0x474428: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x47442Cu;
        goto label_47442c;
    }
    ctx->pc = 0x474424u;
    SET_GPR_U32(ctx, 31, 0x47442Cu);
    ctx->pc = 0x474428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474424u;
            // 0x474428: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47442Cu; }
        if (ctx->pc != 0x47442Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47442Cu; }
        if (ctx->pc != 0x47442Cu) { return; }
    }
    ctx->pc = 0x47442Cu;
label_47442c:
    // 0x47442c: 0xae1301c8  sw          $s3, 0x1C8($s0)
    ctx->pc = 0x47442cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 19));
label_474430:
    // 0x474430: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x474430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_474434:
    // 0x474434: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x474434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_474438:
    // 0x474438: 0xae0301c0  sw          $v1, 0x1C0($s0)
    ctx->pc = 0x474438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 3));
label_47443c:
    // 0x47443c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x47443cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_474440:
    // 0x474440: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x474440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_474444:
    // 0x474444: 0xc11d47c  jal         func_4751F0
label_474448:
    if (ctx->pc == 0x474448u) {
        ctx->pc = 0x474448u;
            // 0x474448: 0xae0201c4  sw          $v0, 0x1C4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 2));
        ctx->pc = 0x47444Cu;
        goto label_47444c;
    }
    ctx->pc = 0x474444u;
    SET_GPR_U32(ctx, 31, 0x47444Cu);
    ctx->pc = 0x474448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474444u;
            // 0x474448: 0xae0201c4  sw          $v0, 0x1C4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4751F0u;
    if (runtime->hasFunction(0x4751F0u)) {
        auto targetFn = runtime->lookupFunction(0x4751F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47444Cu; }
        if (ctx->pc != 0x47444Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004751F0_0x4751f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47444Cu; }
        if (ctx->pc != 0x47444Cu) { return; }
    }
    ctx->pc = 0x47444Cu;
label_47444c:
    // 0x47444c: 0x0  nop
    ctx->pc = 0x47444cu;
    // NOP
label_474450:
    // 0x474450: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x474450u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_474454:
    // 0x474454: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x474454u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_474458:
    // 0x474458: 0x16c0ff35  bnez        $s6, . + 4 + (-0xCB << 2)
label_47445c:
    if (ctx->pc == 0x47445Cu) {
        ctx->pc = 0x47445Cu;
            // 0x47445c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x474460u;
        goto label_474460;
    }
    ctx->pc = 0x474458u;
    {
        const bool branch_taken_0x474458 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x47445Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x474458u;
            // 0x47445c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474458) {
            ctx->pc = 0x474130u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_474130;
        }
    }
    ctx->pc = 0x474460u;
label_474460:
    // 0x474460: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x474460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_474464:
    // 0x474464: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x474464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_474468:
    // 0x474468: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x474468u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_47446c:
    // 0x47446c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x47446cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_474470:
    // 0x474470: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x474470u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_474474:
    // 0x474474: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x474474u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_474478:
    // 0x474478: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x474478u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_47447c:
    // 0x47447c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x47447cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_474480:
    // 0x474480: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x474480u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_474484:
    // 0x474484: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x474484u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_474488:
    // 0x474488: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x474488u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47448c:
    // 0x47448c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x47448cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_474490:
    // 0x474490: 0x3e00008  jr          $ra
label_474494:
    if (ctx->pc == 0x474494u) {
        ctx->pc = 0x474494u;
            // 0x474494: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x474498u;
        goto label_474498;
    }
    ctx->pc = 0x474490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x474494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x474490u;
            // 0x474494: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x474498u;
label_474498:
    // 0x474498: 0x0  nop
    ctx->pc = 0x474498u;
    // NOP
label_47449c:
    // 0x47449c: 0x0  nop
    ctx->pc = 0x47449cu;
    // NOP
}
