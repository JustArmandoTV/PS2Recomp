#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010AFE8
// Address: 0x10afe8 - 0x10b6e0
void sub_0010AFE8_0x10afe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010AFE8_0x10afe8");
#endif

    switch (ctx->pc) {
        case 0x10b034u: goto label_10b034;
        case 0x10b060u: goto label_10b060;
        case 0x10b0a0u: goto label_10b0a0;
        case 0x10b0c8u: goto label_10b0c8;
        case 0x10b108u: goto label_10b108;
        case 0x10b124u: goto label_10b124;
        case 0x10b12cu: goto label_10b12c;
        case 0x10b168u: goto label_10b168;
        case 0x10b1a8u: goto label_10b1a8;
        case 0x10b1ccu: goto label_10b1cc;
        case 0x10b210u: goto label_10b210;
        case 0x10b26cu: goto label_10b26c;
        case 0x10b278u: goto label_10b278;
        case 0x10b2a0u: goto label_10b2a0;
        case 0x10b2d4u: goto label_10b2d4;
        case 0x10b2dcu: goto label_10b2dc;
        case 0x10b2e8u: goto label_10b2e8;
        case 0x10b2f8u: goto label_10b2f8;
        case 0x10b338u: goto label_10b338;
        case 0x10b358u: goto label_10b358;
        case 0x10b37cu: goto label_10b37c;
        case 0x10b3c0u: goto label_10b3c0;
        case 0x10b41cu: goto label_10b41c;
        case 0x10b428u: goto label_10b428;
        case 0x10b450u: goto label_10b450;
        case 0x10b484u: goto label_10b484;
        case 0x10b498u: goto label_10b498;
        default: break;
    }

    ctx->pc = 0x10afe8u;

    // 0x10afe8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x10afe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x10afec: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x10afecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10aff0: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x10aff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x10aff4: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x10aff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x10aff8: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x10aff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x10affc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x10affcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b000: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x10b000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x10b004: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10b004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b008: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x10b008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x10b00c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10b00cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b010: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x10b010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x10b014: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x10b014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x10b018: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x10b018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x10b01c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x10b01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x10b020: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x10b020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x10b024: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x10b024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x10b028: 0x629818  mult        $s3, $v1, $v0
    ctx->pc = 0x10b028u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x10b02c: 0xc0427c0  jal         func_109F00
    ctx->pc = 0x10B02Cu;
    SET_GPR_U32(ctx, 31, 0x10B034u);
    ctx->pc = 0x10B030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B02Cu;
            // 0x10b030: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109F00u;
    if (runtime->hasFunction(0x109F00u)) {
        auto targetFn = runtime->lookupFunction(0x109F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B034u; }
        if (ctx->pc != 0x10B034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109F00_0x109f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B034u; }
        if (ctx->pc != 0x10B034u) { return; }
    }
    ctx->pc = 0x10B034u;
label_10b034:
    // 0x10b034: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10b034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10b038: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10b038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x10b03c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10b03cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x10b040: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x10b040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x10b044: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10B044u;
    {
        const bool branch_taken_0x10b044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B044u;
            // 0x10b048: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b044) {
            ctx->pc = 0x10B054u;
            goto label_10b054;
        }
    }
    ctx->pc = 0x10B04Cu;
    // 0x10b04c: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x10b04cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x10b050: 0xac222010  sw          $v0, 0x2010($at)
    ctx->pc = 0x10b050u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 2)); // MMIO: 0x10002010
label_10b054:
    // 0x10b054: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10b054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10b058: 0x2a750400  slti        $s5, $s3, 0x400
    ctx->pc = 0x10b058u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x10b05c: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10b05cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
label_10b060:
    // 0x10b060: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10b060u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x10b064: 0x0  nop
    ctx->pc = 0x10b064u;
    // NOP
    // 0x10b068: 0x0  nop
    ctx->pc = 0x10b068u;
    // NOP
    // 0x10b06c: 0x0  nop
    ctx->pc = 0x10b06cu;
    // NOP
    // 0x10b070: 0x0  nop
    ctx->pc = 0x10b070u;
    // NOP
    // 0x10b074: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10B074u;
    {
        const bool branch_taken_0x10b074 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10b074) {
            ctx->pc = 0x10B060u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10b060;
        }
    }
    ctx->pc = 0x10B07Cu;
    // 0x10b07c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10b07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10b080: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10b080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b084: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x10b084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x10b088: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10b088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10b08c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x10b08cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x10b090: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x10b090u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
    // 0x10b094: 0xae030828  sw          $v1, 0x828($s0)
    ctx->pc = 0x10b094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 3));
    // 0x10b098: 0xae00082c  sw          $zero, 0x82C($s0)
    ctx->pc = 0x10b098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
    // 0x10b09c: 0x0  nop
    ctx->pc = 0x10b09cu;
    // NOP
