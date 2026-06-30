#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00521200
// Address: 0x521200 - 0x521470
void sub_00521200_0x521200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00521200_0x521200");
#endif

    switch (ctx->pc) {
        case 0x521200u: goto label_521200;
        case 0x521204u: goto label_521204;
        case 0x521208u: goto label_521208;
        case 0x52120cu: goto label_52120c;
        case 0x521210u: goto label_521210;
        case 0x521214u: goto label_521214;
        case 0x521218u: goto label_521218;
        case 0x52121cu: goto label_52121c;
        case 0x521220u: goto label_521220;
        case 0x521224u: goto label_521224;
        case 0x521228u: goto label_521228;
        case 0x52122cu: goto label_52122c;
        case 0x521230u: goto label_521230;
        case 0x521234u: goto label_521234;
        case 0x521238u: goto label_521238;
        case 0x52123cu: goto label_52123c;
        case 0x521240u: goto label_521240;
        case 0x521244u: goto label_521244;
        case 0x521248u: goto label_521248;
        case 0x52124cu: goto label_52124c;
        case 0x521250u: goto label_521250;
        case 0x521254u: goto label_521254;
        case 0x521258u: goto label_521258;
        case 0x52125cu: goto label_52125c;
        case 0x521260u: goto label_521260;
        case 0x521264u: goto label_521264;
        case 0x521268u: goto label_521268;
        case 0x52126cu: goto label_52126c;
        case 0x521270u: goto label_521270;
        case 0x521274u: goto label_521274;
        case 0x521278u: goto label_521278;
        case 0x52127cu: goto label_52127c;
        case 0x521280u: goto label_521280;
        case 0x521284u: goto label_521284;
        case 0x521288u: goto label_521288;
        case 0x52128cu: goto label_52128c;
        case 0x521290u: goto label_521290;
        case 0x521294u: goto label_521294;
        case 0x521298u: goto label_521298;
        case 0x52129cu: goto label_52129c;
        case 0x5212a0u: goto label_5212a0;
        case 0x5212a4u: goto label_5212a4;
        case 0x5212a8u: goto label_5212a8;
        case 0x5212acu: goto label_5212ac;
        case 0x5212b0u: goto label_5212b0;
        case 0x5212b4u: goto label_5212b4;
        case 0x5212b8u: goto label_5212b8;
        case 0x5212bcu: goto label_5212bc;
        case 0x5212c0u: goto label_5212c0;
        case 0x5212c4u: goto label_5212c4;
        case 0x5212c8u: goto label_5212c8;
        case 0x5212ccu: goto label_5212cc;
        case 0x5212d0u: goto label_5212d0;
        case 0x5212d4u: goto label_5212d4;
        case 0x5212d8u: goto label_5212d8;
        case 0x5212dcu: goto label_5212dc;
        case 0x5212e0u: goto label_5212e0;
        case 0x5212e4u: goto label_5212e4;
        case 0x5212e8u: goto label_5212e8;
        case 0x5212ecu: goto label_5212ec;
        case 0x5212f0u: goto label_5212f0;
        case 0x5212f4u: goto label_5212f4;
        case 0x5212f8u: goto label_5212f8;
        case 0x5212fcu: goto label_5212fc;
        case 0x521300u: goto label_521300;
        case 0x521304u: goto label_521304;
        case 0x521308u: goto label_521308;
        case 0x52130cu: goto label_52130c;
        case 0x521310u: goto label_521310;
        case 0x521314u: goto label_521314;
        case 0x521318u: goto label_521318;
        case 0x52131cu: goto label_52131c;
        case 0x521320u: goto label_521320;
        case 0x521324u: goto label_521324;
        case 0x521328u: goto label_521328;
        case 0x52132cu: goto label_52132c;
        case 0x521330u: goto label_521330;
        case 0x521334u: goto label_521334;
        case 0x521338u: goto label_521338;
        case 0x52133cu: goto label_52133c;
        case 0x521340u: goto label_521340;
        case 0x521344u: goto label_521344;
        case 0x521348u: goto label_521348;
        case 0x52134cu: goto label_52134c;
        case 0x521350u: goto label_521350;
        case 0x521354u: goto label_521354;
        case 0x521358u: goto label_521358;
        case 0x52135cu: goto label_52135c;
        case 0x521360u: goto label_521360;
        case 0x521364u: goto label_521364;
        case 0x521368u: goto label_521368;
        case 0x52136cu: goto label_52136c;
        case 0x521370u: goto label_521370;
        case 0x521374u: goto label_521374;
        case 0x521378u: goto label_521378;
        case 0x52137cu: goto label_52137c;
        case 0x521380u: goto label_521380;
        case 0x521384u: goto label_521384;
        case 0x521388u: goto label_521388;
        case 0x52138cu: goto label_52138c;
        case 0x521390u: goto label_521390;
        case 0x521394u: goto label_521394;
        case 0x521398u: goto label_521398;
        case 0x52139cu: goto label_52139c;
        case 0x5213a0u: goto label_5213a0;
        case 0x5213a4u: goto label_5213a4;
        case 0x5213a8u: goto label_5213a8;
        case 0x5213acu: goto label_5213ac;
        case 0x5213b0u: goto label_5213b0;
        case 0x5213b4u: goto label_5213b4;
        case 0x5213b8u: goto label_5213b8;
        case 0x5213bcu: goto label_5213bc;
        case 0x5213c0u: goto label_5213c0;
        case 0x5213c4u: goto label_5213c4;
        case 0x5213c8u: goto label_5213c8;
        case 0x5213ccu: goto label_5213cc;
        case 0x5213d0u: goto label_5213d0;
        case 0x5213d4u: goto label_5213d4;
        case 0x5213d8u: goto label_5213d8;
        case 0x5213dcu: goto label_5213dc;
        case 0x5213e0u: goto label_5213e0;
        case 0x5213e4u: goto label_5213e4;
        case 0x5213e8u: goto label_5213e8;
        case 0x5213ecu: goto label_5213ec;
        case 0x5213f0u: goto label_5213f0;
        case 0x5213f4u: goto label_5213f4;
        case 0x5213f8u: goto label_5213f8;
        case 0x5213fcu: goto label_5213fc;
        case 0x521400u: goto label_521400;
        case 0x521404u: goto label_521404;
        case 0x521408u: goto label_521408;
        case 0x52140cu: goto label_52140c;
        case 0x521410u: goto label_521410;
        case 0x521414u: goto label_521414;
        case 0x521418u: goto label_521418;
        case 0x52141cu: goto label_52141c;
        case 0x521420u: goto label_521420;
        case 0x521424u: goto label_521424;
        case 0x521428u: goto label_521428;
        case 0x52142cu: goto label_52142c;
        case 0x521430u: goto label_521430;
        case 0x521434u: goto label_521434;
        case 0x521438u: goto label_521438;
        case 0x52143cu: goto label_52143c;
        case 0x521440u: goto label_521440;
        case 0x521444u: goto label_521444;
        case 0x521448u: goto label_521448;
        case 0x52144cu: goto label_52144c;
        case 0x521450u: goto label_521450;
        case 0x521454u: goto label_521454;
        case 0x521458u: goto label_521458;
        case 0x52145cu: goto label_52145c;
        case 0x521460u: goto label_521460;
        case 0x521464u: goto label_521464;
        case 0x521468u: goto label_521468;
        case 0x52146cu: goto label_52146c;
        default: break;
    }

    ctx->pc = 0x521200u;

