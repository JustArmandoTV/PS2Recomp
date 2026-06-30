#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00365180
// Address: 0x365180 - 0x365450
void sub_00365180_0x365180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00365180_0x365180");
#endif

    switch (ctx->pc) {
        case 0x365180u: goto label_365180;
        case 0x365184u: goto label_365184;
        case 0x365188u: goto label_365188;
        case 0x36518cu: goto label_36518c;
        case 0x365190u: goto label_365190;
        case 0x365194u: goto label_365194;
        case 0x365198u: goto label_365198;
        case 0x36519cu: goto label_36519c;
        case 0x3651a0u: goto label_3651a0;
        case 0x3651a4u: goto label_3651a4;
        case 0x3651a8u: goto label_3651a8;
        case 0x3651acu: goto label_3651ac;
        case 0x3651b0u: goto label_3651b0;
        case 0x3651b4u: goto label_3651b4;
        case 0x3651b8u: goto label_3651b8;
        case 0x3651bcu: goto label_3651bc;
        case 0x3651c0u: goto label_3651c0;
        case 0x3651c4u: goto label_3651c4;
        case 0x3651c8u: goto label_3651c8;
        case 0x3651ccu: goto label_3651cc;
        case 0x3651d0u: goto label_3651d0;
        case 0x3651d4u: goto label_3651d4;
        case 0x3651d8u: goto label_3651d8;
        case 0x3651dcu: goto label_3651dc;
        case 0x3651e0u: goto label_3651e0;
        case 0x3651e4u: goto label_3651e4;
        case 0x3651e8u: goto label_3651e8;
        case 0x3651ecu: goto label_3651ec;
        case 0x3651f0u: goto label_3651f0;
        case 0x3651f4u: goto label_3651f4;
        case 0x3651f8u: goto label_3651f8;
        case 0x3651fcu: goto label_3651fc;
        case 0x365200u: goto label_365200;
        case 0x365204u: goto label_365204;
        case 0x365208u: goto label_365208;
        case 0x36520cu: goto label_36520c;
        case 0x365210u: goto label_365210;
        case 0x365214u: goto label_365214;
        case 0x365218u: goto label_365218;
        case 0x36521cu: goto label_36521c;
        case 0x365220u: goto label_365220;
        case 0x365224u: goto label_365224;
        case 0x365228u: goto label_365228;
        case 0x36522cu: goto label_36522c;
        case 0x365230u: goto label_365230;
        case 0x365234u: goto label_365234;
        case 0x365238u: goto label_365238;
        case 0x36523cu: goto label_36523c;
        case 0x365240u: goto label_365240;
        case 0x365244u: goto label_365244;
        case 0x365248u: goto label_365248;
        case 0x36524cu: goto label_36524c;
        case 0x365250u: goto label_365250;
        case 0x365254u: goto label_365254;
        case 0x365258u: goto label_365258;
        case 0x36525cu: goto label_36525c;
        case 0x365260u: goto label_365260;
        case 0x365264u: goto label_365264;
        case 0x365268u: goto label_365268;
        case 0x36526cu: goto label_36526c;
        case 0x365270u: goto label_365270;
        case 0x365274u: goto label_365274;
        case 0x365278u: goto label_365278;
        case 0x36527cu: goto label_36527c;
        case 0x365280u: goto label_365280;
        case 0x365284u: goto label_365284;
        case 0x365288u: goto label_365288;
        case 0x36528cu: goto label_36528c;
        case 0x365290u: goto label_365290;
        case 0x365294u: goto label_365294;
        case 0x365298u: goto label_365298;
        case 0x36529cu: goto label_36529c;
        case 0x3652a0u: goto label_3652a0;
        case 0x3652a4u: goto label_3652a4;
        case 0x3652a8u: goto label_3652a8;
        case 0x3652acu: goto label_3652ac;
        case 0x3652b0u: goto label_3652b0;
        case 0x3652b4u: goto label_3652b4;
        case 0x3652b8u: goto label_3652b8;
        case 0x3652bcu: goto label_3652bc;
        case 0x3652c0u: goto label_3652c0;
        case 0x3652c4u: goto label_3652c4;
        case 0x3652c8u: goto label_3652c8;
        case 0x3652ccu: goto label_3652cc;
        case 0x3652d0u: goto label_3652d0;
        case 0x3652d4u: goto label_3652d4;
        case 0x3652d8u: goto label_3652d8;
        case 0x3652dcu: goto label_3652dc;
        case 0x3652e0u: goto label_3652e0;
        case 0x3652e4u: goto label_3652e4;
        case 0x3652e8u: goto label_3652e8;
        case 0x3652ecu: goto label_3652ec;
        case 0x3652f0u: goto label_3652f0;
        case 0x3652f4u: goto label_3652f4;
        case 0x3652f8u: goto label_3652f8;
        case 0x3652fcu: goto label_3652fc;
        case 0x365300u: goto label_365300;
        case 0x365304u: goto label_365304;
        case 0x365308u: goto label_365308;
        case 0x36530cu: goto label_36530c;
        case 0x365310u: goto label_365310;
        case 0x365314u: goto label_365314;
        case 0x365318u: goto label_365318;
        case 0x36531cu: goto label_36531c;
        case 0x365320u: goto label_365320;
        case 0x365324u: goto label_365324;
        case 0x365328u: goto label_365328;
        case 0x36532cu: goto label_36532c;
        case 0x365330u: goto label_365330;
        case 0x365334u: goto label_365334;
        case 0x365338u: goto label_365338;
        case 0x36533cu: goto label_36533c;
        case 0x365340u: goto label_365340;
        case 0x365344u: goto label_365344;
        case 0x365348u: goto label_365348;
        case 0x36534cu: goto label_36534c;
        case 0x365350u: goto label_365350;
        case 0x365354u: goto label_365354;
        case 0x365358u: goto label_365358;
        case 0x36535cu: goto label_36535c;
        case 0x365360u: goto label_365360;
        case 0x365364u: goto label_365364;
        case 0x365368u: goto label_365368;
        case 0x36536cu: goto label_36536c;
        case 0x365370u: goto label_365370;
        case 0x365374u: goto label_365374;
        case 0x365378u: goto label_365378;
        case 0x36537cu: goto label_36537c;
        case 0x365380u: goto label_365380;
        case 0x365384u: goto label_365384;
        case 0x365388u: goto label_365388;
        case 0x36538cu: goto label_36538c;
        case 0x365390u: goto label_365390;
        case 0x365394u: goto label_365394;
        case 0x365398u: goto label_365398;
        case 0x36539cu: goto label_36539c;
        case 0x3653a0u: goto label_3653a0;
        case 0x3653a4u: goto label_3653a4;
        case 0x3653a8u: goto label_3653a8;
        case 0x3653acu: goto label_3653ac;
        case 0x3653b0u: goto label_3653b0;
        case 0x3653b4u: goto label_3653b4;
        case 0x3653b8u: goto label_3653b8;
        case 0x3653bcu: goto label_3653bc;
        case 0x3653c0u: goto label_3653c0;
        case 0x3653c4u: goto label_3653c4;
        case 0x3653c8u: goto label_3653c8;
        case 0x3653ccu: goto label_3653cc;
        case 0x3653d0u: goto label_3653d0;
        case 0x3653d4u: goto label_3653d4;
        case 0x3653d8u: goto label_3653d8;
        case 0x3653dcu: goto label_3653dc;
        case 0x3653e0u: goto label_3653e0;
        case 0x3653e4u: goto label_3653e4;
        case 0x3653e8u: goto label_3653e8;
        case 0x3653ecu: goto label_3653ec;
        case 0x3653f0u: goto label_3653f0;
        case 0x3653f4u: goto label_3653f4;
        case 0x3653f8u: goto label_3653f8;
        case 0x3653fcu: goto label_3653fc;
        case 0x365400u: goto label_365400;
        case 0x365404u: goto label_365404;
        case 0x365408u: goto label_365408;
        case 0x36540cu: goto label_36540c;
        case 0x365410u: goto label_365410;
        case 0x365414u: goto label_365414;
        case 0x365418u: goto label_365418;
        case 0x36541cu: goto label_36541c;
        case 0x365420u: goto label_365420;
        case 0x365424u: goto label_365424;
        case 0x365428u: goto label_365428;
        case 0x36542cu: goto label_36542c;
        case 0x365430u: goto label_365430;
        case 0x365434u: goto label_365434;
        case 0x365438u: goto label_365438;
        case 0x36543cu: goto label_36543c;
        case 0x365440u: goto label_365440;
        case 0x365444u: goto label_365444;
        case 0x365448u: goto label_365448;
        case 0x36544cu: goto label_36544c;
        default: break;
    }

    ctx->pc = 0x365180u;

