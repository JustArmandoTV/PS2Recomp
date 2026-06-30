#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014D780
// Address: 0x14d780 - 0x14d960
void sub_0014D780_0x14d780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D780_0x14d780");
#endif

    ctx->pc = 0x14d780u;

    // 0x14d780: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d784: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x14d784u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x14d788: 0x8c4757a0  lw          $a3, 0x57A0($v0)
    ctx->pc = 0x14d788u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22432)));
    // 0x14d78c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14d78cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14d790: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d794: 0xacc757e0  sw          $a3, 0x57E0($a2)
    ctx->pc = 0x14d794u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 22496), GPR_U32(ctx, 7));
    // 0x14d798: 0x8c4857a4  lw          $t0, 0x57A4($v0)
    ctx->pc = 0x14d798u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22436)));
    // 0x14d79c: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x14d79cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x14d7a0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d7a4: 0xac6857e4  sw          $t0, 0x57E4($v1)
    ctx->pc = 0x14d7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22500), GPR_U32(ctx, 8));
    // 0x14d7a8: 0x8c4757a8  lw          $a3, 0x57A8($v0)
    ctx->pc = 0x14d7a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22440)));
    // 0x14d7ac: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14d7acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14d7b0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d7b4: 0xacc757e8  sw          $a3, 0x57E8($a2)
    ctx->pc = 0x14d7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 22504), GPR_U32(ctx, 7));
    // 0x14d7b8: 0x8c4857ac  lw          $t0, 0x57AC($v0)
    ctx->pc = 0x14d7b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22444)));
    // 0x14d7bc: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x14d7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x14d7c0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d7c4: 0xac6857ec  sw          $t0, 0x57EC($v1)
    ctx->pc = 0x14d7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22508), GPR_U32(ctx, 8));
    // 0x14d7c8: 0x8c4757b4  lw          $a3, 0x57B4($v0)
    ctx->pc = 0x14d7c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22452)));
    // 0x14d7cc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14d7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14d7d0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d7d4: 0xacc757f4  sw          $a3, 0x57F4($a2)
    ctx->pc = 0x14d7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 22516), GPR_U32(ctx, 7));
    // 0x14d7d8: 0x8c4857c4  lw          $t0, 0x57C4($v0)
    ctx->pc = 0x14d7d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22468)));
    // 0x14d7dc: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x14d7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x14d7e0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d7e4: 0xac685804  sw          $t0, 0x5804($v1)
    ctx->pc = 0x14d7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22532), GPR_U32(ctx, 8));
    // 0x14d7e8: 0x8c4757c0  lw          $a3, 0x57C0($v0)
    ctx->pc = 0x14d7e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22464)));
    // 0x14d7ec: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14d7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14d7f0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d7f4: 0xacc75800  sw          $a3, 0x5800($a2)
    ctx->pc = 0x14d7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 22528), GPR_U32(ctx, 7));
    // 0x14d7f8: 0x8c4857c8  lw          $t0, 0x57C8($v0)
    ctx->pc = 0x14d7f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22472)));
    // 0x14d7fc: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x14d7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x14d800: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d804: 0xac685808  sw          $t0, 0x5808($v1)
    ctx->pc = 0x14d804u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22536), GPR_U32(ctx, 8));
    // 0x14d808: 0x8c4757d4  lw          $a3, 0x57D4($v0)
    ctx->pc = 0x14d808u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22484)));
    // 0x14d80c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14d80cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14d810: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d814: 0xacc75814  sw          $a3, 0x5814($a2)
    ctx->pc = 0x14d814u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 22548), GPR_U32(ctx, 7));
    // 0x14d818: 0x8c4857b0  lw          $t0, 0x57B0($v0)
    ctx->pc = 0x14d818u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22448)));
    // 0x14d81c: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x14d81cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
    // 0x14d820: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x14d820u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x14d824: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d828: 0xac6857f0  sw          $t0, 0x57F0($v1)
    ctx->pc = 0x14d828u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22512), GPR_U32(ctx, 8));
    // 0x14d82c: 0x8c4957cc  lw          $t1, 0x57CC($v0)
    ctx->pc = 0x14d82cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22476)));
    // 0x14d830: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14d830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14d834: 0xac6057f8  sw          $zero, 0x57F8($v1)
    ctx->pc = 0x14d834u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22520), GPR_U32(ctx, 0));
    // 0x14d838: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x14d838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x14d83c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d840: 0xace9580c  sw          $t1, 0x580C($a3)
    ctx->pc = 0x14d840u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 22540), GPR_U32(ctx, 9));
    // 0x14d844: 0x8c4857d0  lw          $t0, 0x57D0($v0)
    ctx->pc = 0x14d844u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22480)));
    // 0x14d848: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d84c: 0xacc85810  sw          $t0, 0x5810($a2)
    ctx->pc = 0x14d84cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 22544), GPR_U32(ctx, 8));
    // 0x14d850: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D850u;
    {
        const bool branch_taken_0x14d850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D850u;
            // 0x14d854: 0xac405824  sw          $zero, 0x5824($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22564), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d850) {
            ctx->pc = 0x14D860u;
            goto label_14d860;
        }
    }
    ctx->pc = 0x14D858u;
    // 0x14d858: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x14D858u;
    {
        const bool branch_taken_0x14d858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D858u;
            // 0x14d85c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d858) {
            ctx->pc = 0x14D950u;
            goto label_14d950;
        }
    }
    ctx->pc = 0x14D860u;
