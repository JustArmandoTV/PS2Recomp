#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026CFF0
// Address: 0x26cff0 - 0x26d190
void sub_0026CFF0_0x26cff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026CFF0_0x26cff0");
#endif

    switch (ctx->pc) {
        case 0x26d0b4u: goto label_26d0b4;
        case 0x26d10cu: goto label_26d10c;
        case 0x26d124u: goto label_26d124;
        default: break;
    }

    ctx->pc = 0x26cff0u;

label_26cff0:
    // 0x26cff0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x26cff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x26cff4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x26cff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x26cff8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x26cff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x26cffc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x26cffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x26d000: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x26d000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x26d004: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x26d004u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d008: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x26d008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x26d00c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x26d00cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d010: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26d010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26d014: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x26d014u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d018: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26d018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26d01c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x26d01cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d020: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26d020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26d024: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x26d024u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d028: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26d028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26d02c: 0xa0a00038  sb          $zero, 0x38($a1)
    ctx->pc = 0x26d02cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 56), (uint8_t)GPR_U32(ctx, 0));
    // 0x26d030: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x26d030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x26d034: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26D034u;
    {
        const bool branch_taken_0x26d034 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26D038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D034u;
            // 0x26d038: 0x26b70038  addiu       $s7, $s5, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d034) {
            ctx->pc = 0x26D048u;
            goto label_26d048;
        }
    }
    ctx->pc = 0x26D03Cu;
    // 0x26d03c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x26d03cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d040: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x26d040u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d044: 0x0  nop
    ctx->pc = 0x26d044u;
    // NOP
label_26d048:
    // 0x26d048: 0x8ec20014  lw          $v0, 0x14($s6)
    ctx->pc = 0x26d048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x26d04c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x26d04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x26d050: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26D050u;
    {
        const bool branch_taken_0x26d050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d050) {
            ctx->pc = 0x26D060u;
            goto label_26d060;
        }
    }
    ctx->pc = 0x26D058u;
    // 0x26d058: 0xaeb30024  sw          $s3, 0x24($s5)
    ctx->pc = 0x26d058u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 19));
    // 0x26d05c: 0x0  nop
    ctx->pc = 0x26d05cu;
    // NOP
label_26d060:
    // 0x26d060: 0x82a20004  lb          $v0, 0x4($s5)
    ctx->pc = 0x26d060u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x26d064: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x26D064u;
    {
        const bool branch_taken_0x26d064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d064) {
            ctx->pc = 0x26D0F8u;
            goto label_26d0f8;
        }
    }
    ctx->pc = 0x26D06Cu;
    // 0x26d06c: 0x8ec20014  lw          $v0, 0x14($s6)
    ctx->pc = 0x26d06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x26d070: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x26d070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x26d074: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x26D074u;
    {
        const bool branch_taken_0x26d074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d074) {
            ctx->pc = 0x26D128u;
            goto label_26d128;
        }
    }
    ctx->pc = 0x26D07Cu;
    // 0x26d07c: 0x8ea30060  lw          $v1, 0x60($s5)
    ctx->pc = 0x26d07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x26d080: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26d080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26d084: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x26d084u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x26d088: 0x8ec20014  lw          $v0, 0x14($s6)
    ctx->pc = 0x26d088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x26d08c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x26d08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x26d090: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x26d090u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x26d094: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x26d094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x26d098: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x26d098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x26d09c: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x26d09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x26d0a0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26D0A0u;
    {
        const bool branch_taken_0x26d0a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26D0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D0A0u;
            // 0x26d0a4: 0x26b00060  addiu       $s0, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d0a0) {
            ctx->pc = 0x26D0B8u;
            goto label_26d0b8;
        }
    }
    ctx->pc = 0x26D0A8u;
    // 0x26d0a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26d0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d0ac: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x26D0ACu;
    SET_GPR_U32(ctx, 31, 0x26D0B4u);
    ctx->pc = 0x26D0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D0ACu;
            // 0x26d0b0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D0B4u; }
        if (ctx->pc != 0x26D0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D0B4u; }
        if (ctx->pc != 0x26D0B4u) { return; }
    }
    ctx->pc = 0x26D0B4u;
