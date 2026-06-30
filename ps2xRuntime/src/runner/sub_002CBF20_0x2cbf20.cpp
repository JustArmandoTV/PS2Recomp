#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CBF20
// Address: 0x2cbf20 - 0x2cc080
void sub_002CBF20_0x2cbf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CBF20_0x2cbf20");
#endif

    switch (ctx->pc) {
        case 0x2cbf20u: goto label_2cbf20;
        case 0x2cbf24u: goto label_2cbf24;
        case 0x2cbf28u: goto label_2cbf28;
        case 0x2cbf2cu: goto label_2cbf2c;
        case 0x2cbf30u: goto label_2cbf30;
        case 0x2cbf34u: goto label_2cbf34;
        case 0x2cbf38u: goto label_2cbf38;
        case 0x2cbf3cu: goto label_2cbf3c;
        case 0x2cbf40u: goto label_2cbf40;
        case 0x2cbf44u: goto label_2cbf44;
        case 0x2cbf48u: goto label_2cbf48;
        case 0x2cbf4cu: goto label_2cbf4c;
        case 0x2cbf50u: goto label_2cbf50;
        case 0x2cbf54u: goto label_2cbf54;
        case 0x2cbf58u: goto label_2cbf58;
        case 0x2cbf5cu: goto label_2cbf5c;
        case 0x2cbf60u: goto label_2cbf60;
        case 0x2cbf64u: goto label_2cbf64;
        case 0x2cbf68u: goto label_2cbf68;
        case 0x2cbf6cu: goto label_2cbf6c;
        case 0x2cbf70u: goto label_2cbf70;
        case 0x2cbf74u: goto label_2cbf74;
        case 0x2cbf78u: goto label_2cbf78;
        case 0x2cbf7cu: goto label_2cbf7c;
        case 0x2cbf80u: goto label_2cbf80;
        case 0x2cbf84u: goto label_2cbf84;
        case 0x2cbf88u: goto label_2cbf88;
        case 0x2cbf8cu: goto label_2cbf8c;
        case 0x2cbf90u: goto label_2cbf90;
        case 0x2cbf94u: goto label_2cbf94;
        case 0x2cbf98u: goto label_2cbf98;
        case 0x2cbf9cu: goto label_2cbf9c;
        case 0x2cbfa0u: goto label_2cbfa0;
        case 0x2cbfa4u: goto label_2cbfa4;
        case 0x2cbfa8u: goto label_2cbfa8;
        case 0x2cbfacu: goto label_2cbfac;
        case 0x2cbfb0u: goto label_2cbfb0;
        case 0x2cbfb4u: goto label_2cbfb4;
        case 0x2cbfb8u: goto label_2cbfb8;
        case 0x2cbfbcu: goto label_2cbfbc;
        case 0x2cbfc0u: goto label_2cbfc0;
        case 0x2cbfc4u: goto label_2cbfc4;
        case 0x2cbfc8u: goto label_2cbfc8;
        case 0x2cbfccu: goto label_2cbfcc;
        case 0x2cbfd0u: goto label_2cbfd0;
        case 0x2cbfd4u: goto label_2cbfd4;
        case 0x2cbfd8u: goto label_2cbfd8;
        case 0x2cbfdcu: goto label_2cbfdc;
        case 0x2cbfe0u: goto label_2cbfe0;
        case 0x2cbfe4u: goto label_2cbfe4;
        case 0x2cbfe8u: goto label_2cbfe8;
        case 0x2cbfecu: goto label_2cbfec;
        case 0x2cbff0u: goto label_2cbff0;
        case 0x2cbff4u: goto label_2cbff4;
        case 0x2cbff8u: goto label_2cbff8;
        case 0x2cbffcu: goto label_2cbffc;
        case 0x2cc000u: goto label_2cc000;
        case 0x2cc004u: goto label_2cc004;
        case 0x2cc008u: goto label_2cc008;
        case 0x2cc00cu: goto label_2cc00c;
        case 0x2cc010u: goto label_2cc010;
        case 0x2cc014u: goto label_2cc014;
        case 0x2cc018u: goto label_2cc018;
        case 0x2cc01cu: goto label_2cc01c;
        case 0x2cc020u: goto label_2cc020;
        case 0x2cc024u: goto label_2cc024;
        case 0x2cc028u: goto label_2cc028;
        case 0x2cc02cu: goto label_2cc02c;
        case 0x2cc030u: goto label_2cc030;
        case 0x2cc034u: goto label_2cc034;
        case 0x2cc038u: goto label_2cc038;
        case 0x2cc03cu: goto label_2cc03c;
        case 0x2cc040u: goto label_2cc040;
        case 0x2cc044u: goto label_2cc044;
        case 0x2cc048u: goto label_2cc048;
        case 0x2cc04cu: goto label_2cc04c;
        case 0x2cc050u: goto label_2cc050;
        case 0x2cc054u: goto label_2cc054;
        case 0x2cc058u: goto label_2cc058;
        case 0x2cc05cu: goto label_2cc05c;
        case 0x2cc060u: goto label_2cc060;
        case 0x2cc064u: goto label_2cc064;
        case 0x2cc068u: goto label_2cc068;
        case 0x2cc06cu: goto label_2cc06c;
        case 0x2cc070u: goto label_2cc070;
        case 0x2cc074u: goto label_2cc074;
        case 0x2cc078u: goto label_2cc078;
        case 0x2cc07cu: goto label_2cc07c;
        default: break;
    }

    ctx->pc = 0x2cbf20u;