label_10b0a0:
    // 0x10b0a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10b0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10b0a4: 0x0  nop
    ctx->pc = 0x10b0a4u;
    // NOP
    // 0x10b0a8: 0x0  nop
    ctx->pc = 0x10b0a8u;
    // NOP
    // 0x10b0ac: 0x0  nop
    ctx->pc = 0x10b0acu;
    // NOP
    // 0x10b0b0: 0x0  nop
    ctx->pc = 0x10b0b0u;
    // NOP
    // 0x10b0b4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10B0B4u;
    {
        const bool branch_taken_0x10b0b4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10b0b4) {
            ctx->pc = 0x10B0A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10b0a0;
        }
    }
    ctx->pc = 0x10B0BCu;
    // 0x10b0bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10b0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b0c0: 0xc043178  jal         func_10C5E0
    ctx->pc = 0x10B0C0u;
    SET_GPR_U32(ctx, 31, 0x10B0C8u);
    ctx->pc = 0x10B0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B0C0u;
            // 0x10b0c4: 0x3c110fff  lui         $s1, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C5E0u;
    if (runtime->hasFunction(0x10C5E0u)) {
        auto targetFn = runtime->lookupFunction(0x10C5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B0C8u; }
        if (ctx->pc != 0x10B0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C5E0_0x10c5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B0C8u; }
        if (ctx->pc != 0x10B0C8u) { return; }
    }
    ctx->pc = 0x10B0C8u;
label_10b0c8:
    // 0x10b0c8: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x10b0c8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x10b0cc: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x10b0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x10b0d0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x10b0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10b0d4: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x10b0d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10b0d8: 0x3414ffff  ori         $s4, $zero, 0xFFFF
    ctx->pc = 0x10b0d8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x10b0dc: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x10b0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x10b0e0: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x10b0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x10b0e4: 0x283202b  sltu        $a0, $s4, $v1
    ctx->pc = 0x10b0e4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x10b0e8: 0x10800081  beqz        $a0, . + 4 + (0x81 << 2)
    ctx->pc = 0x10B0E8u;
    {
        const bool branch_taken_0x10b0e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B0E8u;
            // 0x10b0ec: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b0e8) {
            ctx->pc = 0x10B2F0u;
            goto label_10b2f0;
        }
    }
    ctx->pc = 0x10B0F0u;
    // 0x10b0f0: 0x3c050011  lui         $a1, 0x11
    ctx->pc = 0x10b0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17 << 16));
    // 0x10b0f4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x10b0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10b0f8: 0x24a5b608  addiu       $a1, $a1, -0x49F8
    ctx->pc = 0x10b0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948360));
    // 0x10b0fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10b0fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b100: 0xc043020  jal         func_10C080
    ctx->pc = 0x10B100u;
    SET_GPR_U32(ctx, 31, 0x10B108u);
    ctx->pc = 0x10B104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B100u;
            // 0x10b104: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C080u;
    if (runtime->hasFunction(0x10C080u)) {
        auto targetFn = runtime->lookupFunction(0x10C080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B108u; }
        if (ctx->pc != 0x10B108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C080_0x10c080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B108u; }
        if (ctx->pc != 0x10B108u) { return; }
    }
    ctx->pc = 0x10B108u;
label_10b108:
    // 0x10b108: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x10b108u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b10c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x10b10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10b110: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10b110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10b114: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x10b114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10b118: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x10b118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x10b11c: 0xc0433de  jal         func_10CF78
    ctx->pc = 0x10B11Cu;
    SET_GPR_U32(ctx, 31, 0x10B124u);
    ctx->pc = 0x10B120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B11Cu;
            // 0x10b120: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CF78u;
    if (runtime->hasFunction(0x10CF78u)) {
        auto targetFn = runtime->lookupFunction(0x10CF78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B124u; }
        if (ctx->pc != 0x10B124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CF78_0x10cf78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B124u; }
        if (ctx->pc != 0x10B124u) { return; }
    }
    ctx->pc = 0x10B124u;
label_10b124:
    // 0x10b124: 0xc045968  jal         func_1165A0
    ctx->pc = 0x10B124u;
    SET_GPR_U32(ctx, 31, 0x10B12Cu);
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B12Cu; }
        if (ctx->pc != 0x10B12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B12Cu; }
        if (ctx->pc != 0x10B12Cu) { return; }
    }
    ctx->pc = 0x10B12Cu;
label_10b12c:
    // 0x10b12c: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x10b12cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x10b130: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10b130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10b134: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x10b134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46096);
    // 0x10b138: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10b138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10b13c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x10b13cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x10b140: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x10b140u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x10b144: 0xac940000  sw          $s4, 0x0($a0)
    ctx->pc = 0x10b144u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 20)); // MMIO: 0x10000000
    // 0x10b148: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10b148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10b14c: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x10b14cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x10b150: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x10b150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x10b154: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x10b154u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x10b158: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10B158u;
    {
        const bool branch_taken_0x10b158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B15Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B158u;
            // 0x10b15c: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b158) {
            ctx->pc = 0x10B16Cu;
            goto label_10b16c;
        }
    }
    ctx->pc = 0x10B160u;
    // 0x10b160: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x10B160u;
    SET_GPR_U32(ctx, 31, 0x10B168u);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B168u; }
        if (ctx->pc != 0x10B168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B168u; }
        if (ctx->pc != 0x10B168u) { return; }
    }
    ctx->pc = 0x10B168u;