label_521200:
    // 0x521200: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x521200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_521204:
    // 0x521204: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x521204u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_521208:
    // 0x521208: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x521208u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_52120c:
    // 0x52120c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52120cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_521210:
    // 0x521210: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x521210u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_521214:
    // 0x521214: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x521214u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_521218:
    // 0x521218: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x521218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52121c:
    // 0x52121c: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x52121cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_521220:
    // 0x521220: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x521220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_521224:
    // 0x521224: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x521224u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_521228:
    // 0x521228: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x521228u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_52122c:
    // 0x52122c: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x52122cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_521230:
    // 0x521230: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x521230u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_521234:
    // 0x521234: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x521234u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_521238:
    // 0x521238: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x521238u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
label_52123c:
    // 0x52123c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52123cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_521240:
    // 0x521240: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x521240u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
label_521244:
    // 0x521244: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x521244u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_521248:
    // 0x521248: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x521248u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
label_52124c:
    // 0x52124c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x52124cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_521250:
    // 0x521250: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x521250u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
label_521254:
    // 0x521254: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x521254u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_521258:
    // 0x521258: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x521258u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_52125c:
    // 0x52125c: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x52125cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_521260:
    // 0x521260: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x521260u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_521264:
    // 0x521264: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x521264u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_521268:
    // 0x521268: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x521268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52126c:
    // 0x52126c: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x52126cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
