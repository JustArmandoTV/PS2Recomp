#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CA490
// Address: 0x2ca490 - 0x2ca6e0
void sub_002CA490_0x2ca490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA490_0x2ca490");
#endif

    switch (ctx->pc) {
        case 0x2ca4c0u: goto label_2ca4c0;
        case 0x2ca514u: goto label_2ca514;
        case 0x2ca5a8u: goto label_2ca5a8;
        case 0x2ca5c8u: goto label_2ca5c8;
        case 0x2ca5dcu: goto label_2ca5dc;
        case 0x2ca5e8u: goto label_2ca5e8;
        case 0x2ca5ecu: goto label_2ca5ec;
        case 0x2ca610u: goto label_2ca610;
        case 0x2ca690u: goto label_2ca690;
        case 0x2ca698u: goto label_2ca698;
        default: break;
    }

    ctx->pc = 0x2ca490u;

    // 0x2ca490: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ca490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2ca494: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2ca494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ca498: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2ca498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2ca49c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ca49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ca4a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ca4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ca4a4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2ca4a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca4a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ca4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ca4ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ca4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ca4b0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ca4b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca4b4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2ca4b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca4b8: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2CA4B8u;
    SET_GPR_U32(ctx, 31, 0x2CA4C0u);
    ctx->pc = 0x2CA4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA4B8u;
            // 0x2ca4bc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA4C0u; }
        if (ctx->pc != 0x2CA4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA4C0u; }
        if (ctx->pc != 0x2CA4C0u) { return; }
    }
    ctx->pc = 0x2CA4C0u;
label_2ca4c0:
    // 0x2ca4c0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ca4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2ca4c4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ca4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2ca4c8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2ca4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x2ca4cc: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2ca4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x2ca4d0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2ca4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2ca4d4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x2ca4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2ca4d8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2ca4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2ca4dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2ca4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ca4e0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x2ca4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x2ca4e4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ca4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ca4e8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x2ca4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x2ca4ec: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2ca4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ca4f0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x2ca4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x2ca4f4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x2ca4f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2ca4f8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x2ca4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x2ca4fc: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x2ca4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x2ca500: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x2ca500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x2ca504: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2ca504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2ca508: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x2ca508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2ca50c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x2CA50Cu;
    SET_GPR_U32(ctx, 31, 0x2CA514u);
    ctx->pc = 0x2CA510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA50Cu;
            // 0x2ca510: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA514u; }
        if (ctx->pc != 0x2CA514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA514u; }
        if (ctx->pc != 0x2CA514u) { return; }
    }
    ctx->pc = 0x2CA514u;
label_2ca514:
    // 0x2ca514: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ca514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2ca518: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x2ca518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x2ca51c: 0x246303a0  addiu       $v1, $v1, 0x3A0
    ctx->pc = 0x2ca51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 928));
    // 0x2ca520: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x2ca520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x2ca524: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x2ca524u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x2ca528: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ca528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ca52c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ca52cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2ca530: 0xac440d90  sw          $a0, 0xD90($v0)
    ctx->pc = 0x2ca530u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3472), GPR_U32(ctx, 4));
    // 0x2ca534: 0x246303b0  addiu       $v1, $v1, 0x3B0
    ctx->pc = 0x2ca534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 944));
    // 0x2ca538: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ca538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2ca53c: 0x244203e8  addiu       $v0, $v0, 0x3E8
    ctx->pc = 0x2ca53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
    // 0x2ca540: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2ca540u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2ca544: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x2ca544u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x2ca548: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x2ca548u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x2ca54c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x2ca54cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x2ca550: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x2ca550u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x2ca554: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x2ca554u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x2ca558: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x2ca558u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x2ca55c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x2ca55cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x2ca560: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x2ca560u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x2ca564: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x2ca564u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x2ca568: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x2ca568u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x2ca56c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x2ca56cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x2ca570: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x2ca570u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
    // 0x2ca574: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x2ca574u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
    // 0x2ca578: 0xae600098  sw          $zero, 0x98($s3)
    ctx->pc = 0x2ca578u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 0));
    // 0x2ca57c: 0xae60009c  sw          $zero, 0x9C($s3)
    ctx->pc = 0x2ca57cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 0));
    // 0x2ca580: 0xae6000a0  sw          $zero, 0xA0($s3)
    ctx->pc = 0x2ca580u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 0));
    // 0x2ca584: 0xae6000a4  sw          $zero, 0xA4($s3)
    ctx->pc = 0x2ca584u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 0));
    // 0x2ca588: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x2ca588u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2ca58c: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2CA58Cu;
    {
        const bool branch_taken_0x2ca58c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca58c) {
            ctx->pc = 0x2CA620u;
            goto label_2ca620;
        }
    }
    ctx->pc = 0x2CA594u;
    // 0x2ca594: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2ca594u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2ca598: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2ca598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2ca59c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2ca59cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2ca5a0: 0xc040138  jal         func_1004E0
    ctx->pc = 0x2CA5A0u;
    SET_GPR_U32(ctx, 31, 0x2CA5A8u);
    ctx->pc = 0x2CA5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA5A0u;
            // 0x2ca5a4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA5A8u; }
        if (ctx->pc != 0x2CA5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA5A8u; }
        if (ctx->pc != 0x2CA5A8u) { return; }
    }
    ctx->pc = 0x2CA5A8u;
