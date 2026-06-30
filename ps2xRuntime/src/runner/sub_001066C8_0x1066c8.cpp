#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001066C8
// Address: 0x1066c8 - 0x106848
void sub_001066C8_0x1066c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001066C8_0x1066c8");
#endif

    switch (ctx->pc) {
        case 0x106758u: goto label_106758;
        case 0x1067b4u: goto label_1067b4;
        case 0x1067d8u: goto label_1067d8;
        case 0x1067ecu: goto label_1067ec;
        default: break;
    }

    ctx->pc = 0x1066c8u;

    // 0x1066c8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1066c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1066cc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1066ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1066d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1066d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1066d4: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1066d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1066d8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1066d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1066dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1066dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066e0: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x1066e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x1066e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1066e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066e8: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x1066e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x1066ec: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1066ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1066f0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1066f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1066f4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1066f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1066f8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1066f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1066fc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1066fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x106700: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x106700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x106704: 0xdc510000  ld          $s1, 0x0($v0)
    ctx->pc = 0x106704u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106708: 0x6230042  bgezl       $s1, . + 4 + (0x42 << 2)
    ctx->pc = 0x106708u;
    {
        const bool branch_taken_0x106708 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x106708) {
            ctx->pc = 0x10670Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106708u;
            // 0x10670c: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106814u;
            goto label_106814;
        }
    }
    ctx->pc = 0x106710u;
    // 0x106710: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x106710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x106714: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x106714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x106718: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x106718u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x10671c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x10671cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x106720: 0x5460003c  bnel        $v1, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x106720u;
    {
        const bool branch_taken_0x106720 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x106720) {
            ctx->pc = 0x106724u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106720u;
            // 0x106724: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106814u;
            goto label_106814;
        }
    }
    ctx->pc = 0x106728u;
    // 0x106728: 0x3c151000  lui         $s5, 0x1000
    ctx->pc = 0x106728u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)4096 << 16));
    // 0x10672c: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x10672cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x106730: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x106730u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x106734: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x106734u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    // 0x106738: 0x36b52020  ori         $s5, $s5, 0x2020
    ctx->pc = 0x106738u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)8224);
    // 0x10673c: 0x3c1e2000  lui         $fp, 0x2000
    ctx->pc = 0x10673cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)8192 << 16));
    // 0x106740: 0x3c173000  lui         $s7, 0x3000
    ctx->pc = 0x106740u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)12288 << 16));
    // 0x106744: 0x3c164000  lui         $s6, 0x4000
    ctx->pc = 0x106744u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)16384 << 16));
    // 0x106748: 0x3694b420  ori         $s4, $s4, 0xB420
    ctx->pc = 0x106748u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)46112);
    // 0x10674c: 0x36732000  ori         $s3, $s3, 0x2000
    ctx->pc = 0x10674cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)8192);
    // 0x106750: 0x36522010  ori         $s2, $s2, 0x2010
    ctx->pc = 0x106750u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)8208);
    // 0x106754: 0x0  nop
    ctx->pc = 0x106754u;
    // NOP
label_106758:
    // 0x106758: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x106758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x10675c: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x10675cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x106760: 0x8e05082c  lw          $a1, 0x82C($s0)
    ctx->pc = 0x106760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2092)));
    // 0x106764: 0x3083ff00  andi        $v1, $a0, 0xFF00
    ctx->pc = 0x106764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x106768: 0x871024  and         $v0, $a0, $a3
    ctx->pc = 0x106768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x10676c: 0x21242  srl         $v0, $v0, 9
    ctx->pc = 0x10676cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 9));
    // 0x106770: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x106770u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x106774: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x106774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x106778: 0x3084007f  andi        $a0, $a0, 0x7F
    ctx->pc = 0x106778u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x10677c: 0x10be0005  beq         $a1, $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x10677Cu;
    {
        const bool branch_taken_0x10677c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 30));
        ctx->pc = 0x106780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10677Cu;
            // 0x106780: 0x641023  subu        $v0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10677c) {
            ctx->pc = 0x106794u;
            goto label_106794;
        }
    }
    ctx->pc = 0x106784u;
    // 0x106784: 0x50b70004  beql        $a1, $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x106784u;
    {
        const bool branch_taken_0x106784 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 23));
        if (branch_taken_0x106784) {
            ctx->pc = 0x106788u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106784u;
            // 0x106788: 0x2c420020  sltiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x106798u;
            goto label_106798;
        }
    }
    ctx->pc = 0x10678Cu;
    // 0x10678c: 0x54b6000d  bnel        $a1, $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x10678Cu;
    {
        const bool branch_taken_0x10678c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 22));
        if (branch_taken_0x10678c) {
            ctx->pc = 0x106790u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10678Cu;
            // 0x106790: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1067C4u;
            goto label_1067c4;
        }
    }
    ctx->pc = 0x106794u;
