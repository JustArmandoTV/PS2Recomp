#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00520240
// Address: 0x520240 - 0x520410
void sub_00520240_0x520240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00520240_0x520240");
#endif

    switch (ctx->pc) {
        case 0x520240u: goto label_520240;
        case 0x520244u: goto label_520244;
        case 0x520248u: goto label_520248;
        case 0x52024cu: goto label_52024c;
        case 0x520250u: goto label_520250;
        case 0x520254u: goto label_520254;
        case 0x520258u: goto label_520258;
        case 0x52025cu: goto label_52025c;
        case 0x520260u: goto label_520260;
        case 0x520264u: goto label_520264;
        case 0x520268u: goto label_520268;
        case 0x52026cu: goto label_52026c;
        case 0x520270u: goto label_520270;
        case 0x520274u: goto label_520274;
        case 0x520278u: goto label_520278;
        case 0x52027cu: goto label_52027c;
        case 0x520280u: goto label_520280;
        case 0x520284u: goto label_520284;
        case 0x520288u: goto label_520288;
        case 0x52028cu: goto label_52028c;
        case 0x520290u: goto label_520290;
        case 0x520294u: goto label_520294;
        case 0x520298u: goto label_520298;
        case 0x52029cu: goto label_52029c;
        case 0x5202a0u: goto label_5202a0;
        case 0x5202a4u: goto label_5202a4;
        case 0x5202a8u: goto label_5202a8;
        case 0x5202acu: goto label_5202ac;
        case 0x5202b0u: goto label_5202b0;
        case 0x5202b4u: goto label_5202b4;
        case 0x5202b8u: goto label_5202b8;
        case 0x5202bcu: goto label_5202bc;
        case 0x5202c0u: goto label_5202c0;
        case 0x5202c4u: goto label_5202c4;
        case 0x5202c8u: goto label_5202c8;
        case 0x5202ccu: goto label_5202cc;
        case 0x5202d0u: goto label_5202d0;
        case 0x5202d4u: goto label_5202d4;
        case 0x5202d8u: goto label_5202d8;
        case 0x5202dcu: goto label_5202dc;
        case 0x5202e0u: goto label_5202e0;
        case 0x5202e4u: goto label_5202e4;
        case 0x5202e8u: goto label_5202e8;
        case 0x5202ecu: goto label_5202ec;
        case 0x5202f0u: goto label_5202f0;
        case 0x5202f4u: goto label_5202f4;
        case 0x5202f8u: goto label_5202f8;
        case 0x5202fcu: goto label_5202fc;
        case 0x520300u: goto label_520300;
        case 0x520304u: goto label_520304;
        case 0x520308u: goto label_520308;
        case 0x52030cu: goto label_52030c;
        case 0x520310u: goto label_520310;
        case 0x520314u: goto label_520314;
        case 0x520318u: goto label_520318;
        case 0x52031cu: goto label_52031c;
        case 0x520320u: goto label_520320;
        case 0x520324u: goto label_520324;
        case 0x520328u: goto label_520328;
        case 0x52032cu: goto label_52032c;
        case 0x520330u: goto label_520330;
        case 0x520334u: goto label_520334;
        case 0x520338u: goto label_520338;
        case 0x52033cu: goto label_52033c;
        case 0x520340u: goto label_520340;
        case 0x520344u: goto label_520344;
        case 0x520348u: goto label_520348;
        case 0x52034cu: goto label_52034c;
        case 0x520350u: goto label_520350;
        case 0x520354u: goto label_520354;
        case 0x520358u: goto label_520358;
        case 0x52035cu: goto label_52035c;
        case 0x520360u: goto label_520360;
        case 0x520364u: goto label_520364;
        case 0x520368u: goto label_520368;
        case 0x52036cu: goto label_52036c;
        case 0x520370u: goto label_520370;
        case 0x520374u: goto label_520374;
        case 0x520378u: goto label_520378;
        case 0x52037cu: goto label_52037c;
        case 0x520380u: goto label_520380;
        case 0x520384u: goto label_520384;
        case 0x520388u: goto label_520388;
        case 0x52038cu: goto label_52038c;
        case 0x520390u: goto label_520390;
        case 0x520394u: goto label_520394;
        case 0x520398u: goto label_520398;
        case 0x52039cu: goto label_52039c;
        case 0x5203a0u: goto label_5203a0;
        case 0x5203a4u: goto label_5203a4;
        case 0x5203a8u: goto label_5203a8;
        case 0x5203acu: goto label_5203ac;
        case 0x5203b0u: goto label_5203b0;
        case 0x5203b4u: goto label_5203b4;
        case 0x5203b8u: goto label_5203b8;
        case 0x5203bcu: goto label_5203bc;
        case 0x5203c0u: goto label_5203c0;
        case 0x5203c4u: goto label_5203c4;
        case 0x5203c8u: goto label_5203c8;
        case 0x5203ccu: goto label_5203cc;
        case 0x5203d0u: goto label_5203d0;
        case 0x5203d4u: goto label_5203d4;
        case 0x5203d8u: goto label_5203d8;
        case 0x5203dcu: goto label_5203dc;
        case 0x5203e0u: goto label_5203e0;
        case 0x5203e4u: goto label_5203e4;
        case 0x5203e8u: goto label_5203e8;
        case 0x5203ecu: goto label_5203ec;
        case 0x5203f0u: goto label_5203f0;
        case 0x5203f4u: goto label_5203f4;
        case 0x5203f8u: goto label_5203f8;
        case 0x5203fcu: goto label_5203fc;
        case 0x520400u: goto label_520400;
        case 0x520404u: goto label_520404;
        case 0x520408u: goto label_520408;
        case 0x52040cu: goto label_52040c;
        default: break;
    }

    ctx->pc = 0x520240u;