label_365180:
    // 0x365180: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x365180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_365184:
    // 0x365184: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x365184u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_365188:
    // 0x365188: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x365188u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_36518c:
    // 0x36518c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36518cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_365190:
    // 0x365190: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x365190u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_365194:
    // 0x365194: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x365194u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_365198:
    // 0x365198: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x365198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_36519c:
    // 0x36519c: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x36519cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_3651a0:
    // 0x3651a0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3651a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3651a4:
    // 0x3651a4: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x3651a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_3651a8:
    // 0x3651a8: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x3651a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_3651ac:
    // 0x3651ac: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x3651acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_3651b0:
    // 0x3651b0: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x3651b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_3651b4:
    // 0x3651b4: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x3651b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_3651b8:
    // 0x3651b8: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x3651b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
label_3651bc:
    // 0x3651bc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3651bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3651c0:
    // 0x3651c0: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x3651c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
label_3651c4:
    // 0x3651c4: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x3651c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_3651c8:
    // 0x3651c8: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x3651c8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
label_3651cc:
    // 0x3651cc: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x3651ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_3651d0:
    // 0x3651d0: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x3651d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
label_3651d4:
    // 0x3651d4: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x3651d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_3651d8:
    // 0x3651d8: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x3651d8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_3651dc:
    // 0x3651dc: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x3651dcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_3651e0:
    // 0x3651e0: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x3651e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_3651e4:
    // 0x3651e4: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x3651e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_3651e8:
    // 0x3651e8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3651e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3651ec:
    // 0x3651ec: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x3651ecu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
