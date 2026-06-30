#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A0980
// Address: 0x3a0980 - 0x3a0ab0
void sub_003A0980_0x3a0980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0980_0x3a0980");
#endif

    switch (ctx->pc) {
        case 0x3a09bcu: goto label_3a09bc;
        case 0x3a09ccu: goto label_3a09cc;
        case 0x3a09dcu: goto label_3a09dc;
        case 0x3a09e8u: goto label_3a09e8;
        case 0x3a09f8u: goto label_3a09f8;
        case 0x3a0a10u: goto label_3a0a10;
        case 0x3a0a74u: goto label_3a0a74;
        default: break;
    }

    ctx->pc = 0x3a0980u;

    // 0x3a0980: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3a0980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3a0984: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a0984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a0988: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a0988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a098c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3a098cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x3a0990: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a0990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3a0994: 0xac830060  sw          $v1, 0x60($a0)
    ctx->pc = 0x3a0994u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 3));
    // 0x3a0998: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x3a0998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x3a099c: 0xac830078  sw          $v1, 0x78($a0)
    ctx->pc = 0x3a099cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 3));
    // 0x3a09a0: 0x8c42f340  lw          $v0, -0xCC0($v0)
    ctx->pc = 0x3a09a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964032)));
    // 0x3a09a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3a09a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3a09a8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3A09A8u;
    {
        const bool branch_taken_0x3a09a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A09ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A09A8u;
            // 0x3a09ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a09a8) {
            ctx->pc = 0x3A0A00u;
            goto label_3a0a00;
        }
    }
    ctx->pc = 0x3A09B0u;
    // 0x3a09b0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3a09b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3a09b4: 0xc04f29c  jal         func_13CA70
    ctx->pc = 0x3A09B4u;
    SET_GPR_U32(ctx, 31, 0x3A09BCu);
    ctx->pc = 0x3A09B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A09B4u;
            // 0x3a09b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CA70u;
    if (runtime->hasFunction(0x13CA70u)) {
        auto targetFn = runtime->lookupFunction(0x13CA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A09BCu; }
        if (ctx->pc != 0x3A09BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CA70_0x13ca70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A09BCu; }
        if (ctx->pc != 0x3A09BCu) { return; }
    }
    ctx->pc = 0x3A09BCu;
label_3a09bc:
    // 0x3a09bc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3a09bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3a09c0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3a09c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3a09c4: 0xc04cdf0  jal         func_1337C0
    ctx->pc = 0x3A09C4u;
    SET_GPR_U32(ctx, 31, 0x3A09CCu);
    ctx->pc = 0x3A09C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A09C4u;
            // 0x3a09c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1337C0u;
    if (runtime->hasFunction(0x1337C0u)) {
        auto targetFn = runtime->lookupFunction(0x1337C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A09CCu; }
        if (ctx->pc != 0x3A09CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001337C0_0x1337c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A09CCu; }
        if (ctx->pc != 0x3A09CCu) { return; }
    }
    ctx->pc = 0x3A09CCu;
label_3a09cc:
    // 0x3a09cc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3a09ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3a09d0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3a09d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3a09d4: 0xc04cdd0  jal         func_133740
    ctx->pc = 0x3A09D4u;
    SET_GPR_U32(ctx, 31, 0x3A09DCu);
    ctx->pc = 0x3A09D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A09D4u;
            // 0x3a09d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133740u;
    if (runtime->hasFunction(0x133740u)) {
        auto targetFn = runtime->lookupFunction(0x133740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A09DCu; }
        if (ctx->pc != 0x3A09DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133740_0x133740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A09DCu; }
        if (ctx->pc != 0x3A09DCu) { return; }
    }
    ctx->pc = 0x3A09DCu;
label_3a09dc:
    // 0x3a09dc: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3a09dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3a09e0: 0xc04c994  jal         func_132650
    ctx->pc = 0x3A09E0u;
    SET_GPR_U32(ctx, 31, 0x3A09E8u);
    ctx->pc = 0x3A09E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A09E0u;
            // 0x3a09e4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132650u;
    if (runtime->hasFunction(0x132650u)) {
        auto targetFn = runtime->lookupFunction(0x132650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A09E8u; }
        if (ctx->pc != 0x3A09E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132650_0x132650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A09E8u; }
        if (ctx->pc != 0x3A09E8u) { return; }
    }
    ctx->pc = 0x3A09E8u;
