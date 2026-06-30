#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00528160
// Address: 0x528160 - 0x528470
void sub_00528160_0x528160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00528160_0x528160");
#endif

    switch (ctx->pc) {
        case 0x528160u: goto label_528160;
        case 0x528164u: goto label_528164;
        case 0x528168u: goto label_528168;
        case 0x52816cu: goto label_52816c;
        case 0x528170u: goto label_528170;
        case 0x528174u: goto label_528174;
        case 0x528178u: goto label_528178;
        case 0x52817cu: goto label_52817c;
        case 0x528180u: goto label_528180;
        case 0x528184u: goto label_528184;
        case 0x528188u: goto label_528188;
        case 0x52818cu: goto label_52818c;
        case 0x528190u: goto label_528190;
        case 0x528194u: goto label_528194;
        case 0x528198u: goto label_528198;
        case 0x52819cu: goto label_52819c;
        case 0x5281a0u: goto label_5281a0;
        case 0x5281a4u: goto label_5281a4;
        case 0x5281a8u: goto label_5281a8;
        case 0x5281acu: goto label_5281ac;
        case 0x5281b0u: goto label_5281b0;
        case 0x5281b4u: goto label_5281b4;
        case 0x5281b8u: goto label_5281b8;
        case 0x5281bcu: goto label_5281bc;
        case 0x5281c0u: goto label_5281c0;
        case 0x5281c4u: goto label_5281c4;
        case 0x5281c8u: goto label_5281c8;
        case 0x5281ccu: goto label_5281cc;
        case 0x5281d0u: goto label_5281d0;
        case 0x5281d4u: goto label_5281d4;
        case 0x5281d8u: goto label_5281d8;
        case 0x5281dcu: goto label_5281dc;
        case 0x5281e0u: goto label_5281e0;
        case 0x5281e4u: goto label_5281e4;
        case 0x5281e8u: goto label_5281e8;
        case 0x5281ecu: goto label_5281ec;
        case 0x5281f0u: goto label_5281f0;
        case 0x5281f4u: goto label_5281f4;
        case 0x5281f8u: goto label_5281f8;
        case 0x5281fcu: goto label_5281fc;
        case 0x528200u: goto label_528200;
        case 0x528204u: goto label_528204;
        case 0x528208u: goto label_528208;
        case 0x52820cu: goto label_52820c;
        case 0x528210u: goto label_528210;
        case 0x528214u: goto label_528214;
        case 0x528218u: goto label_528218;
        case 0x52821cu: goto label_52821c;
        case 0x528220u: goto label_528220;
        case 0x528224u: goto label_528224;
        case 0x528228u: goto label_528228;
        case 0x52822cu: goto label_52822c;
        case 0x528230u: goto label_528230;
        case 0x528234u: goto label_528234;
        case 0x528238u: goto label_528238;
        case 0x52823cu: goto label_52823c;
        case 0x528240u: goto label_528240;
        case 0x528244u: goto label_528244;
        case 0x528248u: goto label_528248;
        case 0x52824cu: goto label_52824c;
        case 0x528250u: goto label_528250;
        case 0x528254u: goto label_528254;
        case 0x528258u: goto label_528258;
        case 0x52825cu: goto label_52825c;
        case 0x528260u: goto label_528260;
        case 0x528264u: goto label_528264;
        case 0x528268u: goto label_528268;
        case 0x52826cu: goto label_52826c;
        case 0x528270u: goto label_528270;
        case 0x528274u: goto label_528274;
        case 0x528278u: goto label_528278;
        case 0x52827cu: goto label_52827c;
        case 0x528280u: goto label_528280;
        case 0x528284u: goto label_528284;
        case 0x528288u: goto label_528288;
        case 0x52828cu: goto label_52828c;
        case 0x528290u: goto label_528290;
        case 0x528294u: goto label_528294;
        case 0x528298u: goto label_528298;
        case 0x52829cu: goto label_52829c;
        case 0x5282a0u: goto label_5282a0;
        case 0x5282a4u: goto label_5282a4;
        case 0x5282a8u: goto label_5282a8;
        case 0x5282acu: goto label_5282ac;
        case 0x5282b0u: goto label_5282b0;
        case 0x5282b4u: goto label_5282b4;
        case 0x5282b8u: goto label_5282b8;
        case 0x5282bcu: goto label_5282bc;
        case 0x5282c0u: goto label_5282c0;
        case 0x5282c4u: goto label_5282c4;
        case 0x5282c8u: goto label_5282c8;
        case 0x5282ccu: goto label_5282cc;
        case 0x5282d0u: goto label_5282d0;
        case 0x5282d4u: goto label_5282d4;
        case 0x5282d8u: goto label_5282d8;
        case 0x5282dcu: goto label_5282dc;
        case 0x5282e0u: goto label_5282e0;
        case 0x5282e4u: goto label_5282e4;
        case 0x5282e8u: goto label_5282e8;
        case 0x5282ecu: goto label_5282ec;
        case 0x5282f0u: goto label_5282f0;
        case 0x5282f4u: goto label_5282f4;
        case 0x5282f8u: goto label_5282f8;
        case 0x5282fcu: goto label_5282fc;
        case 0x528300u: goto label_528300;
        case 0x528304u: goto label_528304;
        case 0x528308u: goto label_528308;
        case 0x52830cu: goto label_52830c;
        case 0x528310u: goto label_528310;
        case 0x528314u: goto label_528314;
        case 0x528318u: goto label_528318;
        case 0x52831cu: goto label_52831c;
        case 0x528320u: goto label_528320;
        case 0x528324u: goto label_528324;
        case 0x528328u: goto label_528328;
        case 0x52832cu: goto label_52832c;
        case 0x528330u: goto label_528330;
        case 0x528334u: goto label_528334;
        case 0x528338u: goto label_528338;
        case 0x52833cu: goto label_52833c;
        case 0x528340u: goto label_528340;
        case 0x528344u: goto label_528344;
        case 0x528348u: goto label_528348;
        case 0x52834cu: goto label_52834c;
        case 0x528350u: goto label_528350;
        case 0x528354u: goto label_528354;
        case 0x528358u: goto label_528358;
        case 0x52835cu: goto label_52835c;
        case 0x528360u: goto label_528360;
        case 0x528364u: goto label_528364;
        case 0x528368u: goto label_528368;
        case 0x52836cu: goto label_52836c;
        case 0x528370u: goto label_528370;
        case 0x528374u: goto label_528374;
        case 0x528378u: goto label_528378;
        case 0x52837cu: goto label_52837c;
        case 0x528380u: goto label_528380;
        case 0x528384u: goto label_528384;
        case 0x528388u: goto label_528388;
        case 0x52838cu: goto label_52838c;
        case 0x528390u: goto label_528390;
        case 0x528394u: goto label_528394;
        case 0x528398u: goto label_528398;
        case 0x52839cu: goto label_52839c;
        case 0x5283a0u: goto label_5283a0;
        case 0x5283a4u: goto label_5283a4;
        case 0x5283a8u: goto label_5283a8;
        case 0x5283acu: goto label_5283ac;
        case 0x5283b0u: goto label_5283b0;
        case 0x5283b4u: goto label_5283b4;
        case 0x5283b8u: goto label_5283b8;
        case 0x5283bcu: goto label_5283bc;
        case 0x5283c0u: goto label_5283c0;
        case 0x5283c4u: goto label_5283c4;
        case 0x5283c8u: goto label_5283c8;
        case 0x5283ccu: goto label_5283cc;
        case 0x5283d0u: goto label_5283d0;
        case 0x5283d4u: goto label_5283d4;
        case 0x5283d8u: goto label_5283d8;
        case 0x5283dcu: goto label_5283dc;
        case 0x5283e0u: goto label_5283e0;
        case 0x5283e4u: goto label_5283e4;
        case 0x5283e8u: goto label_5283e8;
        case 0x5283ecu: goto label_5283ec;
        case 0x5283f0u: goto label_5283f0;
        case 0x5283f4u: goto label_5283f4;
        case 0x5283f8u: goto label_5283f8;
        case 0x5283fcu: goto label_5283fc;
        case 0x528400u: goto label_528400;
        case 0x528404u: goto label_528404;
        case 0x528408u: goto label_528408;
        case 0x52840cu: goto label_52840c;
        case 0x528410u: goto label_528410;
        case 0x528414u: goto label_528414;
        case 0x528418u: goto label_528418;
        case 0x52841cu: goto label_52841c;
        case 0x528420u: goto label_528420;
        case 0x528424u: goto label_528424;
        case 0x528428u: goto label_528428;
        case 0x52842cu: goto label_52842c;
        case 0x528430u: goto label_528430;
        case 0x528434u: goto label_528434;
        case 0x528438u: goto label_528438;
        case 0x52843cu: goto label_52843c;
        case 0x528440u: goto label_528440;
        case 0x528444u: goto label_528444;
        case 0x528448u: goto label_528448;
        case 0x52844cu: goto label_52844c;
        case 0x528450u: goto label_528450;
        case 0x528454u: goto label_528454;
        case 0x528458u: goto label_528458;
        case 0x52845cu: goto label_52845c;
        case 0x528460u: goto label_528460;
        case 0x528464u: goto label_528464;
        case 0x528468u: goto label_528468;
        case 0x52846cu: goto label_52846c;
        default: break;
    }

    ctx->pc = 0x528160u;

