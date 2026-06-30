#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00428930
// Address: 0x428930 - 0x428a90
void sub_00428930_0x428930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00428930_0x428930");
#endif

    switch (ctx->pc) {
        case 0x42894cu: goto label_42894c;
        case 0x42896cu: goto label_42896c;
        case 0x4289c0u: goto label_4289c0;
        case 0x428a20u: goto label_428a20;
        case 0x428a2cu: goto label_428a2c;
        case 0x428a38u: goto label_428a38;
        case 0x428a44u: goto label_428a44;
        case 0x428a50u: goto label_428a50;
        case 0x428a5cu: goto label_428a5c;
        case 0x428a74u: goto label_428a74;
        default: break;
    }

    ctx->pc = 0x428930u;

    // 0x428930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x428930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x428934: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x428934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x428938: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x428938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x42893c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x42893cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x428940: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x428940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x428944: 0xc10a2dc  jal         func_428B70
    ctx->pc = 0x428944u;
    SET_GPR_U32(ctx, 31, 0x42894Cu);
    ctx->pc = 0x428948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428944u;
            // 0x428948: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x428B70u;
    if (runtime->hasFunction(0x428B70u)) {
        auto targetFn = runtime->lookupFunction(0x428B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42894Cu; }
        if (ctx->pc != 0x42894Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00428B70_0x428b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42894Cu; }
        if (ctx->pc != 0x42894Cu) { return; }
    }
    ctx->pc = 0x42894Cu;
label_42894c:
    // 0x42894c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x42894cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x428950: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x428950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x428954: 0x2463c050  addiu       $v1, $v1, -0x3FB0
    ctx->pc = 0x428954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950992));
    // 0x428958: 0x2442c088  addiu       $v0, $v0, -0x3F78
    ctx->pc = 0x428958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951048));
    // 0x42895c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x42895cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x428960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x428960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x428964: 0xc10a2d8  jal         func_428B60
    ctx->pc = 0x428964u;
    SET_GPR_U32(ctx, 31, 0x42896Cu);
    ctx->pc = 0x428968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428964u;
            // 0x428968: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x428B60u;
    if (runtime->hasFunction(0x428B60u)) {
        auto targetFn = runtime->lookupFunction(0x428B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42896Cu; }
        if (ctx->pc != 0x42896Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00428B60_0x428b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42896Cu; }
        if (ctx->pc != 0x42896Cu) { return; }
    }
    ctx->pc = 0x42896Cu;
label_42896c:
    // 0x42896c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x42896cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x428970: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x428970u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x428974: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x428974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x428978: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x428978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x42897c: 0x8c460e80  lw          $a2, 0xE80($v0)
    ctx->pc = 0x42897cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x428980: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x428980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x428984: 0x24a5c4f0  addiu       $a1, $a1, -0x3B10
    ctx->pc = 0x428984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952176));
    // 0x428988: 0x2484bf60  addiu       $a0, $a0, -0x40A0
    ctx->pc = 0x428988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950752));
    // 0x42898c: 0x2463bf98  addiu       $v1, $v1, -0x4068
    ctx->pc = 0x42898cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950808));
    // 0x428990: 0x8cc60968  lw          $a2, 0x968($a2)
    ctx->pc = 0x428990u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2408)));
    // 0x428994: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x428994u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x428998: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x428998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x42899c: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x42899cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4289a0: 0xa20500a8  sb          $a1, 0xA8($s0)
    ctx->pc = 0x4289a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 168), (uint8_t)GPR_U32(ctx, 5));
    // 0x4289a4: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4289a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4289a8: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x4289a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x4289ac: 0xa20000a9  sb          $zero, 0xA9($s0)
    ctx->pc = 0x4289acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 169), (uint8_t)GPR_U32(ctx, 0));
    // 0x4289b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4289b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4289b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4289b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4289b8: 0x3e00008  jr          $ra
    ctx->pc = 0x4289B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4289BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4289B8u;
            // 0x4289bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4289C0u;
label_4289c0:
    // 0x4289c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4289c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4289c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4289c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4289c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4289c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4289cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4289ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4289d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4289d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4289d4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x4289D4u;
    {
        const bool branch_taken_0x4289d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4289D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4289D4u;
            // 0x4289d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4289d4) {
            ctx->pc = 0x428A74u;
            goto label_428a74;
        }
    }
    ctx->pc = 0x4289DCu;
    // 0x4289dc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4289dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4289e0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4289e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4289e4: 0x2463c050  addiu       $v1, $v1, -0x3FB0
    ctx->pc = 0x4289e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950992));
    // 0x4289e8: 0x2442c088  addiu       $v0, $v0, -0x3F78
    ctx->pc = 0x4289e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951048));
    // 0x4289ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4289ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4289f0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4289F0u;
    {
        const bool branch_taken_0x4289f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4289F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4289F0u;
            // 0x4289f4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4289f0) {
            ctx->pc = 0x428A5Cu;
            goto label_428a5c;
        }
    }
    ctx->pc = 0x4289F8u;
    // 0x4289f8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4289f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4289fc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4289fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x428a00: 0x2463c000  addiu       $v1, $v1, -0x4000
    ctx->pc = 0x428a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950912));
    // 0x428a04: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x428a04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x428a08: 0x2442c038  addiu       $v0, $v0, -0x3FC8
    ctx->pc = 0x428a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950968));
    // 0x428a0c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x428a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x428a10: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x428a10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x428a14: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x428a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x428a18: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x428A18u;
    SET_GPR_U32(ctx, 31, 0x428A20u);
    ctx->pc = 0x428A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428A18u;
            // 0x428a1c: 0x24a574a0  addiu       $a1, $a1, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428A20u; }
        if (ctx->pc != 0x428A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428A20u; }
        if (ctx->pc != 0x428A20u) { return; }
    }
    ctx->pc = 0x428A20u;