label_10b168:
    // 0x10b168: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x10b168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_10b16c:
    // 0x10b16c: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x10b16cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x10b170: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10b170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b174: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x10b174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x10b178: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10b178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10b17c: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x10b17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x10b180: 0x942023  subu        $a0, $a0, $s4
    ctx->pc = 0x10b180u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x10b184: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x10b184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x10b188: 0x12a0004e  beqz        $s5, . + 4 + (0x4E << 2)
    ctx->pc = 0x10B188u;
    {
        const bool branch_taken_0x10b188 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B188u;
            // 0x10b18c: 0xafa40020  sw          $a0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b188) {
            ctx->pc = 0x10B2C4u;
            goto label_10b2c4;
        }
    }
    ctx->pc = 0x10B190u;
    // 0x10b190: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10b190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10b194: 0x8e1100ec  lw          $s1, 0xEC($s0)
    ctx->pc = 0x10b194u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x10b198: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x10b198u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10b19c: 0x139180  sll         $s2, $s3, 6
    ctx->pc = 0x10b19cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x10b1a0: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10b1a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x10b1a4: 0x0  nop
    ctx->pc = 0x10b1a4u;
    // NOP
label_10b1a8:
    // 0x10b1a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10b1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10b1ac: 0x0  nop
    ctx->pc = 0x10b1acu;
    // NOP
    // 0x10b1b0: 0x0  nop
    ctx->pc = 0x10b1b0u;
    // NOP
    // 0x10b1b4: 0x0  nop
    ctx->pc = 0x10b1b4u;
    // NOP
    // 0x10b1b8: 0x0  nop
    ctx->pc = 0x10b1b8u;
    // NOP
    // 0x10b1bc: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10B1BCu;
    {
        const bool branch_taken_0x10b1bc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10b1bc) {
            ctx->pc = 0x10B1A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10b1a8;
        }
    }
    ctx->pc = 0x10B1C4u;
    // 0x10b1c4: 0xc045968  jal         func_1165A0
    ctx->pc = 0x10B1C4u;
    SET_GPR_U32(ctx, 31, 0x10B1CCu);
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B1CCu; }
        if (ctx->pc != 0x10B1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B1CCu; }
        if (ctx->pc != 0x10B1CCu) { return; }
    }
    ctx->pc = 0x10B1CCu;
label_10b1cc:
    // 0x10b1cc: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x10b1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x10b1d0: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10b1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10b1d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10b1d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x10b1d8: 0x34a5b010  ori         $a1, $a1, 0xB010
    ctx->pc = 0x10b1d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45072);
    // 0x10b1dc: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x10b1dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x10b1e0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10b1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10b1e4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x10b1e4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x10b1e8: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x10b1e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x10b1ec: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x10b1ecu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 18)); // MMIO: 0x10000000
    // 0x10b1f0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10b1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10b1f4: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x10b1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x10b1f8: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x10b1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x10b1fc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x10b1fcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x10b200: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10B200u;
    {
        const bool branch_taken_0x10b200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B200u;
            // 0x10b204: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b200) {
            ctx->pc = 0x10B214u;
            goto label_10b214;
        }
    }
    ctx->pc = 0x10B208u;
    // 0x10b208: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x10B208u;
    SET_GPR_U32(ctx, 31, 0x10B210u);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B210u; }
        if (ctx->pc != 0x10B210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B210u; }
        if (ctx->pc != 0x10B210u) { return; }
    }
    ctx->pc = 0x10B210u;
label_10b210:
    // 0x10b210: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x10b210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_10b214:
    // 0x10b214: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10b214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10b218: 0x2631825  or          $v1, $s3, $v1
    ctx->pc = 0x10b218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x10b21c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x10b21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x10b220: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10b220u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x10b224: 0x3c04f000  lui         $a0, 0xF000
    ctx->pc = 0x10b224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
    // 0x10b228: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x10b228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x10b22c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x10b22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x10b230: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10B230u;
    {
        const bool branch_taken_0x10b230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10B234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B230u;
            // 0x10b234: 0xae03082c  sw          $v1, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b230) {
            ctx->pc = 0x10B24Cu;
            goto label_10b24c;
        }
    }
    ctx->pc = 0x10B238u;
    // 0x10b238: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x10b238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x10b23c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10B23Cu;
    {
        const bool branch_taken_0x10b23c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10B240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B23Cu;
            // 0x10b240: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b23c) {
            ctx->pc = 0x10B24Cu;
            goto label_10b24c;
        }
    }
    ctx->pc = 0x10B244u;
    // 0x10b244: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10B244u;
    {
        const bool branch_taken_0x10b244 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10B248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B244u;
            // 0x10b248: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b244) {
            ctx->pc = 0x10B254u;
            goto label_10b254;
        }
    }
    ctx->pc = 0x10B24Cu;