label_528160:
    // 0x528160: 0x3e00008  jr          $ra
label_528164:
    if (ctx->pc == 0x528164u) {
        ctx->pc = 0x528164u;
            // 0x528164: 0x8c8200d0  lw          $v0, 0xD0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
        ctx->pc = 0x528168u;
        goto label_528168;
    }
    ctx->pc = 0x528160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x528164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x528160u;
            // 0x528164: 0x8c8200d0  lw          $v0, 0xD0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x528168u;
label_528168:
    // 0x528168: 0x0  nop
    ctx->pc = 0x528168u;
    // NOP
label_52816c:
    // 0x52816c: 0x0  nop
    ctx->pc = 0x52816cu;
    // NOP
label_528170:
    // 0x528170: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x528170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_528174:
    // 0x528174: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x528174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_528178:
    // 0x528178: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x528178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_52817c:
    // 0x52817c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x52817cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_528180:
    // 0x528180: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x528180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_528184:
    // 0x528184: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x528184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_528188:
    // 0x528188: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x528188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52818c:
    // 0x52818c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52818cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_528190:
    // 0x528190: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x528190u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_528194:
    // 0x528194: 0x10a30038  beq         $a1, $v1, . + 4 + (0x38 << 2)
label_528198:
    if (ctx->pc == 0x528198u) {
        ctx->pc = 0x528198u;
            // 0x528198: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52819Cu;
        goto label_52819c;
    }
    ctx->pc = 0x528194u;
    {
        const bool branch_taken_0x528194 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x528198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x528194u;
            // 0x528198: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x528194) {
            ctx->pc = 0x528278u;
            goto label_528278;
        }
    }
    ctx->pc = 0x52819Cu;