label_428a20:
    // 0x428a20: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x428a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x428a24: 0xc0a8c98  jal         func_2A3260
    ctx->pc = 0x428A24u;
    SET_GPR_U32(ctx, 31, 0x428A2Cu);
    ctx->pc = 0x428A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428A24u;
            // 0x428a28: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428A2Cu; }
        if (ctx->pc != 0x428A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428A2Cu; }
        if (ctx->pc != 0x428A2Cu) { return; }
    }
    ctx->pc = 0x428A2Cu;
label_428a2c:
    // 0x428a2c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x428a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x428a30: 0xc10a2bc  jal         func_428AF0
    ctx->pc = 0x428A30u;
    SET_GPR_U32(ctx, 31, 0x428A38u);
    ctx->pc = 0x428A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428A30u;
            // 0x428a34: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x428AF0u;
    if (runtime->hasFunction(0x428AF0u)) {
        auto targetFn = runtime->lookupFunction(0x428AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428A38u; }
        if (ctx->pc != 0x428A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00428AF0_0x428af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428A38u; }
        if (ctx->pc != 0x428A38u) { return; }
    }
    ctx->pc = 0x428A38u;
label_428a38:
    // 0x428a38: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x428a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x428a3c: 0xc10a2bc  jal         func_428AF0
    ctx->pc = 0x428A3Cu;
    SET_GPR_U32(ctx, 31, 0x428A44u);
    ctx->pc = 0x428A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428A3Cu;
            // 0x428a40: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x428AF0u;
    if (runtime->hasFunction(0x428AF0u)) {
        auto targetFn = runtime->lookupFunction(0x428AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428A44u; }
        if (ctx->pc != 0x428A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00428AF0_0x428af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428A44u; }
        if (ctx->pc != 0x428A44u) { return; }
    }
    ctx->pc = 0x428A44u;
label_428a44:
    // 0x428a44: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x428a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x428a48: 0xc10a2a4  jal         func_428A90
    ctx->pc = 0x428A48u;
    SET_GPR_U32(ctx, 31, 0x428A50u);
    ctx->pc = 0x428A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428A48u;
            // 0x428a4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x428A90u;
    if (runtime->hasFunction(0x428A90u)) {
        auto targetFn = runtime->lookupFunction(0x428A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428A50u; }
        if (ctx->pc != 0x428A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00428A90_0x428a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428A50u; }
        if (ctx->pc != 0x428A50u) { return; }
    }
    ctx->pc = 0x428A50u;
label_428a50:
    // 0x428a50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x428a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x428a54: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x428A54u;
    SET_GPR_U32(ctx, 31, 0x428A5Cu);
    ctx->pc = 0x428A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428A54u;
            // 0x428a58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428A5Cu; }
        if (ctx->pc != 0x428A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428A5Cu; }
        if (ctx->pc != 0x428A5Cu) { return; }
    }
    ctx->pc = 0x428A5Cu;
label_428a5c:
    // 0x428a5c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x428a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x428a60: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x428a60u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x428a64: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x428A64u;
    {
        const bool branch_taken_0x428a64 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x428a64) {
            ctx->pc = 0x428A68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x428A64u;
            // 0x428a68: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x428A78u;
            goto label_428a78;
        }
    }
    ctx->pc = 0x428A6Cu;
    // 0x428a6c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x428A6Cu;
    SET_GPR_U32(ctx, 31, 0x428A74u);
    ctx->pc = 0x428A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428A6Cu;
            // 0x428a70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428A74u; }
        if (ctx->pc != 0x428A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428A74u; }
        if (ctx->pc != 0x428A74u) { return; }
    }
    ctx->pc = 0x428A74u;
label_428a74:
    // 0x428a74: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x428a74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_428a78:
    // 0x428a78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x428a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x428a7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x428a7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x428a80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x428a80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x428a84: 0x3e00008  jr          $ra
    ctx->pc = 0x428A84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x428A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x428A84u;
            // 0x428a88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x428A8Cu;
    // 0x428a8c: 0x0  nop
    ctx->pc = 0x428a8cu;
    // NOP
}