label_2cbf20:
    // 0x2cbf20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cbf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2cbf24:
    // 0x2cbf24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cbf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2cbf28:
    // 0x2cbf28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cbf28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2cbf2c:
    // 0x2cbf2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cbf2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2cbf30:
    // 0x2cbf30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cbf30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cbf34:
    // 0x2cbf34: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_2cbf38:
    if (ctx->pc == 0x2CBF38u) {
        ctx->pc = 0x2CBF38u;
            // 0x2cbf38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CBF3Cu;
        goto label_2cbf3c;
    }
    ctx->pc = 0x2CBF34u;
    {
        const bool branch_taken_0x2cbf34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBF38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBF34u;
            // 0x2cbf38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbf34) {
            ctx->pc = 0x2CC068u;
            goto label_2cc068;
        }
    }
    ctx->pc = 0x2CBF3Cu;
label_2cbf3c:
    // 0x2cbf3c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cbf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2cbf40:
    // 0x2cbf40: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cbf40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cbf44:
    // 0x2cbf44: 0x246300b0  addiu       $v1, $v1, 0xB0
    ctx->pc = 0x2cbf44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
label_2cbf48:
    // 0x2cbf48: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2cbf48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_2cbf4c:
    // 0x2cbf4c: 0x244200e8  addiu       $v0, $v0, 0xE8
    ctx->pc = 0x2cbf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
label_2cbf50:
    // 0x2cbf50: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2cbf50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2cbf54:
    // 0x2cbf54: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2cbf54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2cbf58:
    // 0x2cbf58: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x2cbf58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2cbf5c:
    // 0x2cbf5c: 0xc0407c0  jal         func_101F00
label_2cbf60:
    if (ctx->pc == 0x2CBF60u) {
        ctx->pc = 0x2CBF60u;
            // 0x2cbf60: 0x24a5be20  addiu       $a1, $a1, -0x41E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950432));
        ctx->pc = 0x2CBF64u;
        goto label_2cbf64;
    }
    ctx->pc = 0x2CBF5Cu;
    SET_GPR_U32(ctx, 31, 0x2CBF64u);
    ctx->pc = 0x2CBF60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBF5Cu;
            // 0x2cbf60: 0x24a5be20  addiu       $a1, $a1, -0x41E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBF64u; }
        if (ctx->pc != 0x2CBF64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBF64u; }
        if (ctx->pc != 0x2CBF64u) { return; }
    }
    ctx->pc = 0x2CBF64u;
label_2cbf64:
    // 0x2cbf64: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x2cbf64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_2cbf68:
    // 0x2cbf68: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2cbf6c:
    if (ctx->pc == 0x2CBF6Cu) {
        ctx->pc = 0x2CBF6Cu;
            // 0x2cbf6c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2CBF70u;
        goto label_2cbf70;
    }
    ctx->pc = 0x2CBF68u;
    {
        const bool branch_taken_0x2cbf68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbf68) {
            ctx->pc = 0x2CBF6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBF68u;
            // 0x2cbf6c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CBF7Cu;
            goto label_2cbf7c;
        }
    }
    ctx->pc = 0x2CBF70u;
label_2cbf70:
    // 0x2cbf70: 0xc07507c  jal         func_1D41F0