label_520240:
    // 0x520240: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x520240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_520244:
    // 0x520244: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x520244u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_520248:
    // 0x520248: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x520248u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_52024c:
    // 0x52024c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52024cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_520250:
    // 0x520250: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x520250u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_520254:
    // 0x520254: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x520254u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_520258:
    // 0x520258: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x520258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52025c:
    // 0x52025c: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x52025cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_520260:
    // 0x520260: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x520260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_520264:
    // 0x520264: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x520264u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_520268:
    // 0x520268: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x520268u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_52026c:
    // 0x52026c: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x52026cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_520270:
    // 0x520270: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x520270u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_520274:
    // 0x520274: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x520274u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_520278:
    // 0x520278: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x520278u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
label_52027c:
    // 0x52027c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52027cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_520280:
    // 0x520280: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x520280u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
label_520284:
    // 0x520284: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x520284u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_520288:
    // 0x520288: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x520288u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
label_52028c:
    // 0x52028c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x52028cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_520290:
    // 0x520290: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x520290u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
label_520294:
    // 0x520294: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x520294u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_520298:
    // 0x520298: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x520298u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_52029c:
    // 0x52029c: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x52029cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_5202a0:
    // 0x5202a0: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x5202a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_5202a4:
    // 0x5202a4: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x5202a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_5202a8:
    // 0x5202a8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5202a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5202ac:
    // 0x5202ac: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x5202acu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
label_5202b0:
    // 0x5202b0: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x5202b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
label_5202b4:
    // 0x5202b4: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x5202b4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_5202b8:
    // 0x5202b8: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x5202b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_5202bc:
    // 0x5202bc: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x5202bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_5202c0:
    // 0x5202c0: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x5202c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_5202c4:
    // 0x5202c4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x5202c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_5202c8:
    // 0x5202c8: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x5202c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_5202cc:
    // 0x5202cc: 0x3e00008  jr          $ra
label_5202d0:
    if (ctx->pc == 0x5202D0u) {
        ctx->pc = 0x5202D0u;
            // 0x5202d0: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->pc = 0x5202D4u;
        goto label_5202d4;
    }
    ctx->pc = 0x5202CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5202D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5202CCu;
            // 0x5202d0: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5202D4u;
label_5202d4:
    // 0x5202d4: 0x0  nop
    ctx->pc = 0x5202d4u;
    // NOP
label_5202d8:
    // 0x5202d8: 0x0  nop
    ctx->pc = 0x5202d8u;
    // NOP
label_5202dc:
    // 0x5202dc: 0x0  nop
    ctx->pc = 0x5202dcu;
    // NOP