label_521270:
    // 0x521270: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x521270u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
label_521274:
    // 0x521274: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x521274u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_521278:
    // 0x521278: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x521278u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_52127c:
    // 0x52127c: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x52127cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_521280:
    // 0x521280: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x521280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_521284:
    // 0x521284: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x521284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_521288:
    // 0x521288: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x521288u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_52128c:
    // 0x52128c: 0x3e00008  jr          $ra
label_521290:
    if (ctx->pc == 0x521290u) {
        ctx->pc = 0x521290u;
            // 0x521290: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->pc = 0x521294u;
        goto label_521294;
    }
    ctx->pc = 0x52128Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x521290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52128Cu;
            // 0x521290: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x521294u;
label_521294:
    // 0x521294: 0x0  nop
    ctx->pc = 0x521294u;
    // NOP
label_521298:
    // 0x521298: 0x0  nop
    ctx->pc = 0x521298u;
    // NOP
label_52129c:
    // 0x52129c: 0x0  nop
    ctx->pc = 0x52129cu;
    // NOP
label_5212a0:
    // 0x5212a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x5212a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_5212a4:
    // 0x5212a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x5212a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_5212a8:
    // 0x5212a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x5212a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_5212ac:
    // 0x5212ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x5212acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_5212b0:
    // 0x5212b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x5212b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_5212b4:
    // 0x5212b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5212b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5212b8:
    // 0x5212b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5212b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5212bc:
    // 0x5212bc: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x5212bcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_5212c0:
    // 0x5212c0: 0x10a3001a  beq         $a1, $v1, . + 4 + (0x1A << 2)
label_5212c4:
    if (ctx->pc == 0x5212C4u) {
        ctx->pc = 0x5212C4u;
            // 0x5212c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5212C8u;
        goto label_5212c8;
    }
    ctx->pc = 0x5212C0u;
    {
        const bool branch_taken_0x5212c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x5212C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5212C0u;
            // 0x5212c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5212c0) {
            ctx->pc = 0x52132Cu;
            goto label_52132c;
        }
    }
    ctx->pc = 0x5212C8u;
label_5212c8:
    // 0x5212c8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x5212c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5212cc:
    // 0x5212cc: 0x50a30014  beql        $a1, $v1, . + 4 + (0x14 << 2)
label_5212d0:
    if (ctx->pc == 0x5212D0u) {
        ctx->pc = 0x5212D0u;
            // 0x5212d0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x5212D4u;
        goto label_5212d4;
    }
    ctx->pc = 0x5212CCu;
    {
        const bool branch_taken_0x5212cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x5212cc) {
            ctx->pc = 0x5212D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5212CCu;
            // 0x5212d0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x521320u;
            goto label_521320;
        }
    }
    ctx->pc = 0x5212D4u;
label_5212d4:
    // 0x5212d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x5212d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_5212d8:
    // 0x5212d8: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_5212dc:
    if (ctx->pc == 0x5212DCu) {
        ctx->pc = 0x5212E0u;
        goto label_5212e0;
    }
    ctx->pc = 0x5212D8u;
    {
        const bool branch_taken_0x5212d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x5212d8) {
            ctx->pc = 0x5212E8u;
            goto label_5212e8;
        }
    }
    ctx->pc = 0x5212E0u;