label_52819c:
    // 0x52819c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x52819cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5281a0:
    // 0x5281a0: 0x50a30032  beql        $a1, $v1, . + 4 + (0x32 << 2)
label_5281a4:
    if (ctx->pc == 0x5281A4u) {
        ctx->pc = 0x5281A4u;
            // 0x5281a4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x5281A8u;
        goto label_5281a8;
    }
    ctx->pc = 0x5281A0u;
    {
        const bool branch_taken_0x5281a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x5281a0) {
            ctx->pc = 0x5281A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5281A0u;
            // 0x5281a4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52826Cu;
            goto label_52826c;
        }
    }
    ctx->pc = 0x5281A8u;
label_5281a8:
    // 0x5281a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x5281a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_5281ac:
    // 0x5281ac: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_5281b0:
    if (ctx->pc == 0x5281B0u) {
        ctx->pc = 0x5281B4u;
        goto label_5281b4;
    }
    ctx->pc = 0x5281ACu;
    {
        const bool branch_taken_0x5281ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x5281ac) {
            ctx->pc = 0x5281BCu;
            goto label_5281bc;
        }
    }
    ctx->pc = 0x5281B4u;
label_5281b4:
    // 0x5281b4: 0x10000080  b           . + 4 + (0x80 << 2)
label_5281b8:
    if (ctx->pc == 0x5281B8u) {
        ctx->pc = 0x5281BCu;
        goto label_5281bc;
    }
    ctx->pc = 0x5281B4u;
    {
        const bool branch_taken_0x5281b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5281b4) {
            ctx->pc = 0x5283B8u;
            goto label_5283b8;
        }
    }
    ctx->pc = 0x5281BCu;
label_5281bc:
    // 0x5281bc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x5281bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_5281c0:
    // 0x5281c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x5281c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5281c4:
    // 0x5281c4: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x5281c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_5281c8:
    // 0x5281c8: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x5281c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_5281cc:
    // 0x5281cc: 0x1064007a  beq         $v1, $a0, . + 4 + (0x7A << 2)
label_5281d0:
    if (ctx->pc == 0x5281D0u) {
        ctx->pc = 0x5281D4u;
        goto label_5281d4;
    }
    ctx->pc = 0x5281CCu;
    {
        const bool branch_taken_0x5281cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x5281cc) {
            ctx->pc = 0x5283B8u;
            goto label_5283b8;
        }
    }
    ctx->pc = 0x5281D4u;
