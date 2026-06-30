#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004732B0
// Address: 0x4732b0 - 0x4738a0
void sub_004732B0_0x4732b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004732B0_0x4732b0");
#endif

    switch (ctx->pc) {
        case 0x473624u: goto label_473624;
        case 0x473644u: goto label_473644;
        case 0x47366cu: goto label_47366c;
        case 0x473694u: goto label_473694;
        case 0x4736c8u: goto label_4736c8;
        case 0x4736f8u: goto label_4736f8;
        case 0x473728u: goto label_473728;
        case 0x473740u: goto label_473740;
        case 0x473760u: goto label_473760;
        case 0x473790u: goto label_473790;
        case 0x4737c0u: goto label_4737c0;
        case 0x4737d8u: goto label_4737d8;
        case 0x473810u: goto label_473810;
        case 0x473868u: goto label_473868;
        case 0x473880u: goto label_473880;
        default: break;
    }

    ctx->pc = 0x4732b0u;

    // 0x4732b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4732b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4732b4: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x4732b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x4732b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4732b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4732bc: 0x3c180066  lui         $t8, 0x66
    ctx->pc = 0x4732bcu;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)102 << 16));
    // 0x4732c0: 0x90ac0000  lbu         $t4, 0x0($a1)
    ctx->pc = 0x4732c0u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4732c4: 0x2463caf0  addiu       $v1, $v1, -0x3510
    ctx->pc = 0x4732c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953712));
    // 0x4732c8: 0x90b00001  lbu         $s0, 0x1($a1)
    ctx->pc = 0x4732c8u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x4732cc: 0x27181490  addiu       $t8, $t8, 0x1490
    ctx->pc = 0x4732ccu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 5264));
    // 0x4732d0: 0x8fad0010  lw          $t5, 0x10($sp)
    ctx->pc = 0x4732d0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4732d4: 0x240e0011  addiu       $t6, $zero, 0x11
    ctx->pc = 0x4732d4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x4732d8: 0x318c001f  andi        $t4, $t4, 0x1F
    ctx->pc = 0x4732d8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)31);
    // 0x4732dc: 0xc7880  sll         $t7, $t4, 2
    ctx->pc = 0x4732dcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x4732e0: 0x10c880  sll         $t9, $s0, 2
    ctx->pc = 0x4732e0u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x4732e4: 0x1ec7821  addu        $t7, $t7, $t4
    ctx->pc = 0x4732e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 12)));
    // 0x4732e8: 0x330c821  addu        $t9, $t9, $s0
    ctx->pc = 0x4732e8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 16)));
    // 0x4732ec: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x4732ecu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x4732f0: 0x19c900  sll         $t9, $t9, 4
    ctx->pc = 0x4732f0u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 4));
    // 0x4732f4: 0x6f1821  addu        $v1, $v1, $t7
    ctx->pc = 0x4732f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x4732f8: 0x319c021  addu        $t8, $t8, $t9
    ctx->pc = 0x4732f8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 25)));
    // 0x4732fc: 0x90630008  lbu         $v1, 0x8($v1)
    ctx->pc = 0x4732fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x473300: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x473300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x473304: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x473304u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x473308: 0x118e0006  beq         $t4, $t6, . + 4 + (0x6 << 2)
    ctx->pc = 0x473308u;
    {
        const bool branch_taken_0x473308 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 14));
        ctx->pc = 0x47330Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x473308u;
            // 0x47330c: 0x60782d  daddu       $t7, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x473308) {
            ctx->pc = 0x473324u;
            goto label_473324;
        }
    }
    ctx->pc = 0x473310u;
    // 0x473310: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x473310u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x473314: 0x518e0004  beql        $t4, $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x473314u;
    {
        const bool branch_taken_0x473314 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 14));
        if (branch_taken_0x473314) {
            ctx->pc = 0x473318u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x473314u;
            // 0x473318: 0x640f0001  daddiu      $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x473328u;
            goto label_473328;
        }
    }
    ctx->pc = 0x47331Cu;
    // 0x47331c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x47331Cu;
    {
        const bool branch_taken_0x47331c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x473320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47331Cu;
            // 0x473320: 0x8f0c002c  lw          $t4, 0x2C($t8) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47331c) {
            ctx->pc = 0x47332Cu;
            goto label_47332c;
        }
    }
    ctx->pc = 0x473324u;
label_473324:
    // 0x473324: 0x640f0001  daddiu      $t7, $zero, 0x1
    ctx->pc = 0x473324u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_473328:
    // 0x473328: 0x8f0c002c  lw          $t4, 0x2C($t8)
    ctx->pc = 0x473328u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 44)));
