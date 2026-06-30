#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004CBF20
// Address: 0x4cbf20 - 0x4cc090
void sub_004CBF20_0x4cbf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CBF20_0x4cbf20");
#endif

    switch (ctx->pc) {
        case 0x4cbf20u: goto label_4cbf20;
        case 0x4cbf24u: goto label_4cbf24;
        case 0x4cbf28u: goto label_4cbf28;
        case 0x4cbf2cu: goto label_4cbf2c;
        case 0x4cbf30u: goto label_4cbf30;
        case 0x4cbf34u: goto label_4cbf34;
        case 0x4cbf38u: goto label_4cbf38;
        case 0x4cbf3cu: goto label_4cbf3c;
        case 0x4cbf40u: goto label_4cbf40;
        case 0x4cbf44u: goto label_4cbf44;
        case 0x4cbf48u: goto label_4cbf48;
        case 0x4cbf4cu: goto label_4cbf4c;
        case 0x4cbf50u: goto label_4cbf50;
        case 0x4cbf54u: goto label_4cbf54;
        case 0x4cbf58u: goto label_4cbf58;
        case 0x4cbf5cu: goto label_4cbf5c;
        case 0x4cbf60u: goto label_4cbf60;
        case 0x4cbf64u: goto label_4cbf64;
        case 0x4cbf68u: goto label_4cbf68;
        case 0x4cbf6cu: goto label_4cbf6c;
        case 0x4cbf70u: goto label_4cbf70;
        case 0x4cbf74u: goto label_4cbf74;
        case 0x4cbf78u: goto label_4cbf78;
        case 0x4cbf7cu: goto label_4cbf7c;
        case 0x4cbf80u: goto label_4cbf80;
        case 0x4cbf84u: goto label_4cbf84;
        case 0x4cbf88u: goto label_4cbf88;
        case 0x4cbf8cu: goto label_4cbf8c;
        case 0x4cbf90u: goto label_4cbf90;
        case 0x4cbf94u: goto label_4cbf94;
        case 0x4cbf98u: goto label_4cbf98;
        case 0x4cbf9cu: goto label_4cbf9c;
        case 0x4cbfa0u: goto label_4cbfa0;
        case 0x4cbfa4u: goto label_4cbfa4;
        case 0x4cbfa8u: goto label_4cbfa8;
        case 0x4cbfacu: goto label_4cbfac;
        case 0x4cbfb0u: goto label_4cbfb0;
        case 0x4cbfb4u: goto label_4cbfb4;
        case 0x4cbfb8u: goto label_4cbfb8;
        case 0x4cbfbcu: goto label_4cbfbc;
        case 0x4cbfc0u: goto label_4cbfc0;
        case 0x4cbfc4u: goto label_4cbfc4;
        case 0x4cbfc8u: goto label_4cbfc8;
        case 0x4cbfccu: goto label_4cbfcc;
        case 0x4cbfd0u: goto label_4cbfd0;
        case 0x4cbfd4u: goto label_4cbfd4;
        case 0x4cbfd8u: goto label_4cbfd8;
        case 0x4cbfdcu: goto label_4cbfdc;
        case 0x4cbfe0u: goto label_4cbfe0;
        case 0x4cbfe4u: goto label_4cbfe4;
        case 0x4cbfe8u: goto label_4cbfe8;
        case 0x4cbfecu: goto label_4cbfec;
        case 0x4cbff0u: goto label_4cbff0;
        case 0x4cbff4u: goto label_4cbff4;
        case 0x4cbff8u: goto label_4cbff8;
        case 0x4cbffcu: goto label_4cbffc;
        case 0x4cc000u: goto label_4cc000;
        case 0x4cc004u: goto label_4cc004;
        case 0x4cc008u: goto label_4cc008;
        case 0x4cc00cu: goto label_4cc00c;
        case 0x4cc010u: goto label_4cc010;
        case 0x4cc014u: goto label_4cc014;
        case 0x4cc018u: goto label_4cc018;
        case 0x4cc01cu: goto label_4cc01c;
        case 0x4cc020u: goto label_4cc020;
        case 0x4cc024u: goto label_4cc024;
        case 0x4cc028u: goto label_4cc028;
        case 0x4cc02cu: goto label_4cc02c;
        case 0x4cc030u: goto label_4cc030;
        case 0x4cc034u: goto label_4cc034;
        case 0x4cc038u: goto label_4cc038;
        case 0x4cc03cu: goto label_4cc03c;
        case 0x4cc040u: goto label_4cc040;
        case 0x4cc044u: goto label_4cc044;
        case 0x4cc048u: goto label_4cc048;
        case 0x4cc04cu: goto label_4cc04c;
        case 0x4cc050u: goto label_4cc050;
        case 0x4cc054u: goto label_4cc054;
        case 0x4cc058u: goto label_4cc058;
        case 0x4cc05cu: goto label_4cc05c;
        case 0x4cc060u: goto label_4cc060;
        case 0x4cc064u: goto label_4cc064;
        case 0x4cc068u: goto label_4cc068;
        case 0x4cc06cu: goto label_4cc06c;
        case 0x4cc070u: goto label_4cc070;
        case 0x4cc074u: goto label_4cc074;
        case 0x4cc078u: goto label_4cc078;
        case 0x4cc07cu: goto label_4cc07c;
        case 0x4cc080u: goto label_4cc080;
        case 0x4cc084u: goto label_4cc084;
        case 0x4cc088u: goto label_4cc088;
        case 0x4cc08cu: goto label_4cc08c;
        default: break;
    }

    ctx->pc = 0x4cbf20u;

