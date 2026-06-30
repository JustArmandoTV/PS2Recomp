#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A29C0
// Address: 0x2a29c0 - 0x2a2f60
void sub_002A29C0_0x2a29c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A29C0_0x2a29c0");
#endif

    switch (ctx->pc) {
        case 0x2a2a54u: goto label_2a2a54;
        case 0x2a2a5cu: goto label_2a2a5c;
        case 0x2a2a70u: goto label_2a2a70;
        case 0x2a2a78u: goto label_2a2a78;
        case 0x2a2a80u: goto label_2a2a80;
        case 0x2a2b90u: goto label_2a2b90;
        case 0x2a2ba0u: goto label_2a2ba0;
        case 0x2a2bdcu: goto label_2a2bdc;
        case 0x2a2bfcu: goto label_2a2bfc;
        case 0x2a2c30u: goto label_2a2c30;
        case 0x2a2c50u: goto label_2a2c50;
        case 0x2a2ca4u: goto label_2a2ca4;
        case 0x2a2cd0u: goto label_2a2cd0;
        case 0x2a2ce0u: goto label_2a2ce0;
        case 0x2a2cf4u: goto label_2a2cf4;
        case 0x2a2d00u: goto label_2a2d00;
        case 0x2a2d2cu: goto label_2a2d2c;
        case 0x2a2d3cu: goto label_2a2d3c;
        case 0x2a2d50u: goto label_2a2d50;
        case 0x2a2d5cu: goto label_2a2d5c;
        case 0x2a2d94u: goto label_2a2d94;
        case 0x2a2da4u: goto label_2a2da4;
        case 0x2a2db0u: goto label_2a2db0;
        case 0x2a2dc8u: goto label_2a2dc8;
        case 0x2a2dd0u: goto label_2a2dd0;
        case 0x2a2df0u: goto label_2a2df0;
        case 0x2a2e10u: goto label_2a2e10;
        case 0x2a2e3cu: goto label_2a2e3c;
        case 0x2a2e44u: goto label_2a2e44;
        case 0x2a2e4cu: goto label_2a2e4c;
        case 0x2a2e60u: goto label_2a2e60;
        case 0x2a2e74u: goto label_2a2e74;
        case 0x2a2e80u: goto label_2a2e80;
        case 0x2a2e88u: goto label_2a2e88;
        case 0x2a2f00u: goto label_2a2f00;
        default: break;
    }

    ctx->pc = 0x2a29c0u;

    // 0x2a29c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a29c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a29c4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2a29c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2a29c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a29c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a29cc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x2a29ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x2a29d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a29d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a29d4: 0x2463cb20  addiu       $v1, $v1, -0x34E0
    ctx->pc = 0x2a29d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953760));
    // 0x2a29d8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2a29d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2a29dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a29dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a29e0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2a29e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2a29e4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2a29e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2a29e8: 0xac5089f0  sw          $s0, -0x7610($v0)
    ctx->pc = 0x2a29e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294937072), GPR_U32(ctx, 16));
    // 0x2a29ec: 0x2463cb30  addiu       $v1, $v1, -0x34D0
    ctx->pc = 0x2a29ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953776));
    // 0x2a29f0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2a29f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2a29f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a29f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a29f8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2a29f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2a29fc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2a29fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2a2a00: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x2a2a00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x2a2a04: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a2a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2a08: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x2a2a08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x2a2a0c: 0x24a5f990  addiu       $a1, $a1, -0x670
    ctx->pc = 0x2a2a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965648));
    // 0x2a2a10: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2a2a10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2a2a14: 0x2463f99c  addiu       $v1, $v1, -0x664
    ctx->pc = 0x2a2a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965660));
    // 0x2a2a18: 0xa0800028  sb          $zero, 0x28($a0)
    ctx->pc = 0x2a2a18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a2a1c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a2a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a2a20: 0xa0860029  sb          $a2, 0x29($a0)
    ctx->pc = 0x2a2a20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 41), (uint8_t)GPR_U32(ctx, 6));
    // 0x2a2a24: 0xa086002a  sb          $a2, 0x2A($a0)
    ctx->pc = 0x2a2a24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 42), (uint8_t)GPR_U32(ctx, 6));
    // 0x2a2a28: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2a2a28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2a2a2c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2a2a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2a2a30: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x2a2a30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x2a2a34: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x2a2a34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x2a2a38: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x2a2a38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x2a2a3c: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x2a2a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x2a2a40: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x2a2a40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x2a2a44: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x2a2a44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x2a2a48: 0xac820048  sw          $v0, 0x48($a0)
    ctx->pc = 0x2a2a48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 2));
    // 0x2a2a4c: 0xc0a87a8  jal         func_2A1EA0
    ctx->pc = 0x2A2A4Cu;
    SET_GPR_U32(ctx, 31, 0x2A2A54u);
    ctx->pc = 0x2A2A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2A4Cu;
            // 0x2a2a50: 0x8c850010  lw          $a1, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1EA0u;
    if (runtime->hasFunction(0x2A1EA0u)) {
        auto targetFn = runtime->lookupFunction(0x2A1EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2A54u; }
        if (ctx->pc != 0x2A2A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1EA0_0x2a1ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2A54u; }
        if (ctx->pc != 0x2A2A54u) { return; }
    }
    ctx->pc = 0x2A2A54u;
label_2a2a54:
    // 0x2a2a54: 0xc043390  jal         func_10CE40
    ctx->pc = 0x2A2A54u;
    SET_GPR_U32(ctx, 31, 0x2A2A5Cu);
    ctx->pc = 0x2A2A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2A54u;
            // 0x2a2a58: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CE40u;
    if (runtime->hasFunction(0x10CE40u)) {
        auto targetFn = runtime->lookupFunction(0x10CE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2A5Cu; }
        if (ctx->pc != 0x2A2A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CE40_0x10ce40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2A5Cu; }
        if (ctx->pc != 0x2A2A5Cu) { return; }
    }
    ctx->pc = 0x2A2A5Cu;