label_47332c:
    // 0x47332c: 0x31ee00ff  andi        $t6, $t7, 0xFF
    ctx->pc = 0x47332cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)255);
    // 0x473330: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x473330u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x473334: 0x25efea70  addiu       $t7, $t7, -0x1590
    ctx->pc = 0x473334u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294961776));
    // 0x473338: 0x4c040  sll         $t8, $a0, 1
    ctx->pc = 0x473338u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x47333c: 0x304c021  addu        $t8, $t8, $a0
    ctx->pc = 0x47333cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 4)));
    // 0x473340: 0xe2040  sll         $a0, $t6, 1
    ctx->pc = 0x473340u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
    // 0x473344: 0x8e2021  addu        $a0, $a0, $t6
    ctx->pc = 0x473344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x473348: 0x1870c0  sll         $t6, $t8, 3
    ctx->pc = 0x473348u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 24), 3));
    // 0x47334c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x47334cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x473350: 0x1ee7021  addu        $t6, $t7, $t6
    ctx->pc = 0x473350u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x473354: 0x8e7021  addu        $t6, $a0, $t6
    ctx->pc = 0x473354u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x473358: 0x29840013  slti        $a0, $t4, 0x13
    ctx->pc = 0x473358u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x47335c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x47335Cu;
    {
        const bool branch_taken_0x47335c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x473360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47335Cu;
            // 0x473360: 0xacee0000  sw          $t6, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47335c) {
            ctx->pc = 0x473378u;
            goto label_473378;
        }
    }
    ctx->pc = 0x473364u;
    // 0x473364: 0x29810016  slti        $at, $t4, 0x16
    ctx->pc = 0x473364u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x473368: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x473368u;
    {
        const bool branch_taken_0x473368 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x473368) {
            ctx->pc = 0x473378u;
            goto label_473378;
        }
    }
    ctx->pc = 0x473370u;
    // 0x473370: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x473370u;
    {
        const bool branch_taken_0x473370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x473374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x473370u;
            // 0x473374: 0x240c0006  addiu       $t4, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x473370) {
            ctx->pc = 0x473418u;
            goto label_473418;
        }
    }
    ctx->pc = 0x473378u;
label_473378:
    // 0x473378: 0x5820007  bltzl       $t4, . + 4 + (0x7 << 2)
    ctx->pc = 0x473378u;
    {
        const bool branch_taken_0x473378 = (GPR_S32(ctx, 12) < 0);
        if (branch_taken_0x473378) {
            ctx->pc = 0x47337Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x473378u;
            // 0x47337c: 0x2984000a  slti        $a0, $t4, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x473398u;
            goto label_473398;
        }
    }
    ctx->pc = 0x473380u;
    // 0x473380: 0x2981000a  slti        $at, $t4, 0xA
    ctx->pc = 0x473380u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x473384: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x473384u;
    {
        const bool branch_taken_0x473384 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x473384) {
            ctx->pc = 0x473394u;
            goto label_473394;
        }
    }
    ctx->pc = 0x47338Cu;
    // 0x47338c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x47338Cu;
    {
        const bool branch_taken_0x47338c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x473390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47338Cu;
            // 0x473390: 0x240c0001  addiu       $t4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47338c) {
            ctx->pc = 0x473418u;
            goto label_473418;
        }
    }
    ctx->pc = 0x473394u;
label_473394:
    // 0x473394: 0x2984000a  slti        $a0, $t4, 0xA
    ctx->pc = 0x473394u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)10) ? 1 : 0);
label_473398:
    // 0x473398: 0x54800007  bnel        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x473398u;
    {
        const bool branch_taken_0x473398 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x473398) {
            ctx->pc = 0x47339Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x473398u;
            // 0x47339c: 0x2984000f  slti        $a0, $t4, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)15) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4733B8u;
            goto label_4733b8;
        }
    }
    ctx->pc = 0x4733A0u;
    // 0x4733a0: 0x2981000f  slti        $at, $t4, 0xF
    ctx->pc = 0x4733a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x4733a4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x4733A4u;
    {
        const bool branch_taken_0x4733a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4733a4) {
            ctx->pc = 0x4733B4u;
            goto label_4733b4;
        }
    }
    ctx->pc = 0x4733ACu;
    // 0x4733ac: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x4733ACu;
    {
        const bool branch_taken_0x4733ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4733B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4733ACu;
            // 0x4733b0: 0x240c0002  addiu       $t4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4733ac) {
            ctx->pc = 0x473418u;
            goto label_473418;
        }
    }
    ctx->pc = 0x4733B4u;
label_4733b4:
    // 0x4733b4: 0x2984000f  slti        $a0, $t4, 0xF
    ctx->pc = 0x4733b4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)15) ? 1 : 0);