label_10b24c:
    // 0x10b24c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10B24Cu;
    {
        const bool branch_taken_0x10b24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B24Cu;
            // 0x10b250: 0xae000828  sw          $zero, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b24c) {
            ctx->pc = 0x10B258u;
            goto label_10b258;
        }
    }
    ctx->pc = 0x10B254u;
label_10b254:
    // 0x10b254: 0xae020828  sw          $v0, 0x828($s0)
    ctx->pc = 0x10b254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 2));
label_10b258:
    // 0x10b258: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x10b258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10b25c: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x10b25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x10b260: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x10b260u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x10b264: 0xc0427c0  jal         func_109F00
    ctx->pc = 0x10B264u;
    SET_GPR_U32(ctx, 31, 0x10B26Cu);
    ctx->pc = 0x10B268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B264u;
            // 0x10b268: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109F00u;
    if (runtime->hasFunction(0x109F00u)) {
        auto targetFn = runtime->lookupFunction(0x109F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B26Cu; }
        if (ctx->pc != 0x10B26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109F00_0x109f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B26Cu; }
        if (ctx->pc != 0x10B26Cu) { return; }
    }
    ctx->pc = 0x10B26Cu;
label_10b26c:
    // 0x10b26c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10b26cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10b270: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x10b270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x10b274: 0x0  nop
    ctx->pc = 0x10b274u;
    // NOP
label_10b278:
    // 0x10b278: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10b278u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x10b27c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x10b27cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x10b280: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10b280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10b284: 0x0  nop
    ctx->pc = 0x10b284u;
    // NOP
    // 0x10b288: 0x0  nop
    ctx->pc = 0x10b288u;
    // NOP
    // 0x10b28c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10B28Cu;
    {
        const bool branch_taken_0x10b28c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b28c) {
            ctx->pc = 0x10B278u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10b278;
        }
    }
    ctx->pc = 0x10B294u;
    // 0x10b294: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10b294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10b298: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10b298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x10b29c: 0x0  nop
    ctx->pc = 0x10b29cu;
    // NOP
label_10b2a0:
    // 0x10b2a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10b2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x10b2a4: 0x0  nop
    ctx->pc = 0x10b2a4u;
    // NOP
    // 0x10b2a8: 0x0  nop
    ctx->pc = 0x10b2a8u;
    // NOP
    // 0x10b2ac: 0x0  nop
    ctx->pc = 0x10b2acu;
    // NOP
    // 0x10b2b0: 0x0  nop
    ctx->pc = 0x10b2b0u;
    // NOP
    // 0x10b2b4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10B2B4u;
    {
        const bool branch_taken_0x10b2b4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10b2b4) {
            ctx->pc = 0x10B2A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10b2a0;
        }
    }
    ctx->pc = 0x10B2BCu;
    // 0x10b2bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10B2BCu;
    {
        const bool branch_taken_0x10b2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b2bc) {
            ctx->pc = 0x10B2D4u;
            goto label_10b2d4;
        }
    }
    ctx->pc = 0x10B2C4u;
label_10b2c4:
    // 0x10b2c4: 0x8e0500ec  lw          $a1, 0xEC($s0)
    ctx->pc = 0x10b2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x10b2c8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x10b2c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b2cc: 0xc042b8a  jal         func_10AE28
    ctx->pc = 0x10B2CCu;
    SET_GPR_U32(ctx, 31, 0x10B2D4u);
    ctx->pc = 0x10B2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B2CCu;
            // 0x10b2d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AE28u;
    if (runtime->hasFunction(0x10AE28u)) {
        auto targetFn = runtime->lookupFunction(0x10AE28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B2D4u; }
        if (ctx->pc != 0x10B2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AE28_0x10ae28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B2D4u; }
        if (ctx->pc != 0x10B2D4u) { return; }
    }
    ctx->pc = 0x10B2D4u;
label_10b2d4:
    // 0x10b2d4: 0xc0433c4  jal         func_10CF10
    ctx->pc = 0x10B2D4u;
    SET_GPR_U32(ctx, 31, 0x10B2DCu);
    ctx->pc = 0x10B2D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B2D4u;
            // 0x10b2d8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CF10u;
    if (runtime->hasFunction(0x10CF10u)) {
        auto targetFn = runtime->lookupFunction(0x10CF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B2DCu; }
        if (ctx->pc != 0x10B2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CF10_0x10cf10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B2DCu; }
        if (ctx->pc != 0x10B2DCu) { return; }
    }
    ctx->pc = 0x10B2DCu;
label_10b2dc:
    // 0x10b2dc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x10b2dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b2e0: 0xc043024  jal         func_10C090
    ctx->pc = 0x10B2E0u;
    SET_GPR_U32(ctx, 31, 0x10B2E8u);
    ctx->pc = 0x10B2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B2E0u;
            // 0x10b2e4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C090u;
    if (runtime->hasFunction(0x10C090u)) {
        auto targetFn = runtime->lookupFunction(0x10C090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B2E8u; }
        if (ctx->pc != 0x10B2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C090_0x10c090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B2E8u; }
        if (ctx->pc != 0x10B2E8u) { return; }
    }
    ctx->pc = 0x10B2E8u;