label_5281d4:
    // 0x5281d4: 0x8e860070  lw          $a2, 0x70($s4)
    ctx->pc = 0x5281d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_5281d8:
    // 0x5281d8: 0x10c00077  beqz        $a2, . + 4 + (0x77 << 2)
label_5281dc:
    if (ctx->pc == 0x5281DCu) {
        ctx->pc = 0x5281E0u;
        goto label_5281e0;
    }
    ctx->pc = 0x5281D8u;
    {
        const bool branch_taken_0x5281d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x5281d8) {
            ctx->pc = 0x5283B8u;
            goto label_5283b8;
        }
    }
    ctx->pc = 0x5281E0u;
label_5281e0:
    // 0x5281e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x5281e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5281e4:
    // 0x5281e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5281e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5281e8:
    // 0x5281e8: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x5281e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_5281ec:
    // 0x5281ec: 0x8c45b5f8  lw          $a1, -0x4A08($v0)
    ctx->pc = 0x5281ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948344)));
label_5281f0:
    // 0x5281f0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x5281f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_5281f4:
    // 0x5281f4: 0x8e840074  lw          $a0, 0x74($s4)
    ctx->pc = 0x5281f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_5281f8:
    // 0x5281f8: 0x106182b  sltu        $v1, $t0, $a2
    ctx->pc = 0x5281f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_5281fc:
    // 0x5281fc: 0x8ca50098  lw          $a1, 0x98($a1)
    ctx->pc = 0x5281fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 152)));
label_528200:
    // 0x528200: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x528200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_528204:
    // 0x528204: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x528204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_528208:
    // 0x528208: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x528208u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_52820c:
    // 0x52820c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x52820cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_528210:
    // 0x528210: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_528214:
    if (ctx->pc == 0x528214u) {
        ctx->pc = 0x528214u;
            // 0x528214: 0xe48000d4  swc1        $f0, 0xD4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
        ctx->pc = 0x528218u;
        goto label_528218;
    }
    ctx->pc = 0x528210u;
    {
        const bool branch_taken_0x528210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x528214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x528210u;
            // 0x528214: 0xe48000d4  swc1        $f0, 0xD4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x528210) {
            ctx->pc = 0x5281ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5281ec;
        }
    }
    ctx->pc = 0x528218u;
label_528218:
    // 0x528218: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x528218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_52821c:
    // 0x52821c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x52821cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_528220:
    // 0x528220: 0xc442ceb0  lwc1        $f2, -0x3150($v0)
    ctx->pc = 0x528220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_528224:
    // 0x528224: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x528224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_528228:
    // 0x528228: 0xc461ceb4  lwc1        $f1, -0x314C($v1)
    ctx->pc = 0x528228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52822c:
    // 0x52822c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x52822cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_528230:
    // 0x528230: 0x2406ce39  addiu       $a2, $zero, -0x31C7
    ctx->pc = 0x528230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294954553));
label_528234:
    // 0x528234: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x528234u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_528238:
    // 0x528238: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x528238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_52823c:
    // 0x52823c: 0xc440ceb8  lwc1        $f0, -0x3148($v0)
    ctx->pc = 0x52823cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_528240:
    // 0x528240: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x528240u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_528244:
    // 0x528244: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x528244u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_528248:
    // 0x528248: 0xc04ca18  jal         func_132860
label_52824c:
    if (ctx->pc == 0x52824Cu) {
        ctx->pc = 0x52824Cu;
            // 0x52824c: 0xe7a00078  swc1        $f0, 0x78($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->pc = 0x528250u;
        goto label_528250;
    }
    ctx->pc = 0x528248u;
    SET_GPR_U32(ctx, 31, 0x528250u);
    ctx->pc = 0x52824Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x528248u;
            // 0x52824c: 0xe7a00078  swc1        $f0, 0x78($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528250u; }
        if (ctx->pc != 0x528250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528250u; }
        if (ctx->pc != 0x528250u) { return; }
    }
    ctx->pc = 0x528250u;
label_528250:
    // 0x528250: 0x8e8700b0  lw          $a3, 0xB0($s4)
    ctx->pc = 0x528250u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
label_528254:
    // 0x528254: 0x268400a8  addiu       $a0, $s4, 0xA8
    ctx->pc = 0x528254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 168));