label_4733b8:
    // 0x4733b8: 0x54800007  bnel        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4733B8u;
    {
        const bool branch_taken_0x4733b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4733b8) {
            ctx->pc = 0x4733BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4733B8u;
            // 0x4733bc: 0x2984002f  slti        $a0, $t4, 0x2F (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)47) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4733D8u;
            goto label_4733d8;
        }
    }
    ctx->pc = 0x4733C0u;
    // 0x4733c0: 0x29810013  slti        $at, $t4, 0x13
    ctx->pc = 0x4733c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x4733c4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x4733C4u;
    {
        const bool branch_taken_0x4733c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4733c4) {
            ctx->pc = 0x4733D4u;
            goto label_4733d4;
        }
    }
    ctx->pc = 0x4733CCu;
    // 0x4733cc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x4733CCu;
    {
        const bool branch_taken_0x4733cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4733D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4733CCu;
            // 0x4733d0: 0x240c0004  addiu       $t4, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4733cc) {
            ctx->pc = 0x473418u;
            goto label_473418;
        }
    }
    ctx->pc = 0x4733D4u;
label_4733d4:
    // 0x4733d4: 0x2984002f  slti        $a0, $t4, 0x2F
    ctx->pc = 0x4733d4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)47) ? 1 : 0);
label_4733d8:
    // 0x4733d8: 0x54800007  bnel        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4733D8u;
    {
        const bool branch_taken_0x4733d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4733d8) {
            ctx->pc = 0x4733DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4733D8u;
            // 0x4733dc: 0x29840016  slti        $a0, $t4, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)22) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4733F8u;
            goto label_4733f8;
        }
    }
    ctx->pc = 0x4733E0u;
    // 0x4733e0: 0x29810032  slti        $at, $t4, 0x32
    ctx->pc = 0x4733e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x4733e4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x4733E4u;
    {
        const bool branch_taken_0x4733e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4733e4) {
            ctx->pc = 0x4733F4u;
            goto label_4733f4;
        }
    }
    ctx->pc = 0x4733ECu;
    // 0x4733ec: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4733ECu;
    {
        const bool branch_taken_0x4733ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4733F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4733ECu;
            // 0x4733f0: 0x240c0003  addiu       $t4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4733ec) {
            ctx->pc = 0x473418u;
            goto label_473418;
        }
    }
    ctx->pc = 0x4733F4u;
label_4733f4:
    // 0x4733f4: 0x29840016  slti        $a0, $t4, 0x16
    ctx->pc = 0x4733f4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)22) ? 1 : 0);
label_4733f8:
    // 0x4733f8: 0x54800007  bnel        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4733F8u;
    {
        const bool branch_taken_0x4733f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4733f8) {
            ctx->pc = 0x4733FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4733F8u;
            // 0x4733fc: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x473418u;
            goto label_473418;
        }
    }
    ctx->pc = 0x473400u;
    // 0x473400: 0x2981001a  slti        $at, $t4, 0x1A
    ctx->pc = 0x473400u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x473404: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x473404u;
    {
        const bool branch_taken_0x473404 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x473404) {
            ctx->pc = 0x473414u;
            goto label_473414;
        }
    }
    ctx->pc = 0x47340Cu;
    // 0x47340c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x47340Cu;
    {
        const bool branch_taken_0x47340c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x473410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47340Cu;
            // 0x473410: 0x240c0005  addiu       $t4, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47340c) {
            ctx->pc = 0x473418u;
            goto label_473418;
        }
    }
    ctx->pc = 0x473414u;
label_473414:
    // 0x473414: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x473414u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_473418:
    // 0x473418: 0x93a40018  lbu         $a0, 0x18($sp)
    ctx->pc = 0x473418u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x47341c: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x47341Cu;
    {
        const bool branch_taken_0x47341c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x47341c) {
            ctx->pc = 0x473420u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47341Cu;
            // 0x473420: 0x90a70000  lbu         $a3, 0x0($a1) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47342Cu;
            goto label_47342c;
        }
    }
    ctx->pc = 0x473424u;
    // 0x473424: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x473424u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473428: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x473428u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_47342c:
    // 0x47342c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x47342cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x473430: 0x30e7001f  andi        $a3, $a3, 0x1F
    ctx->pc = 0x473430u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)31);
    // 0x473434: 0x10e4002d  beq         $a3, $a0, . + 4 + (0x2D << 2)
    ctx->pc = 0x473434u;
    {
        const bool branch_taken_0x473434 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x473434) {
            ctx->pc = 0x4734ECu;
            goto label_4734ec;
        }
    }
    ctx->pc = 0x47343Cu;
    // 0x47343c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x47343cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x473440: 0x10e4001b  beq         $a3, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x473440u;
    {
        const bool branch_taken_0x473440 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x473440) {
            ctx->pc = 0x4734B0u;
            goto label_4734b0;
        }
    }
    ctx->pc = 0x473448u;
    // 0x473448: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x473448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x47344c: 0x10e40010  beq         $a3, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x47344Cu;
    {
        const bool branch_taken_0x47344c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x47344c) {
            ctx->pc = 0x473490u;
            goto label_473490;
        }
    }
    ctx->pc = 0x473454u;
    // 0x473454: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x473454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x473458: 0x10e40003  beq         $a3, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x473458u;
    {
        const bool branch_taken_0x473458 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x473458) {
            ctx->pc = 0x473468u;
            goto label_473468;
        }
    }
    ctx->pc = 0x473460u;
    // 0x473460: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x473460u;
    {
        const bool branch_taken_0x473460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x473464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x473460u;
            // 0x473464: 0x3c070066  lui         $a3, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x473460) {
            ctx->pc = 0x473528u;
            goto label_473528;
        }
    }
    ctx->pc = 0x473468u;
