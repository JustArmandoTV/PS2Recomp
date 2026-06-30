#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0041C8B0
// Address: 0x41c8b0 - 0x41ca60
void sub_0041C8B0_0x41c8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041C8B0_0x41c8b0");
#endif

    switch (ctx->pc) {
        case 0x41c8e0u: goto label_41c8e0;
        case 0x41c934u: goto label_41c934;
        case 0x41c9c0u: goto label_41c9c0;
        case 0x41c9e0u: goto label_41c9e0;
        case 0x41c9f4u: goto label_41c9f4;
        case 0x41ca00u: goto label_41ca00;
        case 0x41ca04u: goto label_41ca04;
        case 0x41ca28u: goto label_41ca28;
        default: break;
    }

    ctx->pc = 0x41c8b0u;

    // 0x41c8b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x41c8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x41c8b4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x41c8b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x41c8b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x41c8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x41c8bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x41c8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x41c8c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x41c8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x41c8c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x41c8c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c8c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41c8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x41c8cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41c8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x41c8d0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x41c8d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c8d4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x41c8d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c8d8: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x41C8D8u;
    SET_GPR_U32(ctx, 31, 0x41C8E0u);
    ctx->pc = 0x41C8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41C8D8u;
            // 0x41c8dc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C8E0u; }
        if (ctx->pc != 0x41C8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C8E0u; }
        if (ctx->pc != 0x41C8E0u) { return; }
    }
    ctx->pc = 0x41C8E0u;
label_41c8e0:
    // 0x41c8e0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x41c8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x41c8e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x41c8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x41c8e8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x41c8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x41c8ec: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x41c8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x41c8f0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x41c8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x41c8f4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x41c8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x41c8f8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x41c8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x41c8fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x41c8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x41c900: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x41c900u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x41c904: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x41c904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x41c908: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x41c908u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x41c90c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x41c90cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x41c910: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x41c910u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x41c914: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x41c914u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x41c918: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x41c918u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x41c91c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x41c91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x41c920: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x41c920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x41c924: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x41c924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x41c928: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x41c928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x41c92c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x41C92Cu;
    SET_GPR_U32(ctx, 31, 0x41C934u);
    ctx->pc = 0x41C930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41C92Cu;
            // 0x41c930: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C934u; }
        if (ctx->pc != 0x41C934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C934u; }
        if (ctx->pc != 0x41C934u) { return; }
    }
    ctx->pc = 0x41C934u;
label_41c934:
    // 0x41c934: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x41c934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x41c938: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x41c938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x41c93c: 0x2463b838  addiu       $v1, $v1, -0x47C8
    ctx->pc = 0x41c93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948920));
    // 0x41c940: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x41c940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x41c944: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x41c944u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x41c948: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x41c948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x41c94c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x41c94cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x41c950: 0xac447330  sw          $a0, 0x7330($v0)
    ctx->pc = 0x41c950u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29488), GPR_U32(ctx, 4));
    // 0x41c954: 0x2463b850  addiu       $v1, $v1, -0x47B0
    ctx->pc = 0x41c954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948944));
    // 0x41c958: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x41c958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x41c95c: 0x2442b888  addiu       $v0, $v0, -0x4778
    ctx->pc = 0x41c95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949000));
    // 0x41c960: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x41c960u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x41c964: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x41c964u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x41c968: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x41c968u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x41c96c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x41c96cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x41c970: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x41c970u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x41c974: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x41c974u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x41c978: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x41c978u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x41c97c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x41c97cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x41c980: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x41c980u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x41c984: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x41c984u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x41c988: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x41c988u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x41c98c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x41c98cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x41c990: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x41c990u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
    // 0x41c994: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x41c994u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
    // 0x41c998: 0xae600098  sw          $zero, 0x98($s3)
    ctx->pc = 0x41c998u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 0));
    // 0x41c99c: 0xae60009c  sw          $zero, 0x9C($s3)
    ctx->pc = 0x41c99cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 0));
    // 0x41c9a0: 0xae6000a0  sw          $zero, 0xA0($s3)
    ctx->pc = 0x41c9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 0));
    // 0x41c9a4: 0xae6000a4  sw          $zero, 0xA4($s3)
    ctx->pc = 0x41c9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 0));
    // 0x41c9a8: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x41c9a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x41c9ac: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x41C9ACu;
    {
        const bool branch_taken_0x41c9ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x41c9ac) {
            ctx->pc = 0x41CA38u;
            goto label_41ca38;
        }
    }
    ctx->pc = 0x41C9B4u;
    // 0x41c9b4: 0x101200  sll         $v0, $s0, 8
    ctx->pc = 0x41c9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x41c9b8: 0xc040138  jal         func_1004E0
    ctx->pc = 0x41C9B8u;
    SET_GPR_U32(ctx, 31, 0x41C9C0u);
    ctx->pc = 0x41C9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41C9B8u;
            // 0x41c9bc: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C9C0u; }
        if (ctx->pc != 0x41C9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C9C0u; }
        if (ctx->pc != 0x41C9C0u) { return; }
    }
    ctx->pc = 0x41C9C0u;
