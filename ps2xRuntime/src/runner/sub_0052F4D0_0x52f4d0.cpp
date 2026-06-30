#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0052F4D0
// Address: 0x52f4d0 - 0x52f740
void sub_0052F4D0_0x52f4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0052F4D0_0x52f4d0");
#endif

    switch (ctx->pc) {
        case 0x52f500u: goto label_52f500;
        case 0x52f554u: goto label_52f554;
        case 0x52f5e0u: goto label_52f5e0;
        case 0x52f600u: goto label_52f600;
        case 0x52f614u: goto label_52f614;
        case 0x52f620u: goto label_52f620;
        case 0x52f624u: goto label_52f624;
        case 0x52f648u: goto label_52f648;
        case 0x52f6d0u: goto label_52f6d0;
        case 0x52f6d8u: goto label_52f6d8;
        default: break;
    }

    ctx->pc = 0x52f4d0u;

    // 0x52f4d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x52f4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x52f4d4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x52f4d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x52f4d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x52f4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x52f4dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x52f4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x52f4e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x52f4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x52f4e4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x52f4e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x52f4e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52f4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x52f4ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52f4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x52f4f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x52f4f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x52f4f4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x52f4f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x52f4f8: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x52F4F8u;
    SET_GPR_U32(ctx, 31, 0x52F500u);
    ctx->pc = 0x52F4FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52F4F8u;
            // 0x52f4fc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F500u; }
        if (ctx->pc != 0x52F500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F500u; }
        if (ctx->pc != 0x52F500u) { return; }
    }
    ctx->pc = 0x52F500u;
label_52f500:
    // 0x52f500: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x52f500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x52f504: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x52f504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x52f508: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x52f508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x52f50c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x52f50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x52f510: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x52f510u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x52f514: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x52f514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x52f518: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x52f518u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x52f51c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x52f51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x52f520: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x52f520u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x52f524: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x52f524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x52f528: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x52f528u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x52f52c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x52f52cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x52f530: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x52f530u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x52f534: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x52f534u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x52f538: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x52f538u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x52f53c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x52f53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x52f540: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x52f540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x52f544: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x52f544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x52f548: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x52f548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x52f54c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x52F54Cu;
    SET_GPR_U32(ctx, 31, 0x52F554u);
    ctx->pc = 0x52F550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52F54Cu;
            // 0x52f550: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F554u; }
        if (ctx->pc != 0x52F554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F554u; }
        if (ctx->pc != 0x52F554u) { return; }
    }
    ctx->pc = 0x52F554u;
label_52f554:
    // 0x52f554: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x52f554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x52f558: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x52f558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x52f55c: 0x24636c70  addiu       $v1, $v1, 0x6C70
    ctx->pc = 0x52f55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27760));
    // 0x52f560: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x52f560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x52f564: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x52f564u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x52f568: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x52f568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x52f56c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x52f56cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x52f570: 0xac44ab08  sw          $a0, -0x54F8($v0)
    ctx->pc = 0x52f570u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945544), GPR_U32(ctx, 4));
    // 0x52f574: 0x24636c80  addiu       $v1, $v1, 0x6C80
    ctx->pc = 0x52f574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27776));
    // 0x52f578: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x52f578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x52f57c: 0x24426cb8  addiu       $v0, $v0, 0x6CB8
    ctx->pc = 0x52f57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27832));
    // 0x52f580: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x52f580u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x52f584: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x52f584u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x52f588: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x52f588u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x52f58c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x52f58cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x52f590: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x52f590u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x52f594: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x52f594u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x52f598: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x52f598u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x52f59c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x52f59cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x52f5a0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x52f5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x52f5a4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x52f5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x52f5a8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x52f5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x52f5ac: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x52f5acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x52f5b0: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x52f5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
    // 0x52f5b4: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x52f5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
    // 0x52f5b8: 0xae600098  sw          $zero, 0x98($s3)
    ctx->pc = 0x52f5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 0));
    // 0x52f5bc: 0xae60009c  sw          $zero, 0x9C($s3)
    ctx->pc = 0x52f5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 0));
    // 0x52f5c0: 0xae6000a0  sw          $zero, 0xA0($s3)
    ctx->pc = 0x52f5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 0));
    // 0x52f5c4: 0xae6000a4  sw          $zero, 0xA4($s3)
    ctx->pc = 0x52f5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 0));
    // 0x52f5c8: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x52f5c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x52f5cc: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x52F5CCu;
    {
        const bool branch_taken_0x52f5cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x52f5cc) {
            ctx->pc = 0x52F658u;
            goto label_52f658;
        }
    }
    ctx->pc = 0x52F5D4u;
    // 0x52f5d4: 0x1011c0  sll         $v0, $s0, 7
    ctx->pc = 0x52f5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
    // 0x52f5d8: 0xc040138  jal         func_1004E0
    ctx->pc = 0x52F5D8u;
    SET_GPR_U32(ctx, 31, 0x52F5E0u);
    ctx->pc = 0x52F5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52F5D8u;
            // 0x52f5dc: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F5E0u; }
        if (ctx->pc != 0x52F5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F5E0u; }
        if (ctx->pc != 0x52F5E0u) { return; }
    }
    ctx->pc = 0x52F5E0u;