label_2a2a5c:
    // 0x2a2a5c: 0x3c050016  lui         $a1, 0x16
    ctx->pc = 0x2a2a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22 << 16));
    // 0x2a2a60: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2a2a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a2a64: 0x24a5d890  addiu       $a1, $a1, -0x2770
    ctx->pc = 0x2a2a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957200));
    // 0x2a2a68: 0xc043010  jal         func_10C040
    ctx->pc = 0x2A2A68u;
    SET_GPR_U32(ctx, 31, 0x2A2A70u);
    ctx->pc = 0x2A2A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2A68u;
            // 0x2a2a6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C040u;
    if (runtime->hasFunction(0x10C040u)) {
        auto targetFn = runtime->lookupFunction(0x10C040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2A70u; }
        if (ctx->pc != 0x2A2A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C040_0x10c040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2A70u; }
        if (ctx->pc != 0x2A2A70u) { return; }
    }
    ctx->pc = 0x2A2A70u;
label_2a2a70:
    // 0x2a2a70: 0xc0433aa  jal         func_10CEA8
    ctx->pc = 0x2A2A70u;
    SET_GPR_U32(ctx, 31, 0x2A2A78u);
    ctx->pc = 0x2A2A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2A70u;
            // 0x2a2a74: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEA8u;
    if (runtime->hasFunction(0x10CEA8u)) {
        auto targetFn = runtime->lookupFunction(0x10CEA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2A78u; }
        if (ctx->pc != 0x2A2A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEA8_0x10cea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2A78u; }
        if (ctx->pc != 0x2A2A78u) { return; }
    }
    ctx->pc = 0x2A2A78u;
label_2a2a78:
    // 0x2a2a78: 0xc05395c  jal         func_14E570
    ctx->pc = 0x2A2A78u;
    SET_GPR_U32(ctx, 31, 0x2A2A80u);
    ctx->pc = 0x2A2A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2A78u;
            // 0x2a2a7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E570u;
    if (runtime->hasFunction(0x14E570u)) {
        auto targetFn = runtime->lookupFunction(0x14E570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2A80u; }
        if (ctx->pc != 0x2A2A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E570_0x14e570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2A80u; }
        if (ctx->pc != 0x2A2A80u) { return; }
    }
    ctx->pc = 0x2A2A80u;