label_3651f0:
    // 0x3651f0: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x3651f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
label_3651f4:
    // 0x3651f4: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x3651f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_3651f8:
    // 0x3651f8: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x3651f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_3651fc:
    // 0x3651fc: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x3651fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_365200:
    // 0x365200: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x365200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_365204:
    // 0x365204: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x365204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_365208:
    // 0x365208: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x365208u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_36520c:
    // 0x36520c: 0x3e00008  jr          $ra
label_365210:
    if (ctx->pc == 0x365210u) {
        ctx->pc = 0x365210u;
            // 0x365210: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->pc = 0x365214u;
        goto label_365214;
    }
    ctx->pc = 0x36520Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36520Cu;
            // 0x365210: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x365214u;
label_365214:
    // 0x365214: 0x0  nop
    ctx->pc = 0x365214u;
    // NOP
label_365218:
    // 0x365218: 0x0  nop
    ctx->pc = 0x365218u;
    // NOP
label_36521c:
    // 0x36521c: 0x0  nop
    ctx->pc = 0x36521cu;
    // NOP
label_365220:
    // 0x365220: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x365220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_365224:
    // 0x365224: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x365224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_365228:
    // 0x365228: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x365228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_36522c:
    // 0x36522c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x36522cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_365230:
    // 0x365230: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x365230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_365234:
    // 0x365234: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x365234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_365238:
    // 0x365238: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x365238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_36523c:
    // 0x36523c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x36523cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_365240:
    // 0x365240: 0x10a3002e  beq         $a1, $v1, . + 4 + (0x2E << 2)