label_10b2e8:
    // 0x10b2e8: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x10B2E8u;
    {
        const bool branch_taken_0x10b2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B2E8u;
            // 0x10b2ec: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b2e8) {
            ctx->pc = 0x10B488u;
            goto label_10b488;
        }
    }
    ctx->pc = 0x10B2F0u;
label_10b2f0:
    // 0x10b2f0: 0xc045968  jal         func_1165A0
    ctx->pc = 0x10B2F0u;
    SET_GPR_U32(ctx, 31, 0x10B2F8u);
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B2F8u; }
        if (ctx->pc != 0x10B2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B2F8u; }
        if (ctx->pc != 0x10B2F8u) { return; }
    }
    ctx->pc = 0x10B2F8u;
label_10b2f8:
    // 0x10b2f8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x10b2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10b2fc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10b2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10b300: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x10b300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46096);
    // 0x10b304: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10b304u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10b308: 0xb12824  and         $a1, $a1, $s1
    ctx->pc = 0x10b308u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 17));
    // 0x10b30c: 0x34c6b420  ori         $a2, $a2, 0xB420
    ctx->pc = 0x10b30cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)46112);
    // 0x10b310: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x10b310u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x10b314: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10b314u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10b318: 0x3484b400  ori         $a0, $a0, 0xB400
    ctx->pc = 0x10b318u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46080);
    // 0x10b31c: 0x24050101  addiu       $a1, $zero, 0x101
    ctx->pc = 0x10b31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x10b320: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x10b320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b324: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x10b324u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x10b328: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10B328u;
    {
        const bool branch_taken_0x10b328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B328u;
            // 0x10b32c: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b328) {
            ctx->pc = 0x10B338u;
            goto label_10b338;
        }
    }
    ctx->pc = 0x10B330u;
    // 0x10b330: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x10B330u;
    SET_GPR_U32(ctx, 31, 0x10B338u);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B338u; }
        if (ctx->pc != 0x10B338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B338u; }
        if (ctx->pc != 0x10B338u) { return; }
    }
    ctx->pc = 0x10B338u;
label_10b338:
    // 0x10b338: 0x12a0004e  beqz        $s5, . + 4 + (0x4E << 2)
    ctx->pc = 0x10B338u;
    {
        const bool branch_taken_0x10b338 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B338u;
            // 0x10b33c: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b338) {
            ctx->pc = 0x10B474u;
            goto label_10b474;
        }
    }
    ctx->pc = 0x10B340u;
    // 0x10b340: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10b340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10b344: 0x8e1100ec  lw          $s1, 0xEC($s0)
    ctx->pc = 0x10b344u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x10b348: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x10b348u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10b34c: 0x139180  sll         $s2, $s3, 6
    ctx->pc = 0x10b34cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x10b350: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10b350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x10b354: 0x0  nop
    ctx->pc = 0x10b354u;
    // NOP
label_10b358:
    // 0x10b358: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10b358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10b35c: 0x0  nop
    ctx->pc = 0x10b35cu;
    // NOP
    // 0x10b360: 0x0  nop
    ctx->pc = 0x10b360u;
    // NOP
    // 0x10b364: 0x0  nop
    ctx->pc = 0x10b364u;
    // NOP
    // 0x10b368: 0x0  nop
    ctx->pc = 0x10b368u;
    // NOP
    // 0x10b36c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10B36Cu;
    {
        const bool branch_taken_0x10b36c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10b36c) {
            ctx->pc = 0x10B358u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10b358;
        }
    }
    ctx->pc = 0x10B374u;
    // 0x10b374: 0xc045968  jal         func_1165A0
    ctx->pc = 0x10B374u;
    SET_GPR_U32(ctx, 31, 0x10B37Cu);
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B37Cu; }
        if (ctx->pc != 0x10B37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B37Cu; }
        if (ctx->pc != 0x10B37Cu) { return; }
    }
    ctx->pc = 0x10B37Cu;
label_10b37c:
    // 0x10b37c: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x10b37cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x10b380: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10b380u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10b384: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10b384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x10b388: 0x34a5b010  ori         $a1, $a1, 0xB010
    ctx->pc = 0x10b388u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45072);
    // 0x10b38c: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x10b38cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x10b390: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10b390u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10b394: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x10b394u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x10b398: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x10b398u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x10b39c: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x10b39cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 18)); // MMIO: 0x10000000
    // 0x10b3a0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10b3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10b3a4: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x10b3a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x10b3a8: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x10b3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x10b3ac: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x10b3acu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x10b3b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10B3B0u;
    {
        const bool branch_taken_0x10b3b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B3B0u;
            // 0x10b3b4: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b3b0) {
            ctx->pc = 0x10B3C4u;
            goto label_10b3c4;
        }
    }
    ctx->pc = 0x10B3B8u;
    // 0x10b3b8: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x10B3B8u;
    SET_GPR_U32(ctx, 31, 0x10B3C0u);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B3C0u; }
        if (ctx->pc != 0x10B3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B3C0u; }
        if (ctx->pc != 0x10B3C0u) { return; }
    }
    ctx->pc = 0x10B3C0u;