label_5212e0:
    // 0x5212e0: 0x1000001f  b           . + 4 + (0x1F << 2)
label_5212e4:
    if (ctx->pc == 0x5212E4u) {
        ctx->pc = 0x5212E8u;
        goto label_5212e8;
    }
    ctx->pc = 0x5212E0u;
    {
        const bool branch_taken_0x5212e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5212e0) {
            ctx->pc = 0x521360u;
            goto label_521360;
        }
    }
    ctx->pc = 0x5212E8u;
label_5212e8:
    // 0x5212e8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x5212e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_5212ec:
    // 0x5212ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x5212ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5212f0:
    // 0x5212f0: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x5212f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_5212f4:
    // 0x5212f4: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x5212f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_5212f8:
    // 0x5212f8: 0x10640019  beq         $v1, $a0, . + 4 + (0x19 << 2)
label_5212fc:
    if (ctx->pc == 0x5212FCu) {
        ctx->pc = 0x521300u;
        goto label_521300;
    }
    ctx->pc = 0x5212F8u;
    {
        const bool branch_taken_0x5212f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x5212f8) {
            ctx->pc = 0x521360u;
            goto label_521360;
        }
    }
    ctx->pc = 0x521300u;
label_521300:
    // 0x521300: 0x8e050084  lw          $a1, 0x84($s0)
    ctx->pc = 0x521300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_521304:
    // 0x521304: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x521304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_521308:
    // 0x521308: 0x8c64ce98  lw          $a0, -0x3168($v1)
    ctx->pc = 0x521308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954648)));
label_52130c:
    // 0x52130c: 0x8ca50030  lw          $a1, 0x30($a1)
    ctx->pc = 0x52130cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_521310:
    // 0x521310: 0x8ca30090  lw          $v1, 0x90($a1)
    ctx->pc = 0x521310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
label_521314:
    // 0x521314: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x521314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_521318:
    // 0x521318: 0x10000011  b           . + 4 + (0x11 << 2)
label_52131c:
    if (ctx->pc == 0x52131Cu) {
        ctx->pc = 0x52131Cu;
            // 0x52131c: 0xaca30090  sw          $v1, 0x90($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 3));
        ctx->pc = 0x521320u;
        goto label_521320;
    }
    ctx->pc = 0x521318u;
    {
        const bool branch_taken_0x521318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x52131Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x521318u;
            // 0x52131c: 0xaca30090  sw          $v1, 0x90($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x521318) {
            ctx->pc = 0x521360u;
            goto label_521360;
        }
    }
    ctx->pc = 0x521320u;
label_521320:
    // 0x521320: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x521320u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_521324:
    // 0x521324: 0x320f809  jalr        $t9
label_521328:
    if (ctx->pc == 0x521328u) {
        ctx->pc = 0x52132Cu;
        goto label_52132c;
    }
    ctx->pc = 0x521324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52132Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x52132Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52132Cu; }
            if (ctx->pc != 0x52132Cu) { return; }
        }
        }
    }
    ctx->pc = 0x52132Cu;
label_52132c:
    // 0x52132c: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x52132cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_521330:
    // 0x521330: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_521334:
    if (ctx->pc == 0x521334u) {
        ctx->pc = 0x521338u;
        goto label_521338;
    }
    ctx->pc = 0x521330u;
    {
        const bool branch_taken_0x521330 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x521330) {
            ctx->pc = 0x521360u;
            goto label_521360;
        }
    }
    ctx->pc = 0x521338u;
label_521338:
    // 0x521338: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x521338u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52133c:
    // 0x52133c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x52133cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_521340:
    // 0x521340: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x521340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_521344:
    // 0x521344: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x521344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_521348:
    // 0x521348: 0xc0e3658  jal         func_38D960
label_52134c:
    if (ctx->pc == 0x52134Cu) {
        ctx->pc = 0x52134Cu;
            // 0x52134c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x521350u;
        goto label_521350;
    }
    ctx->pc = 0x521348u;
    SET_GPR_U32(ctx, 31, 0x521350u);
    ctx->pc = 0x52134Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x521348u;
            // 0x52134c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521350u; }
        if (ctx->pc != 0x521350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521350u; }
        if (ctx->pc != 0x521350u) { return; }
    }
    ctx->pc = 0x521350u;