label_106794:
    // 0x106794: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x106794u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_106798:
    // 0x106798: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x106798u;
    {
        const bool branch_taken_0x106798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10679Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106798u;
            // 0x10679c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106798) {
            ctx->pc = 0x1067C4u;
            goto label_1067c4;
        }
    }
    ctx->pc = 0x1067A0u;
    // 0x1067a0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1067a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1067a4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1067A4u;
    {
        const bool branch_taken_0x1067a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1067A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1067A4u;
            // 0x1067a8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1067a4) {
            ctx->pc = 0x1067C4u;
            goto label_1067c4;
        }
    }
    ctx->pc = 0x1067ACu;
    // 0x1067ac: 0xc0427de  jal         func_109F78
    ctx->pc = 0x1067ACu;
    SET_GPR_U32(ctx, 31, 0x1067B4u);
    ctx->pc = 0x1067B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1067ACu;
            // 0x1067b0: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109F78u;
    if (runtime->hasFunction(0x109F78u)) {
        auto targetFn = runtime->lookupFunction(0x109F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1067B4u; }
        if (ctx->pc != 0x1067B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109F78_0x109f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1067B4u; }
        if (ctx->pc != 0x1067B4u) { return; }
    }
    ctx->pc = 0x1067B4u;
label_1067b4:
    // 0x1067b4: 0x8e030878  lw          $v1, 0x878($s0)
    ctx->pc = 0x1067b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x1067b8: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1067B8u;
    {
        const bool branch_taken_0x1067b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1067BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1067B8u;
            // 0x1067bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1067b8) {
            ctx->pc = 0x1067E4u;
            goto label_1067e4;
        }
    }
    ctx->pc = 0x1067C0u;
    // 0x1067c0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1067c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1067c4:
    // 0x1067c4: 0x284201f5  slti        $v0, $v0, 0x1F5
    ctx->pc = 0x1067c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)501) ? 1 : 0);
    // 0x1067c8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1067C8u;
    {
        const bool branch_taken_0x1067c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1067CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1067C8u;
            // 0x1067cc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1067c8) {
            ctx->pc = 0x1067F4u;
            goto label_1067f4;
        }
    }
    ctx->pc = 0x1067D0u;
    // 0x1067d0: 0xc0427de  jal         func_109F78
    ctx->pc = 0x1067D0u;
    SET_GPR_U32(ctx, 31, 0x1067D8u);
    ctx->pc = 0x1067D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1067D0u;
            // 0x1067d4: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109F78u;
    if (runtime->hasFunction(0x109F78u)) {
        auto targetFn = runtime->lookupFunction(0x109F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1067D8u; }
        if (ctx->pc != 0x1067D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109F78_0x109f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1067D8u; }
        if (ctx->pc != 0x1067D8u) { return; }
    }
    ctx->pc = 0x1067D8u;
label_1067d8:
    // 0x1067d8: 0x8e030878  lw          $v1, 0x878($s0)
    ctx->pc = 0x1067d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x1067dc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1067DCu;
    {
        const bool branch_taken_0x1067dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1067E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1067DCu;
            // 0x1067e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1067dc) {
            ctx->pc = 0x1067F4u;
            goto label_1067f4;
        }
    }
    ctx->pc = 0x1067E4u;
label_1067e4:
    // 0x1067e4: 0xc042dbc  jal         func_10B6F0
    ctx->pc = 0x1067E4u;
    SET_GPR_U32(ctx, 31, 0x1067ECu);
    ctx->pc = 0x10B6F0u;
    if (runtime->hasFunction(0x10B6F0u)) {
        auto targetFn = runtime->lookupFunction(0x10B6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1067ECu; }
        if (ctx->pc != 0x1067ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B6F0_0x10b6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1067ECu; }
        if (ctx->pc != 0x1067ECu) { return; }
    }
    ctx->pc = 0x1067ECu;
label_1067ec:
    // 0x1067ec: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1067ECu;
    {
        const bool branch_taken_0x1067ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1067F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1067ECu;
            // 0x1067f0: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1067ec) {
            ctx->pc = 0x106814u;
            goto label_106814;
        }
    }
    ctx->pc = 0x1067F4u;
label_1067f4:
    // 0x1067f4: 0xde710000  ld          $s1, 0x0($s3)
    ctx->pc = 0x1067f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1067f8: 0x6230006  bgezl       $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1067F8u;
    {
        const bool branch_taken_0x1067f8 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1067f8) {
            ctx->pc = 0x1067FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1067F8u;
            // 0x1067fc: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106814u;
            goto label_106814;
        }
    }
    ctx->pc = 0x106800u;
    // 0x106800: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x106800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x106804: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x106804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x106808: 0x1040ffd3  beqz        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x106808u;
    {
        const bool branch_taken_0x106808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x106808) {
            ctx->pc = 0x106758u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_106758;
        }
    }
    ctx->pc = 0x106810u;
    // 0x106810: 0xae00082c  sw          $zero, 0x82C($s0)
    ctx->pc = 0x106810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
label_106814:
    // 0x106814: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x106814u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106818: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x106818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10681c: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x10681cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x106820: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x106820u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x106824: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x106824u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x106828: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x106828u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10682c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10682cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x106830: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x106830u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x106834: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x106834u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106838: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x106838u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10683c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10683cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106840: 0x3e00008  jr          $ra
    ctx->pc = 0x106840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106840u;
            // 0x106844: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x106848u;
}
