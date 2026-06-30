#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002722D0
// Address: 0x2722d0 - 0x2723e0
void sub_002722D0_0x2722d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002722D0_0x2722d0");
#endif

    switch (ctx->pc) {
        case 0x2722d0u: goto label_2722d0;
        case 0x2722d4u: goto label_2722d4;
        case 0x2722d8u: goto label_2722d8;
        case 0x2722dcu: goto label_2722dc;
        case 0x2722e0u: goto label_2722e0;
        case 0x2722e4u: goto label_2722e4;
        case 0x2722e8u: goto label_2722e8;
        case 0x2722ecu: goto label_2722ec;
        case 0x2722f0u: goto label_2722f0;
        case 0x2722f4u: goto label_2722f4;
        case 0x2722f8u: goto label_2722f8;
        case 0x2722fcu: goto label_2722fc;
        case 0x272300u: goto label_272300;
        case 0x272304u: goto label_272304;
        case 0x272308u: goto label_272308;
        case 0x27230cu: goto label_27230c;
        case 0x272310u: goto label_272310;
        case 0x272314u: goto label_272314;
        case 0x272318u: goto label_272318;
        case 0x27231cu: goto label_27231c;
        case 0x272320u: goto label_272320;
        case 0x272324u: goto label_272324;
        case 0x272328u: goto label_272328;
        case 0x27232cu: goto label_27232c;
        case 0x272330u: goto label_272330;
        case 0x272334u: goto label_272334;
        case 0x272338u: goto label_272338;
        case 0x27233cu: goto label_27233c;
        case 0x272340u: goto label_272340;
        case 0x272344u: goto label_272344;
        case 0x272348u: goto label_272348;
        case 0x27234cu: goto label_27234c;
        case 0x272350u: goto label_272350;
        case 0x272354u: goto label_272354;
        case 0x272358u: goto label_272358;
        case 0x27235cu: goto label_27235c;
        case 0x272360u: goto label_272360;
        case 0x272364u: goto label_272364;
        case 0x272368u: goto label_272368;
        case 0x27236cu: goto label_27236c;
        case 0x272370u: goto label_272370;
        case 0x272374u: goto label_272374;
        case 0x272378u: goto label_272378;
        case 0x27237cu: goto label_27237c;
        case 0x272380u: goto label_272380;
        case 0x272384u: goto label_272384;
        case 0x272388u: goto label_272388;
        case 0x27238cu: goto label_27238c;
        case 0x272390u: goto label_272390;
        case 0x272394u: goto label_272394;
        case 0x272398u: goto label_272398;
        case 0x27239cu: goto label_27239c;
        case 0x2723a0u: goto label_2723a0;
        case 0x2723a4u: goto label_2723a4;
        case 0x2723a8u: goto label_2723a8;
        case 0x2723acu: goto label_2723ac;
        case 0x2723b0u: goto label_2723b0;
        case 0x2723b4u: goto label_2723b4;
        case 0x2723b8u: goto label_2723b8;
        case 0x2723bcu: goto label_2723bc;
        case 0x2723c0u: goto label_2723c0;
        case 0x2723c4u: goto label_2723c4;
        case 0x2723c8u: goto label_2723c8;
        case 0x2723ccu: goto label_2723cc;
        case 0x2723d0u: goto label_2723d0;
        case 0x2723d4u: goto label_2723d4;
        case 0x2723d8u: goto label_2723d8;
        case 0x2723dcu: goto label_2723dc;
        default: break;
    }

    ctx->pc = 0x2722d0u;

label_2722d0:
    // 0x2722d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2722d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2722d4:
    // 0x2722d4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2722d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2722d8:
    // 0x2722d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2722d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2722dc:
    // 0x2722dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2722dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2722e0:
    // 0x2722e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2722e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2722e4:
    // 0x2722e4: 0x2463d420  addiu       $v1, $v1, -0x2BE0
    ctx->pc = 0x2722e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956064));
label_2722e8:
    // 0x2722e8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2722e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2722ec:
    // 0x2722ec: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x2722ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_2722f0:
    // 0x2722f0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2722f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2722f4:
    // 0x2722f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2722f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2722f8:
    // 0x2722f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2722f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2722fc:
    // 0x2722fc: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x2722fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
label_272300:
    // 0x272300: 0x2442f380  addiu       $v0, $v0, -0xC80
    ctx->pc = 0x272300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964096));
label_272304:
    // 0x272304: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x272304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_272308:
    // 0x272308: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x272308u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_27230c:
    // 0x27230c: 0x2463f350  addiu       $v1, $v1, -0xCB0
    ctx->pc = 0x27230cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964048));
label_272310:
    // 0x272310: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x272310u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_272314:
    // 0x272314: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x272314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_272318:
    // 0x272318: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x272318u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_27231c:
    // 0x27231c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27231cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_272320:
    // 0x272320: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x272320u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_272324:
    // 0x272324: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x272324u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_272328:
    // 0x272328: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x272328u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
label_27232c:
    // 0x27232c: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x27232cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_272330:
    // 0x272330: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x272330u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_272334:
    // 0x272334: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x272334u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_272338:
    // 0x272338: 0x320f809  jalr        $t9