label_2ca5a8:
    // 0x2ca5a8: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2ca5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x2ca5ac: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x2ca5acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x2ca5b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ca5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca5b4: 0x24a5a640  addiu       $a1, $a1, -0x59C0
    ctx->pc = 0x2ca5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944320));
    // 0x2ca5b8: 0x24c6a2b0  addiu       $a2, $a2, -0x5D50
    ctx->pc = 0x2ca5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943408));
    // 0x2ca5bc: 0x24070050  addiu       $a3, $zero, 0x50
    ctx->pc = 0x2ca5bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2ca5c0: 0xc040840  jal         func_102100
    ctx->pc = 0x2CA5C0u;
    SET_GPR_U32(ctx, 31, 0x2CA5C8u);
    ctx->pc = 0x2CA5C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA5C0u;
            // 0x2ca5c4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA5C8u; }
        if (ctx->pc != 0x2CA5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA5C8u; }
        if (ctx->pc != 0x2CA5C8u) { return; }
    }
    ctx->pc = 0x2CA5C8u;
label_2ca5c8:
    // 0x2ca5c8: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x2ca5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x2ca5cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ca5ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca5d0: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x2ca5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x2ca5d4: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2CA5D4u;
    SET_GPR_U32(ctx, 31, 0x2CA5DCu);
    ctx->pc = 0x2CA5D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA5D4u;
            // 0x2ca5d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA5DCu; }
        if (ctx->pc != 0x2CA5DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA5DCu; }
        if (ctx->pc != 0x2CA5DCu) { return; }
    }
    ctx->pc = 0x2CA5DCu;
label_2ca5dc:
    // 0x2ca5dc: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2ca5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2ca5e0: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2CA5E0u;
    SET_GPR_U32(ctx, 31, 0x2CA5E8u);
    ctx->pc = 0x2CA5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA5E0u;
            // 0x2ca5e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA5E8u; }
        if (ctx->pc != 0x2CA5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA5E8u; }
        if (ctx->pc != 0x2CA5E8u) { return; }
    }
    ctx->pc = 0x2CA5E8u;
label_2ca5e8:
    // 0x2ca5e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ca5e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ca5ec:
    // 0x2ca5ec: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x2ca5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x2ca5f0: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2ca5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2ca5f4: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x2ca5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x2ca5f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2ca5f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca5fc: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x2ca5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x2ca600: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x2ca600u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2ca604: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ca604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ca608: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2CA608u;
    SET_GPR_U32(ctx, 31, 0x2CA610u);
    ctx->pc = 0x2CA60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA608u;
            // 0x2ca60c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA610u; }
        if (ctx->pc != 0x2CA610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA610u; }
        if (ctx->pc != 0x2CA610u) { return; }
    }
    ctx->pc = 0x2CA610u;
label_2ca610:
    // 0x2ca610: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2ca610u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2ca614: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x2ca614u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2ca618: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2CA618u;
    {
        const bool branch_taken_0x2ca618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA618u;
            // 0x2ca61c: 0x26520050  addiu       $s2, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca618) {
            ctx->pc = 0x2CA5ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ca5ec;
        }
    }
    ctx->pc = 0x2CA620u;
label_2ca620:
    // 0x2ca620: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2ca620u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca624: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2ca624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ca628: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ca628u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ca62c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ca62cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ca630: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ca630u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca634: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ca634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca638: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA638u;
            // 0x2ca63c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CA640u;
    // 0x2ca640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ca640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ca644: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ca644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2ca648: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ca648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ca64c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ca64cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ca650: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ca650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ca654: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2ca654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x2ca658: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ca658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2ca65c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2ca65cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2ca660: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x2ca660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x2ca664: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ca664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca668: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2ca668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2ca66c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ca66cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca670: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x2ca670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x2ca674: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2ca674u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2ca678: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2ca678u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x2ca67c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2ca67cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2ca680: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x2ca680u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ca684: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x2ca684u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ca688: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2CA688u;
    SET_GPR_U32(ctx, 31, 0x2CA690u);
    ctx->pc = 0x2CA68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA688u;
            // 0x2ca68c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA690u; }
        if (ctx->pc != 0x2CA690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA690u; }
        if (ctx->pc != 0x2CA690u) { return; }
    }
    ctx->pc = 0x2CA690u;
label_2ca690:
    // 0x2ca690: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2CA690u;
    SET_GPR_U32(ctx, 31, 0x2CA698u);
    ctx->pc = 0x2CA694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA690u;
            // 0x2ca694: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA698u; }
        if (ctx->pc != 0x2CA698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA698u; }
        if (ctx->pc != 0x2CA698u) { return; }
    }
    ctx->pc = 0x2CA698u;
label_2ca698:
    // 0x2ca698: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ca698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ca69c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x2ca69cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x2ca6a0: 0x8c450e80  lw          $a1, 0xE80($v0)
    ctx->pc = 0x2ca6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x2ca6a4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ca6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2ca6a8: 0x2484c560  addiu       $a0, $a0, -0x3AA0
    ctx->pc = 0x2ca6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952288));
    // 0x2ca6ac: 0x24630360  addiu       $v1, $v1, 0x360
    ctx->pc = 0x2ca6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 864));
    // 0x2ca6b0: 0x8ca50788  lw          $a1, 0x788($a1)
    ctx->pc = 0x2ca6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1928)));
    // 0x2ca6b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ca6b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca6b8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2ca6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2ca6bc: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x2ca6bcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ca6c0: 0xa204004d  sb          $a0, 0x4D($s0)
    ctx->pc = 0x2ca6c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ca6c4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2ca6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2ca6c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ca6c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca6cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ca6ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca6d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA6D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA6D0u;
            // 0x2ca6d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CA6D8u;
    // 0x2ca6d8: 0x0  nop
    ctx->pc = 0x2ca6d8u;
    // NOP
    // 0x2ca6dc: 0x0  nop
    ctx->pc = 0x2ca6dcu;
    // NOP
}
