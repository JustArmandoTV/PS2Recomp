#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D0D10
// Address: 0x1d0d10 - 0x1d0e00
void sub_001D0D10_0x1d0d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0D10_0x1d0d10");
#endif

    switch (ctx->pc) {
        case 0x1d0d34u: goto label_1d0d34;
        case 0x1d0d48u: goto label_1d0d48;
        case 0x1d0d5cu: goto label_1d0d5c;
        case 0x1d0d64u: goto label_1d0d64;
        case 0x1d0d6cu: goto label_1d0d6c;
        case 0x1d0d80u: goto label_1d0d80;
        case 0x1d0d94u: goto label_1d0d94;
        case 0x1d0da8u: goto label_1d0da8;
        case 0x1d0dbcu: goto label_1d0dbc;
        case 0x1d0dd4u: goto label_1d0dd4;
        default: break;
    }

    ctx->pc = 0x1d0d10u;

    // 0x1d0d10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d0d14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0d18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d0d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d0d1c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1d0d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1d0d20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d0d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d0d24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d0d24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0d28: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1d0d28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x1d0d2c: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1D0D2Cu;
    SET_GPR_U32(ctx, 31, 0x1D0D34u);
    ctx->pc = 0x1D0D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0D2Cu;
            // 0x1d0d30: 0x24849820  addiu       $a0, $a0, -0x67E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0D34u; }
        if (ctx->pc != 0x1D0D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0D34u; }
        if (ctx->pc != 0x1D0D34u) { return; }
    }
    ctx->pc = 0x1D0D34u;
label_1d0d34:
    // 0x1d0d34: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x1d0d34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
    // 0x1d0d38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d0d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0d3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0d40: 0xc04802e  jal         func_1200B8
    ctx->pc = 0x1D0D40u;
    SET_GPR_U32(ctx, 31, 0x1D0D48u);
    ctx->pc = 0x1D0D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0D40u;
            // 0x1d0d44: 0x24c69940  addiu       $a2, $a2, -0x66C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1200B8u;
    if (runtime->hasFunction(0x1200B8u)) {
        auto targetFn = runtime->lookupFunction(0x1200B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0D48u; }
        if (ctx->pc != 0x1D0D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001200B8_0x1200b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0D48u; }
        if (ctx->pc != 0x1D0D48u) { return; }
    }
    ctx->pc = 0x1D0D48u;
label_1d0d48:
    // 0x1d0d48: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x1d0d48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
    // 0x1d0d4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d0d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0d50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0d54: 0xc04802e  jal         func_1200B8
    ctx->pc = 0x1D0D54u;
    SET_GPR_U32(ctx, 31, 0x1D0D5Cu);
    ctx->pc = 0x1D0D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0D54u;
            // 0x1d0d58: 0x24c69d40  addiu       $a2, $a2, -0x62C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1200B8u;
    if (runtime->hasFunction(0x1200B8u)) {
        auto targetFn = runtime->lookupFunction(0x1200B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0D5Cu; }
        if (ctx->pc != 0x1D0D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001200B8_0x1200b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0D5Cu; }
        if (ctx->pc != 0x1D0D5Cu) { return; }
    }
    ctx->pc = 0x1D0D5Cu;
label_1d0d5c:
    // 0x1d0d5c: 0xc074434  jal         func_1D10D0
    ctx->pc = 0x1D0D5Cu;
    SET_GPR_U32(ctx, 31, 0x1D0D64u);
    ctx->pc = 0x1D0D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0D5Cu;
            // 0x1d0d60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D10D0u;
    if (runtime->hasFunction(0x1D10D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D10D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0D64u; }
        if (ctx->pc != 0x1D0D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D10D0_0x1d10d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0D64u; }
        if (ctx->pc != 0x1D0D64u) { return; }
    }
    ctx->pc = 0x1D0D64u;
label_1d0d64:
    // 0x1d0d64: 0xc074434  jal         func_1D10D0
    ctx->pc = 0x1D0D64u;
    SET_GPR_U32(ctx, 31, 0x1D0D6Cu);
    ctx->pc = 0x1D0D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0D64u;
            // 0x1d0d68: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D10D0u;
    if (runtime->hasFunction(0x1D10D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D10D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0D6Cu; }
        if (ctx->pc != 0x1D0D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D10D0_0x1d10d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0D6Cu; }
        if (ctx->pc != 0x1D0D6Cu) { return; }
    }
    ctx->pc = 0x1D0D6Cu;