label_528258:
    // 0x528258: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x528258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_52825c:
    // 0x52825c: 0xc0d37ec  jal         func_34DFB0
label_528260:
    if (ctx->pc == 0x528260u) {
        ctx->pc = 0x528260u;
            // 0x528260: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x528264u;
        goto label_528264;
    }
    ctx->pc = 0x52825Cu;
    SET_GPR_U32(ctx, 31, 0x528264u);
    ctx->pc = 0x528260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52825Cu;
            // 0x528260: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528264u; }
        if (ctx->pc != 0x528264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528264u; }
        if (ctx->pc != 0x528264u) { return; }
    }
    ctx->pc = 0x528264u;
label_528264:
    // 0x528264: 0x10000054  b           . + 4 + (0x54 << 2)
label_528268:
    if (ctx->pc == 0x528268u) {
        ctx->pc = 0x52826Cu;
        goto label_52826c;
    }
    ctx->pc = 0x528264u;
    {
        const bool branch_taken_0x528264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x528264) {
            ctx->pc = 0x5283B8u;
            goto label_5283b8;
        }
    }
    ctx->pc = 0x52826Cu;
label_52826c:
    // 0x52826c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x52826cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_528270:
    // 0x528270: 0x320f809  jalr        $t9
label_528274:
    if (ctx->pc == 0x528274u) {
        ctx->pc = 0x528278u;
        goto label_528278;
    }
    ctx->pc = 0x528270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x528278u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x528278u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x528278u; }
            if (ctx->pc != 0x528278u) { return; }
        }
        }
    }
    ctx->pc = 0x528278u;
label_528278:
    // 0x528278: 0x8e900070  lw          $s0, 0x70($s4)
    ctx->pc = 0x528278u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_52827c:
    // 0x52827c: 0x1200004e  beqz        $s0, . + 4 + (0x4E << 2)
label_528280:
    if (ctx->pc == 0x528280u) {
        ctx->pc = 0x528284u;
        goto label_528284;
    }
    ctx->pc = 0x52827Cu;
    {
        const bool branch_taken_0x52827c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x52827c) {
            ctx->pc = 0x5283B8u;
            goto label_5283b8;
        }
    }
    ctx->pc = 0x528284u;
label_528284:
    // 0x528284: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x528284u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_528288:
    // 0x528288: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x528288u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52828c:
    // 0x52828c: 0x8e840074  lw          $a0, 0x74($s4)
    ctx->pc = 0x52828cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_528290:
    // 0x528290: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x528290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_528294:
    // 0x528294: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x528294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_528298:
    // 0x528298: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x528298u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_52829c:
    // 0x52829c: 0x8e4400d0  lw          $a0, 0xD0($s2)
    ctx->pc = 0x52829cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_5282a0:
    // 0x5282a0: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
label_5282a4:
    if (ctx->pc == 0x5282A4u) {
        ctx->pc = 0x5282A8u;
        goto label_5282a8;
    }
    ctx->pc = 0x5282A0u;
    {
        const bool branch_taken_0x5282a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x5282a0) {
            ctx->pc = 0x528340u;
            goto label_528340;
        }
    }
    ctx->pc = 0x5282A8u;
label_5282a8:
    // 0x5282a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x5282a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5282ac:
    // 0x5282ac: 0x1085000a  beq         $a0, $a1, . + 4 + (0xA << 2)
label_5282b0:
    if (ctx->pc == 0x5282B0u) {
        ctx->pc = 0x5282B4u;
        goto label_5282b4;
    }
    ctx->pc = 0x5282ACu;
    {
        const bool branch_taken_0x5282ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x5282ac) {
            ctx->pc = 0x5282D8u;
            goto label_5282d8;
        }
    }
    ctx->pc = 0x5282B4u;
label_5282b4:
    // 0x5282b4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_5282b8:
    if (ctx->pc == 0x5282B8u) {
        ctx->pc = 0x5282BCu;
        goto label_5282bc;
    }
    ctx->pc = 0x5282B4u;
    {
        const bool branch_taken_0x5282b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x5282b4) {
            ctx->pc = 0x5282C8u;
            goto label_5282c8;
        }
    }
    ctx->pc = 0x5282BCu;
label_5282bc:
    // 0x5282bc: 0x1000003a  b           . + 4 + (0x3A << 2)
label_5282c0:
    if (ctx->pc == 0x5282C0u) {
        ctx->pc = 0x5282C4u;
        goto label_5282c4;
    }
    ctx->pc = 0x5282BCu;
    {
        const bool branch_taken_0x5282bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5282bc) {
            ctx->pc = 0x5283A8u;
            goto label_5283a8;
        }
    }
    ctx->pc = 0x5282C4u;