label_473468:
    // 0x473468: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x473468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x47346c: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x47346cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x473470: 0x2484eb20  addiu       $a0, $a0, -0x14E0
    ctx->pc = 0x473470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961952));
    // 0x473474: 0x24e7eb28  addiu       $a3, $a3, -0x14D8
    ctx->pc = 0x473474u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961960));
    // 0x473478: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x473478u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x47347c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x47347cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x473480: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x473480u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
    // 0x473484: 0x2484eb24  addiu       $a0, $a0, -0x14DC
    ctx->pc = 0x473484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961956));
    // 0x473488: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x473488u;
    {
        const bool branch_taken_0x473488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47348Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x473488u;
            // 0x47348c: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x473488) {
            ctx->pc = 0x47355Cu;
            goto label_47355c;
        }
    }
    ctx->pc = 0x473490u;
label_473490:
    // 0x473490: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x473490u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x473494: 0x24e7eb30  addiu       $a3, $a3, -0x14D0
    ctx->pc = 0x473494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961968));
    // 0x473498: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x473498u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x47349c: 0x24e40008  addiu       $a0, $a3, 0x8
    ctx->pc = 0x47349cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x4734a0: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4734a0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4734a4: 0x24e40004  addiu       $a0, $a3, 0x4
    ctx->pc = 0x4734a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x4734a8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x4734A8u;
    {
        const bool branch_taken_0x4734a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4734ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4734A8u;
            // 0x4734ac: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4734a8) {
            ctx->pc = 0x47355Cu;
            goto label_47355c;
        }
    }
    ctx->pc = 0x4734B0u;
label_4734b0:
    // 0x4734b0: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x4734b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x4734b4: 0xc2080  sll         $a0, $t4, 2
    ctx->pc = 0x4734b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x4734b8: 0x24e7ec88  addiu       $a3, $a3, -0x1378
    ctx->pc = 0x4734b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962312));
    // 0x4734bc: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x4734bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x4734c0: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x4734c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x4734c4: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x4734c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4734c8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x4734c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4734cc: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x4734ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x4734d0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x4734d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x4734d4: 0xe43021  addu        $a2, $a3, $a0
    ctx->pc = 0x4734d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x4734d8: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x4734d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x4734dc: 0x24e40004  addiu       $a0, $a3, 0x4
    ctx->pc = 0x4734dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x4734e0: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x4734e0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x4734e4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x4734E4u;
    {
        const bool branch_taken_0x4734e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4734E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4734E4u;
            // 0x4734e8: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4734e4) {
            ctx->pc = 0x47355Cu;
            goto label_47355c;
        }
    }
    ctx->pc = 0x4734ECu;
label_4734ec:
    // 0x4734ec: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x4734ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x4734f0: 0xc2080  sll         $a0, $t4, 2
    ctx->pc = 0x4734f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x4734f4: 0x24e7ebe4  addiu       $a3, $a3, -0x141C
    ctx->pc = 0x4734f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962148));
    // 0x4734f8: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x4734f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x4734fc: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x4734fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x473500: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x473500u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x473504: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x473504u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x473508: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x473508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x47350c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x47350cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x473510: 0xe43021  addu        $a2, $a3, $a0
    ctx->pc = 0x473510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x473514: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x473514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x473518: 0x24e40004  addiu       $a0, $a3, 0x4
    ctx->pc = 0x473518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x47351c: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x47351cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x473520: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x473520u;
    {
        const bool branch_taken_0x473520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x473524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x473520u;
            // 0x473524: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x473520) {
            ctx->pc = 0x47355Cu;
            goto label_47355c;
        }
    }
    ctx->pc = 0x473528u;
label_473528:
    // 0x473528: 0xc2080  sll         $a0, $t4, 2
    ctx->pc = 0x473528u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x47352c: 0x24e7eb40  addiu       $a3, $a3, -0x14C0
    ctx->pc = 0x47352cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961984));
    // 0x473530: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x473530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x473534: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x473534u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x473538: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x473538u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x47353c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x47353cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x473540: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x473540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x473544: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x473544u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x473548: 0xe43021  addu        $a2, $a3, $a0
    ctx->pc = 0x473548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x47354c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x47354cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x473550: 0x24e40004  addiu       $a0, $a3, 0x4
    ctx->pc = 0x473550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x473554: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x473554u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x473558: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x473558u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