label_4cbf20:
    // 0x4cbf20: 0x3e00008  jr          $ra
label_4cbf24:
    if (ctx->pc == 0x4CBF24u) {
        ctx->pc = 0x4CBF24u;
            // 0x4cbf24: 0x8c8202e0  lw          $v0, 0x2E0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 736)));
        ctx->pc = 0x4CBF28u;
        goto label_4cbf28;
    }
    ctx->pc = 0x4CBF20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CBF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBF20u;
            // 0x4cbf24: 0x8c8202e0  lw          $v0, 0x2E0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 736)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CBF28u;
label_4cbf28:
    // 0x4cbf28: 0x0  nop
    ctx->pc = 0x4cbf28u;
    // NOP
label_4cbf2c:
    // 0x4cbf2c: 0x0  nop
    ctx->pc = 0x4cbf2cu;
    // NOP
label_4cbf30:
    // 0x4cbf30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4cbf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4cbf34:
    // 0x4cbf34: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4cbf34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4cbf38:
    // 0x4cbf38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4cbf38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4cbf3c:
    // 0x4cbf3c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4cbf3cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4cbf40:
    // 0x4cbf40: 0x50a30014  beql        $a1, $v1, . + 4 + (0x14 << 2)
label_4cbf44:
    if (ctx->pc == 0x4CBF44u) {
        ctx->pc = 0x4CBF44u;
            // 0x4cbf44: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x4CBF48u;
        goto label_4cbf48;
    }
    ctx->pc = 0x4CBF40u;
    {
        const bool branch_taken_0x4cbf40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4cbf40) {
            ctx->pc = 0x4CBF44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBF40u;
            // 0x4cbf44: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CBF94u;
            goto label_4cbf94;
        }
    }
    ctx->pc = 0x4CBF48u;
label_4cbf48:
    // 0x4cbf48: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4cbf48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4cbf4c:
    // 0x4cbf4c: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_4cbf50:
    if (ctx->pc == 0x4CBF50u) {
        ctx->pc = 0x4CBF50u;
            // 0x4cbf50: 0x8c850074  lw          $a1, 0x74($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
        ctx->pc = 0x4CBF54u;
        goto label_4cbf54;
    }
    ctx->pc = 0x4CBF4Cu;
    {
        const bool branch_taken_0x4cbf4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4cbf4c) {
            ctx->pc = 0x4CBF50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBF4Cu;
            // 0x4cbf50: 0x8c850074  lw          $a1, 0x74($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CBF68u;
            goto label_4cbf68;
        }
    }
    ctx->pc = 0x4CBF54u;
label_4cbf54:
    // 0x4cbf54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4cbf54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4cbf58:
    // 0x4cbf58: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
label_4cbf5c:
    if (ctx->pc == 0x4CBF5Cu) {
        ctx->pc = 0x4CBF60u;
        goto label_4cbf60;
    }
    ctx->pc = 0x4CBF58u;
    {
        const bool branch_taken_0x4cbf58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4cbf58) {
            ctx->pc = 0x4CBF90u;
            goto label_4cbf90;
        }
    }
    ctx->pc = 0x4CBF60u;
label_4cbf60:
    // 0x4cbf60: 0x1000000b  b           . + 4 + (0xB << 2)
label_4cbf64:
    if (ctx->pc == 0x4CBF64u) {
        ctx->pc = 0x4CBF68u;
        goto label_4cbf68;
    }
    ctx->pc = 0x4CBF60u;
    {
        const bool branch_taken_0x4cbf60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cbf60) {
            ctx->pc = 0x4CBF90u;
            goto label_4cbf90;
        }
    }
    ctx->pc = 0x4CBF68u;