label_41c9c0:
    // 0x41c9c0: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x41c9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x41c9c4: 0x3c060042  lui         $a2, 0x42
    ctx->pc = 0x41c9c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)66 << 16));
    // 0x41c9c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x41c9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c9cc: 0x24a5d5f0  addiu       $a1, $a1, -0x2A10
    ctx->pc = 0x41c9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956528));
    // 0x41c9d0: 0x24c6b950  addiu       $a2, $a2, -0x46B0
    ctx->pc = 0x41c9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949200));
    // 0x41c9d4: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x41c9d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x41c9d8: 0xc040840  jal         func_102100
    ctx->pc = 0x41C9D8u;
    SET_GPR_U32(ctx, 31, 0x41C9E0u);
    ctx->pc = 0x41C9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41C9D8u;
            // 0x41c9dc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C9E0u; }
        if (ctx->pc != 0x41C9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C9E0u; }
        if (ctx->pc != 0x41C9E0u) { return; }
    }
    ctx->pc = 0x41C9E0u;
label_41c9e0:
    // 0x41c9e0: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x41c9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x41c9e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x41c9e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c9e8: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x41c9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x41c9ec: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x41C9ECu;
    SET_GPR_U32(ctx, 31, 0x41C9F4u);
    ctx->pc = 0x41C9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41C9ECu;
            // 0x41c9f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C9F4u; }
        if (ctx->pc != 0x41C9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C9F4u; }
        if (ctx->pc != 0x41C9F4u) { return; }
    }
    ctx->pc = 0x41C9F4u;
label_41c9f4:
    // 0x41c9f4: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x41c9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x41c9f8: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x41C9F8u;
    SET_GPR_U32(ctx, 31, 0x41CA00u);
    ctx->pc = 0x41C9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41C9F8u;
            // 0x41c9fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CA00u; }
        if (ctx->pc != 0x41CA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CA00u; }
        if (ctx->pc != 0x41CA00u) { return; }
    }
    ctx->pc = 0x41CA00u;
label_41ca00:
    // 0x41ca00: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x41ca00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41ca04:
    // 0x41ca04: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x41ca04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x41ca08: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x41ca08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x41ca0c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x41ca0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x41ca10: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x41ca10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41ca14: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x41ca14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x41ca18: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x41ca18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x41ca1c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x41ca1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x41ca20: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x41CA20u;
    SET_GPR_U32(ctx, 31, 0x41CA28u);
    ctx->pc = 0x41CA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41CA20u;
            // 0x41ca24: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CA28u; }
        if (ctx->pc != 0x41CA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CA28u; }
        if (ctx->pc != 0x41CA28u) { return; }
    }
    ctx->pc = 0x41CA28u;
label_41ca28:
    // 0x41ca28: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x41ca28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x41ca2c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x41ca2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x41ca30: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x41CA30u;
    {
        const bool branch_taken_0x41ca30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41CA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41CA30u;
            // 0x41ca34: 0x26520100  addiu       $s2, $s2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ca30) {
            ctx->pc = 0x41CA04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_41ca04;
        }
    }
    ctx->pc = 0x41CA38u;
label_41ca38:
    // 0x41ca38: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x41ca38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ca3c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x41ca3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x41ca40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x41ca40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x41ca44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x41ca44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41ca48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41ca48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41ca4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41ca4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41ca50: 0x3e00008  jr          $ra
    ctx->pc = 0x41CA50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41CA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41CA50u;
            // 0x41ca54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41CA58u;
    // 0x41ca58: 0x0  nop
    ctx->pc = 0x41ca58u;
    // NOP
    // 0x41ca5c: 0x0  nop
    ctx->pc = 0x41ca5cu;
    // NOP
}