label_365244:
    if (ctx->pc == 0x365244u) {
        ctx->pc = 0x365244u;
            // 0x365244: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x365248u;
        goto label_365248;
    }
    ctx->pc = 0x365240u;
    {
        const bool branch_taken_0x365240 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x365244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x365240u;
            // 0x365244: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365240) {
            ctx->pc = 0x3652FCu;
            goto label_3652fc;
        }
    }
    ctx->pc = 0x365248u;
label_365248:
    // 0x365248: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x365248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_36524c:
    // 0x36524c: 0x50a30028  beql        $a1, $v1, . + 4 + (0x28 << 2)
label_365250:
    if (ctx->pc == 0x365250u) {
        ctx->pc = 0x365250u;
            // 0x365250: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x365254u;
        goto label_365254;
    }
    ctx->pc = 0x36524Cu;
    {
        const bool branch_taken_0x36524c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x36524c) {
            ctx->pc = 0x365250u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36524Cu;
            // 0x365250: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3652F0u;
            goto label_3652f0;
        }
    }
    ctx->pc = 0x365254u;
label_365254:
    // 0x365254: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x365254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_365258:
    // 0x365258: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_36525c:
    if (ctx->pc == 0x36525Cu) {
        ctx->pc = 0x365260u;
        goto label_365260;
    }
    ctx->pc = 0x365258u;
    {
        const bool branch_taken_0x365258 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x365258) {
            ctx->pc = 0x365268u;
            goto label_365268;
        }
    }
    ctx->pc = 0x365260u;
label_365260:
    // 0x365260: 0x10000033  b           . + 4 + (0x33 << 2)
label_365264:
    if (ctx->pc == 0x365264u) {
        ctx->pc = 0x365268u;
        goto label_365268;
    }
    ctx->pc = 0x365260u;
    {
        const bool branch_taken_0x365260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x365260) {
            ctx->pc = 0x365330u;
            goto label_365330;
        }
    }
    ctx->pc = 0x365268u;
label_365268:
    // 0x365268: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x365268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_36526c:
    // 0x36526c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36526cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_365270:
    // 0x365270: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x365270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_365274:
    // 0x365274: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x365274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_365278:
    // 0x365278: 0x1064002d  beq         $v1, $a0, . + 4 + (0x2D << 2)
label_36527c:
    if (ctx->pc == 0x36527Cu) {
        ctx->pc = 0x365280u;
        goto label_365280;
    }
    ctx->pc = 0x365278u;
    {
        const bool branch_taken_0x365278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x365278) {
            ctx->pc = 0x365330u;
            goto label_365330;
        }
    }
    ctx->pc = 0x365280u;
label_365280:
    // 0x365280: 0x8e070084  lw          $a3, 0x84($s0)
    ctx->pc = 0x365280u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_365284:
    // 0x365284: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x365284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_365288:
    // 0x365288: 0x8c681848  lw          $t0, 0x1848($v1)
    ctx->pc = 0x365288u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6216)));
label_36528c:
    // 0x36528c: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x36528cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_365290:
    // 0x365290: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x365290u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_365294:
    // 0x365294: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x365294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_365298:
    // 0x365298: 0x8ce90030  lw          $t1, 0x30($a3)
    ctx->pc = 0x365298u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
label_36529c:
    // 0x36529c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x36529cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_3652a0:
    // 0x3652a0: 0x8d270090  lw          $a3, 0x90($t1)
    ctx->pc = 0x3652a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 144)));
label_3652a4:
    // 0x3652a4: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x3652a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_3652a8:
    // 0x3652a8: 0xad270090  sw          $a3, 0x90($t1)
    ctx->pc = 0x3652a8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 144), GPR_U32(ctx, 7));
label_3652ac:
    // 0x3652ac: 0x8cc71850  lw          $a3, 0x1850($a2)
    ctx->pc = 0x3652acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 6224)));
label_3652b0:
    // 0x3652b0: 0x8d260120  lw          $a2, 0x120($t1)
    ctx->pc = 0x3652b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 288)));
label_3652b4:
    // 0x3652b4: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x3652b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_3652b8:
    // 0x3652b8: 0xad260120  sw          $a2, 0x120($t1)
    ctx->pc = 0x3652b8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 288), GPR_U32(ctx, 6));