label_52f5e0:
    // 0x52f5e0: 0x3c050053  lui         $a1, 0x53
    ctx->pc = 0x52f5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
    // 0x52f5e4: 0x3c060053  lui         $a2, 0x53
    ctx->pc = 0x52f5e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)83 << 16));
    // 0x52f5e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x52f5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x52f5ec: 0x24a5f680  addiu       $a1, $a1, -0x980
    ctx->pc = 0x52f5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964864));
    // 0x52f5f0: 0x24c6ed80  addiu       $a2, $a2, -0x1280
    ctx->pc = 0x52f5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962560));
    // 0x52f5f4: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x52f5f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x52f5f8: 0xc040840  jal         func_102100
    ctx->pc = 0x52F5F8u;
    SET_GPR_U32(ctx, 31, 0x52F600u);
    ctx->pc = 0x52F5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52F5F8u;
            // 0x52f5fc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F600u; }
        if (ctx->pc != 0x52F600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F600u; }
        if (ctx->pc != 0x52F600u) { return; }
    }
    ctx->pc = 0x52F600u;
label_52f600:
    // 0x52f600: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x52f600u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x52f604: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x52f604u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x52f608: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x52f608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x52f60c: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x52F60Cu;
    SET_GPR_U32(ctx, 31, 0x52F614u);
    ctx->pc = 0x52F610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52F60Cu;
            // 0x52f610: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F614u; }
        if (ctx->pc != 0x52F614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F614u; }
        if (ctx->pc != 0x52F614u) { return; }
    }
    ctx->pc = 0x52F614u;
label_52f614:
    // 0x52f614: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x52f614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x52f618: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x52F618u;
    SET_GPR_U32(ctx, 31, 0x52F620u);
    ctx->pc = 0x52F61Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52F618u;
            // 0x52f61c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F620u; }
        if (ctx->pc != 0x52F620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F620u; }
        if (ctx->pc != 0x52F620u) { return; }
    }
    ctx->pc = 0x52F620u;
label_52f620:
    // 0x52f620: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x52f620u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52f624:
    // 0x52f624: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x52f624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x52f628: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x52f628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x52f62c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x52f62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x52f630: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x52f630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x52f634: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x52f634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x52f638: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x52f638u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x52f63c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x52f63cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x52f640: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x52F640u;
    SET_GPR_U32(ctx, 31, 0x52F648u);
    ctx->pc = 0x52F644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52F640u;
            // 0x52f644: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F648u; }
        if (ctx->pc != 0x52F648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F648u; }
        if (ctx->pc != 0x52F648u) { return; }
    }
    ctx->pc = 0x52F648u;