label_2a2a80:
    // 0x2a2a80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a2a80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2a84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a2a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2a88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a2a88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2A8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2A8Cu;
            // 0x2a2a90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A2A94u;
    // 0x2a2a94: 0x0  nop
    ctx->pc = 0x2a2a94u;
    // NOP
    // 0x2a2a98: 0x0  nop
    ctx->pc = 0x2a2a98u;
    // NOP
    // 0x2a2a9c: 0x0  nop
    ctx->pc = 0x2a2a9cu;
    // NOP
    // 0x2a2aa0: 0x80a8718  j           func_2A1C60
    ctx->pc = 0x2A2AA0u;
    ctx->pc = 0x2A2AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2AA0u;
            // 0x2a2aa4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1C60u;
    {
        auto targetFn = runtime->lookupFunction(0x2A1C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2A2AA8u;
    // 0x2a2aa8: 0x0  nop
    ctx->pc = 0x2a2aa8u;
    // NOP
    // 0x2a2aac: 0x0  nop
    ctx->pc = 0x2a2aacu;
    // NOP
    // 0x2a2ab0: 0x80a8680  j           func_2A1A00
    ctx->pc = 0x2A2AB0u;
    ctx->pc = 0x2A2AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2AB0u;
            // 0x2a2ab4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1A00u;
    {
        auto targetFn = runtime->lookupFunction(0x2A1A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2A2AB8u;
    // 0x2a2ab8: 0x0  nop
    ctx->pc = 0x2a2ab8u;
    // NOP
    // 0x2a2abc: 0x0  nop
    ctx->pc = 0x2a2abcu;
    // NOP
    // 0x2a2ac0: 0x80a86c8  j           func_2A1B20
    ctx->pc = 0x2A2AC0u;
    ctx->pc = 0x2A2AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2AC0u;
            // 0x2a2ac4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1B20u;
    {
        auto targetFn = runtime->lookupFunction(0x2A1B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2A2AC8u;
    // 0x2a2ac8: 0x0  nop
    ctx->pc = 0x2a2ac8u;
    // NOP
    // 0x2a2acc: 0x0  nop
    ctx->pc = 0x2a2accu;
    // NOP
    // 0x2a2ad0: 0x80a86cc  j           func_2A1B30
    ctx->pc = 0x2A2AD0u;
    ctx->pc = 0x2A2AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2AD0u;
            // 0x2a2ad4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1B30u;
    {
        auto targetFn = runtime->lookupFunction(0x2A1B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2A2AD8u;
    // 0x2a2ad8: 0x0  nop
    ctx->pc = 0x2a2ad8u;
    // NOP
    // 0x2a2adc: 0x0  nop
    ctx->pc = 0x2a2adcu;
    // NOP
    // 0x2a2ae0: 0x80a86d0  j           func_2A1B40
    ctx->pc = 0x2A2AE0u;
    ctx->pc = 0x2A2AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2AE0u;
            // 0x2a2ae4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1B40u;
    {
        auto targetFn = runtime->lookupFunction(0x2A1B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2A2AE8u;
    // 0x2a2ae8: 0x0  nop
    ctx->pc = 0x2a2ae8u;
    // NOP
    // 0x2a2aec: 0x0  nop
    ctx->pc = 0x2a2aecu;
    // NOP
    // 0x2a2af0: 0x80a86d4  j           func_2A1B50
    ctx->pc = 0x2A2AF0u;
    ctx->pc = 0x2A2AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2AF0u;
            // 0x2a2af4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1B50u;
    {
        auto targetFn = runtime->lookupFunction(0x2A1B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2A2AF8u;
    // 0x2a2af8: 0x0  nop
    ctx->pc = 0x2a2af8u;
    // NOP
    // 0x2a2afc: 0x0  nop
    ctx->pc = 0x2a2afcu;
    // NOP
    // 0x2a2b00: 0x80a86d8  j           func_2A1B60
    ctx->pc = 0x2A2B00u;
    ctx->pc = 0x2A2B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2B00u;
            // 0x2a2b04: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1B60u;
    {
        auto targetFn = runtime->lookupFunction(0x2A1B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2A2B08u;
    // 0x2a2b08: 0x0  nop
    ctx->pc = 0x2a2b08u;
    // NOP
    // 0x2a2b0c: 0x0  nop
    ctx->pc = 0x2a2b0cu;
    // NOP
    // 0x2a2b10: 0x80a86e0  j           func_2A1B80
    ctx->pc = 0x2A2B10u;
    ctx->pc = 0x2A2B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2B10u;
            // 0x2a2b14: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1B80u;
    {
        auto targetFn = runtime->lookupFunction(0x2A1B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2A2B18u;
    // 0x2a2b18: 0x0  nop
    ctx->pc = 0x2a2b18u;
    // NOP
    // 0x2a2b1c: 0x0  nop
    ctx->pc = 0x2a2b1cu;
    // NOP
    // 0x2a2b20: 0x80a86ec  j           func_2A1BB0
    ctx->pc = 0x2A2B20u;
    ctx->pc = 0x2A2B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2B20u;
            // 0x2a2b24: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1BB0u;
    {
        auto targetFn = runtime->lookupFunction(0x2A1BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2A2B28u;
    // 0x2a2b28: 0x0  nop
    ctx->pc = 0x2a2b28u;
    // NOP
    // 0x2a2b2c: 0x0  nop
    ctx->pc = 0x2a2b2cu;
    // NOP
    // 0x2a2b30: 0x80a86fc  j           func_2A1BF0
    ctx->pc = 0x2A2B30u;
    ctx->pc = 0x2A2B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2B30u;
            // 0x2a2b34: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1BF0u;
    {
        auto targetFn = runtime->lookupFunction(0x2A1BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2A2B38u;
    // 0x2a2b38: 0x0  nop
    ctx->pc = 0x2a2b38u;
    // NOP
    // 0x2a2b3c: 0x0  nop
    ctx->pc = 0x2a2b3cu;
    // NOP
    // 0x2a2b40: 0x80a8700  j           func_2A1C00
    ctx->pc = 0x2A2B40u;
    ctx->pc = 0x2A2B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2B40u;
            // 0x2a2b44: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1C00u;
    {
        auto targetFn = runtime->lookupFunction(0x2A1C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2A2B48u;
    // 0x2a2b48: 0x0  nop
    ctx->pc = 0x2a2b48u;
    // NOP
    // 0x2a2b4c: 0x0  nop
    ctx->pc = 0x2a2b4cu;
    // NOP
    // 0x2a2b50: 0x80a8704  j           func_2A1C10
    ctx->pc = 0x2A2B50u;
    ctx->pc = 0x2A2B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2B50u;
            // 0x2a2b54: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1C10u;
    {
        auto targetFn = runtime->lookupFunction(0x2A1C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2A2B58u;
    // 0x2a2b58: 0x0  nop
    ctx->pc = 0x2a2b58u;
    // NOP
    // 0x2a2b5c: 0x0  nop
    ctx->pc = 0x2a2b5cu;
    // NOP
    // 0x2a2b60: 0x80a8708  j           func_2A1C20
    ctx->pc = 0x2A2B60u;
    ctx->pc = 0x2A2B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2B60u;
            // 0x2a2b64: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1C20u;
    {
        auto targetFn = runtime->lookupFunction(0x2A1C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2A2B68u;
    // 0x2a2b68: 0x0  nop
    ctx->pc = 0x2a2b68u;
    // NOP
    // 0x2a2b6c: 0x0  nop
    ctx->pc = 0x2a2b6cu;
    // NOP
    // 0x2a2b70: 0x80a8714  j           func_2A1C50
    ctx->pc = 0x2A2B70u;
    ctx->pc = 0x2A2B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2B70u;
            // 0x2a2b74: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1C50u;
    {
        auto targetFn = runtime->lookupFunction(0x2A1C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2A2B78u;
    // 0x2a2b78: 0x0  nop
    ctx->pc = 0x2a2b78u;
    // NOP
    // 0x2a2b7c: 0x0  nop
    ctx->pc = 0x2a2b7cu;
    // NOP
    // 0x2a2b80: 0x8040358  j           func_100D60
    ctx->pc = 0x2A2B80u;
    ctx->pc = 0x2A2B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2B80u;
            // 0x2a2b84: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100D60u;
    {
        auto targetFn = runtime->lookupFunction(0x100D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2A2B88u;
    // 0x2a2b88: 0x0  nop
    ctx->pc = 0x2a2b88u;
    // NOP
    // 0x2a2b8c: 0x0  nop
    ctx->pc = 0x2a2b8cu;
    // NOP
label_2a2b90:
    // 0x2a2b90: 0x804f018  j           func_13C060
    ctx->pc = 0x2A2B90u;
    ctx->pc = 0x2A2B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2B90u;
            // 0x2a2b94: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C060u;
    if (runtime->hasFunction(0x13C060u)) {
        auto targetFn = runtime->lookupFunction(0x13C060u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0013C060_0x13c060(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2A2B98u;
    // 0x2a2b98: 0x0  nop
    ctx->pc = 0x2a2b98u;
    // NOP
    // 0x2a2b9c: 0x0  nop
    ctx->pc = 0x2a2b9cu;
    // NOP
label_2a2ba0:
    // 0x2a2ba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a2ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a2ba4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a2ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a2ba8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a2ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a2bac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a2bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a2bb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a2bb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2bb4: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2A2BB4u;
    {
        const bool branch_taken_0x2a2bb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2BB4u;
            // 0x2a2bb8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2bb4) {
            ctx->pc = 0x2A2C30u;
            goto label_2a2c30;
        }
    }
    ctx->pc = 0x2A2BBCu;
    // 0x2a2bbc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2a2bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2a2bc0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a2bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2a2bc4: 0x2463fa20  addiu       $v1, $v1, -0x5E0
    ctx->pc = 0x2a2bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965792));
    // 0x2a2bc8: 0x2442fa2c  addiu       $v0, $v0, -0x5D4
    ctx->pc = 0x2a2bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965804));
    // 0x2a2bcc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2a2bccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2a2bd0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2a2bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2a2bd4: 0xc04008c  jal         func_100230
    ctx->pc = 0x2A2BD4u;
    SET_GPR_U32(ctx, 31, 0x2A2BDCu);
    ctx->pc = 0x2A2BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2BD4u;
            // 0x2a2bd8: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2BDCu; }
        if (ctx->pc != 0x2A2BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2BDCu; }
        if (ctx->pc != 0x2A2BDCu) { return; }
    }
    ctx->pc = 0x2A2BDCu;
label_2a2bdc:
    // 0x2a2bdc: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x2a2bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2a2be0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A2BE0u;
    {
        const bool branch_taken_0x2a2be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2be0) {
            ctx->pc = 0x2A2BFCu;
            goto label_2a2bfc;
        }
    }
    ctx->pc = 0x2A2BE8u;
    // 0x2a2be8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a2be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2a2bec: 0x24422fa0  addiu       $v0, $v0, 0x2FA0
    ctx->pc = 0x2a2becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12192));
    // 0x2a2bf0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2a2bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2a2bf4: 0xc04008c  jal         func_100230
    ctx->pc = 0x2A2BF4u;
    SET_GPR_U32(ctx, 31, 0x2A2BFCu);
    ctx->pc = 0x2A2BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2BF4u;
            // 0x2a2bf8: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2BFCu; }
        if (ctx->pc != 0x2A2BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2BFCu; }
        if (ctx->pc != 0x2A2BFCu) { return; }
    }
    ctx->pc = 0x2A2BFCu;
label_2a2bfc:
    // 0x2a2bfc: 0x52200007  beql        $s1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A2BFCu;
    {
        const bool branch_taken_0x2a2bfc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2bfc) {
            ctx->pc = 0x2A2C00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2BFCu;
            // 0x2a2c00: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A2C1Cu;
            goto label_2a2c1c;
        }
    }
    ctx->pc = 0x2A2C04u;
    // 0x2a2c04: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2a2c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2a2c08: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a2c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2a2c0c: 0x2463fa50  addiu       $v1, $v1, -0x5B0
    ctx->pc = 0x2a2c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965840));
    // 0x2a2c10: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2a2c10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2a2c14: 0xac40e418  sw          $zero, -0x1BE8($v0)
    ctx->pc = 0x2a2c14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960152), GPR_U32(ctx, 0));
    // 0x2a2c18: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2a2c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2a2c1c:
    // 0x2a2c1c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a2c1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2a2c20: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A2C20u;
    {
        const bool branch_taken_0x2a2c20 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2a2c20) {
            ctx->pc = 0x2A2C24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2C20u;
            // 0x2a2c24: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A2C34u;
            goto label_2a2c34;
        }
    }
    ctx->pc = 0x2A2C28u;
    // 0x2a2c28: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2A2C28u;
    SET_GPR_U32(ctx, 31, 0x2A2C30u);
    ctx->pc = 0x2A2C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2C28u;
            // 0x2a2c2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2C30u; }
        if (ctx->pc != 0x2A2C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2C30u; }
        if (ctx->pc != 0x2A2C30u) { return; }
    }
    ctx->pc = 0x2A2C30u;
label_2a2c30:
    // 0x2a2c30: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a2c30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a2c34:
    // 0x2a2c34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a2c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2c38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a2c38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2c3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a2c3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2c40: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2C40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2C40u;
            // 0x2a2c44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A2C48u;
    // 0x2a2c48: 0x0  nop
    ctx->pc = 0x2a2c48u;
    // NOP
    // 0x2a2c4c: 0x0  nop
    ctx->pc = 0x2a2c4cu;
    // NOP
label_2a2c50:
    // 0x2a2c50: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2a2c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2a2c54: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x2a2c54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2a2c58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a2c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a2c5c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2a2c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2a2c60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a2c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a2c64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a2c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a2c68: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a2c68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2c6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a2c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a2c70: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2a2c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2a2c74: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2a2c74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a2c78: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2a2c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2a2c7c: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x2a2c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a2c80: 0x8c43dde0  lw          $v1, -0x2220($v0)
    ctx->pc = 0x2a2c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958560)));
    // 0x2a2c84: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x2a2c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2a2c88: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a2c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a2c8c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A2C8Cu;
    {
        const bool branch_taken_0x2a2c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2C8Cu;
            // 0x2a2c90: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2c8c) {
            ctx->pc = 0x2A2CA4u;
            goto label_2a2ca4;
        }
    }
    ctx->pc = 0x2A2C94u;
    // 0x2a2c94: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x2a2c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a2c98: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x2a2c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2a2c9c: 0xc04e888  jal         func_13A220
    ctx->pc = 0x2A2C9Cu;
    SET_GPR_U32(ctx, 31, 0x2A2CA4u);
    ctx->pc = 0x2A2CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2C9Cu;
            // 0x2a2ca0: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A220u;
    if (runtime->hasFunction(0x13A220u)) {
        auto targetFn = runtime->lookupFunction(0x13A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2CA4u; }
        if (ctx->pc != 0x2A2CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A220_0x13a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2CA4u; }
        if (ctx->pc != 0x2A2CA4u) { return; }
    }
    ctx->pc = 0x2A2CA4u;
label_2a2ca4:
    // 0x2a2ca4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2a2ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2a2ca8: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x2a2ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2a2cac: 0x8c42dde8  lw          $v0, -0x2218($v0)
    ctx->pc = 0x2a2cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958568)));
    // 0x2a2cb0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2a2cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a2cb4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2A2CB4u;
    {
        const bool branch_taken_0x2a2cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2cb4) {
            ctx->pc = 0x2A2D04u;
            goto label_2a2d04;
        }
    }
    ctx->pc = 0x2A2CBCu;
    // 0x2a2cbc: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x2a2cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a2cc0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2a2cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a2cc4: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x2a2cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2a2cc8: 0xc04e928  jal         func_13A4A0
    ctx->pc = 0x2A2CC8u;
    SET_GPR_U32(ctx, 31, 0x2A2CD0u);
    ctx->pc = 0x2A2CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2CC8u;
            // 0x2a2ccc: 0x26060024  addiu       $a2, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A4A0u;
    if (runtime->hasFunction(0x13A4A0u)) {
        auto targetFn = runtime->lookupFunction(0x13A4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2CD0u; }
        if (ctx->pc != 0x2A2CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A4A0_0x13a4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2CD0u; }
        if (ctx->pc != 0x2A2CD0u) { return; }
    }
    ctx->pc = 0x2A2CD0u;
label_2a2cd0:
    // 0x2a2cd0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a2cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2cd4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2a2cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a2cd8: 0xc04e9a8  jal         func_13A6A0
    ctx->pc = 0x2A2CD8u;
    SET_GPR_U32(ctx, 31, 0x2A2CE0u);
    ctx->pc = 0x2A2CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2CD8u;
            // 0x2a2cdc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A6A0u;
    if (runtime->hasFunction(0x13A6A0u)) {
        auto targetFn = runtime->lookupFunction(0x13A6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2CE0u; }
        if (ctx->pc != 0x2A2CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A6A0_0x13a6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2CE0u; }
        if (ctx->pc != 0x2A2CE0u) { return; }
    }
    ctx->pc = 0x2A2CE0u;
label_2a2ce0:
    // 0x2a2ce0: 0xc60c0030  lwc1        $f12, 0x30($s0)
    ctx->pc = 0x2a2ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a2ce4: 0xc60d0034  lwc1        $f13, 0x34($s0)
    ctx->pc = 0x2a2ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a2ce8: 0xc60e0038  lwc1        $f14, 0x38($s0)
    ctx->pc = 0x2a2ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2a2cec: 0xc04e8b8  jal         func_13A2E0
    ctx->pc = 0x2A2CECu;
    SET_GPR_U32(ctx, 31, 0x2A2CF4u);
    ctx->pc = 0x2A2CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2CECu;
            // 0x2a2cf0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A2E0u;
    if (runtime->hasFunction(0x13A2E0u)) {
        auto targetFn = runtime->lookupFunction(0x13A2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2CF4u; }
        if (ctx->pc != 0x2A2CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A2E0_0x13a2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2CF4u; }
        if (ctx->pc != 0x2A2CF4u) { return; }
    }
    ctx->pc = 0x2A2CF4u;
label_2a2cf4:
    // 0x2a2cf4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a2cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2cf8: 0xc04e894  jal         func_13A250
    ctx->pc = 0x2A2CF8u;
    SET_GPR_U32(ctx, 31, 0x2A2D00u);
    ctx->pc = 0x2A2CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2CF8u;
            // 0x2a2cfc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A250u;
    if (runtime->hasFunction(0x13A250u)) {
        auto targetFn = runtime->lookupFunction(0x13A250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2D00u; }
        if (ctx->pc != 0x2A2D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A250_0x13a250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2D00u; }
        if (ctx->pc != 0x2A2D00u) { return; }
    }
    ctx->pc = 0x2A2D00u;
label_2a2d00:
    // 0x2a2d00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a2d00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2a2d04:
    // 0x2a2d04: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2a2d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2a2d08: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x2a2d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2a2d0c: 0x8c42ddf0  lw          $v0, -0x2210($v0)
    ctx->pc = 0x2a2d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958576)));
    // 0x2a2d10: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2a2d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a2d14: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A2D14u;
    {
        const bool branch_taken_0x2a2d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2d14) {
            ctx->pc = 0x2A2D60u;
            goto label_2a2d60;
        }
    }
    ctx->pc = 0x2A2D1Cu;
    // 0x2a2d1c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a2d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a2d20: 0x2605003c  addiu       $a1, $s0, 0x3C
    ctx->pc = 0x2a2d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x2a2d24: 0xc04e94c  jal         func_13A530
    ctx->pc = 0x2A2D24u;
    SET_GPR_U32(ctx, 31, 0x2A2D2Cu);
    ctx->pc = 0x2A2D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2D24u;
            // 0x2a2d28: 0x2606004c  addiu       $a2, $s0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A530u;
    if (runtime->hasFunction(0x13A530u)) {
        auto targetFn = runtime->lookupFunction(0x13A530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2D2Cu; }
        if (ctx->pc != 0x2A2D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A530_0x13a530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2D2Cu; }
        if (ctx->pc != 0x2A2D2Cu) { return; }
    }
    ctx->pc = 0x2A2D2Cu;
label_2a2d2c:
    // 0x2a2d2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a2d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2d30: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2a2d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a2d34: 0xc04e9a8  jal         func_13A6A0
    ctx->pc = 0x2A2D34u;
    SET_GPR_U32(ctx, 31, 0x2A2D3Cu);
    ctx->pc = 0x2A2D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2D34u;
            // 0x2a2d38: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A6A0u;
    if (runtime->hasFunction(0x13A6A0u)) {
        auto targetFn = runtime->lookupFunction(0x13A6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2D3Cu; }
        if (ctx->pc != 0x2A2D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A6A0_0x13a6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2D3Cu; }
        if (ctx->pc != 0x2A2D3Cu) { return; }
    }
    ctx->pc = 0x2A2D3Cu;
label_2a2d3c:
    // 0x2a2d3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a2d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2d40: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2a2d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a2d44: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2a2d44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a2d48: 0xc04ecc0  jal         func_13B300
    ctx->pc = 0x2A2D48u;
    SET_GPR_U32(ctx, 31, 0x2A2D50u);
    ctx->pc = 0x2A2D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2D48u;
            // 0x2a2d4c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B300u;
    if (runtime->hasFunction(0x13B300u)) {
        auto targetFn = runtime->lookupFunction(0x13B300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2D50u; }
        if (ctx->pc != 0x2A2D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013B300_0x13b300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2D50u; }
        if (ctx->pc != 0x2A2D50u) { return; }
    }
    ctx->pc = 0x2A2D50u;
label_2a2d50:
    // 0x2a2d50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a2d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2d54: 0xc04e894  jal         func_13A250
    ctx->pc = 0x2A2D54u;
    SET_GPR_U32(ctx, 31, 0x2A2D5Cu);
    ctx->pc = 0x2A2D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2D54u;
            // 0x2a2d58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A250u;
    if (runtime->hasFunction(0x13A250u)) {
        auto targetFn = runtime->lookupFunction(0x13A250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2D5Cu; }
        if (ctx->pc != 0x2A2D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A250_0x13a250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2D5Cu; }
        if (ctx->pc != 0x2A2D5Cu) { return; }
    }
    ctx->pc = 0x2A2D5Cu;
label_2a2d5c:
    // 0x2a2d5c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a2d5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2a2d60:
    // 0x2a2d60: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2a2d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2a2d64: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x2a2d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2a2d68: 0x8c42ddf8  lw          $v0, -0x2208($v0)
    ctx->pc = 0x2a2d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958584)));
    // 0x2a2d6c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2a2d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a2d70: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A2D70u;
    {
        const bool branch_taken_0x2a2d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2d70) {
            ctx->pc = 0x2A2D74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2D70u;
            // 0x2a2d74: 0x9242000c  lbu         $v0, 0xC($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A2DB8u;
            goto label_2a2db8;
        }
    }
    ctx->pc = 0x2A2D78u;
    // 0x2a2d78: 0xc60c0068  lwc1        $f12, 0x68($s0)
    ctx->pc = 0x2a2d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a2d7c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2a2d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a2d80: 0xc60d0078  lwc1        $f13, 0x78($s0)
    ctx->pc = 0x2a2d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a2d84: 0x26050058  addiu       $a1, $s0, 0x58
    ctx->pc = 0x2a2d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x2a2d88: 0xc60e007c  lwc1        $f14, 0x7C($s0)
    ctx->pc = 0x2a2d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2a2d8c: 0xc04e938  jal         func_13A4E0
    ctx->pc = 0x2A2D8Cu;
    SET_GPR_U32(ctx, 31, 0x2A2D94u);
    ctx->pc = 0x2A2D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2D8Cu;
            // 0x2a2d90: 0x2606006c  addiu       $a2, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A4E0u;
    if (runtime->hasFunction(0x13A4E0u)) {
        auto targetFn = runtime->lookupFunction(0x13A4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2D94u; }
        if (ctx->pc != 0x2A2D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A4E0_0x13a4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2D94u; }
        if (ctx->pc != 0x2A2D94u) { return; }
    }
    ctx->pc = 0x2A2D94u;