label_5282c4:
    // 0x5282c4: 0x0  nop
    ctx->pc = 0x5282c4u;
    // NOP
label_5282c8:
    // 0x5282c8: 0xae4000d8  sw          $zero, 0xD8($s2)
    ctx->pc = 0x5282c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 0));
label_5282cc:
    // 0x5282cc: 0x10000036  b           . + 4 + (0x36 << 2)
label_5282d0:
    if (ctx->pc == 0x5282D0u) {
        ctx->pc = 0x5282D0u;
            // 0x5282d0: 0xae4500d0  sw          $a1, 0xD0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 5));
        ctx->pc = 0x5282D4u;
        goto label_5282d4;
    }
    ctx->pc = 0x5282CCu;
    {
        const bool branch_taken_0x5282cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5282D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5282CCu;
            // 0x5282d0: 0xae4500d0  sw          $a1, 0xD0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5282cc) {
            ctx->pc = 0x5283A8u;
            goto label_5283a8;
        }
    }
    ctx->pc = 0x5282D4u;
label_5282d4:
    // 0x5282d4: 0x0  nop
    ctx->pc = 0x5282d4u;
    // NOP
label_5282d8:
    // 0x5282d8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x5282d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_5282dc:
    // 0x5282dc: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x5282dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_5282e0:
    // 0x5282e0: 0xc64000d8  lwc1        $f0, 0xD8($s2)
    ctx->pc = 0x5282e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5282e4:
    // 0x5282e4: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x5282e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5282e8:
    // 0x5282e8: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x5282e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_5282ec:
    // 0x5282ec: 0xe64100d8  swc1        $f1, 0xD8($s2)
    ctx->pc = 0x5282ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 216), bits); }
label_5282f0:
    // 0x5282f0: 0xc64000d4  lwc1        $f0, 0xD4($s2)
    ctx->pc = 0x5282f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5282f4:
    // 0x5282f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x5282f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5282f8:
    // 0x5282f8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_5282fc:
    if (ctx->pc == 0x5282FCu) {
        ctx->pc = 0x528300u;
        goto label_528300;
    }
    ctx->pc = 0x5282F8u;
    {
        const bool branch_taken_0x5282f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x5282f8) {
            ctx->pc = 0x528304u;
            goto label_528304;
        }
    }
    ctx->pc = 0x528300u;
label_528300:
    // 0x528300: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x528300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_528304:
    // 0x528304: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
label_528308:
    if (ctx->pc == 0x528308u) {
        ctx->pc = 0x528308u;
            // 0x528308: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x52830Cu;
        goto label_52830c;
    }
    ctx->pc = 0x528304u;
    {
        const bool branch_taken_0x528304 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x528304) {
            ctx->pc = 0x528308u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x528304u;
            // 0x528308: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x528318u;
            goto label_528318;
        }
    }
    ctx->pc = 0x52830Cu;
label_52830c:
    // 0x52830c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x52830cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_528310:
    // 0x528310: 0x10000007  b           . + 4 + (0x7 << 2)
label_528314:
    if (ctx->pc == 0x528314u) {
        ctx->pc = 0x528314u;
            // 0x528314: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x528318u;
        goto label_528318;
    }
    ctx->pc = 0x528310u;
    {
        const bool branch_taken_0x528310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x528314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x528310u;
            // 0x528314: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x528310) {
            ctx->pc = 0x528330u;
            goto label_528330;
        }
    }
    ctx->pc = 0x528318u;
label_528318:
    // 0x528318: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x528318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_52831c:
    // 0x52831c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x52831cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_528320:
    // 0x528320: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x528320u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_528324:
    // 0x528324: 0x0  nop
    ctx->pc = 0x528324u;
    // NOP
label_528328:
    // 0x528328: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x528328u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_52832c:
    // 0x52832c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x52832cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_528330:
    // 0x528330: 0xc64000d8  lwc1        $f0, 0xD8($s2)
    ctx->pc = 0x528330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_528334:
    // 0x528334: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x528334u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_528338:
    // 0x528338: 0x1000001b  b           . + 4 + (0x1B << 2)