label_4cbf68:
    // 0x4cbf68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4cbf68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4cbf6c:
    // 0x4cbf6c: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x4cbf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_4cbf70:
    // 0x4cbf70: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x4cbf70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4cbf74:
    // 0x4cbf74: 0xaca30050  sw          $v1, 0x50($a1)
    ctx->pc = 0x4cbf74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 3));
label_4cbf78:
    // 0x4cbf78: 0xa0a2004c  sb          $v0, 0x4C($a1)
    ctx->pc = 0x4cbf78u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 76), (uint8_t)GPR_U32(ctx, 2));
label_4cbf7c:
    // 0x4cbf7c: 0xa0a00058  sb          $zero, 0x58($a1)
    ctx->pc = 0x4cbf7cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 88), (uint8_t)GPR_U32(ctx, 0));
label_4cbf80:
    // 0x4cbf80: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4cbf80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4cbf84:
    // 0x4cbf84: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4cbf84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4cbf88:
    // 0x4cbf88: 0x320f809  jalr        $t9
label_4cbf8c:
    if (ctx->pc == 0x4CBF8Cu) {
        ctx->pc = 0x4CBF90u;
        goto label_4cbf90;
    }
    ctx->pc = 0x4CBF88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CBF90u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CBF90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CBF90u; }
            if (ctx->pc != 0x4CBF90u) { return; }
        }
        }
    }
    ctx->pc = 0x4CBF90u;
label_4cbf90:
    // 0x4cbf90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4cbf90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4cbf94:
    // 0x4cbf94: 0x3e00008  jr          $ra
label_4cbf98:
    if (ctx->pc == 0x4CBF98u) {
        ctx->pc = 0x4CBF98u;
            // 0x4cbf98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x4CBF9Cu;
        goto label_4cbf9c;
    }
    ctx->pc = 0x4CBF94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CBF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBF94u;
            // 0x4cbf98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CBF9Cu;
label_4cbf9c:
    // 0x4cbf9c: 0x0  nop
    ctx->pc = 0x4cbf9cu;
    // NOP
label_4cbfa0:
    // 0x4cbfa0: 0x8132ee8  j           func_4CBBA0
label_4cbfa4:
    if (ctx->pc == 0x4CBFA4u) {
        ctx->pc = 0x4CBFA4u;
            // 0x4cbfa4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4CBFA8u;
        goto label_4cbfa8;
    }
    ctx->pc = 0x4CBFA0u;
    ctx->pc = 0x4CBFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBFA0u;
            // 0x4cbfa4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CBBA0u;
    {
        auto targetFn = runtime->lookupFunction(0x4CBBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4CBFA8u;
label_4cbfa8:
    // 0x4cbfa8: 0x0  nop
    ctx->pc = 0x4cbfa8u;
    // NOP
label_4cbfac:
    // 0x4cbfac: 0x0  nop
    ctx->pc = 0x4cbfacu;
    // NOP
label_4cbfb0:
    // 0x4cbfb0: 0x3e00008  jr          $ra
label_4cbfb4:
    if (ctx->pc == 0x4CBFB4u) {
        ctx->pc = 0x4CBFB8u;
        goto label_4cbfb8;
    }
    ctx->pc = 0x4CBFB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CBFB8u;
label_4cbfb8:
    // 0x4cbfb8: 0x0  nop
    ctx->pc = 0x4cbfb8u;
    // NOP
label_4cbfbc:
    // 0x4cbfbc: 0x0  nop
    ctx->pc = 0x4cbfbcu;
    // NOP
label_4cbfc0:
    // 0x4cbfc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4cbfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4cbfc4:
    // 0x4cbfc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4cbfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4cbfc8:
    // 0x4cbfc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4cbfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4cbfcc:
    // 0x4cbfcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4cbfccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4cbfd0:
    // 0x4cbfd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4cbfd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4cbfd4:
    // 0x4cbfd4: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
label_4cbfd8:
    if (ctx->pc == 0x4CBFD8u) {
        ctx->pc = 0x4CBFD8u;
            // 0x4cbfd8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CBFDCu;
        goto label_4cbfdc;
    }
    ctx->pc = 0x4CBFD4u;
    {
        const bool branch_taken_0x4cbfd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CBFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBFD4u;
            // 0x4cbfd8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cbfd4) {
            ctx->pc = 0x4CC070u;
            goto label_4cc070;
        }
    }
    ctx->pc = 0x4CBFDCu;
label_4cbfdc:
    // 0x4cbfdc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4cbfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4cbfe0:
    // 0x4cbfe0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4cbfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4cbfe4:
    // 0x4cbfe4: 0x24631bd0  addiu       $v1, $v1, 0x1BD0
    ctx->pc = 0x4cbfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7120));