label_3652bc:
    // 0x3652bc: 0x8ca61858  lw          $a2, 0x1858($a1)
    ctx->pc = 0x3652bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 6232)));
label_3652c0:
    // 0x3652c0: 0x8d2501b0  lw          $a1, 0x1B0($t1)
    ctx->pc = 0x3652c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 432)));
label_3652c4:
    // 0x3652c4: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x3652c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_3652c8:
    // 0x3652c8: 0xad2501b0  sw          $a1, 0x1B0($t1)
    ctx->pc = 0x3652c8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 432), GPR_U32(ctx, 5));
label_3652cc:
    // 0x3652cc: 0x8c851860  lw          $a1, 0x1860($a0)
    ctx->pc = 0x3652ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6240)));
label_3652d0:
    // 0x3652d0: 0x8d240240  lw          $a0, 0x240($t1)
    ctx->pc = 0x3652d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 576)));
label_3652d4:
    // 0x3652d4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x3652d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_3652d8:
    // 0x3652d8: 0xad240240  sw          $a0, 0x240($t1)
    ctx->pc = 0x3652d8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 576), GPR_U32(ctx, 4));
label_3652dc:
    // 0x3652dc: 0x8c641868  lw          $a0, 0x1868($v1)
    ctx->pc = 0x3652dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6248)));
label_3652e0:
    // 0x3652e0: 0x8d2302d0  lw          $v1, 0x2D0($t1)
    ctx->pc = 0x3652e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 720)));
label_3652e4:
    // 0x3652e4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3652e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_3652e8:
    // 0x3652e8: 0x10000011  b           . + 4 + (0x11 << 2)
label_3652ec:
    if (ctx->pc == 0x3652ECu) {
        ctx->pc = 0x3652ECu;
            // 0x3652ec: 0xad2302d0  sw          $v1, 0x2D0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 720), GPR_U32(ctx, 3));
        ctx->pc = 0x3652F0u;
        goto label_3652f0;
    }
    ctx->pc = 0x3652E8u;
    {
        const bool branch_taken_0x3652e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3652ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3652E8u;
            // 0x3652ec: 0xad2302d0  sw          $v1, 0x2D0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 720), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3652e8) {
            ctx->pc = 0x365330u;
            goto label_365330;
        }
    }
    ctx->pc = 0x3652F0u;
label_3652f0:
    // 0x3652f0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3652f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3652f4:
    // 0x3652f4: 0x320f809  jalr        $t9
label_3652f8:
    if (ctx->pc == 0x3652F8u) {
        ctx->pc = 0x3652FCu;
        goto label_3652fc;
    }
    ctx->pc = 0x3652F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3652FCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3652FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3652FCu; }
            if (ctx->pc != 0x3652FCu) { return; }
        }
        }
    }
    ctx->pc = 0x3652FCu;
label_3652fc:
    // 0x3652fc: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x3652fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_365300:
    // 0x365300: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_365304:
    if (ctx->pc == 0x365304u) {
        ctx->pc = 0x365308u;
        goto label_365308;
    }
    ctx->pc = 0x365300u;
    {
        const bool branch_taken_0x365300 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x365300) {
            ctx->pc = 0x365330u;
            goto label_365330;
        }
    }
    ctx->pc = 0x365308u;
label_365308:
    // 0x365308: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x365308u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36530c:
    // 0x36530c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x36530cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_365310:
    // 0x365310: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x365310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_365314:
    // 0x365314: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x365314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_365318:
    // 0x365318: 0xc0e3658  jal         func_38D960
label_36531c:
    if (ctx->pc == 0x36531Cu) {
        ctx->pc = 0x36531Cu;
            // 0x36531c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x365320u;
        goto label_365320;
    }
    ctx->pc = 0x365318u;
    SET_GPR_U32(ctx, 31, 0x365320u);
    ctx->pc = 0x36531Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x365318u;
            // 0x36531c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365320u; }
        if (ctx->pc != 0x365320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365320u; }
        if (ctx->pc != 0x365320u) { return; }
    }
    ctx->pc = 0x365320u;