label_47355c:
    // 0x47355c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x47355cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x473560: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x473560u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x473564: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x473564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x473568: 0x3c0c0066  lui         $t4, 0x66
    ctx->pc = 0x473568u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)102 << 16));
    // 0x47356c: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x47356cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x473570: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x473570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x473574: 0x30c4001f  andi        $a0, $a2, 0x1F
    ctx->pc = 0x473574u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x473578: 0x3c090066  lui         $t1, 0x66
    ctx->pc = 0x473578u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)102 << 16));
    // 0x47357c: 0x258cead0  addiu       $t4, $t4, -0x1530
    ctx->pc = 0x47357cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294961872));
    // 0x473580: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x473580u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x473584: 0x1842021  addu        $a0, $t4, $a0
    ctx->pc = 0x473584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x473588: 0x2529ed30  addiu       $t1, $t1, -0x12D0
    ctx->pc = 0x473588u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294962480));
    // 0x47358c: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x47358cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x473590: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x473590u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x473594: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x473594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x473598: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x473598u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x47359c: 0x5483000e  bnel        $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x47359Cu;
    {
        const bool branch_taken_0x47359c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x47359c) {
            ctx->pc = 0x4735A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47359Cu;
            // 0x4735a0: 0x7bb00000  lq          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4735D8u;
            goto label_4735d8;
        }
    }
    ctx->pc = 0x4735A4u;
    // 0x4735a4: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x4735a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4735a8: 0xc91821  addu        $v1, $a2, $t1
    ctx->pc = 0x4735a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x4735ac: 0x1272021  addu        $a0, $t1, $a3
    ctx->pc = 0x4735acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x4735b0: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x4735b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4735b4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x4735b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x4735b8: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x4735b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x4735bc: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4735bcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4735c0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x4735c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4735c4: 0xe5a20000  swc1        $f2, 0x0($t5)
    ctx->pc = 0x4735c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
    // 0x4735c8: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x4735c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4735cc: 0xe5a10004  swc1        $f1, 0x4($t5)
    ctx->pc = 0x4735ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4), bits); }
    // 0x4735d0: 0xe5a00008  swc1        $f0, 0x8($t5)
    ctx->pc = 0x4735d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8), bits); }
    // 0x4735d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4735d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4735d8:
    // 0x4735d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4735D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4735DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4735D8u;
            // 0x4735dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4735E0u;
    // 0x4735e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4735e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x4735e4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x4735e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x4735e8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4735e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x4735ec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4735ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x4735f0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x4735f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4735f4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4735f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x4735f8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4735f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4735fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4735fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x473600: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x473600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x473604: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x473604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x473608: 0x12a00073  beqz        $s5, . + 4 + (0x73 << 2)
    ctx->pc = 0x473608u;
    {
        const bool branch_taken_0x473608 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x47360Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x473608u;
            // 0x47360c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x473608) {
            ctx->pc = 0x4737D8u;
            goto label_4737d8;
        }
    }
    ctx->pc = 0x473610u;
    // 0x473610: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x473610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x473614: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x473614u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473618: 0x2442e9e0  addiu       $v0, $v0, -0x1620
    ctx->pc = 0x473618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961632));
    // 0x47361c: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x47361cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473620: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x473620u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_473624:
    // 0x473624: 0x8e0500bc  lw          $a1, 0xBC($s0)
    ctx->pc = 0x473624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x473628: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x473628u;
    {
        const bool branch_taken_0x473628 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x47362Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x473628u;
            // 0x47362c: 0x26130070  addiu       $s3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x473628) {
            ctx->pc = 0x473648u;
            goto label_473648;
        }
    }
    ctx->pc = 0x473630u;
    // 0x473630: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x473630u;
    {
        const bool branch_taken_0x473630 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x473630) {
            ctx->pc = 0x473648u;
            goto label_473648;
        }
    }
    ctx->pc = 0x473638u;
    // 0x473638: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x473638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x47363c: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x47363Cu;
    SET_GPR_U32(ctx, 31, 0x473644u);
    ctx->pc = 0x473640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47363Cu;
            // 0x473640: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473644u; }
        if (ctx->pc != 0x473644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473644u; }
        if (ctx->pc != 0x473644u) { return; }
    }
    ctx->pc = 0x473644u;
label_473644:
    // 0x473644: 0xae60004c  sw          $zero, 0x4C($s3)
    ctx->pc = 0x473644u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
label_473648:
    // 0x473648: 0xae60004c  sw          $zero, 0x4C($s3)
    ctx->pc = 0x473648u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
    // 0x47364c: 0x8e650048  lw          $a1, 0x48($s3)
    ctx->pc = 0x47364cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x473650: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x473650u;
    {
        const bool branch_taken_0x473650 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x473650) {
            ctx->pc = 0x473670u;
            goto label_473670;
        }
    }
    ctx->pc = 0x473658u;
    // 0x473658: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x473658u;
    {
        const bool branch_taken_0x473658 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x473658) {
            ctx->pc = 0x473670u;
            goto label_473670;
        }
    }
    ctx->pc = 0x473660u;
    // 0x473660: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x473660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x473664: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x473664u;
    SET_GPR_U32(ctx, 31, 0x47366Cu);
    ctx->pc = 0x473668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x473664u;
            // 0x473668: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47366Cu; }
        if (ctx->pc != 0x47366Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47366Cu; }
        if (ctx->pc != 0x47366Cu) { return; }
    }
    ctx->pc = 0x47366Cu;