label_4cbfe8:
    // 0x4cbfe8: 0x24421c08  addiu       $v0, $v0, 0x1C08
    ctx->pc = 0x4cbfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7176));
label_4cbfec:
    // 0x4cbfec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4cbfecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4cbff0:
    // 0x4cbff0: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
label_4cbff4:
    if (ctx->pc == 0x4CBFF4u) {
        ctx->pc = 0x4CBFF4u;
            // 0x4cbff4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4CBFF8u;
        goto label_4cbff8;
    }
    ctx->pc = 0x4CBFF0u;
    {
        const bool branch_taken_0x4cbff0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CBFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBFF0u;
            // 0x4cbff4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cbff0) {
            ctx->pc = 0x4CC058u;
            goto label_4cc058;
        }
    }
    ctx->pc = 0x4CBFF8u;
label_4cbff8:
    // 0x4cbff8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4cbff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4cbffc:
    // 0x4cbffc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4cbffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4cc000:
    // 0x4cc000: 0x24631cb0  addiu       $v1, $v1, 0x1CB0
    ctx->pc = 0x4cc000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7344));
label_4cc004:
    // 0x4cc004: 0x24421ce8  addiu       $v0, $v0, 0x1CE8
    ctx->pc = 0x4cc004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7400));
label_4cc008:
    // 0x4cc008: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4cc008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4cc00c:
    // 0x4cc00c: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4cc00cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_4cc010:
    // 0x4cc010: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x4cc010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_4cc014:
    // 0x4cc014: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_4cc018:
    if (ctx->pc == 0x4CC018u) {
        ctx->pc = 0x4CC018u;
            // 0x4cc018: 0x26040078  addiu       $a0, $s0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
        ctx->pc = 0x4CC01Cu;
        goto label_4cc01c;
    }
    ctx->pc = 0x4CC014u;
    {
        const bool branch_taken_0x4cc014 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cc014) {
            ctx->pc = 0x4CC018u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC014u;
            // 0x4cc018: 0x26040078  addiu       $a0, $s0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CC02Cu;
            goto label_4cc02c;
        }
    }
    ctx->pc = 0x4CC01Cu;
label_4cc01c:
    // 0x4cc01c: 0x3c05004d  lui         $a1, 0x4D
    ctx->pc = 0x4cc01cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)77 << 16));
label_4cc020:
    // 0x4cc020: 0xc0407c0  jal         func_101F00
label_4cc024:
    if (ctx->pc == 0x4CC024u) {
        ctx->pc = 0x4CC024u;
            // 0x4cc024: 0x24a5c160  addiu       $a1, $a1, -0x3EA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951264));
        ctx->pc = 0x4CC028u;
        goto label_4cc028;
    }
    ctx->pc = 0x4CC020u;
    SET_GPR_U32(ctx, 31, 0x4CC028u);
    ctx->pc = 0x4CC024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC020u;
            // 0x4cc024: 0x24a5c160  addiu       $a1, $a1, -0x3EA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC028u; }
        if (ctx->pc != 0x4CC028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC028u; }
        if (ctx->pc != 0x4CC028u) { return; }
    }
    ctx->pc = 0x4CC028u;
label_4cc028:
    // 0x4cc028: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x4cc028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_4cc02c:
    // 0x4cc02c: 0xc13303c  jal         func_4CC0F0
label_4cc030:
    if (ctx->pc == 0x4CC030u) {
        ctx->pc = 0x4CC030u;
            // 0x4cc030: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4CC034u;
        goto label_4cc034;
    }
    ctx->pc = 0x4CC02Cu;
    SET_GPR_U32(ctx, 31, 0x4CC034u);
    ctx->pc = 0x4CC030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC02Cu;
            // 0x4cc030: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CC0F0u;
    if (runtime->hasFunction(0x4CC0F0u)) {
        auto targetFn = runtime->lookupFunction(0x4CC0F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC034u; }
        if (ctx->pc != 0x4CC034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CC0F0_0x4cc0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC034u; }
        if (ctx->pc != 0x4CC034u) { return; }
    }
    ctx->pc = 0x4CC034u;
label_4cc034:
    // 0x4cc034: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4cc034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_4cc038:
    // 0x4cc038: 0xc13303c  jal         func_4CC0F0