label_26d0b4:
    // 0x26d0b4: 0x0  nop
    ctx->pc = 0x26d0b4u;
    // NOP
label_26d0b8:
    // 0x26d0b8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x26d0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x26d0bc: 0x141200  sll         $v0, $s4, 8
    ctx->pc = 0x26d0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 8));
    // 0x26d0c0: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x26d0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x26d0c4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x26d0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x26d0c8: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x26d0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x26d0cc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x26d0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x26d0d0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x26d0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26d0d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26d0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26d0d8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x26d0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x26d0dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x26d0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26d0e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26d0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26d0e4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x26d0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x26d0e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x26d0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26d0ec: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x26d0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x26d0f0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x26D0F0u;
    {
        const bool branch_taken_0x26d0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D0F0u;
            // 0x26d0f4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d0f0) {
            ctx->pc = 0x26D128u;
            goto label_26d128;
        }
    }
    ctx->pc = 0x26D0F8u;
label_26d0f8:
    // 0x26d0f8: 0x8ea50074  lw          $a1, 0x74($s5)
    ctx->pc = 0x26d0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
    // 0x26d0fc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x26d0fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d100: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26d100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d104: 0xc09b3fc  jal         func_26CFF0
    ctx->pc = 0x26D104u;
    SET_GPR_U32(ctx, 31, 0x26D10Cu);
    ctx->pc = 0x26D108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D104u;
            // 0x26d108: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26CFF0u;
    goto label_26cff0;
    ctx->pc = 0x26D10Cu;
label_26d10c:
    // 0x26d10c: 0x8ea50070  lw          $a1, 0x70($s5)
    ctx->pc = 0x26d10cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x26d110: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x26d110u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d114: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x26d114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d118: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x26d118u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d11c: 0xc09b3fc  jal         func_26CFF0
    ctx->pc = 0x26D11Cu;
    SET_GPR_U32(ctx, 31, 0x26D124u);
    ctx->pc = 0x26D120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D11Cu;
            // 0x26d120: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26CFF0u;
    goto label_26cff0;
    ctx->pc = 0x26D124u;
label_26d124:
    // 0x26d124: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x26d124u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26d128:
    // 0x26d128: 0x8ec20014  lw          $v0, 0x14($s6)
    ctx->pc = 0x26d128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x26d12c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x26d12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x26d130: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26D130u;
    {
        const bool branch_taken_0x26d130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d130) {
            ctx->pc = 0x26D140u;
            goto label_26d140;
        }
    }
    ctx->pc = 0x26D138u;
    // 0x26d138: 0xaea00024  sw          $zero, 0x24($s5)
    ctx->pc = 0x26d138u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 0));
    // 0x26d13c: 0xaeb30028  sw          $s3, 0x28($s5)
    ctx->pc = 0x26d13cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 19));
label_26d140:
    // 0x26d140: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x26d140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x26d144: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26D144u;
    {
        const bool branch_taken_0x26d144 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26D148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D144u;
            // 0x26d148: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d144) {
            ctx->pc = 0x26D158u;
            goto label_26d158;
        }
    }
    ctx->pc = 0x26D14Cu;
    // 0x26d14c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26D14Cu;
    {
        const bool branch_taken_0x26d14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d14c) {
            ctx->pc = 0x26D160u;
            goto label_26d160;
        }
    }
    ctx->pc = 0x26D154u;
    // 0x26d154: 0x0  nop
    ctx->pc = 0x26d154u;
    // NOP
label_26d158:
    // 0x26d158: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x26d158u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d15c: 0x0  nop
    ctx->pc = 0x26d15cu;
    // NOP
label_26d160:
    // 0x26d160: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x26d160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26d164: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x26d164u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26d168: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x26d168u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26d16c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x26d16cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26d170: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x26d170u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26d174: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26d174u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26d178: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26d178u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26d17c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26d17cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26d180: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26d180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26d184: 0x3e00008  jr          $ra
    ctx->pc = 0x26D184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D184u;
            // 0x26d188: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26D18Cu;
    // 0x26d18c: 0x0  nop
    ctx->pc = 0x26d18cu;
    // NOP
}