label_47366c:
    // 0x47366c: 0xae600048  sw          $zero, 0x48($s3)
    ctx->pc = 0x47366cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 0));
label_473670:
    // 0x473670: 0xae600048  sw          $zero, 0x48($s3)
    ctx->pc = 0x473670u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 0));
    // 0x473674: 0x8e650044  lw          $a1, 0x44($s3)
    ctx->pc = 0x473674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x473678: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x473678u;
    {
        const bool branch_taken_0x473678 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x473678) {
            ctx->pc = 0x473698u;
            goto label_473698;
        }
    }
    ctx->pc = 0x473680u;
    // 0x473680: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x473680u;
    {
        const bool branch_taken_0x473680 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x473680) {
            ctx->pc = 0x473698u;
            goto label_473698;
        }
    }
    ctx->pc = 0x473688u;
    // 0x473688: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x473688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x47368c: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x47368Cu;
    SET_GPR_U32(ctx, 31, 0x473694u);
    ctx->pc = 0x473690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47368Cu;
            // 0x473690: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473694u; }
        if (ctx->pc != 0x473694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473694u; }
        if (ctx->pc != 0x473694u) { return; }
    }
    ctx->pc = 0x473694u;
label_473694:
    // 0x473694: 0xae600044  sw          $zero, 0x44($s3)
    ctx->pc = 0x473694u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 0));
label_473698:
    // 0x473698: 0xae600044  sw          $zero, 0x44($s3)
    ctx->pc = 0x473698u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 0));
    // 0x47369c: 0xae600058  sw          $zero, 0x58($s3)
    ctx->pc = 0x47369cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 0));
    // 0x4736a0: 0xae600054  sw          $zero, 0x54($s3)
    ctx->pc = 0x4736a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 0));
    // 0x4736a4: 0xae600050  sw          $zero, 0x50($s3)
    ctx->pc = 0x4736a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 0));
    // 0x4736a8: 0x8e050098  lw          $a1, 0x98($s0)
    ctx->pc = 0x4736a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x4736ac: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x4736ACu;
    {
        const bool branch_taken_0x4736ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4736B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4736ACu;
            // 0x4736b0: 0x26120070  addiu       $s2, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4736ac) {
            ctx->pc = 0x4736D8u;
            goto label_4736d8;
        }
    }
    ctx->pc = 0x4736B4u;
    // 0x4736b4: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4736B4u;
    {
        const bool branch_taken_0x4736b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4736b4) {
            ctx->pc = 0x4736D0u;
            goto label_4736d0;
        }
    }
    ctx->pc = 0x4736BCu;
    // 0x4736bc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4736bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4736c0: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x4736C0u;
    SET_GPR_U32(ctx, 31, 0x4736C8u);
    ctx->pc = 0x4736C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4736C0u;
            // 0x4736c4: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4736C8u; }
        if (ctx->pc != 0x4736C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4736C8u; }
        if (ctx->pc != 0x4736C8u) { return; }
    }
    ctx->pc = 0x4736C8u;
label_4736c8:
    // 0x4736c8: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x4736c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
    // 0x4736cc: 0x0  nop
    ctx->pc = 0x4736ccu;
    // NOP
label_4736d0:
    // 0x4736d0: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x4736d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
    // 0x4736d4: 0x0  nop
    ctx->pc = 0x4736d4u;
    // NOP
label_4736d8:
    // 0x4736d8: 0x8e450020  lw          $a1, 0x20($s2)
    ctx->pc = 0x4736d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x4736dc: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x4736DCu;
    {
        const bool branch_taken_0x4736dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4736dc) {
            ctx->pc = 0x473708u;
            goto label_473708;
        }
    }
    ctx->pc = 0x4736E4u;
    // 0x4736e4: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4736E4u;
    {
        const bool branch_taken_0x4736e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4736e4) {
            ctx->pc = 0x473700u;
            goto label_473700;
        }
    }
    ctx->pc = 0x4736ECu;
    // 0x4736ec: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4736ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4736f0: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x4736F0u;
    SET_GPR_U32(ctx, 31, 0x4736F8u);
    ctx->pc = 0x4736F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4736F0u;
            // 0x4736f4: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4736F8u; }
        if (ctx->pc != 0x4736F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4736F8u; }
        if (ctx->pc != 0x4736F8u) { return; }
    }
    ctx->pc = 0x4736F8u;