label_4cc03c:
    if (ctx->pc == 0x4CC03Cu) {
        ctx->pc = 0x4CC03Cu;
            // 0x4cc03c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4CC040u;
        goto label_4cc040;
    }
    ctx->pc = 0x4CC038u;
    SET_GPR_U32(ctx, 31, 0x4CC040u);
    ctx->pc = 0x4CC03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC038u;
            // 0x4cc03c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CC0F0u;
    if (runtime->hasFunction(0x4CC0F0u)) {
        auto targetFn = runtime->lookupFunction(0x4CC0F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC040u; }
        if (ctx->pc != 0x4CC040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CC0F0_0x4cc0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC040u; }
        if (ctx->pc != 0x4CC040u) { return; }
    }
    ctx->pc = 0x4CC040u;
label_4cc040:
    // 0x4cc040: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x4cc040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
label_4cc044:
    // 0x4cc044: 0xc133024  jal         func_4CC090
label_4cc048:
    if (ctx->pc == 0x4CC048u) {
        ctx->pc = 0x4CC048u;
            // 0x4cc048: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CC04Cu;
        goto label_4cc04c;
    }
    ctx->pc = 0x4CC044u;
    SET_GPR_U32(ctx, 31, 0x4CC04Cu);
    ctx->pc = 0x4CC048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC044u;
            // 0x4cc048: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CC090u;
    if (runtime->hasFunction(0x4CC090u)) {
        auto targetFn = runtime->lookupFunction(0x4CC090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC04Cu; }
        if (ctx->pc != 0x4CC04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CC090_0x4cc090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC04Cu; }
        if (ctx->pc != 0x4CC04Cu) { return; }
    }
    ctx->pc = 0x4CC04Cu;
label_4cc04c:
    // 0x4cc04c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4cc04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4cc050:
    // 0x4cc050: 0xc0ae1c0  jal         func_2B8700
label_4cc054:
    if (ctx->pc == 0x4CC054u) {
        ctx->pc = 0x4CC054u;
            // 0x4cc054: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CC058u;
        goto label_4cc058;
    }
    ctx->pc = 0x4CC050u;
    SET_GPR_U32(ctx, 31, 0x4CC058u);
    ctx->pc = 0x4CC054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC050u;
            // 0x4cc054: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC058u; }
        if (ctx->pc != 0x4CC058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC058u; }
        if (ctx->pc != 0x4CC058u) { return; }
    }
    ctx->pc = 0x4CC058u;
label_4cc058:
    // 0x4cc058: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4cc058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4cc05c:
    // 0x4cc05c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4cc05cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4cc060:
    // 0x4cc060: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4cc064:
    if (ctx->pc == 0x4CC064u) {
        ctx->pc = 0x4CC064u;
            // 0x4cc064: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CC068u;
        goto label_4cc068;
    }
    ctx->pc = 0x4CC060u;
    {
        const bool branch_taken_0x4cc060 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4cc060) {
            ctx->pc = 0x4CC064u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC060u;
            // 0x4cc064: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CC074u;
            goto label_4cc074;
        }
    }
    ctx->pc = 0x4CC068u;
label_4cc068:
    // 0x4cc068: 0xc0400a8  jal         func_1002A0
label_4cc06c:
    if (ctx->pc == 0x4CC06Cu) {
        ctx->pc = 0x4CC06Cu;
            // 0x4cc06c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CC070u;
        goto label_4cc070;
    }
    ctx->pc = 0x4CC068u;
    SET_GPR_U32(ctx, 31, 0x4CC070u);
    ctx->pc = 0x4CC06Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC068u;
            // 0x4cc06c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC070u; }
        if (ctx->pc != 0x4CC070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC070u; }
        if (ctx->pc != 0x4CC070u) { return; }
    }
    ctx->pc = 0x4CC070u;
label_4cc070:
    // 0x4cc070: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4cc070u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4cc074:
    // 0x4cc074: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4cc074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4cc078:
    // 0x4cc078: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4cc078u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4cc07c:
    // 0x4cc07c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4cc07cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4cc080:
    // 0x4cc080: 0x3e00008  jr          $ra
label_4cc084:
    if (ctx->pc == 0x4CC084u) {
        ctx->pc = 0x4CC084u;
            // 0x4cc084: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4CC088u;
        goto label_4cc088;
    }
    ctx->pc = 0x4CC080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CC084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC080u;
            // 0x4cc084: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CC088u;
label_4cc088:
    // 0x4cc088: 0x0  nop
    ctx->pc = 0x4cc088u;
    // NOP
label_4cc08c:
    // 0x4cc08c: 0x0  nop
    ctx->pc = 0x4cc08cu;
    // NOP
}