label_5202e0:
    // 0x5202e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x5202e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_5202e4:
    // 0x5202e4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x5202e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_5202e8:
    // 0x5202e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x5202e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_5202ec:
    // 0x5202ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x5202ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_5202f0:
    // 0x5202f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x5202f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_5202f4:
    // 0x5202f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5202f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5202f8:
    // 0x5202f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5202f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5202fc:
    // 0x5202fc: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x5202fcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_520300:
    // 0x520300: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_520304:
    if (ctx->pc == 0x520304u) {
        ctx->pc = 0x520304u;
            // 0x520304: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x520308u;
        goto label_520308;
    }
    ctx->pc = 0x520300u;
    {
        const bool branch_taken_0x520300 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x520304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x520300u;
            // 0x520304: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x520300) {
            ctx->pc = 0x520334u;
            goto label_520334;
        }
    }
    ctx->pc = 0x520308u;
label_520308:
    // 0x520308: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x520308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_52030c:
    // 0x52030c: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_520310:
    if (ctx->pc == 0x520310u) {
        ctx->pc = 0x520310u;
            // 0x520310: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x520314u;
        goto label_520314;
    }
    ctx->pc = 0x52030Cu;
    {
        const bool branch_taken_0x52030c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x52030c) {
            ctx->pc = 0x520310u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52030Cu;
            // 0x520310: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x520328u;
            goto label_520328;
        }
    }
    ctx->pc = 0x520314u;
label_520314:
    // 0x520314: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x520314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_520318:
    // 0x520318: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_52031c:
    if (ctx->pc == 0x52031Cu) {
        ctx->pc = 0x520320u;
        goto label_520320;
    }
    ctx->pc = 0x520318u;
    {
        const bool branch_taken_0x520318 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x520318) {
            ctx->pc = 0x520368u;
            goto label_520368;
        }
    }
    ctx->pc = 0x520320u;
label_520320:
    // 0x520320: 0x10000011  b           . + 4 + (0x11 << 2)
label_520324:
    if (ctx->pc == 0x520324u) {
        ctx->pc = 0x520328u;
        goto label_520328;
    }
    ctx->pc = 0x520320u;
    {
        const bool branch_taken_0x520320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x520320) {
            ctx->pc = 0x520368u;
            goto label_520368;
        }
    }
    ctx->pc = 0x520328u;
label_520328:
    // 0x520328: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x520328u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_52032c:
    // 0x52032c: 0x320f809  jalr        $t9
label_520330:
    if (ctx->pc == 0x520330u) {
        ctx->pc = 0x520334u;
        goto label_520334;
    }
    ctx->pc = 0x52032Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x520334u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x520334u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x520334u; }
            if (ctx->pc != 0x520334u) { return; }
        }
        }
    }
    ctx->pc = 0x520334u;
label_520334:
    // 0x520334: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x520334u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_520338:
    // 0x520338: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_52033c:
    if (ctx->pc == 0x52033Cu) {
        ctx->pc = 0x520340u;
        goto label_520340;
    }
    ctx->pc = 0x520338u;
    {
        const bool branch_taken_0x520338 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x520338) {
            ctx->pc = 0x520368u;
            goto label_520368;
        }
    }
    ctx->pc = 0x520340u;
label_520340:
    // 0x520340: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x520340u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_520344:
    // 0x520344: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x520344u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_520348:
    // 0x520348: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x520348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_52034c:
    // 0x52034c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x52034cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_520350:
    // 0x520350: 0xc0e3658  jal         func_38D960
label_520354:
    if (ctx->pc == 0x520354u) {
        ctx->pc = 0x520354u;
            // 0x520354: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x520358u;
        goto label_520358;
    }
    ctx->pc = 0x520350u;
    SET_GPR_U32(ctx, 31, 0x520358u);
    ctx->pc = 0x520354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x520350u;
            // 0x520354: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520358u; }
        if (ctx->pc != 0x520358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520358u; }
        if (ctx->pc != 0x520358u) { return; }
    }
    ctx->pc = 0x520358u;
label_520358:
    // 0x520358: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x520358u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_52035c:
    // 0x52035c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x52035cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_520360:
    // 0x520360: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_520364:
    if (ctx->pc == 0x520364u) {
        ctx->pc = 0x520364u;
            // 0x520364: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x520368u;
        goto label_520368;
    }
    ctx->pc = 0x520360u;
    {
        const bool branch_taken_0x520360 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x520364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x520360u;
            // 0x520364: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x520360) {
            ctx->pc = 0x520348u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_520348;
        }
    }
    ctx->pc = 0x520368u;