label_365320:
    // 0x365320: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x365320u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_365324:
    // 0x365324: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x365324u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_365328:
    // 0x365328: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_36532c:
    if (ctx->pc == 0x36532Cu) {
        ctx->pc = 0x36532Cu;
            // 0x36532c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x365330u;
        goto label_365330;
    }
    ctx->pc = 0x365328u;
    {
        const bool branch_taken_0x365328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36532Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x365328u;
            // 0x36532c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365328) {
            ctx->pc = 0x365310u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_365310;
        }
    }
    ctx->pc = 0x365330u;
label_365330:
    // 0x365330: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x365330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_365334:
    // 0x365334: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x365334u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_365338:
    // 0x365338: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x365338u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_36533c:
    // 0x36533c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36533cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_365340:
    // 0x365340: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x365340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_365344:
    // 0x365344: 0x3e00008  jr          $ra
label_365348:
    if (ctx->pc == 0x365348u) {
        ctx->pc = 0x365348u;
            // 0x365348: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x36534Cu;
        goto label_36534c;
    }
    ctx->pc = 0x365344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x365344u;
            // 0x365348: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36534Cu;
label_36534c:
    // 0x36534c: 0x0  nop
    ctx->pc = 0x36534cu;
    // NOP
label_365350:
    // 0x365350: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x365350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_365354:
    // 0x365354: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x365354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_365358:
    // 0x365358: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x365358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_36535c:
    // 0x36535c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36535cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_365360:
    // 0x365360: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x365360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_365364:
    // 0x365364: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x365364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_365368:
    // 0x365368: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x365368u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_36536c:
    // 0x36536c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_365370:
    if (ctx->pc == 0x365370u) {
        ctx->pc = 0x365370u;
            // 0x365370: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x365374u;
        goto label_365374;
    }
    ctx->pc = 0x36536Cu;
    {
        const bool branch_taken_0x36536c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x365370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36536Cu;
            // 0x365370: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36536c) {
            ctx->pc = 0x3653A8u;
            goto label_3653a8;
        }
    }
    ctx->pc = 0x365374u;
label_365374:
    // 0x365374: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x365374u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_365378:
    // 0x365378: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x365378u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36537c:
    // 0x36537c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x36537cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_365380:
    // 0x365380: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x365380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_365384:
    // 0x365384: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x365384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_365388:
    // 0x365388: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x365388u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_36538c:
    // 0x36538c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x36538cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_365390:
    // 0x365390: 0x320f809  jalr        $t9
label_365394:
    if (ctx->pc == 0x365394u) {
        ctx->pc = 0x365398u;
        goto label_365398;
    }
    ctx->pc = 0x365390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x365398u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x365398u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x365398u; }
            if (ctx->pc != 0x365398u) { return; }
        }
        }
    }
    ctx->pc = 0x365398u;
label_365398:
    // 0x365398: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x365398u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_36539c:
    // 0x36539c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x36539cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3653a0:
    // 0x3653a0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_3653a4:
    if (ctx->pc == 0x3653A4u) {
        ctx->pc = 0x3653A4u;
            // 0x3653a4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x3653A8u;
        goto label_3653a8;
    }
    ctx->pc = 0x3653A0u;
    {
        const bool branch_taken_0x3653a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3653A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3653A0u;
            // 0x3653a4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3653a0) {
            ctx->pc = 0x36537Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_36537c;
        }
    }
    ctx->pc = 0x3653A8u;
label_3653a8:
    // 0x3653a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3653a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3653ac:
    // 0x3653ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3653acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3653b0:
    // 0x3653b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3653b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3653b4:
    // 0x3653b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3653b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3653b8:
    // 0x3653b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3653b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3653bc:
    // 0x3653bc: 0x3e00008  jr          $ra
label_3653c0:
    if (ctx->pc == 0x3653C0u) {
        ctx->pc = 0x3653C0u;
            // 0x3653c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3653C4u;
        goto label_3653c4;
    }
    ctx->pc = 0x3653BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3653C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3653BCu;
            // 0x3653c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3653C4u;