label_3a09e8:
    // 0x3a09e8: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x3a09e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x3a09ec: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x3a09ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x3a09f0: 0xc04cb1c  jal         func_132C70
    ctx->pc = 0x3A09F0u;
    SET_GPR_U32(ctx, 31, 0x3A09F8u);
    ctx->pc = 0x3A09F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A09F0u;
            // 0x3a09f4: 0x24450018  addiu       $a1, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A09F8u; }
        if (ctx->pc != 0x3A09F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A09F8u; }
        if (ctx->pc != 0x3A09F8u) { return; }
    }
    ctx->pc = 0x3A09F8u;
label_3a09f8:
    // 0x3a09f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3A09F8u;
    {
        const bool branch_taken_0x3a09f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a09f8) {
            ctx->pc = 0x3A0A10u;
            goto label_3a0a10;
        }
    }
    ctx->pc = 0x3A0A00u;
label_3a0a00:
    // 0x3a0a00: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x3a0a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x3a0a04: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x3a0a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x3a0a08: 0xc04cb1c  jal         func_132C70
    ctx->pc = 0x3A0A08u;
    SET_GPR_U32(ctx, 31, 0x3A0A10u);
    ctx->pc = 0x3A0A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0A08u;
            // 0x3a0a0c: 0x2445000c  addiu       $a1, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0A10u; }
        if (ctx->pc != 0x3A0A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0A10u; }
        if (ctx->pc != 0x3A0A10u) { return; }
    }
    ctx->pc = 0x3A0A10u;
label_3a0a10:
    // 0x3a0a10: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3a0a10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x3a0a14: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x3a0a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x3a0a18: 0x8c63f348  lw          $v1, -0xCB8($v1)
    ctx->pc = 0x3a0a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964040)));
    // 0x3a0a1c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3a0a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3a0a20: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A0A20u;
    {
        const bool branch_taken_0x3a0a20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0a20) {
            ctx->pc = 0x3A0A24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0A20u;
            // 0x3a0a24: 0x8e03003c  lw          $v1, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A0A30u;
            goto label_3a0a30;
        }
    }
    ctx->pc = 0x3A0A28u;
    // 0x3a0a28: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x3a0a28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x3a0a2c: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x3a0a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_3a0a30:
    // 0x3a0a30: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x3a0a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a0a34: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x3a0a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x3a0a38: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x3a0a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x3a0a3c: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x3a0a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a0a40: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x3a0a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x3a0a44: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x3a0a44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x3a0a48: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x3a0a48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x3a0a4c: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x3a0a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x3a0a50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a0a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a0a54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a0a54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a0a58: 0x3e00008  jr          $ra
    ctx->pc = 0x3A0A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0A58u;
            // 0x3a0a5c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A0A60u;
    // 0x3a0a60: 0x8c860070  lw          $a2, 0x70($a0)
    ctx->pc = 0x3a0a60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x3a0a64: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x3A0A64u;
    {
        const bool branch_taken_0x3a0a64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0a64) {
            ctx->pc = 0x3A0AA0u;
            goto label_3a0aa0;
        }
    }
    ctx->pc = 0x3A0A6Cu;
    // 0x3a0a6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a0a6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0a70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a0a70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a0a74:
    // 0x3a0a74: 0x8c850074  lw          $a1, 0x74($a0)
    ctx->pc = 0x3a0a74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x3a0a78: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3a0a78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3a0a7c: 0x106182b  sltu        $v1, $t0, $a2
    ctx->pc = 0x3a0a7cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3a0a80: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x3a0a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x3a0a84: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x3a0a84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a0a88: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3a0a88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x3a0a8c: 0xaca00060  sw          $zero, 0x60($a1)
    ctx->pc = 0x3a0a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 0));
    // 0x3a0a90: 0xaca00070  sw          $zero, 0x70($a1)
    ctx->pc = 0x3a0a90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 112), GPR_U32(ctx, 0));
    // 0x3a0a94: 0xaca0006c  sw          $zero, 0x6C($a1)
    ctx->pc = 0x3a0a94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 108), GPR_U32(ctx, 0));
    // 0x3a0a98: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x3A0A98u;
    {
        const bool branch_taken_0x3a0a98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A0A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0A98u;
            // 0x3a0a9c: 0xaca00068  sw          $zero, 0x68($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0a98) {
            ctx->pc = 0x3A0A74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a0a74;
        }
    }
    ctx->pc = 0x3A0AA0u;
label_3a0aa0:
    // 0x3a0aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A0AA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A0AA8u;
    // 0x3a0aa8: 0x0  nop
    ctx->pc = 0x3a0aa8u;
    // NOP
    // 0x3a0aac: 0x0  nop
    ctx->pc = 0x3a0aacu;
    // NOP
}