label_520368:
    // 0x520368: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x520368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_52036c:
    // 0x52036c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x52036cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_520370:
    // 0x520370: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x520370u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_520374:
    // 0x520374: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x520374u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_520378:
    // 0x520378: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x520378u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52037c:
    // 0x52037c: 0x3e00008  jr          $ra
label_520380:
    if (ctx->pc == 0x520380u) {
        ctx->pc = 0x520380u;
            // 0x520380: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x520384u;
        goto label_520384;
    }
    ctx->pc = 0x52037Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x520380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52037Cu;
            // 0x520380: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x520384u;
label_520384:
    // 0x520384: 0x0  nop
    ctx->pc = 0x520384u;
    // NOP
label_520388:
    // 0x520388: 0x0  nop
    ctx->pc = 0x520388u;
    // NOP
label_52038c:
    // 0x52038c: 0x0  nop
    ctx->pc = 0x52038cu;
    // NOP
label_520390:
    // 0x520390: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x520390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_520394:
    // 0x520394: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x520394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_520398:
    // 0x520398: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x520398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_52039c:
    // 0x52039c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x52039cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_5203a0:
    // 0x5203a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5203a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5203a4:
    // 0x5203a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5203a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5203a8:
    // 0x5203a8: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x5203a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_5203ac:
    // 0x5203ac: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_5203b0:
    if (ctx->pc == 0x5203B0u) {
        ctx->pc = 0x5203B0u;
            // 0x5203b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5203B4u;
        goto label_5203b4;
    }
    ctx->pc = 0x5203ACu;
    {
        const bool branch_taken_0x5203ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x5203B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5203ACu;
            // 0x5203b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5203ac) {
            ctx->pc = 0x5203E8u;
            goto label_5203e8;
        }
    }
    ctx->pc = 0x5203B4u;
label_5203b4:
    // 0x5203b4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x5203b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5203b8:
    // 0x5203b8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x5203b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5203bc:
    // 0x5203bc: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x5203bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_5203c0:
    // 0x5203c0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x5203c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_5203c4:
    // 0x5203c4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x5203c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_5203c8:
    // 0x5203c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5203c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5203cc:
    // 0x5203cc: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x5203ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_5203d0:
    // 0x5203d0: 0x320f809  jalr        $t9
label_5203d4:
    if (ctx->pc == 0x5203D4u) {
        ctx->pc = 0x5203D8u;
        goto label_5203d8;
    }
    ctx->pc = 0x5203D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5203D8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x5203D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5203D8u; }
            if (ctx->pc != 0x5203D8u) { return; }
        }
        }
    }
    ctx->pc = 0x5203D8u;
label_5203d8:
    // 0x5203d8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x5203d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_5203dc:
    // 0x5203dc: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x5203dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_5203e0:
    // 0x5203e0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_5203e4:
    if (ctx->pc == 0x5203E4u) {
        ctx->pc = 0x5203E4u;
            // 0x5203e4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x5203E8u;
        goto label_5203e8;
    }
    ctx->pc = 0x5203E0u;
    {
        const bool branch_taken_0x5203e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x5203E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5203E0u;
            // 0x5203e4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5203e0) {
            ctx->pc = 0x5203BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5203bc;
        }
    }
    ctx->pc = 0x5203E8u;
label_5203e8:
    // 0x5203e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x5203e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_5203ec:
    // 0x5203ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x5203ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_5203f0:
    // 0x5203f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x5203f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_5203f4:
    // 0x5203f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5203f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5203f8:
    // 0x5203f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5203f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5203fc:
    // 0x5203fc: 0x3e00008  jr          $ra
label_520400:
    if (ctx->pc == 0x520400u) {
        ctx->pc = 0x520400u;
            // 0x520400: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x520404u;
        goto label_520404;
    }
    ctx->pc = 0x5203FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x520400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5203FCu;
            // 0x520400: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x520404u;
label_520404:
    // 0x520404: 0x0  nop
    ctx->pc = 0x520404u;
    // NOP
label_520408:
    // 0x520408: 0x0  nop
    ctx->pc = 0x520408u;
    // NOP
label_52040c:
    // 0x52040c: 0x0  nop
    ctx->pc = 0x52040cu;
    // NOP
}