label_52833c:
    if (ctx->pc == 0x52833Cu) {
        ctx->pc = 0x52833Cu;
            // 0x52833c: 0xe64000d8  swc1        $f0, 0xD8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 216), bits); }
        ctx->pc = 0x528340u;
        goto label_528340;
    }
    ctx->pc = 0x528338u;
    {
        const bool branch_taken_0x528338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x52833Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x528338u;
            // 0x52833c: 0xe64000d8  swc1        $f0, 0xD8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 216), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x528338) {
            ctx->pc = 0x5283A8u;
            goto label_5283a8;
        }
    }
    ctx->pc = 0x528340u;
label_528340:
    // 0x528340: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x528340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_528344:
    // 0x528344: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x528344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_528348:
    // 0x528348: 0xc64100dc  lwc1        $f1, 0xDC($s2)
    ctx->pc = 0x528348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52834c:
    // 0x52834c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x52834cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_528350:
    // 0x528350: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x528350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_528354:
    // 0x528354: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x528354u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_528358:
    // 0x528358: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x528358u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_52835c:
    // 0x52835c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_528360:
    if (ctx->pc == 0x528360u) {
        ctx->pc = 0x528360u;
            // 0x528360: 0xe64100dc  swc1        $f1, 0xDC($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 220), bits); }
        ctx->pc = 0x528364u;
        goto label_528364;
    }
    ctx->pc = 0x52835Cu;
    {
        const bool branch_taken_0x52835c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x528360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52835Cu;
            // 0x528360: 0xe64100dc  swc1        $f1, 0xDC($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x52835c) {
            ctx->pc = 0x5283A8u;
            goto label_5283a8;
        }
    }
    ctx->pc = 0x528364u;
label_528364:
    // 0x528364: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x528364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_528368:
    // 0x528368: 0x3c02ff1e  lui         $v0, 0xFF1E
    ctx->pc = 0x528368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65310 << 16));
label_52836c:
    // 0x52836c: 0x3444ffbf  ori         $a0, $v0, 0xFFBF
    ctx->pc = 0x52836cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65471);
label_528370:
    // 0x528370: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x528370u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_528374:
    // 0x528374: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x528374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_528378:
    // 0x528378: 0x8ca8002c  lw          $t0, 0x2C($a1)
    ctx->pc = 0x528378u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_52837c:
    // 0x52837c: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x52837cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_528380:
    // 0x528380: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x528380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_528384:
    // 0x528384: 0x1042024  and         $a0, $t0, $a0
    ctx->pc = 0x528384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
label_528388:
    // 0x528388: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x528388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_52838c:
    // 0x52838c: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x52838cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_528390:
    // 0x528390: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x528390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_528394:
    // 0x528394: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x528394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_528398:
    // 0x528398: 0xc08bff0  jal         func_22FFC0
label_52839c:
    if (ctx->pc == 0x52839Cu) {
        ctx->pc = 0x52839Cu;
            // 0x52839c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5283A0u;
        goto label_5283a0;
    }
    ctx->pc = 0x528398u;
    SET_GPR_U32(ctx, 31, 0x5283A0u);
    ctx->pc = 0x52839Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x528398u;
            // 0x52839c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5283A0u; }
        if (ctx->pc != 0x5283A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5283A0u; }
        if (ctx->pc != 0x5283A0u) { return; }
    }
    ctx->pc = 0x5283A0u;
label_5283a0:
    // 0x5283a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x5283a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5283a4:
    // 0x5283a4: 0xae4300d0  sw          $v1, 0xD0($s2)
    ctx->pc = 0x5283a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 3));
label_5283a8:
    // 0x5283a8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x5283a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_5283ac:
    // 0x5283ac: 0x270182b  sltu        $v1, $s3, $s0
    ctx->pc = 0x5283acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_5283b0:
    // 0x5283b0: 0x1460ffb6  bnez        $v1, . + 4 + (-0x4A << 2)
label_5283b4:
    if (ctx->pc == 0x5283B4u) {
        ctx->pc = 0x5283B4u;
            // 0x5283b4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x5283B8u;
        goto label_5283b8;
    }
    ctx->pc = 0x5283B0u;
    {
        const bool branch_taken_0x5283b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x5283B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5283B0u;
            // 0x5283b4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5283b0) {
            ctx->pc = 0x52828Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_52828c;
        }
    }
    ctx->pc = 0x5283B8u;
label_5283b8:
    // 0x5283b8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x5283b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_5283bc:
    // 0x5283bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x5283bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_5283c0:
    // 0x5283c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x5283c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_5283c4:
    // 0x5283c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x5283c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_5283c8:
    // 0x5283c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5283c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5283cc:
    // 0x5283cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5283ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5283d0:
    // 0x5283d0: 0x3e00008  jr          $ra