label_3653c4:
    // 0x3653c4: 0x0  nop
    ctx->pc = 0x3653c4u;
    // NOP
label_3653c8:
    // 0x3653c8: 0x0  nop
    ctx->pc = 0x3653c8u;
    // NOP
label_3653cc:
    // 0x3653cc: 0x0  nop
    ctx->pc = 0x3653ccu;
    // NOP
label_3653d0:
    // 0x3653d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3653d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3653d4:
    // 0x3653d4: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x3653d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_3653d8:
    // 0x3653d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3653d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3653dc:
    // 0x3653dc: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x3653dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_3653e0:
    // 0x3653e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3653e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3653e4:
    // 0x3653e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3653e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3653e8:
    // 0x3653e8: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x3653e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_3653ec:
    // 0x3653ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3653ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3653f0:
    // 0x3653f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3653f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3653f4:
    // 0x3653f4: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x3653f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_3653f8:
    // 0x3653f8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3653f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3653fc:
    // 0x3653fc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3653fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_365400:
    // 0x365400: 0xc08bff0  jal         func_22FFC0
label_365404:
    if (ctx->pc == 0x365404u) {
        ctx->pc = 0x365404u;
            // 0x365404: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x365408u;
        goto label_365408;
    }
    ctx->pc = 0x365400u;
    SET_GPR_U32(ctx, 31, 0x365408u);
    ctx->pc = 0x365404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x365400u;
            // 0x365404: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365408u; }
        if (ctx->pc != 0x365408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365408u; }
        if (ctx->pc != 0x365408u) { return; }
    }
    ctx->pc = 0x365408u;
label_365408:
    // 0x365408: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x365408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_36540c:
    // 0x36540c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x36540cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_365410:
    // 0x365410: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x365410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_365414:
    // 0x365414: 0xc08914c  jal         func_224530
label_365418:
    if (ctx->pc == 0x365418u) {
        ctx->pc = 0x365418u;
            // 0x365418: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36541Cu;
        goto label_36541c;
    }
    ctx->pc = 0x365414u;
    SET_GPR_U32(ctx, 31, 0x36541Cu);
    ctx->pc = 0x365418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x365414u;
            // 0x365418: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36541Cu; }
        if (ctx->pc != 0x36541Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36541Cu; }
        if (ctx->pc != 0x36541Cu) { return; }
    }
    ctx->pc = 0x36541Cu;
label_36541c:
    // 0x36541c: 0xc0e393c  jal         func_38E4F0
label_365420:
    if (ctx->pc == 0x365420u) {
        ctx->pc = 0x365420u;
            // 0x365420: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x365424u;
        goto label_365424;
    }
    ctx->pc = 0x36541Cu;
    SET_GPR_U32(ctx, 31, 0x365424u);
    ctx->pc = 0x365420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36541Cu;
            // 0x365420: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365424u; }
        if (ctx->pc != 0x365424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365424u; }
        if (ctx->pc != 0x365424u) { return; }
    }
    ctx->pc = 0x365424u;
label_365424:
    // 0x365424: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x365424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_365428:
    // 0x365428: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x365428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
label_36542c:
    // 0x36542c: 0xac640158  sw          $a0, 0x158($v1)
    ctx->pc = 0x36542cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 344), GPR_U32(ctx, 4));
label_365430:
    // 0x365430: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x365430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_365434:
    // 0x365434: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x365434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_365438:
    // 0x365438: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x365438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36543c:
    // 0x36543c: 0x3e00008  jr          $ra
label_365440:
    if (ctx->pc == 0x365440u) {
        ctx->pc = 0x365440u;
            // 0x365440: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x365444u;
        goto label_365444;
    }
    ctx->pc = 0x36543Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36543Cu;
            // 0x365440: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x365444u;
label_365444:
    // 0x365444: 0x0  nop
    ctx->pc = 0x365444u;
    // NOP
label_365448:
    // 0x365448: 0x0  nop
    ctx->pc = 0x365448u;
    // NOP
label_36544c:
    // 0x36544c: 0x0  nop
    ctx->pc = 0x36544cu;
    // NOP
}