label_521350:
    // 0x521350: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x521350u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_521354:
    // 0x521354: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x521354u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_521358:
    // 0x521358: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_52135c:
    if (ctx->pc == 0x52135Cu) {
        ctx->pc = 0x52135Cu;
            // 0x52135c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x521360u;
        goto label_521360;
    }
    ctx->pc = 0x521358u;
    {
        const bool branch_taken_0x521358 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x52135Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x521358u;
            // 0x52135c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x521358) {
            ctx->pc = 0x521340u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_521340;
        }
    }
    ctx->pc = 0x521360u;
label_521360:
    // 0x521360: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x521360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_521364:
    // 0x521364: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x521364u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_521368:
    // 0x521368: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x521368u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_52136c:
    // 0x52136c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52136cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_521370:
    // 0x521370: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x521370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_521374:
    // 0x521374: 0x3e00008  jr          $ra
label_521378:
    if (ctx->pc == 0x521378u) {
        ctx->pc = 0x521378u;
            // 0x521378: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x52137Cu;
        goto label_52137c;
    }
    ctx->pc = 0x521374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x521378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x521374u;
            // 0x521378: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52137Cu;
label_52137c:
    // 0x52137c: 0x0  nop
    ctx->pc = 0x52137cu;
    // NOP
label_521380:
    // 0x521380: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x521380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_521384:
    // 0x521384: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x521384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_521388:
    // 0x521388: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x521388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_52138c:
    // 0x52138c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x52138cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_521390:
    // 0x521390: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x521390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_521394:
    // 0x521394: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x521394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_521398:
    // 0x521398: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x521398u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_52139c:
    // 0x52139c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_5213a0:
    if (ctx->pc == 0x5213A0u) {
        ctx->pc = 0x5213A0u;
            // 0x5213a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5213A4u;
        goto label_5213a4;
    }
    ctx->pc = 0x52139Cu;
    {
        const bool branch_taken_0x52139c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x5213A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52139Cu;
            // 0x5213a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52139c) {
            ctx->pc = 0x5213D8u;
            goto label_5213d8;
        }
    }
    ctx->pc = 0x5213A4u;
label_5213a4:
    // 0x5213a4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x5213a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5213a8:
    // 0x5213a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x5213a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5213ac:
    // 0x5213ac: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x5213acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_5213b0:
    // 0x5213b0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x5213b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_5213b4:
    // 0x5213b4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x5213b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_5213b8:
    // 0x5213b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5213b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5213bc:
    // 0x5213bc: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x5213bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_5213c0:
    // 0x5213c0: 0x320f809  jalr        $t9
label_5213c4:
    if (ctx->pc == 0x5213C4u) {
        ctx->pc = 0x5213C8u;
        goto label_5213c8;
    }
    ctx->pc = 0x5213C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5213C8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x5213C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5213C8u; }
            if (ctx->pc != 0x5213C8u) { return; }
        }
        }
    }
    ctx->pc = 0x5213C8u;
label_5213c8:
    // 0x5213c8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x5213c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_5213cc:
    // 0x5213cc: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x5213ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_5213d0:
    // 0x5213d0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_5213d4:
    if (ctx->pc == 0x5213D4u) {
        ctx->pc = 0x5213D4u;
            // 0x5213d4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x5213D8u;
        goto label_5213d8;
    }
    ctx->pc = 0x5213D0u;
    {
        const bool branch_taken_0x5213d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x5213D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5213D0u;
            // 0x5213d4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5213d0) {
            ctx->pc = 0x5213ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5213ac;
        }
    }
    ctx->pc = 0x5213D8u;
label_5213d8:
    // 0x5213d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x5213d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_5213dc:
    // 0x5213dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x5213dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_5213e0:
    // 0x5213e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x5213e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_5213e4:
    // 0x5213e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5213e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5213e8:
    // 0x5213e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5213e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5213ec:
    // 0x5213ec: 0x3e00008  jr          $ra