label_2a2d94:
    // 0x2a2d94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a2d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2d98: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2a2d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a2d9c: 0xc04e9a8  jal         func_13A6A0
    ctx->pc = 0x2A2D9Cu;
    SET_GPR_U32(ctx, 31, 0x2A2DA4u);
    ctx->pc = 0x2A2DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2D9Cu;
            // 0x2a2da0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A6A0u;
    if (runtime->hasFunction(0x13A6A0u)) {
        auto targetFn = runtime->lookupFunction(0x13A6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2DA4u; }
        if (ctx->pc != 0x2A2DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A6A0_0x13a6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2DA4u; }
        if (ctx->pc != 0x2A2DA4u) { return; }
    }
    ctx->pc = 0x2A2DA4u;
label_2a2da4:
    // 0x2a2da4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a2da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2da8: 0xc04e894  jal         func_13A250
    ctx->pc = 0x2A2DA8u;
    SET_GPR_U32(ctx, 31, 0x2A2DB0u);
    ctx->pc = 0x2A2DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2DA8u;
            // 0x2a2dac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A250u;
    if (runtime->hasFunction(0x13A250u)) {
        auto targetFn = runtime->lookupFunction(0x13A250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2DB0u; }
        if (ctx->pc != 0x2A2DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A250_0x13a250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2DB0u; }
        if (ctx->pc != 0x2A2DB0u) { return; }
    }
    ctx->pc = 0x2A2DB0u;