label_4736f8:
    // 0x4736f8: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x4736f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
    // 0x4736fc: 0x0  nop
    ctx->pc = 0x4736fcu;
    // NOP
label_473700:
    // 0x473700: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x473700u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
    // 0x473704: 0x0  nop
    ctx->pc = 0x473704u;
    // NOP
label_473708:
    // 0x473708: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x473708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x47370c: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x47370Cu;
    {
        const bool branch_taken_0x47370c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x47370c) {
            ctx->pc = 0x473738u;
            goto label_473738;
        }
    }
    ctx->pc = 0x473714u;
    // 0x473714: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x473714u;
    {
        const bool branch_taken_0x473714 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x473714) {
            ctx->pc = 0x473730u;
            goto label_473730;
        }
    }
    ctx->pc = 0x47371Cu;
    // 0x47371c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47371cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x473720: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x473720u;
    SET_GPR_U32(ctx, 31, 0x473728u);
    ctx->pc = 0x473724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x473720u;
            // 0x473724: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473728u; }
        if (ctx->pc != 0x473728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473728u; }
        if (ctx->pc != 0x473728u) { return; }
    }
    ctx->pc = 0x473728u;
label_473728:
    // 0x473728: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x473728u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
    // 0x47372c: 0x0  nop
    ctx->pc = 0x47372cu;
    // NOP
label_473730:
    // 0x473730: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x473730u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
    // 0x473734: 0x0  nop
    ctx->pc = 0x473734u;
    // NOP
label_473738:
    // 0x473738: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x473738u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47373c: 0x0  nop
    ctx->pc = 0x47373cu;
    // NOP
label_473740:
    // 0x473740: 0x8e45002c  lw          $a1, 0x2C($s2)
    ctx->pc = 0x473740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x473744: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x473744u;
    {
        const bool branch_taken_0x473744 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x473744) {
            ctx->pc = 0x473770u;
            goto label_473770;
        }
    }
    ctx->pc = 0x47374Cu;
    // 0x47374c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x47374Cu;
    {
        const bool branch_taken_0x47374c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x47374c) {
            ctx->pc = 0x473768u;
            goto label_473768;
        }
    }
    ctx->pc = 0x473754u;
    // 0x473754: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x473754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x473758: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x473758u;
    SET_GPR_U32(ctx, 31, 0x473760u);
    ctx->pc = 0x47375Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x473758u;
            // 0x47375c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473760u; }
        if (ctx->pc != 0x473760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473760u; }
        if (ctx->pc != 0x473760u) { return; }
    }
    ctx->pc = 0x473760u;
label_473760:
    // 0x473760: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x473760u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
    // 0x473764: 0x0  nop
    ctx->pc = 0x473764u;
    // NOP
label_473768:
    // 0x473768: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x473768u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
    // 0x47376c: 0x0  nop
    ctx->pc = 0x47376cu;
    // NOP
label_473770:
    // 0x473770: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x473770u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x473774: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x473774u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x473778: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x473778u;
    {
        const bool branch_taken_0x473778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47377Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x473778u;
            // 0x47377c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x473778) {
            ctx->pc = 0x473740u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_473740;
        }
    }
    ctx->pc = 0x473780u;
    // 0x473780: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x473780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473784: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x473784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473788: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x473788u;
    SET_GPR_U32(ctx, 31, 0x473790u);
    ctx->pc = 0x47378Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x473788u;
            // 0x47378c: 0x2406005c  addiu       $a2, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473790u; }
        if (ctx->pc != 0x473790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473790u; }
        if (ctx->pc != 0x473790u) { return; }
    }
    ctx->pc = 0x473790u;
label_473790:
    // 0x473790: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x473790u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x473794: 0x2e820004  sltiu       $v0, $s4, 0x4
    ctx->pc = 0x473794u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x473798: 0x1440ffa2  bnez        $v0, . + 4 + (-0x5E << 2)
    ctx->pc = 0x473798u;
    {
        const bool branch_taken_0x473798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47379Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x473798u;
            // 0x47379c: 0x2610005c  addiu       $s0, $s0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x473798) {
            ctx->pc = 0x473624u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_473624;
        }
    }
    ctx->pc = 0x4737A0u;
    // 0x4737a0: 0x52a00008  beql        $s5, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4737A0u;
    {
        const bool branch_taken_0x4737a0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x4737a0) {
            ctx->pc = 0x4737A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4737A0u;
            // 0x4737a4: 0x16143c  dsll32      $v0, $s6, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4737C4u;
            goto label_4737c4;
        }
    }
    ctx->pc = 0x4737A8u;
    // 0x4737a8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4737a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4737ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4737acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4737b0: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x4737b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
    // 0x4737b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4737b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4737b8: 0xc057a68  jal         func_15E9A0
    ctx->pc = 0x4737B8u;
    SET_GPR_U32(ctx, 31, 0x4737C0u);
    ctx->pc = 0x4737BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4737B8u;
            // 0x4737bc: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4737C0u; }
        if (ctx->pc != 0x4737C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4737C0u; }
        if (ctx->pc != 0x4737C0u) { return; }
    }
    ctx->pc = 0x4737C0u;