label_2cbf74:
    if (ctx->pc == 0x2CBF74u) {
        ctx->pc = 0x2CBF74u;
            // 0x2cbf74: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x2CBF78u;
        goto label_2cbf78;
    }
    ctx->pc = 0x2CBF70u;
    SET_GPR_U32(ctx, 31, 0x2CBF78u);
    ctx->pc = 0x2CBF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBF70u;
            // 0x2cbf74: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBF78u; }
        if (ctx->pc != 0x2CBF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBF78u; }
        if (ctx->pc != 0x2CBF78u) { return; }
    }
    ctx->pc = 0x2CBF78u;
label_2cbf78:
    // 0x2cbf78: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2cbf78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2cbf7c:
    // 0x2cbf7c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2cbf80:
    if (ctx->pc == 0x2CBF80u) {
        ctx->pc = 0x2CBF80u;
            // 0x2cbf80: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x2CBF84u;
        goto label_2cbf84;
    }
    ctx->pc = 0x2CBF7Cu;
    {
        const bool branch_taken_0x2cbf7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbf7c) {
            ctx->pc = 0x2CBF80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBF7Cu;
            // 0x2cbf80: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CBFACu;
            goto label_2cbfac;
        }
    }
    ctx->pc = 0x2CBF84u;
label_2cbf84:
    // 0x2cbf84: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2cbf88:
    if (ctx->pc == 0x2CBF88u) {
        ctx->pc = 0x2CBF8Cu;
        goto label_2cbf8c;
    }
    ctx->pc = 0x2CBF84u;
    {
        const bool branch_taken_0x2cbf84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbf84) {
            ctx->pc = 0x2CBFA8u;
            goto label_2cbfa8;
        }
    }
    ctx->pc = 0x2CBF8Cu;
label_2cbf8c:
    // 0x2cbf8c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2cbf90:
    if (ctx->pc == 0x2CBF90u) {
        ctx->pc = 0x2CBF94u;
        goto label_2cbf94;
    }
    ctx->pc = 0x2CBF8Cu;
    {
        const bool branch_taken_0x2cbf8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbf8c) {
            ctx->pc = 0x2CBFA8u;
            goto label_2cbfa8;
        }
    }
    ctx->pc = 0x2CBF94u;
label_2cbf94:
    // 0x2cbf94: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2cbf94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2cbf98:
    // 0x2cbf98: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2cbf9c:
    if (ctx->pc == 0x2CBF9Cu) {
        ctx->pc = 0x2CBFA0u;
        goto label_2cbfa0;
    }
    ctx->pc = 0x2CBF98u;
    {
        const bool branch_taken_0x2cbf98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbf98) {
            ctx->pc = 0x2CBFA8u;
            goto label_2cbfa8;
        }
    }
    ctx->pc = 0x2CBFA0u;
label_2cbfa0:
    // 0x2cbfa0: 0xc0400a8  jal         func_1002A0
label_2cbfa4:
    if (ctx->pc == 0x2CBFA4u) {
        ctx->pc = 0x2CBFA8u;
        goto label_2cbfa8;
    }
    ctx->pc = 0x2CBFA0u;
    SET_GPR_U32(ctx, 31, 0x2CBFA8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBFA8u; }
        if (ctx->pc != 0x2CBFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBFA8u; }
        if (ctx->pc != 0x2CBFA8u) { return; }
    }
    ctx->pc = 0x2CBFA8u;
label_2cbfa8:
    // 0x2cbfa8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x2cbfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2cbfac:
    // 0x2cbfac: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2cbfb0:
    if (ctx->pc == 0x2CBFB0u) {
        ctx->pc = 0x2CBFB0u;
            // 0x2cbfb0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2CBFB4u;
        goto label_2cbfb4;
    }
    ctx->pc = 0x2CBFACu;
    {
        const bool branch_taken_0x2cbfac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbfac) {
            ctx->pc = 0x2CBFB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBFACu;
            // 0x2cbfb0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CBFDCu;
            goto label_2cbfdc;
        }
    }
    ctx->pc = 0x2CBFB4u;
label_2cbfb4:
    // 0x2cbfb4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2cbfb8:
    if (ctx->pc == 0x2CBFB8u) {
        ctx->pc = 0x2CBFBCu;
        goto label_2cbfbc;
    }
    ctx->pc = 0x2CBFB4u;
    {
        const bool branch_taken_0x2cbfb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbfb4) {
            ctx->pc = 0x2CBFD8u;
            goto label_2cbfd8;
        }
    }
    ctx->pc = 0x2CBFBCu;