label_2a2db0:
    // 0x2a2db0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a2db0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2a2db4: 0x9242000c  lbu         $v0, 0xC($s2)
    ctx->pc = 0x2a2db4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 12)));
label_2a2db8:
    // 0x2a2db8: 0x222082b  sltu        $at, $s1, $v0
    ctx->pc = 0x2a2db8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2a2dbc: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x2A2DBCu;
    {
        const bool branch_taken_0x2a2dbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2dbc) {
            ctx->pc = 0x2A2DE8u;
            goto label_2a2de8;
        }
    }
    ctx->pc = 0x2A2DC4u;
    // 0x2a2dc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a2dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a2dc8:
    // 0x2a2dc8: 0xc04e894  jal         func_13A250
    ctx->pc = 0x2A2DC8u;
    SET_GPR_U32(ctx, 31, 0x2A2DD0u);
    ctx->pc = 0x2A2DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2DC8u;
            // 0x2a2dcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A250u;
    if (runtime->hasFunction(0x13A250u)) {
        auto targetFn = runtime->lookupFunction(0x13A250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2DD0u; }
        if (ctx->pc != 0x2A2DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A250_0x13a250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2DD0u; }
        if (ctx->pc != 0x2A2DD0u) { return; }
    }
    ctx->pc = 0x2A2DD0u;