label_4737c0:
    // 0x4737c0: 0x16143c  dsll32      $v0, $s6, 16
    ctx->pc = 0x4737c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 16));
label_4737c4:
    // 0x4737c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4737c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4737c8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4737C8u;
    {
        const bool branch_taken_0x4737c8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4737c8) {
            ctx->pc = 0x4737CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4737C8u;
            // 0x4737cc: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4737DCu;
            goto label_4737dc;
        }
    }
    ctx->pc = 0x4737D0u;
    // 0x4737d0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4737D0u;
    SET_GPR_U32(ctx, 31, 0x4737D8u);
    ctx->pc = 0x4737D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4737D0u;
            // 0x4737d4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4737D8u; }
        if (ctx->pc != 0x4737D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4737D8u; }
        if (ctx->pc != 0x4737D8u) { return; }
    }
    ctx->pc = 0x4737D8u;
label_4737d8:
    // 0x4737d8: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x4737d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4737dc:
    // 0x4737dc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x4737dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4737e0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4737e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4737e4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4737e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4737e8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4737e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4737ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4737ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4737f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4737f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4737f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4737f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4737f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4737f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4737fc: 0x3e00008  jr          $ra
    ctx->pc = 0x4737FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x473800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4737FCu;
            // 0x473800: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x473804u;
    // 0x473804: 0x0  nop
    ctx->pc = 0x473804u;
    // NOP
    // 0x473808: 0x0  nop
    ctx->pc = 0x473808u;
    // NOP
    // 0x47380c: 0x0  nop
    ctx->pc = 0x47380cu;
    // NOP
label_473810:
    // 0x473810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x473810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x473814: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x473814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x473818: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x473818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x47381c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47381cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x473820: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x473820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473824: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x473824u;
    {
        const bool branch_taken_0x473824 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x473828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x473824u;
            // 0x473828: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x473824) {
            ctx->pc = 0x473880u;
            goto label_473880;
        }
    }
    ctx->pc = 0x47382Cu;
    // 0x47382c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x47382cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x473830: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x473830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x473834: 0x2463ea10  addiu       $v1, $v1, -0x15F0
    ctx->pc = 0x473834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961680));
    // 0x473838: 0x2442ea48  addiu       $v0, $v0, -0x15B8
    ctx->pc = 0x473838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961736));
    // 0x47383c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x47383cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x473840: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x473840u;
    {
        const bool branch_taken_0x473840 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x473844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x473840u;
            // 0x473844: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x473840) {
            ctx->pc = 0x473868u;
            goto label_473868;
        }
    }
    ctx->pc = 0x473848u;
    // 0x473848: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x473848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x47384c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x47384cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x473850: 0x2463ead0  addiu       $v1, $v1, -0x1530
    ctx->pc = 0x473850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961872));
    // 0x473854: 0x2442eb08  addiu       $v0, $v0, -0x14F8
    ctx->pc = 0x473854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961928));
    // 0x473858: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x473858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x47385c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x47385cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473860: 0xc11ce28  jal         func_4738A0
    ctx->pc = 0x473860u;
    SET_GPR_U32(ctx, 31, 0x473868u);
    ctx->pc = 0x473864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x473860u;
            // 0x473864: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4738A0u;
    if (runtime->hasFunction(0x4738A0u)) {
        auto targetFn = runtime->lookupFunction(0x4738A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473868u; }
        if (ctx->pc != 0x473868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004738A0_0x4738a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473868u; }
        if (ctx->pc != 0x473868u) { return; }
    }
    ctx->pc = 0x473868u;
label_473868:
    // 0x473868: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x473868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x47386c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x47386cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x473870: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x473870u;
    {
        const bool branch_taken_0x473870 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x473870) {
            ctx->pc = 0x473874u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x473870u;
            // 0x473874: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x473884u;
            goto label_473884;
        }
    }
    ctx->pc = 0x473878u;
    // 0x473878: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x473878u;
    SET_GPR_U32(ctx, 31, 0x473880u);
    ctx->pc = 0x47387Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x473878u;
            // 0x47387c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473880u; }
        if (ctx->pc != 0x473880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473880u; }
        if (ctx->pc != 0x473880u) { return; }
    }
    ctx->pc = 0x473880u;
label_473880:
    // 0x473880: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x473880u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_473884:
    // 0x473884: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x473884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x473888: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x473888u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47388c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47388cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x473890: 0x3e00008  jr          $ra
    ctx->pc = 0x473890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x473894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x473890u;
            // 0x473894: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x473898u;
    // 0x473898: 0x0  nop
    ctx->pc = 0x473898u;
    // NOP
    // 0x47389c: 0x0  nop
    ctx->pc = 0x47389cu;
    // NOP
}