label_10b3c0:
    // 0x10b3c0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x10b3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_10b3c4:
    // 0x10b3c4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10b3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10b3c8: 0x2631825  or          $v1, $s3, $v1
    ctx->pc = 0x10b3c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x10b3cc: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x10b3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x10b3d0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10b3d0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x10b3d4: 0x3c04f000  lui         $a0, 0xF000
    ctx->pc = 0x10b3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
    // 0x10b3d8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x10b3d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x10b3dc: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x10b3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x10b3e0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10B3E0u;
    {
        const bool branch_taken_0x10b3e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10B3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B3E0u;
            // 0x10b3e4: 0xae03082c  sw          $v1, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b3e0) {
            ctx->pc = 0x10B3FCu;
            goto label_10b3fc;
        }
    }
    ctx->pc = 0x10B3E8u;
    // 0x10b3e8: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x10b3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x10b3ec: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10B3ECu;
    {
        const bool branch_taken_0x10b3ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10B3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B3ECu;
            // 0x10b3f0: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b3ec) {
            ctx->pc = 0x10B3FCu;
            goto label_10b3fc;
        }
    }
    ctx->pc = 0x10B3F4u;
    // 0x10b3f4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10B3F4u;
    {
        const bool branch_taken_0x10b3f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10B3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B3F4u;
            // 0x10b3f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b3f4) {
            ctx->pc = 0x10B404u;
            goto label_10b404;
        }
    }
    ctx->pc = 0x10B3FCu;
label_10b3fc:
    // 0x10b3fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10B3FCu;
    {
        const bool branch_taken_0x10b3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B3FCu;
            // 0x10b400: 0xae000828  sw          $zero, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b3fc) {
            ctx->pc = 0x10B408u;
            goto label_10b408;
        }
    }
    ctx->pc = 0x10B404u;
label_10b404:
    // 0x10b404: 0xae020828  sw          $v0, 0x828($s0)
    ctx->pc = 0x10b404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 2));
label_10b408:
    // 0x10b408: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x10b408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10b40c: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x10b40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x10b410: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x10b410u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x10b414: 0xc0427c0  jal         func_109F00
    ctx->pc = 0x10B414u;
    SET_GPR_U32(ctx, 31, 0x10B41Cu);
    ctx->pc = 0x10B418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B414u;
            // 0x10b418: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109F00u;
    if (runtime->hasFunction(0x109F00u)) {
        auto targetFn = runtime->lookupFunction(0x109F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B41Cu; }
        if (ctx->pc != 0x10B41Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109F00_0x109f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B41Cu; }
        if (ctx->pc != 0x10B41Cu) { return; }
    }
    ctx->pc = 0x10B41Cu;
label_10b41c:
    // 0x10b41c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10b41cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10b420: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x10b420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x10b424: 0x0  nop
    ctx->pc = 0x10b424u;
    // NOP
label_10b428:
    // 0x10b428: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10b428u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x10b42c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x10b42cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x10b430: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10b430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10b434: 0x0  nop
    ctx->pc = 0x10b434u;
    // NOP
    // 0x10b438: 0x0  nop
    ctx->pc = 0x10b438u;
    // NOP
    // 0x10b43c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10B43Cu;
    {
        const bool branch_taken_0x10b43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b43c) {
            ctx->pc = 0x10B428u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10b428;
        }
    }
    ctx->pc = 0x10B444u;
    // 0x10b444: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10b444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10b448: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10b448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x10b44c: 0x0  nop
    ctx->pc = 0x10b44cu;
    // NOP
label_10b450:
    // 0x10b450: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10b450u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x10b454: 0x0  nop
    ctx->pc = 0x10b454u;
    // NOP
    // 0x10b458: 0x0  nop
    ctx->pc = 0x10b458u;
    // NOP
    // 0x10b45c: 0x0  nop
    ctx->pc = 0x10b45cu;
    // NOP
    // 0x10b460: 0x0  nop
    ctx->pc = 0x10b460u;
    // NOP
    // 0x10b464: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10B464u;
    {
        const bool branch_taken_0x10b464 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10b464) {
            ctx->pc = 0x10B450u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10b450;
        }
    }
    ctx->pc = 0x10B46Cu;
    // 0x10b46c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10B46Cu;
    {
        const bool branch_taken_0x10b46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B46Cu;
            // 0x10b470: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b46c) {
            ctx->pc = 0x10B488u;
            goto label_10b488;
        }
    }
    ctx->pc = 0x10B474u;
label_10b474:
    // 0x10b474: 0x8e0500ec  lw          $a1, 0xEC($s0)
    ctx->pc = 0x10b474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x10b478: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x10b478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b47c: 0xc042b8a  jal         func_10AE28
    ctx->pc = 0x10B47Cu;
    SET_GPR_U32(ctx, 31, 0x10B484u);
    ctx->pc = 0x10B480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B47Cu;
            // 0x10b480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AE28u;
    if (runtime->hasFunction(0x10AE28u)) {
        auto targetFn = runtime->lookupFunction(0x10AE28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B484u; }
        if (ctx->pc != 0x10B484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AE28_0x10ae28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B484u; }
        if (ctx->pc != 0x10B484u) { return; }
    }
    ctx->pc = 0x10B484u;