label_2a2dd0:
    // 0x2a2dd0: 0x9242000c  lbu         $v0, 0xC($s2)
    ctx->pc = 0x2a2dd0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2a2dd4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a2dd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2a2dd8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2a2dd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2a2ddc: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A2DDCu;
    {
        const bool branch_taken_0x2a2ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a2ddc) {
            ctx->pc = 0x2A2DE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2DDCu;
            // 0x2a2de0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A2DC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a2dc8;
        }
    }
    ctx->pc = 0x2A2DE4u;
    // 0x2a2de4: 0x0  nop
    ctx->pc = 0x2a2de4u;
    // NOP
label_2a2de8:
    // 0x2a2de8: 0xc04f01c  jal         func_13C070
    ctx->pc = 0x2A2DE8u;
    SET_GPR_U32(ctx, 31, 0x2A2DF0u);
    ctx->pc = 0x13C070u;
    if (runtime->hasFunction(0x13C070u)) {
        auto targetFn = runtime->lookupFunction(0x13C070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2DF0u; }
        if (ctx->pc != 0x2A2DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C070_0x13c070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2DF0u; }
        if (ctx->pc != 0x2A2DF0u) { return; }
    }
    ctx->pc = 0x2A2DF0u;
label_2a2df0:
    // 0x2a2df0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a2df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a2df4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a2df4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2df8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a2df8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2dfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a2dfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2e00: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2E00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2E00u;
            // 0x2a2e04: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A2E08u;
    // 0x2a2e08: 0x0  nop
    ctx->pc = 0x2a2e08u;
    // NOP
    // 0x2a2e0c: 0x0  nop
    ctx->pc = 0x2a2e0cu;
    // NOP