label_2cbfbc:
    // 0x2cbfbc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2cbfc0:
    if (ctx->pc == 0x2CBFC0u) {
        ctx->pc = 0x2CBFC4u;
        goto label_2cbfc4;
    }
    ctx->pc = 0x2CBFBCu;
    {
        const bool branch_taken_0x2cbfbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbfbc) {
            ctx->pc = 0x2CBFD8u;
            goto label_2cbfd8;
        }
    }
    ctx->pc = 0x2CBFC4u;
label_2cbfc4:
    // 0x2cbfc4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2cbfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2cbfc8:
    // 0x2cbfc8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2cbfcc:
    if (ctx->pc == 0x2CBFCCu) {
        ctx->pc = 0x2CBFD0u;
        goto label_2cbfd0;
    }
    ctx->pc = 0x2CBFC8u;
    {
        const bool branch_taken_0x2cbfc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbfc8) {
            ctx->pc = 0x2CBFD8u;
            goto label_2cbfd8;
        }
    }
    ctx->pc = 0x2CBFD0u;
label_2cbfd0:
    // 0x2cbfd0: 0xc0400a8  jal         func_1002A0
label_2cbfd4:
    if (ctx->pc == 0x2CBFD4u) {
        ctx->pc = 0x2CBFD8u;
        goto label_2cbfd8;
    }
    ctx->pc = 0x2CBFD0u;
    SET_GPR_U32(ctx, 31, 0x2CBFD8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBFD8u; }
        if (ctx->pc != 0x2CBFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBFD8u; }
        if (ctx->pc != 0x2CBFD8u) { return; }
    }
    ctx->pc = 0x2CBFD8u;
label_2cbfd8:
    // 0x2cbfd8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2cbfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2cbfdc:
    // 0x2cbfdc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2cbfe0:
    if (ctx->pc == 0x2CBFE0u) {
        ctx->pc = 0x2CBFE4u;
        goto label_2cbfe4;
    }
    ctx->pc = 0x2CBFDCu;
    {
        const bool branch_taken_0x2cbfdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbfdc) {
            ctx->pc = 0x2CBFF8u;
            goto label_2cbff8;
        }
    }
    ctx->pc = 0x2CBFE4u;
label_2cbfe4:
    // 0x2cbfe4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cbfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2cbfe8:
    // 0x2cbfe8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2cbfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2cbfec:
    // 0x2cbfec: 0x24630098  addiu       $v1, $v1, 0x98
    ctx->pc = 0x2cbfecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 152));
label_2cbff0:
    // 0x2cbff0: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2cbff0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2cbff4:
    // 0x2cbff4: 0xac400e30  sw          $zero, 0xE30($v0)
    ctx->pc = 0x2cbff4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3632), GPR_U32(ctx, 0));
label_2cbff8:
    // 0x2cbff8: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_2cbffc:
    if (ctx->pc == 0x2CBFFCu) {
        ctx->pc = 0x2CBFFCu;
            // 0x2cbffc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2CC000u;
        goto label_2cc000;
    }
    ctx->pc = 0x2CBFF8u;
    {
        const bool branch_taken_0x2cbff8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbff8) {
            ctx->pc = 0x2CBFFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBFF8u;
            // 0x2cbffc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CC054u;
            goto label_2cc054;
        }
    }
    ctx->pc = 0x2CC000u;
label_2cc000:
    // 0x2cc000: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cc000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cc004:
    // 0x2cc004: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2cc004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2cc008:
    // 0x2cc008: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2cc008u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2cc00c:
    // 0x2cc00c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2cc00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2cc010:
    // 0x2cc010: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2cc014:
    if (ctx->pc == 0x2CC014u) {
        ctx->pc = 0x2CC014u;
            // 0x2cc014: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x2CC018u;
        goto label_2cc018;
    }
    ctx->pc = 0x2CC010u;
    {
        const bool branch_taken_0x2cc010 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc010) {
            ctx->pc = 0x2CC014u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC010u;
            // 0x2cc014: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CC02Cu;
            goto label_2cc02c;
        }
    }
    ctx->pc = 0x2CC018u;
label_2cc018:
    // 0x2cc018: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2cc018u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cc01c:
    // 0x2cc01c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2cc01cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2cc020:
    // 0x2cc020: 0x320f809  jalr        $t9