label_14d860:
    // 0x14d860: 0x30820400  andi        $v0, $a0, 0x400
    ctx->pc = 0x14d860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
    // 0x14d864: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x14D864u;
    {
        const bool branch_taken_0x14d864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d864) {
            ctx->pc = 0x14D868u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14D864u;
            // 0x14d868: 0x30820022  andi        $v0, $a0, 0x22 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)34);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14D8B0u;
            goto label_14d8b0;
        }
    }
    ctx->pc = 0x14D86Cu;
    // 0x14d86c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14d86cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d870: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d874: 0xac465814  sw          $a2, 0x5814($v0)
    ctx->pc = 0x14d874u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22548), GPR_U32(ctx, 6));
    // 0x14d878: 0x8f828358  lw          $v0, -0x7CA8($gp)
    ctx->pc = 0x14d878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935384)));
    // 0x14d87c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14D87Cu;
    {
        const bool branch_taken_0x14d87c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d87c) {
            ctx->pc = 0x14D8ACu;
            goto label_14d8ac;
        }
    }
    ctx->pc = 0x14D884u;
    // 0x14d884: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d888: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14d888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14d88c: 0xac465808  sw          $a2, 0x5808($v0)
    ctx->pc = 0x14d88cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22536), GPR_U32(ctx, 6));
    // 0x14d890: 0x93828357  lbu         $v0, -0x7CA9($gp)
    ctx->pc = 0x14d890u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935383)));
    // 0x14d894: 0xac665804  sw          $a2, 0x5804($v1)
    ctx->pc = 0x14d894u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22532), GPR_U32(ctx, 6));
    // 0x14d898: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x14d898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14d89c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D89Cu;
    {
        const bool branch_taken_0x14d89c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x14d89c) {
            ctx->pc = 0x14D8ACu;
            goto label_14d8ac;
        }
    }
    ctx->pc = 0x14D8A4u;
    // 0x14d8a4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d8a8: 0xac465810  sw          $a2, 0x5810($v0)
    ctx->pc = 0x14d8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22544), GPR_U32(ctx, 6));
label_14d8ac:
    // 0x14d8ac: 0x30820022  andi        $v0, $a0, 0x22
    ctx->pc = 0x14d8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)34);