label_5213f0:
    if (ctx->pc == 0x5213F0u) {
        ctx->pc = 0x5213F0u;
            // 0x5213f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x5213F4u;
        goto label_5213f4;
    }
    ctx->pc = 0x5213ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5213F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5213ECu;
            // 0x5213f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5213F4u;
label_5213f4:
    // 0x5213f4: 0x0  nop
    ctx->pc = 0x5213f4u;
    // NOP
label_5213f8:
    // 0x5213f8: 0x0  nop
    ctx->pc = 0x5213f8u;
    // NOP
label_5213fc:
    // 0x5213fc: 0x0  nop
    ctx->pc = 0x5213fcu;
    // NOP
label_521400:
    // 0x521400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x521400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_521404:
    // 0x521404: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x521404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_521408:
    // 0x521408: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x521408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_52140c:
    // 0x52140c: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x52140cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_521410:
    // 0x521410: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x521410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_521414:
    // 0x521414: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x521414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_521418:
    // 0x521418: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x521418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_52141c:
    // 0x52141c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x52141cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_521420:
    // 0x521420: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x521420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_521424:
    // 0x521424: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x521424u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_521428:
    // 0x521428: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x521428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_52142c:
    // 0x52142c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x52142cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_521430:
    // 0x521430: 0xc08bff0  jal         func_22FFC0
label_521434:
    if (ctx->pc == 0x521434u) {
        ctx->pc = 0x521434u;
            // 0x521434: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x521438u;
        goto label_521438;
    }
    ctx->pc = 0x521430u;
    SET_GPR_U32(ctx, 31, 0x521438u);
    ctx->pc = 0x521434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x521430u;
            // 0x521434: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521438u; }
        if (ctx->pc != 0x521438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521438u; }
        if (ctx->pc != 0x521438u) { return; }
    }
    ctx->pc = 0x521438u;
label_521438:
    // 0x521438: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x521438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_52143c:
    // 0x52143c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x52143cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_521440:
    // 0x521440: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x521440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_521444:
    // 0x521444: 0xc08914c  jal         func_224530
label_521448:
    if (ctx->pc == 0x521448u) {
        ctx->pc = 0x521448u;
            // 0x521448: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52144Cu;
        goto label_52144c;
    }
    ctx->pc = 0x521444u;
    SET_GPR_U32(ctx, 31, 0x52144Cu);
    ctx->pc = 0x521448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x521444u;
            // 0x521448: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52144Cu; }
        if (ctx->pc != 0x52144Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52144Cu; }
        if (ctx->pc != 0x52144Cu) { return; }
    }
    ctx->pc = 0x52144Cu;
label_52144c:
    // 0x52144c: 0xc0e393c  jal         func_38E4F0
label_521450:
    if (ctx->pc == 0x521450u) {
        ctx->pc = 0x521450u;
            // 0x521450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x521454u;
        goto label_521454;
    }
    ctx->pc = 0x52144Cu;
    SET_GPR_U32(ctx, 31, 0x521454u);
    ctx->pc = 0x521450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52144Cu;
            // 0x521450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521454u; }
        if (ctx->pc != 0x521454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521454u; }
        if (ctx->pc != 0x521454u) { return; }
    }
    ctx->pc = 0x521454u;
label_521454:
    // 0x521454: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x521454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_521458:
    // 0x521458: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x521458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_52145c:
    // 0x52145c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52145cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_521460:
    // 0x521460: 0x3e00008  jr          $ra
label_521464:
    if (ctx->pc == 0x521464u) {
        ctx->pc = 0x521464u;
            // 0x521464: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x521468u;
        goto label_521468;
    }
    ctx->pc = 0x521460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x521464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x521460u;
            // 0x521464: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x521468u;
label_521468:
    // 0x521468: 0x0  nop
    ctx->pc = 0x521468u;
    // NOP
label_52146c:
    // 0x52146c: 0x0  nop
    ctx->pc = 0x52146cu;
    // NOP
}