label_5283d4:
    if (ctx->pc == 0x5283D4u) {
        ctx->pc = 0x5283D4u;
            // 0x5283d4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x5283D8u;
        goto label_5283d8;
    }
    ctx->pc = 0x5283D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5283D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5283D0u;
            // 0x5283d4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5283D8u;
label_5283d8:
    // 0x5283d8: 0x0  nop
    ctx->pc = 0x5283d8u;
    // NOP
label_5283dc:
    // 0x5283dc: 0x0  nop
    ctx->pc = 0x5283dcu;
    // NOP
label_5283e0:
    // 0x5283e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x5283e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_5283e4:
    // 0x5283e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x5283e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_5283e8:
    // 0x5283e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x5283e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_5283ec:
    // 0x5283ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x5283ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_5283f0:
    // 0x5283f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5283f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5283f4:
    // 0x5283f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5283f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5283f8:
    // 0x5283f8: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x5283f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_5283fc:
    // 0x5283fc: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_528400:
    if (ctx->pc == 0x528400u) {
        ctx->pc = 0x528400u;
            // 0x528400: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x528404u;
        goto label_528404;
    }
    ctx->pc = 0x5283FCu;
    {
        const bool branch_taken_0x5283fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x528400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5283FCu;
            // 0x528400: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5283fc) {
            ctx->pc = 0x528438u;
            goto label_528438;
        }
    }
    ctx->pc = 0x528404u;
label_528404:
    // 0x528404: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x528404u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_528408:
    // 0x528408: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x528408u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52840c:
    // 0x52840c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x52840cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_528410:
    // 0x528410: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x528410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_528414:
    // 0x528414: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x528414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_528418:
    // 0x528418: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x528418u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_52841c:
    // 0x52841c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x52841cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_528420:
    // 0x528420: 0x320f809  jalr        $t9
label_528424:
    if (ctx->pc == 0x528424u) {
        ctx->pc = 0x528428u;
        goto label_528428;
    }
    ctx->pc = 0x528420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x528428u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x528428u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x528428u; }
            if (ctx->pc != 0x528428u) { return; }
        }
        }
    }
    ctx->pc = 0x528428u;
label_528428:
    // 0x528428: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x528428u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_52842c:
    // 0x52842c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x52842cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_528430:
    // 0x528430: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_528434:
    if (ctx->pc == 0x528434u) {
        ctx->pc = 0x528434u;
            // 0x528434: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x528438u;
        goto label_528438;
    }
    ctx->pc = 0x528430u;
    {
        const bool branch_taken_0x528430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x528434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x528430u;
            // 0x528434: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x528430) {
            ctx->pc = 0x52840Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_52840c;
        }
    }
    ctx->pc = 0x528438u;
label_528438:
    // 0x528438: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x528438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_52843c:
    // 0x52843c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x52843cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_528440:
    // 0x528440: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x528440u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_528444:
    // 0x528444: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x528444u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_528448:
    // 0x528448: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x528448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52844c:
    // 0x52844c: 0x3e00008  jr          $ra
label_528450:
    if (ctx->pc == 0x528450u) {
        ctx->pc = 0x528450u;
            // 0x528450: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x528454u;
        goto label_528454;
    }
    ctx->pc = 0x52844Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x528450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52844Cu;
            // 0x528450: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x528454u;
label_528454:
    // 0x528454: 0x0  nop
    ctx->pc = 0x528454u;
    // NOP
label_528458:
    // 0x528458: 0x0  nop
    ctx->pc = 0x528458u;
    // NOP
label_52845c:
    // 0x52845c: 0x0  nop
    ctx->pc = 0x52845cu;
    // NOP
label_528460:
    // 0x528460: 0xac8000d0  sw          $zero, 0xD0($a0)
    ctx->pc = 0x528460u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 0));
label_528464:
    // 0x528464: 0x3e00008  jr          $ra
label_528468:
    if (ctx->pc == 0x528468u) {
        ctx->pc = 0x528468u;
            // 0x528468: 0xac8000d8  sw          $zero, 0xD8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 0));
        ctx->pc = 0x52846Cu;
        goto label_52846c;
    }
    ctx->pc = 0x528464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x528468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x528464u;
            // 0x528468: 0xac8000d8  sw          $zero, 0xD8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52846Cu;
label_52846c:
    // 0x52846c: 0x0  nop
    ctx->pc = 0x52846cu;
    // NOP
}