label_2cc024:
    if (ctx->pc == 0x2CC024u) {
        ctx->pc = 0x2CC024u;
            // 0x2cc024: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CC028u;
        goto label_2cc028;
    }
    ctx->pc = 0x2CC020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CC028u);
        ctx->pc = 0x2CC024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC020u;
            // 0x2cc024: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CC028u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CC028u; }
            if (ctx->pc != 0x2CC028u) { return; }
        }
        }
    }
    ctx->pc = 0x2CC028u;
label_2cc028:
    // 0x2cc028: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2cc028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2cc02c:
    // 0x2cc02c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2cc030:
    if (ctx->pc == 0x2CC030u) {
        ctx->pc = 0x2CC030u;
            // 0x2cc030: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CC034u;
        goto label_2cc034;
    }
    ctx->pc = 0x2CC02Cu;
    {
        const bool branch_taken_0x2cc02c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc02c) {
            ctx->pc = 0x2CC030u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC02Cu;
            // 0x2cc030: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CC048u;
            goto label_2cc048;
        }
    }
    ctx->pc = 0x2CC034u;
label_2cc034:
    // 0x2cc034: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2cc034u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cc038:
    // 0x2cc038: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2cc038u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2cc03c:
    // 0x2cc03c: 0x320f809  jalr        $t9
label_2cc040:
    if (ctx->pc == 0x2CC040u) {
        ctx->pc = 0x2CC040u;
            // 0x2cc040: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CC044u;
        goto label_2cc044;
    }
    ctx->pc = 0x2CC03Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CC044u);
        ctx->pc = 0x2CC040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC03Cu;
            // 0x2cc040: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CC044u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CC044u; }
            if (ctx->pc != 0x2CC044u) { return; }
        }
        }
    }
    ctx->pc = 0x2CC044u;
label_2cc044:
    // 0x2cc044: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cc044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cc048:
    // 0x2cc048: 0xc075bf8  jal         func_1D6FE0
label_2cc04c:
    if (ctx->pc == 0x2CC04Cu) {
        ctx->pc = 0x2CC04Cu;
            // 0x2cc04c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CC050u;
        goto label_2cc050;
    }
    ctx->pc = 0x2CC048u;
    SET_GPR_U32(ctx, 31, 0x2CC050u);
    ctx->pc = 0x2CC04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC048u;
            // 0x2cc04c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC050u; }
        if (ctx->pc != 0x2CC050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC050u; }
        if (ctx->pc != 0x2CC050u) { return; }
    }
    ctx->pc = 0x2CC050u;
label_2cc050:
    // 0x2cc050: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2cc050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2cc054:
    // 0x2cc054: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cc054u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2cc058:
    // 0x2cc058: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2cc05c:
    if (ctx->pc == 0x2CC05Cu) {
        ctx->pc = 0x2CC05Cu;
            // 0x2cc05c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CC060u;
        goto label_2cc060;
    }
    ctx->pc = 0x2CC058u;
    {
        const bool branch_taken_0x2cc058 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cc058) {
            ctx->pc = 0x2CC05Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC058u;
            // 0x2cc05c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CC06Cu;
            goto label_2cc06c;
        }
    }
    ctx->pc = 0x2CC060u;
label_2cc060:
    // 0x2cc060: 0xc0400a8  jal         func_1002A0
label_2cc064:
    if (ctx->pc == 0x2CC064u) {
        ctx->pc = 0x2CC064u;
            // 0x2cc064: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CC068u;
        goto label_2cc068;
    }
    ctx->pc = 0x2CC060u;
    SET_GPR_U32(ctx, 31, 0x2CC068u);
    ctx->pc = 0x2CC064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC060u;
            // 0x2cc064: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC068u; }
        if (ctx->pc != 0x2CC068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC068u; }
        if (ctx->pc != 0x2CC068u) { return; }
    }
    ctx->pc = 0x2CC068u;
label_2cc068:
    // 0x2cc068: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2cc068u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cc06c:
    // 0x2cc06c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cc06cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2cc070:
    // 0x2cc070: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cc070u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cc074:
    // 0x2cc074: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cc074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cc078:
    // 0x2cc078: 0x3e00008  jr          $ra
label_2cc07c:
    if (ctx->pc == 0x2CC07Cu) {
        ctx->pc = 0x2CC07Cu;
            // 0x2cc07c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2CC080u;
        goto label_fallthrough_0x2cc078;
    }
    ctx->pc = 0x2CC078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC078u;
            // 0x2cc07c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2cc078:
    ctx->pc = 0x2CC080u;
}