label_10b484:
    // 0x10b484: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x10b484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
label_10b488:
    // 0x10b488: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10b488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10b48c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x10b48cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x10b490: 0xc0427c0  jal         func_109F00
    ctx->pc = 0x10B490u;
    SET_GPR_U32(ctx, 31, 0x10B498u);
    ctx->pc = 0x10B494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B490u;
            // 0x10b494: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109F00u;
    if (runtime->hasFunction(0x109F00u)) {
        auto targetFn = runtime->lookupFunction(0x109F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B498u; }
        if (ctx->pc != 0x10B498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109F00_0x109f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B498u; }
        if (ctx->pc != 0x10B498u) { return; }
    }
    ctx->pc = 0x10B498u;
label_10b498:
    // 0x10b498: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x10b498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x10b49c: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x10b49cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x10b4a0: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x10b4a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x10b4a4: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x10b4a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10b4a8: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x10b4a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10b4ac: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x10b4acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10b4b0: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x10b4b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10b4b4: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x10b4b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10b4b8: 0x3e00008  jr          $ra
    ctx->pc = 0x10B4B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B4B8u;
            // 0x10b4bc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10B4C0u;
    // 0x10b4c0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10b4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10b4c4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x10b4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10b4c8: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x10b4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x10b4cc: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x10b4ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b4d0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10b4d0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x10b4d4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10b4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10b4d8: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x10b4d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x10b4dc: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x10b4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x10b4e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10b4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10b4e4: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x10b4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x10b4e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x10b4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x10000000
    // 0x10b4ec: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10B4ECu;
    {
        const bool branch_taken_0x10b4ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B4ECu;
            // 0x10b4f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b4ec) {
            ctx->pc = 0x10B50Cu;
            goto label_10b50c;
        }
    }
    ctx->pc = 0x10B4F4u;
    // 0x10b4f4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10b4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10b4f8: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x10b4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x10b4fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10b4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x10b500: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x10b500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x10b504: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10B504u;
    {
        const bool branch_taken_0x10b504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B504u;
            // 0x10b508: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b504) {
            ctx->pc = 0x10B520u;
            goto label_10b520;
        }
    }
    ctx->pc = 0x10B50Cu;
label_10b50c:
    // 0x10b50c: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x10b50cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
    // 0x10b510: 0xf  sync
    ctx->pc = 0x10b510u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10b514: 0x42000038  ei
    ctx->pc = 0x10b514u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x10b518: 0x3e00008  jr          $ra
    ctx->pc = 0x10B518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B518u;
            // 0x10b51c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10B520u;
label_10b520:
    // 0x10b520: 0x8d230010  lw          $v1, 0x10($t1)
    ctx->pc = 0x10b520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x10b524: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x10b524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x10b528: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x10b528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x10b52c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x10b52cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10b530: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x10B530u;
    {
        const bool branch_taken_0x10b530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B530u;
            // 0x10b534: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b530) {
            ctx->pc = 0x10B594u;
            goto label_10b594;
        }
    }
    ctx->pc = 0x10B538u;
    // 0x10b538: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x10b538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x10b53c: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x10b53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x10b540: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x10b540u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x10b544: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10b544u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x10b548: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x10b548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x10b54c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x10b54cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x10b550: 0xac24b020  sw          $a0, -0x4FE0($at)
    ctx->pc = 0x10b550u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294946848), GPR_U32(ctx, 4)); // MMIO: 0x1000b020
    // 0x10b554: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10b554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10b558: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x10b558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x10b55c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x10b55cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x10b560: 0xac25b000  sw          $a1, -0x5000($at)
    ctx->pc = 0x10b560u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294946816), GPR_U32(ctx, 5)); // MMIO: 0x1000b000
    // 0x10b564: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x10b564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x10b568: 0x344203ff  ori         $v0, $v0, 0x3FF
    ctx->pc = 0x10b568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1023);
    // 0x10b56c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x10b56cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x10b570: 0x3c04000f  lui         $a0, 0xF
    ctx->pc = 0x10b570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
    // 0x10b574: 0x3484fc00  ori         $a0, $a0, 0xFC00
    ctx->pc = 0x10b574u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64512);
    // 0x10b578: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x10b578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x10b57c: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x10b57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x10b580: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10b580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x10b584: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10b584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10b588: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10b588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10b58c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x10B58Cu;
    {
        const bool branch_taken_0x10b58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B58Cu;
            // 0x10b590: 0xad22000c  sw          $v0, 0xC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b58c) {
            ctx->pc = 0x10B5F8u;
            goto label_10b5f8;
        }
    }
    ctx->pc = 0x10B594u;