label_27233c:
    if (ctx->pc == 0x27233Cu) {
        ctx->pc = 0x272340u;
        goto label_272340;
    }
    ctx->pc = 0x272338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x272340u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x272340u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x272340u; }
            if (ctx->pc != 0x272340u) { return; }
        }
        }
    }
    ctx->pc = 0x272340u;
label_272340:
    // 0x272340: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x272340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_272344:
    // 0x272344: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x272344u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_272348:
    // 0x272348: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x272348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_27234c:
    // 0x27234c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27234cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_272350:
    // 0x272350: 0x3e00008  jr          $ra
label_272354:
    if (ctx->pc == 0x272354u) {
        ctx->pc = 0x272354u;
            // 0x272354: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x272358u;
        goto label_272358;
    }
    ctx->pc = 0x272350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272350u;
            // 0x272354: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x272358u;
label_272358:
    // 0x272358: 0x0  nop
    ctx->pc = 0x272358u;
    // NOP
label_27235c:
    // 0x27235c: 0x0  nop
    ctx->pc = 0x27235cu;
    // NOP
label_272360:
    // 0x272360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x272360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_272364:
    // 0x272364: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x272364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_272368:
    // 0x272368: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x272368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_27236c:
    // 0x27236c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27236cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_272370:
    // 0x272370: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_272374:
    if (ctx->pc == 0x272374u) {
        ctx->pc = 0x272374u;
            // 0x272374: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->pc = 0x272378u;
        goto label_272378;
    }
    ctx->pc = 0x272370u;
    {
        const bool branch_taken_0x272370 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x272374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272370u;
            // 0x272374: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272370) {
            ctx->pc = 0x2723C8u;
            goto label_2723c8;
        }
    }
    ctx->pc = 0x272378u;
label_272378:
    // 0x272378: 0x2442f380  addiu       $v0, $v0, -0xC80
    ctx->pc = 0x272378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964096));
label_27237c:
    // 0x27237c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_272380:
    if (ctx->pc == 0x272380u) {
        ctx->pc = 0x272380u;
            // 0x272380: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x272384u;
        goto label_272384;
    }
    ctx->pc = 0x27237Cu;
    {
        const bool branch_taken_0x27237c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x272380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27237Cu;
            // 0x272380: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27237c) {
            ctx->pc = 0x2723A0u;
            goto label_2723a0;
        }
    }
    ctx->pc = 0x272384u;
label_272384:
    // 0x272384: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x272384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_272388:
    // 0x272388: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x272388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_27238c:
    // 0x27238c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_272390:
    if (ctx->pc == 0x272390u) {
        ctx->pc = 0x272390u;
            // 0x272390: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x272394u;
        goto label_272394;
    }
    ctx->pc = 0x27238Cu;
    {
        const bool branch_taken_0x27238c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x272390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27238Cu;
            // 0x272390: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27238c) {
            ctx->pc = 0x2723A0u;
            goto label_2723a0;
        }
    }
    ctx->pc = 0x272394u;
label_272394:
    // 0x272394: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x272394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_272398:
    // 0x272398: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x272398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_27239c:
    // 0x27239c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x27239cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2723a0:
    // 0x2723a0: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2723a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_2723a4:
    // 0x2723a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2723a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2723a8:
    // 0x2723a8: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_2723ac:
    if (ctx->pc == 0x2723ACu) {
        ctx->pc = 0x2723ACu;
            // 0x2723ac: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->pc = 0x2723B0u;
        goto label_2723b0;
    }
    ctx->pc = 0x2723A8u;
    {
        const bool branch_taken_0x2723a8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2723ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2723A8u;
            // 0x2723ac: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2723a8) {
            ctx->pc = 0x2723C8u;
            goto label_2723c8;
        }
    }
    ctx->pc = 0x2723B0u;
label_2723b0:
    // 0x2723b0: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x2723b0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_2723b4:
    // 0x2723b4: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x2723b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_2723b8:
    // 0x2723b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2723b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2723bc:
    // 0x2723bc: 0xc0a7ab4  jal         func_29EAD0
label_2723c0:
    if (ctx->pc == 0x2723C0u) {
        ctx->pc = 0x2723C0u;
            // 0x2723c0: 0x24070013  addiu       $a3, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x2723C4u;
        goto label_2723c4;
    }
    ctx->pc = 0x2723BCu;
    SET_GPR_U32(ctx, 31, 0x2723C4u);
    ctx->pc = 0x2723C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2723BCu;
            // 0x2723c0: 0x24070013  addiu       $a3, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2723C4u; }
        if (ctx->pc != 0x2723C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2723C4u; }
        if (ctx->pc != 0x2723C4u) { return; }
    }
    ctx->pc = 0x2723C4u;
label_2723c4:
    // 0x2723c4: 0x0  nop
    ctx->pc = 0x2723c4u;
    // NOP
label_2723c8:
    // 0x2723c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2723c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2723cc:
    // 0x2723cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2723ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2723d0:
    // 0x2723d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2723d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2723d4:
    // 0x2723d4: 0x3e00008  jr          $ra
label_2723d8:
    if (ctx->pc == 0x2723D8u) {
        ctx->pc = 0x2723D8u;
            // 0x2723d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2723DCu;
        goto label_2723dc;
    }
    ctx->pc = 0x2723D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2723D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2723D4u;
            // 0x2723d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2723DCu;
label_2723dc:
    // 0x2723dc: 0x0  nop
    ctx->pc = 0x2723dcu;
    // NOP
}
