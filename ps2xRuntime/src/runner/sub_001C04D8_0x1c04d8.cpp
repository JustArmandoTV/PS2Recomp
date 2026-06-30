#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C04D8
// Address: 0x1c04d8 - 0x1c0600
void sub_001C04D8_0x1c04d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C04D8_0x1c04d8");
#endif

    ctx->pc = 0x1c04d8u;

    // 0x1c04d8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c04d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1c04dc: 0x2442a4c0  addiu       $v0, $v0, -0x5B40
    ctx->pc = 0x1c04dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943936));
    // 0x1c04e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c04e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c04e4: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C04E4u;
    {
        const bool branch_taken_0x1c04e4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1C04E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C04E4u;
            // 0x1c04e8: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c04e4) {
            ctx->pc = 0x1C04FCu;
            goto label_1c04fc;
        }
    }
    ctx->pc = 0x1C04ECu;
    // 0x1c04ec: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c04ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1c04f0: 0x8c46a4c4  lw          $a2, -0x5B3C($v0)
    ctx->pc = 0x1c04f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943940)));
    // 0x1c04f4: 0x14c30004  bne         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C04F4u;
    {
        const bool branch_taken_0x1c04f4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C04F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C04F4u;
            // 0x1c04f8: 0x3c09006e  lui         $t1, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)110 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c04f4) {
            ctx->pc = 0x1C0508u;
            goto label_1c0508;
        }
    }
    ctx->pc = 0x1C04FCu;
label_1c04fc:
    // 0x1c04fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C04FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C04FCu;
            // 0x1c0500: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C0504u;
    // 0x1c0504: 0x0  nop
    ctx->pc = 0x1c0504u;
    // NOP
label_1c0508:
    // 0x1c0508: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c0508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c050c: 0x25231edc  addiu       $v1, $t1, 0x1EDC
    ctx->pc = 0x1c050cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 7900));
    // 0x1c0510: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c0510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c0514: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c0514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c0518: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1c0518u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1c051c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1c051cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c0520: 0x1485001f  bne         $a0, $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C0520u;
    {
        const bool branch_taken_0x1c0520 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x1C0524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0520u;
            // 0x1c0524: 0x61880  sll         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0520) {
            ctx->pc = 0x1C05A0u;
            goto label_1c05a0;
        }
    }
    ctx->pc = 0x1C0528u;
    // 0x1c0528: 0x3c02006e  lui         $v0, 0x6E
    ctx->pc = 0x1c0528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
    // 0x1c052c: 0x3c03006e  lui         $v1, 0x6E
    ctx->pc = 0x1c052cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)110 << 16));
    // 0x1c0530: 0x24471eb8  addiu       $a3, $v0, 0x1EB8
    ctx->pc = 0x1c0530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 7864));
    // 0x1c0534: 0x3c02006e  lui         $v0, 0x6E
    ctx->pc = 0x1c0534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
    // 0x1c0538: 0xdce50000  ld          $a1, 0x0($a3)
    ctx->pc = 0x1c0538u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1c053c: 0x24631ec8  addiu       $v1, $v1, 0x1EC8
    ctx->pc = 0x1c053cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7880));
    // 0x1c0540: 0x24481ed8  addiu       $t0, $v0, 0x1ED8
    ctx->pc = 0x1c0540u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 7896));
    // 0x1c0544: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x1c0544u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1c0548: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x1c0548u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x1c054c: 0xdce20008  ld          $v0, 0x8($a3)
    ctx->pc = 0x1c054cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1c0550: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c0550u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c0554: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1c0554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1c0558: 0x8cc6b810  lw          $a2, -0x47F0($a2)
    ctx->pc = 0x1c0558u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294948880)));
    // 0x1c055c: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x1c055cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x1c0560: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x1c0560u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x1c0564: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1c0564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c0568: 0x94e20008  lhu         $v0, 0x8($a3)
    ctx->pc = 0x1c0568u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1c056c: 0x3086ffff  andi        $a2, $a0, 0xFFFF
    ctx->pc = 0x1c056cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1c0570: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x1c0570u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c0574: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0574u;
    {
        const bool branch_taken_0x1c0574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0574) {
            ctx->pc = 0x1C058Cu;
            goto label_1c058c;
        }
    }
    ctx->pc = 0x1C057Cu;
    // 0x1c057c: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x1c057cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1c0580: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1c0580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1c0584: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1c0584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1c0588: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x1c0588u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
label_1c058c:
    // 0x1c058c: 0xa4e60008  sh          $a2, 0x8($a3)
    ctx->pc = 0x1c058cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 8), (uint16_t)GPR_U32(ctx, 6));
    // 0x1c0590: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x1c0590u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1c0594: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x1c0594u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
    // 0x1c0598: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1C0598u;
    {
        const bool branch_taken_0x1c0598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C059Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0598u;
            // 0x1c059c: 0xc2282d  daddu       $a1, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0598) {
            ctx->pc = 0x1C05E4u;
            goto label_1c05e4;
        }
    }
    ctx->pc = 0x1C05A0u;
label_1c05a0:
    // 0x1c05a0: 0x3c02006e  lui         $v0, 0x6E
    ctx->pc = 0x1c05a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
    // 0x1c05a4: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c05a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c05a8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1c05a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c05ac: 0x8c84b810  lw          $a0, -0x47F0($a0)
    ctx->pc = 0x1c05acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948880)));
    // 0x1c05b0: 0x24421ed8  addiu       $v0, $v0, 0x1ED8
    ctx->pc = 0x1c05b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7896));
    // 0x1c05b4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c05b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c05b8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1c05b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c05bc: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x1c05bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1c05c0: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x1c05c0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c05c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c05c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c05c8: 0xc4282d  daddu       $a1, $a2, $a0
    ctx->pc = 0x1c05c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 4));
    // 0x1c05cc: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x1c05ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c05d0: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x1c05d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c05d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C05D4u;
    {
        const bool branch_taken_0x1c05d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C05D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C05D4u;
            // 0x1c05d8: 0x25241edc  addiu       $a0, $t1, 0x1EDC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 7900));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c05d4) {
            ctx->pc = 0x1C05E8u;
            goto label_1c05e8;
        }
    }
    ctx->pc = 0x1C05DCu;
    // 0x1c05dc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1c05dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1c05e0: 0xa2282d  daddu       $a1, $a1, $v0
    ctx->pc = 0x1c05e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 2));
label_1c05e4:
    // 0x1c05e4: 0x25241edc  addiu       $a0, $t1, 0x1EDC
    ctx->pc = 0x1c05e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 7900));
label_1c05e8:
    // 0x1c05e8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1c05e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c05ec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c05ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c05f0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c05f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c05f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C05F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C05F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C05F4u;
            // 0x1c05f8: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C05FCu;
    // 0x1c05fc: 0x0  nop
    ctx->pc = 0x1c05fcu;
    // NOP
}