label_14d8b0:
    // 0x14d8b0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14D8B0u;
    {
        const bool branch_taken_0x14d8b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d8b0) {
            ctx->pc = 0x14D8B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14D8B0u;
            // 0x14d8b4: 0x30a20002  andi        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14D8C8u;
            goto label_14d8c8;
        }
    }
    ctx->pc = 0x14D8B8u;
    // 0x14d8b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14d8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d8bc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d8c0: 0xac4357f0  sw          $v1, 0x57F0($v0)
    ctx->pc = 0x14d8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22512), GPR_U32(ctx, 3));
    // 0x14d8c4: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x14d8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_14d8c8:
    // 0x14d8c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14D8C8u;
    {
        const bool branch_taken_0x14d8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d8c8) {
            ctx->pc = 0x14D8DCu;
            goto label_14d8dc;
        }
    }
    ctx->pc = 0x14D8D0u;
    // 0x14d8d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14d8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d8d4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d8d8: 0xac435810  sw          $v1, 0x5810($v0)
    ctx->pc = 0x14d8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22544), GPR_U32(ctx, 3));
label_14d8dc:
    // 0x14d8dc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d8e0: 0x8c445814  lw          $a0, 0x5814($v0)
    ctx->pc = 0x14d8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22548)));
    // 0x14d8e4: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x14d8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x14d8e8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x14D8E8u;
    {
        const bool branch_taken_0x14d8e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d8e8) {
            ctx->pc = 0x14D8ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14D8E8u;
            // 0x14d8ec: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14D908u;
            goto label_14d908;
        }
    }
    ctx->pc = 0x14D8F0u;
    // 0x14d8f0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14d8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14d8f4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d8f8: 0x8c635824  lw          $v1, 0x5824($v1)
    ctx->pc = 0x14d8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22564)));
    // 0x14d8fc: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x14d8fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x14d900: 0xac435824  sw          $v1, 0x5824($v0)
    ctx->pc = 0x14d900u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22564), GPR_U32(ctx, 3));
    // 0x14d904: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x14d904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_14d908:
    // 0x14d908: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14D908u;
    {
        const bool branch_taken_0x14d908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d908) {
            ctx->pc = 0x14D924u;
            goto label_14d924;
        }
    }
    ctx->pc = 0x14D910u;
    // 0x14d910: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14d910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14d914: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d918: 0x8c635824  lw          $v1, 0x5824($v1)
    ctx->pc = 0x14d918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22564)));
    // 0x14d91c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x14d91cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x14d920: 0xac435824  sw          $v1, 0x5824($v0)
    ctx->pc = 0x14d920u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22564), GPR_U32(ctx, 3));
label_14d924:
    // 0x14d924: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d928: 0x8c425810  lw          $v0, 0x5810($v0)
    ctx->pc = 0x14d928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22544)));
    // 0x14d92c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14D92Cu;
    {
        const bool branch_taken_0x14d92c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d92c) {
            ctx->pc = 0x14D944u;
            goto label_14d944;
        }
    }
    ctx->pc = 0x14D934u;
    // 0x14d934: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x14d934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x14d938: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d93c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14D93Cu;
    {
        const bool branch_taken_0x14d93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D93Cu;
            // 0x14d940: 0xac435820  sw          $v1, 0x5820($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22560), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d93c) {
            ctx->pc = 0x14D94Cu;
            goto label_14d94c;
        }
    }
    ctx->pc = 0x14D944u;
label_14d944:
    // 0x14d944: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d948: 0xac405820  sw          $zero, 0x5820($v0)
    ctx->pc = 0x14d948u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22560), GPR_U32(ctx, 0));
label_14d94c:
    // 0x14d94c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14d94cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14d950:
    // 0x14d950: 0x3e00008  jr          $ra
    ctx->pc = 0x14D950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14D958u;
    // 0x14d958: 0x0  nop
    ctx->pc = 0x14d958u;
    // NOP
    // 0x14d95c: 0x0  nop
    ctx->pc = 0x14d95cu;
    // NOP
}