label_2a2e10:
    // 0x2a2e10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a2e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a2e14: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a2e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a2e18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a2e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a2e1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a2e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a2e20: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a2e20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2e24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a2e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a2e28: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a2e28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2e2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a2e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a2e30: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2a2e30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2e34: 0xc04e828  jal         func_13A0A0
    ctx->pc = 0x2A2E34u;
    SET_GPR_U32(ctx, 31, 0x2A2E3Cu);
    ctx->pc = 0x2A2E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2E34u;
            // 0x2a2e38: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A0A0u;
    if (runtime->hasFunction(0x13A0A0u)) {
        auto targetFn = runtime->lookupFunction(0x13A0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2E3Cu; }
        if (ctx->pc != 0x2A2E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A0A0_0x13a0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2E3Cu; }
        if (ctx->pc != 0x2A2E3Cu) { return; }
    }
    ctx->pc = 0x2A2E3Cu;
label_2a2e3c:
    // 0x2a2e3c: 0xc04f018  jal         func_13C060
    ctx->pc = 0x2A2E3Cu;
    SET_GPR_U32(ctx, 31, 0x2A2E44u);
    ctx->pc = 0x2A2E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2E3Cu;
            // 0x2a2e40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C060u;
    if (runtime->hasFunction(0x13C060u)) {
        auto targetFn = runtime->lookupFunction(0x13C060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2E44u; }
        if (ctx->pc != 0x2A2E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C060_0x13c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2E44u; }
        if (ctx->pc != 0x2A2E44u) { return; }
    }
    ctx->pc = 0x2A2E44u;
label_2a2e44:
    // 0x2a2e44: 0xc04f01c  jal         func_13C070
    ctx->pc = 0x2A2E44u;
    SET_GPR_U32(ctx, 31, 0x2A2E4Cu);
    ctx->pc = 0x13C070u;
    if (runtime->hasFunction(0x13C070u)) {
        auto targetFn = runtime->lookupFunction(0x13C070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2E4Cu; }
        if (ctx->pc != 0x2A2E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C070_0x13c070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2E4Cu; }
        if (ctx->pc != 0x2A2E4Cu) { return; }
    }
    ctx->pc = 0x2A2E4Cu;
label_2a2e4c:
    // 0x2a2e4c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a2e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2e50: 0x26640004  addiu       $a0, $s3, 0x4
    ctx->pc = 0x2a2e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2a2e54: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a2e54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2e58: 0xc0b90ec  jal         func_2E43B0
    ctx->pc = 0x2A2E58u;
    SET_GPR_U32(ctx, 31, 0x2A2E60u);
    ctx->pc = 0x2A2E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2E58u;
            // 0x2a2e5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E43B0u;
    if (runtime->hasFunction(0x2E43B0u)) {
        auto targetFn = runtime->lookupFunction(0x2E43B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2E60u; }
        if (ctx->pc != 0x2A2E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E43B0_0x2e43b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2E60u; }
        if (ctx->pc != 0x2A2E60u) { return; }
    }
    ctx->pc = 0x2A2E60u;
label_2a2e60:
    // 0x2a2e60: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x2a2e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2a2e64: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A2E64u;
    {
        const bool branch_taken_0x2a2e64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2e64) {
            ctx->pc = 0x2A2E68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2E64u;
            // 0x2a2e68: 0x112080  sll         $a0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A2E78u;
            goto label_2a2e78;
        }
    }
    ctx->pc = 0x2A2E6Cu;
    // 0x2a2e6c: 0xc04008c  jal         func_100230
    ctx->pc = 0x2A2E6Cu;
    SET_GPR_U32(ctx, 31, 0x2A2E74u);
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2E74u; }
        if (ctx->pc != 0x2A2E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2E74u; }
        if (ctx->pc != 0x2A2E74u) { return; }
    }
    ctx->pc = 0x2A2E74u;