label_10b594:
    // 0x10b594: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x10b594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x10b598: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x10B598u;
    {
        const bool branch_taken_0x10b598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10B59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B598u;
            // 0x10b59c: 0x24080100  addiu       $t0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b598) {
            ctx->pc = 0x10B5F8u;
            goto label_10b5f8;
        }
    }
    ctx->pc = 0x10B5A0u;
    // 0x10b5a0: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x10b5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x10b5a4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10b5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10b5a8: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x10b5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x10b5ac: 0x3484b010  ori         $a0, $a0, 0xB010
    ctx->pc = 0x10b5acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45072);
    // 0x10b5b0: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x10b5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x10b5b4: 0x8d26000c  lw          $a2, 0xC($t1)
    ctx->pc = 0x10b5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x10b5b8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x10b5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x10b5bc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x10b5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10b5c0: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10b5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10b5c4: 0xad230008  sw          $v1, 0x8($t1)
    ctx->pc = 0x10b5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 3));
    // 0x10b5c8: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x10b5c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x10b5cc: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x10b5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x10b5d0: 0x34a52000  ori         $a1, $a1, 0x2000
    ctx->pc = 0x10b5d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    // 0x10b5d4: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x10b5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x10b5d8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x10b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x10b5dc: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x10b5dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x10b5e0: 0xac22b020  sw          $v0, -0x4FE0($at)
    ctx->pc = 0x10b5e0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294946848), GPR_U32(ctx, 2)); // MMIO: 0x1000b020
    // 0x10b5e4: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x10b5e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x10b5e8: 0xac28b000  sw          $t0, -0x5000($at)
    ctx->pc = 0x10b5e8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294946816), GPR_U32(ctx, 8)); // MMIO: 0x1000b000
    // 0x10b5ec: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x10b5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x10b5f0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x10b5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x10b5f4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x10b5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_10b5f8:
    // 0x10b5f8: 0xf  sync
    ctx->pc = 0x10b5f8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10b5fc: 0x42000038  ei
    ctx->pc = 0x10b5fcu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x10b600: 0x3e00008  jr          $ra
    ctx->pc = 0x10B600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B600u;
            // 0x10b604: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10B608u;
    // 0x10b608: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10b608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10b60c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x10b60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10b610: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x10b610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x10b614: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x10b614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b618: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10b618u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x10b61c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x10b61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10b620: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B620u;
    {
        const bool branch_taken_0x10b620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B620u;
            // 0x10b624: 0x3407ffff  ori         $a3, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b620) {
            ctx->pc = 0x10B638u;
            goto label_10b638;
        }
    }
    ctx->pc = 0x10B628u;
    // 0x10b628: 0xf  sync
    ctx->pc = 0x10b628u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10b62c: 0x42000038  ei
    ctx->pc = 0x10b62cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x10b630: 0x3e00008  jr          $ra
    ctx->pc = 0x10B630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B630u;
            // 0x10b634: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10B638u;
label_10b638:
    // 0x10b638: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x10b638u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10b63c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x10B63Cu;
    {
        const bool branch_taken_0x10b63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B63Cu;
            // 0x10b640: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b63c) {
            ctx->pc = 0x10B69Cu;
            goto label_10b69c;
        }
    }
    ctx->pc = 0x10B644u;
    // 0x10b644: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x10b644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x10b648: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10b648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10b64c: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x10b64cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x10b650: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x10b650u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x10b654: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x10b654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
    // 0x10b658: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x10b658u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x10b65c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10b65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10b660: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x10b660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x10b664: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x10b664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x10b668: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10b668u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x10b66c: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x10b66cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x10b670: 0x34a5fff0  ori         $a1, $a1, 0xFFF0
    ctx->pc = 0x10b670u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65520);
    // 0x10b674: 0x3c040fff  lui         $a0, 0xFFF
    ctx->pc = 0x10b674u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4095 << 16));
    // 0x10b678: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x10b678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x10b67c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x10b67cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x10b680: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x10b680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10b684: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x10b684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x10b688: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x10b688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x10b68c: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x10b68cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x10b690: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x10b690u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x10b694: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x10B694u;
    {
        const bool branch_taken_0x10b694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B694u;
            // 0x10b698: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b694) {
            ctx->pc = 0x10B6CCu;
            goto label_10b6cc;
        }
    }
    ctx->pc = 0x10B69Cu;
label_10b69c:
    // 0x10b69c: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x10b69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x10b6a0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10b6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10b6a4: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x10b6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x10b6a8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x10b6a8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x10b6ac: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x10b6acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
    // 0x10b6b0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10b6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10b6b4: 0x24050101  addiu       $a1, $zero, 0x101
    ctx->pc = 0x10b6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x10b6b8: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x10b6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10b6bc: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x10b6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x10b6c0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x10b6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x10b6c4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x10b6c4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x10b6c8: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x10b6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_10b6cc:
    // 0x10b6cc: 0xf  sync
    ctx->pc = 0x10b6ccu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10b6d0: 0x42000038  ei
    ctx->pc = 0x10b6d0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x10b6d4: 0x3e00008  jr          $ra
    ctx->pc = 0x10B6D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B6D4u;
            // 0x10b6d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10B6DCu;
    // 0x10b6dc: 0x0  nop
    ctx->pc = 0x10b6dcu;
    // NOP
}