label_52f648:
    // 0x52f648: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x52f648u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x52f64c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x52f64cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x52f650: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x52F650u;
    {
        const bool branch_taken_0x52f650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x52F654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52F650u;
            // 0x52f654: 0x26520080  addiu       $s2, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52f650) {
            ctx->pc = 0x52F624u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_52f624;
        }
    }
    ctx->pc = 0x52F658u;
label_52f658:
    // 0x52f658: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x52f658u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x52f65c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x52f65cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x52f660: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x52f660u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x52f664: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x52f664u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x52f668: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52f668u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x52f66c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52f66cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x52f670: 0x3e00008  jr          $ra
    ctx->pc = 0x52F670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52F674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52F670u;
            // 0x52f674: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52F678u;
    // 0x52f678: 0x0  nop
    ctx->pc = 0x52f678u;
    // NOP
    // 0x52f67c: 0x0  nop
    ctx->pc = 0x52f67cu;
    // NOP
    // 0x52f680: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x52f680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x52f684: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x52f684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x52f688: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x52f688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x52f68c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x52f68cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x52f690: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52f690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x52f694: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x52f694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x52f698: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x52f698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x52f69c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x52f69cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x52f6a0: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x52f6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x52f6a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x52f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x52f6a8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x52f6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x52f6ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x52f6acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x52f6b0: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x52f6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x52f6b4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x52f6b4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x52f6b8: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x52f6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x52f6bc: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x52f6bcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x52f6c0: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x52f6c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x52f6c4: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x52f6c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x52f6c8: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x52F6C8u;
    SET_GPR_U32(ctx, 31, 0x52F6D0u);
    ctx->pc = 0x52F6CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52F6C8u;
            // 0x52f6cc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F6D0u; }
        if (ctx->pc != 0x52F6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F6D0u; }
        if (ctx->pc != 0x52F6D0u) { return; }
    }
    ctx->pc = 0x52F6D0u;
label_52f6d0:
    // 0x52f6d0: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x52F6D0u;
    SET_GPR_U32(ctx, 31, 0x52F6D8u);
    ctx->pc = 0x52F6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52F6D0u;
            // 0x52f6d4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F6D8u; }
        if (ctx->pc != 0x52F6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F6D8u; }
        if (ctx->pc != 0x52F6D8u) { return; }
    }
    ctx->pc = 0x52F6D8u;
label_52f6d8:
    // 0x52f6d8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x52f6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x52f6dc: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x52f6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x52f6e0: 0x8c460e80  lw          $a2, 0xE80($v0)
    ctx->pc = 0x52f6e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x52f6e4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x52f6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x52f6e8: 0x24a5c560  addiu       $a1, $a1, -0x3AA0
    ctx->pc = 0x52f6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952288));
    // 0x52f6ec: 0x24846c30  addiu       $a0, $a0, 0x6C30
    ctx->pc = 0x52f6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27696));
    // 0x52f6f0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x52f6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x52f6f4: 0x8cc60788  lw          $a2, 0x788($a2)
    ctx->pc = 0x52f6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1928)));
    // 0x52f6f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x52f6f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x52f6fc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x52f6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x52f700: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x52f700u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x52f704: 0xa205004d  sb          $a1, 0x4D($s0)
    ctx->pc = 0x52f704u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 5));
    // 0x52f708: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x52f708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x52f70c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x52f70cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x52f710: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x52f710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x52f714: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x52f714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x52f718: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x52f718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x52f71c: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x52f71cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x52f720: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x52f720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x52f724: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x52f724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x52f728: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x52f728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x52f72c: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x52f72cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x52f730: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x52f730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x52f734: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52f734u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x52f738: 0x3e00008  jr          $ra
    ctx->pc = 0x52F738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52F73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52F738u;
            // 0x52f73c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52F740u;
}