label_2a2e74:
    // 0x2a2e74: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x2a2e74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2a2e78:
    // 0x2a2e78: 0xc040110  jal         func_100440
    ctx->pc = 0x2A2E78u;
    SET_GPR_U32(ctx, 31, 0x2A2E80u);
    ctx->pc = 0x2A2E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2E78u;
            // 0x2a2e7c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100440u;
    if (runtime->hasFunction(0x100440u)) {
        auto targetFn = runtime->lookupFunction(0x100440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2E80u; }
        if (ctx->pc != 0x2A2E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100440_0x100440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2E80u; }
        if (ctx->pc != 0x2A2E80u) { return; }
    }
    ctx->pc = 0x2A2E80u;
label_2a2e80:
    // 0x2a2e80: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x2a2e80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x2a2e84: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a2e84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2e88:
    // 0x2a2e88: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2a2e88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2a2e8c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2a2e8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2a2e90: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2a2e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2a2e94: 0x0  nop
    ctx->pc = 0x2a2e94u;
    // NOP
    // 0x2a2e98: 0x0  nop
    ctx->pc = 0x2a2e98u;
    // NOP
    // 0x2a2e9c: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A2E9Cu;
    {
        const bool branch_taken_0x2a2e9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a2e9c) {
            ctx->pc = 0x2A2E88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a2e88;
        }
    }
    ctx->pc = 0x2A2EA4u;
    // 0x2a2ea4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a2ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a2ea8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a2ea8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a2eac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a2eacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2eb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a2eb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2eb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a2eb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2EB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2EB8u;
            // 0x2a2ebc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A2EC0u;
    // 0x2a2ec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a2ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a2ec4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a2ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a2ec8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a2ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a2ecc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a2eccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2ed0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2A2ED0u;
    {
        const bool branch_taken_0x2a2ed0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2ed0) {
            ctx->pc = 0x2A2ED4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2ED0u;
            // 0x2a2ed4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A2F04u;
            goto label_2a2f04;
        }
    }
    ctx->pc = 0x2A2ED8u;
    // 0x2a2ed8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a2ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2a2edc: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x2a2edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2a2ee0: 0x2442fa50  addiu       $v0, $v0, -0x5B0
    ctx->pc = 0x2a2ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965840));
    // 0x2a2ee4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2a2ee4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2a2ee8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2a2ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2a2eec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a2eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2a2ef0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A2EF0u;
    {
        const bool branch_taken_0x2a2ef0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2A2EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2EF0u;
            // 0x2a2ef4: 0xac40e418  sw          $zero, -0x1BE8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294960152), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2ef0) {
            ctx->pc = 0x2A2F00u;
            goto label_2a2f00;
        }
    }
    ctx->pc = 0x2A2EF8u;
    // 0x2a2ef8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2A2EF8u;
    SET_GPR_U32(ctx, 31, 0x2A2F00u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2F00u; }
        if (ctx->pc != 0x2A2F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2F00u; }
        if (ctx->pc != 0x2A2F00u) { return; }
    }
    ctx->pc = 0x2A2F00u;
label_2a2f00:
    // 0x2a2f00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a2f00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a2f04:
    // 0x2a2f04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a2f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2f08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a2f08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2F0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2F0Cu;
            // 0x2a2f10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A2F14u;
    // 0x2a2f14: 0x0  nop
    ctx->pc = 0x2a2f14u;
    // NOP
    // 0x2a2f18: 0x0  nop
    ctx->pc = 0x2a2f18u;
    // NOP
    // 0x2a2f1c: 0x0  nop
    ctx->pc = 0x2a2f1cu;
    // NOP
    // 0x2a2f20: 0x80a8b14  j           func_2A2C50
    ctx->pc = 0x2A2F20u;
    ctx->pc = 0x2A2F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2F20u;
            // 0x2a2f24: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2C50u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_2a2c50;
    ctx->pc = 0x2A2F28u;
    // 0x2a2f28: 0x0  nop
    ctx->pc = 0x2a2f28u;
    // NOP
    // 0x2a2f2c: 0x0  nop
    ctx->pc = 0x2a2f2cu;
    // NOP
    // 0x2a2f30: 0x80a8ae4  j           func_2A2B90
    ctx->pc = 0x2A2F30u;
    ctx->pc = 0x2A2F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2F30u;
            // 0x2a2f34: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2B90u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_2a2b90;
    ctx->pc = 0x2A2F38u;
    // 0x2a2f38: 0x0  nop
    ctx->pc = 0x2a2f38u;
    // NOP
    // 0x2a2f3c: 0x0  nop
    ctx->pc = 0x2a2f3cu;
    // NOP
    // 0x2a2f40: 0x80a8b84  j           func_2A2E10
    ctx->pc = 0x2A2F40u;
    ctx->pc = 0x2A2F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2F40u;
            // 0x2a2f44: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2E10u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_2a2e10;
    ctx->pc = 0x2A2F48u;
    // 0x2a2f48: 0x0  nop
    ctx->pc = 0x2a2f48u;
    // NOP
    // 0x2a2f4c: 0x0  nop
    ctx->pc = 0x2a2f4cu;
    // NOP
    // 0x2a2f50: 0x80a8ae8  j           func_2A2BA0
    ctx->pc = 0x2A2F50u;
    ctx->pc = 0x2A2F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2F50u;
            // 0x2a2f54: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2BA0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_2a2ba0;
    ctx->pc = 0x2A2F58u;
    // 0x2a2f58: 0x0  nop
    ctx->pc = 0x2a2f58u;
    // NOP
    // 0x2a2f5c: 0x0  nop
    ctx->pc = 0x2a2f5cu;
    // NOP
}