label_1d0d6c:
    // 0x1d0d6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d0d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0d70: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x1d0d70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
    // 0x1d0d74: 0x24c69e40  addiu       $a2, $a2, -0x61C0
    ctx->pc = 0x1d0d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942272));
    // 0x1d0d78: 0xc04802e  jal         func_1200B8
    ctx->pc = 0x1D0D78u;
    SET_GPR_U32(ctx, 31, 0x1D0D80u);
    ctx->pc = 0x1D0D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0D78u;
            // 0x1d0d7c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1200B8u;
    if (runtime->hasFunction(0x1200B8u)) {
        auto targetFn = runtime->lookupFunction(0x1200B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0D80u; }
        if (ctx->pc != 0x1D0D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001200B8_0x1200b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0D80u; }
        if (ctx->pc != 0x1D0D80u) { return; }
    }
    ctx->pc = 0x1D0D80u;
label_1d0d80:
    // 0x1d0d80: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x1d0d80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
    // 0x1d0d84: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d0d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0d88: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d0d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d0d8c: 0xc04802e  jal         func_1200B8
    ctx->pc = 0x1D0D8Cu;
    SET_GPR_U32(ctx, 31, 0x1D0D94u);
    ctx->pc = 0x1D0D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0D8Cu;
            // 0x1d0d90: 0x24c69f40  addiu       $a2, $a2, -0x60C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1200B8u;
    if (runtime->hasFunction(0x1200B8u)) {
        auto targetFn = runtime->lookupFunction(0x1200B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0D94u; }
        if (ctx->pc != 0x1D0D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001200B8_0x1200b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0D94u; }
        if (ctx->pc != 0x1D0D94u) { return; }
    }
    ctx->pc = 0x1D0D94u;
label_1d0d94:
    // 0x1d0d94: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x1d0d94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
    // 0x1d0d98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d0d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0d9c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1d0d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d0da0: 0xc04802e  jal         func_1200B8
    ctx->pc = 0x1D0DA0u;
    SET_GPR_U32(ctx, 31, 0x1D0DA8u);
    ctx->pc = 0x1D0DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0DA0u;
            // 0x1d0da4: 0x24c6a040  addiu       $a2, $a2, -0x5FC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1200B8u;
    if (runtime->hasFunction(0x1200B8u)) {
        auto targetFn = runtime->lookupFunction(0x1200B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0DA8u; }
        if (ctx->pc != 0x1D0DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001200B8_0x1200b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0DA8u; }
        if (ctx->pc != 0x1D0DA8u) { return; }
    }
    ctx->pc = 0x1D0DA8u;
label_1d0da8:
    // 0x1d0da8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1d0da8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x1d0dac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0db0: 0x24849760  addiu       $a0, $a0, -0x68A0
    ctx->pc = 0x1d0db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940512));
    // 0x1d0db4: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1D0DB4u;
    SET_GPR_U32(ctx, 31, 0x1D0DBCu);
    ctx->pc = 0x1D0DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0DB4u;
            // 0x1d0db8: 0x240600c0  addiu       $a2, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0DBCu; }
        if (ctx->pc != 0x1D0DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0DBCu; }
        if (ctx->pc != 0x1D0DBCu) { return; }
    }
    ctx->pc = 0x1D0DBCu;
label_1d0dbc:
    // 0x1d0dbc: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x1d0dbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
    // 0x1d0dc0: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1d0dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1d0dc4: 0x24e79760  addiu       $a3, $a3, -0x68A0
    ctx->pc = 0x1d0dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940512));
    // 0x1d0dc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d0dc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0dcc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d0dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d0dd0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1d0dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d0dd4:
    // 0x1d0dd4: 0xa0e6001c  sb          $a2, 0x1C($a3)
    ctx->pc = 0x1d0dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 28), (uint8_t)GPR_U32(ctx, 6));
    // 0x1d0dd8: 0xace50018  sw          $a1, 0x18($a3)
    ctx->pc = 0x1d0dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 5));
    // 0x1d0ddc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1d0ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1d0de0: 0xa0e4001e  sb          $a0, 0x1E($a3)
    ctx->pc = 0x1d0de0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 30), (uint8_t)GPR_U32(ctx, 4));
    // 0x1d0de4: 0x2cc30004  sltiu       $v1, $a2, 0x4
    ctx->pc = 0x1d0de4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1d0de8: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D0DE8u;
    {
        const bool branch_taken_0x1d0de8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0DE8u;
            // 0x1d0dec: 0x24e70030  addiu       $a3, $a3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0de8) {
            ctx->pc = 0x1D0DD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d0dd4;
        }
    }
    ctx->pc = 0x1D0DF0u;
    // 0x1d0df0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d0df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0df4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d0df4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0df8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0DF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0DF8u;
            // 0x1d0dfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D0E00u;
}
