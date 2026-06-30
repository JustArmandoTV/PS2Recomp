#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BBEF0
// Address: 0x2bbef0 - 0x2bc040
void sub_002BBEF0_0x2bbef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BBEF0_0x2bbef0");
#endif

    switch (ctx->pc) {
        case 0x2bbef0u: goto label_2bbef0;
        case 0x2bbef4u: goto label_2bbef4;
        case 0x2bbef8u: goto label_2bbef8;
        case 0x2bbefcu: goto label_2bbefc;
        case 0x2bbf00u: goto label_2bbf00;
        case 0x2bbf04u: goto label_2bbf04;
        case 0x2bbf08u: goto label_2bbf08;
        case 0x2bbf0cu: goto label_2bbf0c;
        case 0x2bbf10u: goto label_2bbf10;
        case 0x2bbf14u: goto label_2bbf14;
        case 0x2bbf18u: goto label_2bbf18;
        case 0x2bbf1cu: goto label_2bbf1c;
        case 0x2bbf20u: goto label_2bbf20;
        case 0x2bbf24u: goto label_2bbf24;
        case 0x2bbf28u: goto label_2bbf28;
        case 0x2bbf2cu: goto label_2bbf2c;
        case 0x2bbf30u: goto label_2bbf30;
        case 0x2bbf34u: goto label_2bbf34;
        case 0x2bbf38u: goto label_2bbf38;
        case 0x2bbf3cu: goto label_2bbf3c;
        case 0x2bbf40u: goto label_2bbf40;
        case 0x2bbf44u: goto label_2bbf44;
        case 0x2bbf48u: goto label_2bbf48;
        case 0x2bbf4cu: goto label_2bbf4c;
        case 0x2bbf50u: goto label_2bbf50;
        case 0x2bbf54u: goto label_2bbf54;
        case 0x2bbf58u: goto label_2bbf58;
        case 0x2bbf5cu: goto label_2bbf5c;
        case 0x2bbf60u: goto label_2bbf60;
        case 0x2bbf64u: goto label_2bbf64;
        case 0x2bbf68u: goto label_2bbf68;
        case 0x2bbf6cu: goto label_2bbf6c;
        case 0x2bbf70u: goto label_2bbf70;
        case 0x2bbf74u: goto label_2bbf74;
        case 0x2bbf78u: goto label_2bbf78;
        case 0x2bbf7cu: goto label_2bbf7c;
        case 0x2bbf80u: goto label_2bbf80;
        case 0x2bbf84u: goto label_2bbf84;
        case 0x2bbf88u: goto label_2bbf88;
        case 0x2bbf8cu: goto label_2bbf8c;
        case 0x2bbf90u: goto label_2bbf90;
        case 0x2bbf94u: goto label_2bbf94;
        case 0x2bbf98u: goto label_2bbf98;
        case 0x2bbf9cu: goto label_2bbf9c;
        case 0x2bbfa0u: goto label_2bbfa0;
        case 0x2bbfa4u: goto label_2bbfa4;
        case 0x2bbfa8u: goto label_2bbfa8;
        case 0x2bbfacu: goto label_2bbfac;
        case 0x2bbfb0u: goto label_2bbfb0;
        case 0x2bbfb4u: goto label_2bbfb4;
        case 0x2bbfb8u: goto label_2bbfb8;
        case 0x2bbfbcu: goto label_2bbfbc;
        case 0x2bbfc0u: goto label_2bbfc0;
        case 0x2bbfc4u: goto label_2bbfc4;
        case 0x2bbfc8u: goto label_2bbfc8;
        case 0x2bbfccu: goto label_2bbfcc;
        case 0x2bbfd0u: goto label_2bbfd0;
        case 0x2bbfd4u: goto label_2bbfd4;
        case 0x2bbfd8u: goto label_2bbfd8;
        case 0x2bbfdcu: goto label_2bbfdc;
        case 0x2bbfe0u: goto label_2bbfe0;
        case 0x2bbfe4u: goto label_2bbfe4;
        case 0x2bbfe8u: goto label_2bbfe8;
        case 0x2bbfecu: goto label_2bbfec;
        case 0x2bbff0u: goto label_2bbff0;
        case 0x2bbff4u: goto label_2bbff4;
        case 0x2bbff8u: goto label_2bbff8;
        case 0x2bbffcu: goto label_2bbffc;
        case 0x2bc000u: goto label_2bc000;
        case 0x2bc004u: goto label_2bc004;
        case 0x2bc008u: goto label_2bc008;
        case 0x2bc00cu: goto label_2bc00c;
        case 0x2bc010u: goto label_2bc010;
        case 0x2bc014u: goto label_2bc014;
        case 0x2bc018u: goto label_2bc018;
        case 0x2bc01cu: goto label_2bc01c;
        case 0x2bc020u: goto label_2bc020;
        case 0x2bc024u: goto label_2bc024;
        case 0x2bc028u: goto label_2bc028;
        case 0x2bc02cu: goto label_2bc02c;
        case 0x2bc030u: goto label_2bc030;
        case 0x2bc034u: goto label_2bc034;
        case 0x2bc038u: goto label_2bc038;
        case 0x2bc03cu: goto label_2bc03c;
        default: break;
    }

    ctx->pc = 0x2bbef0u;

label_2bbef0:
    // 0x2bbef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bbef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2bbef4:
    // 0x2bbef4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bbef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2bbef8:
    // 0x2bbef8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bbef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2bbefc:
    // 0x2bbefc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bbefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2bbf00:
    // 0x2bbf00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bbf00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bbf04:
    // 0x2bbf04: 0x12200047  beqz        $s1, . + 4 + (0x47 << 2)
label_2bbf08:
    if (ctx->pc == 0x2BBF08u) {
        ctx->pc = 0x2BBF08u;
            // 0x2bbf08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BBF0Cu;
        goto label_2bbf0c;
    }
    ctx->pc = 0x2BBF04u;
    {
        const bool branch_taken_0x2bbf04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBF08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBF04u;
            // 0x2bbf08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbf04) {
            ctx->pc = 0x2BC024u;
            goto label_2bc024;
        }
    }
    ctx->pc = 0x2BBF0Cu;
label_2bbf0c:
    // 0x2bbf0c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bbf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2bbf10:
    // 0x2bbf10: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bbf10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bbf14:
    // 0x2bbf14: 0x24632140  addiu       $v1, $v1, 0x2140
    ctx->pc = 0x2bbf14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8512));
label_2bbf18:
    // 0x2bbf18: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2bbf18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2bbf1c:
    // 0x2bbf1c: 0x24422178  addiu       $v0, $v0, 0x2178
    ctx->pc = 0x2bbf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8568));
label_2bbf20:
    // 0x2bbf20: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2bbf20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2bbf24:
    // 0x2bbf24: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2bbf24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2bbf28:
    // 0x2bbf28: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x2bbf28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2bbf2c:
    // 0x2bbf2c: 0xc0407c0  jal         func_101F00
label_2bbf30:
    if (ctx->pc == 0x2BBF30u) {
        ctx->pc = 0x2BBF30u;
            // 0x2bbf30: 0x24a5bdf0  addiu       $a1, $a1, -0x4210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950384));
        ctx->pc = 0x2BBF34u;
        goto label_2bbf34;
    }
    ctx->pc = 0x2BBF2Cu;
    SET_GPR_U32(ctx, 31, 0x2BBF34u);
    ctx->pc = 0x2BBF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBF2Cu;
            // 0x2bbf30: 0x24a5bdf0  addiu       $a1, $a1, -0x4210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBF34u; }
        if (ctx->pc != 0x2BBF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBF34u; }
        if (ctx->pc != 0x2BBF34u) { return; }
    }
    ctx->pc = 0x2BBF34u;
label_2bbf34:
    // 0x2bbf34: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2bbf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2bbf38:
    // 0x2bbf38: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2bbf3c:
    if (ctx->pc == 0x2BBF3Cu) {
        ctx->pc = 0x2BBF3Cu;
            // 0x2bbf3c: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x2BBF40u;
        goto label_2bbf40;
    }
    ctx->pc = 0x2BBF38u;
    {
        const bool branch_taken_0x2bbf38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbf38) {
            ctx->pc = 0x2BBF3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBF38u;
            // 0x2bbf3c: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BBF68u;
            goto label_2bbf68;
        }
    }
    ctx->pc = 0x2BBF40u;
label_2bbf40:
    // 0x2bbf40: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2bbf44:
    if (ctx->pc == 0x2BBF44u) {
        ctx->pc = 0x2BBF48u;
        goto label_2bbf48;
    }
    ctx->pc = 0x2BBF40u;
    {
        const bool branch_taken_0x2bbf40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbf40) {
            ctx->pc = 0x2BBF64u;
            goto label_2bbf64;
        }
    }
    ctx->pc = 0x2BBF48u;
label_2bbf48:
    // 0x2bbf48: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2bbf4c:
    if (ctx->pc == 0x2BBF4Cu) {
        ctx->pc = 0x2BBF50u;
        goto label_2bbf50;
    }
    ctx->pc = 0x2BBF48u;
    {
        const bool branch_taken_0x2bbf48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbf48) {
            ctx->pc = 0x2BBF64u;
            goto label_2bbf64;
        }
    }
    ctx->pc = 0x2BBF50u;
label_2bbf50:
    // 0x2bbf50: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2bbf50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2bbf54:
    // 0x2bbf54: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2bbf58:
    if (ctx->pc == 0x2BBF58u) {
        ctx->pc = 0x2BBF5Cu;
        goto label_2bbf5c;
    }
    ctx->pc = 0x2BBF54u;
    {
        const bool branch_taken_0x2bbf54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbf54) {
            ctx->pc = 0x2BBF64u;
            goto label_2bbf64;
        }
    }
    ctx->pc = 0x2BBF5Cu;
label_2bbf5c:
    // 0x2bbf5c: 0xc0400a8  jal         func_1002A0
label_2bbf60:
    if (ctx->pc == 0x2BBF60u) {
        ctx->pc = 0x2BBF64u;
        goto label_2bbf64;
    }
    ctx->pc = 0x2BBF5Cu;
    SET_GPR_U32(ctx, 31, 0x2BBF64u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBF64u; }
        if (ctx->pc != 0x2BBF64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBF64u; }
        if (ctx->pc != 0x2BBF64u) { return; }
    }
    ctx->pc = 0x2BBF64u;
label_2bbf64:
    // 0x2bbf64: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x2bbf64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2bbf68:
    // 0x2bbf68: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2bbf6c:
    if (ctx->pc == 0x2BBF6Cu) {
        ctx->pc = 0x2BBF6Cu;
            // 0x2bbf6c: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2BBF70u;
        goto label_2bbf70;
    }
    ctx->pc = 0x2BBF68u;
    {
        const bool branch_taken_0x2bbf68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbf68) {
            ctx->pc = 0x2BBF6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBF68u;
            // 0x2bbf6c: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BBF98u;
            goto label_2bbf98;
        }
    }
    ctx->pc = 0x2BBF70u;
label_2bbf70:
    // 0x2bbf70: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2bbf74:
    if (ctx->pc == 0x2BBF74u) {
        ctx->pc = 0x2BBF78u;
        goto label_2bbf78;
    }
    ctx->pc = 0x2BBF70u;
    {
        const bool branch_taken_0x2bbf70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbf70) {
            ctx->pc = 0x2BBF94u;
            goto label_2bbf94;
        }
    }
    ctx->pc = 0x2BBF78u;
label_2bbf78:
    // 0x2bbf78: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2bbf7c:
    if (ctx->pc == 0x2BBF7Cu) {
        ctx->pc = 0x2BBF80u;
        goto label_2bbf80;
    }
    ctx->pc = 0x2BBF78u;
    {
        const bool branch_taken_0x2bbf78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbf78) {
            ctx->pc = 0x2BBF94u;
            goto label_2bbf94;
        }
    }
    ctx->pc = 0x2BBF80u;
label_2bbf80:
    // 0x2bbf80: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2bbf80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2bbf84:
    // 0x2bbf84: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2bbf88:
    if (ctx->pc == 0x2BBF88u) {
        ctx->pc = 0x2BBF8Cu;
        goto label_2bbf8c;
    }
    ctx->pc = 0x2BBF84u;
    {
        const bool branch_taken_0x2bbf84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbf84) {
            ctx->pc = 0x2BBF94u;
            goto label_2bbf94;
        }
    }
    ctx->pc = 0x2BBF8Cu;
label_2bbf8c:
    // 0x2bbf8c: 0xc0400a8  jal         func_1002A0
label_2bbf90:
    if (ctx->pc == 0x2BBF90u) {
        ctx->pc = 0x2BBF94u;
        goto label_2bbf94;
    }
    ctx->pc = 0x2BBF8Cu;
    SET_GPR_U32(ctx, 31, 0x2BBF94u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBF94u; }
        if (ctx->pc != 0x2BBF94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBF94u; }
        if (ctx->pc != 0x2BBF94u) { return; }
    }
    ctx->pc = 0x2BBF94u;
label_2bbf94:
    // 0x2bbf94: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2bbf94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2bbf98:
    // 0x2bbf98: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2bbf9c:
    if (ctx->pc == 0x2BBF9Cu) {
        ctx->pc = 0x2BBFA0u;
        goto label_2bbfa0;
    }
    ctx->pc = 0x2BBF98u;
    {
        const bool branch_taken_0x2bbf98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbf98) {
            ctx->pc = 0x2BBFB4u;
            goto label_2bbfb4;
        }
    }
    ctx->pc = 0x2BBFA0u;
label_2bbfa0:
    // 0x2bbfa0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bbfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2bbfa4:
    // 0x2bbfa4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2bbfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2bbfa8:
    // 0x2bbfa8: 0x24632128  addiu       $v1, $v1, 0x2128
    ctx->pc = 0x2bbfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8488));
label_2bbfac:
    // 0x2bbfac: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2bbfacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2bbfb0:
    // 0x2bbfb0: 0xac400d38  sw          $zero, 0xD38($v0)
    ctx->pc = 0x2bbfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3384), GPR_U32(ctx, 0));
label_2bbfb4:
    // 0x2bbfb4: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_2bbfb8:
    if (ctx->pc == 0x2BBFB8u) {
        ctx->pc = 0x2BBFB8u;
            // 0x2bbfb8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2BBFBCu;
        goto label_2bbfbc;
    }
    ctx->pc = 0x2BBFB4u;
    {
        const bool branch_taken_0x2bbfb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbfb4) {
            ctx->pc = 0x2BBFB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBFB4u;
            // 0x2bbfb8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BC010u;
            goto label_2bc010;
        }
    }
    ctx->pc = 0x2BBFBCu;
label_2bbfbc:
    // 0x2bbfbc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bbfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bbfc0:
    // 0x2bbfc0: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2bbfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2bbfc4:
    // 0x2bbfc4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2bbfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2bbfc8:
    // 0x2bbfc8: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2bbfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2bbfcc:
    // 0x2bbfcc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2bbfd0:
    if (ctx->pc == 0x2BBFD0u) {
        ctx->pc = 0x2BBFD0u;
            // 0x2bbfd0: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x2BBFD4u;
        goto label_2bbfd4;
    }
    ctx->pc = 0x2BBFCCu;
    {
        const bool branch_taken_0x2bbfcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbfcc) {
            ctx->pc = 0x2BBFD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBFCCu;
            // 0x2bbfd0: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BBFE8u;
            goto label_2bbfe8;
        }
    }
    ctx->pc = 0x2BBFD4u;
label_2bbfd4:
    // 0x2bbfd4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bbfd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bbfd8:
    // 0x2bbfd8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2bbfd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2bbfdc:
    // 0x2bbfdc: 0x320f809  jalr        $t9
label_2bbfe0:
    if (ctx->pc == 0x2BBFE0u) {
        ctx->pc = 0x2BBFE0u;
            // 0x2bbfe0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BBFE4u;
        goto label_2bbfe4;
    }
    ctx->pc = 0x2BBFDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BBFE4u);
        ctx->pc = 0x2BBFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBFDCu;
            // 0x2bbfe0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BBFE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BBFE4u; }
            if (ctx->pc != 0x2BBFE4u) { return; }
        }
        }
    }
    ctx->pc = 0x2BBFE4u;
label_2bbfe4:
    // 0x2bbfe4: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2bbfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2bbfe8:
    // 0x2bbfe8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2bbfec:
    if (ctx->pc == 0x2BBFECu) {
        ctx->pc = 0x2BBFECu;
            // 0x2bbfec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BBFF0u;
        goto label_2bbff0;
    }
    ctx->pc = 0x2BBFE8u;
    {
        const bool branch_taken_0x2bbfe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbfe8) {
            ctx->pc = 0x2BBFECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBFE8u;
            // 0x2bbfec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BC004u;
            goto label_2bc004;
        }
    }
    ctx->pc = 0x2BBFF0u;
label_2bbff0:
    // 0x2bbff0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bbff0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bbff4:
    // 0x2bbff4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2bbff4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2bbff8:
    // 0x2bbff8: 0x320f809  jalr        $t9
label_2bbffc:
    if (ctx->pc == 0x2BBFFCu) {
        ctx->pc = 0x2BBFFCu;
            // 0x2bbffc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BC000u;
        goto label_2bc000;
    }
    ctx->pc = 0x2BBFF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BC000u);
        ctx->pc = 0x2BBFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBFF8u;
            // 0x2bbffc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BC000u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BC000u; }
            if (ctx->pc != 0x2BC000u) { return; }
        }
        }
    }
    ctx->pc = 0x2BC000u;
label_2bc000:
    // 0x2bc000: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bc000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bc004:
    // 0x2bc004: 0xc075bf8  jal         func_1D6FE0
label_2bc008:
    if (ctx->pc == 0x2BC008u) {
        ctx->pc = 0x2BC008u;
            // 0x2bc008: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BC00Cu;
        goto label_2bc00c;
    }
    ctx->pc = 0x2BC004u;
    SET_GPR_U32(ctx, 31, 0x2BC00Cu);
    ctx->pc = 0x2BC008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC004u;
            // 0x2bc008: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC00Cu; }
        if (ctx->pc != 0x2BC00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC00Cu; }
        if (ctx->pc != 0x2BC00Cu) { return; }
    }
    ctx->pc = 0x2BC00Cu;
label_2bc00c:
    // 0x2bc00c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2bc00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2bc010:
    // 0x2bc010: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bc010u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2bc014:
    // 0x2bc014: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2bc018:
    if (ctx->pc == 0x2BC018u) {
        ctx->pc = 0x2BC018u;
            // 0x2bc018: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BC01Cu;
        goto label_2bc01c;
    }
    ctx->pc = 0x2BC014u;
    {
        const bool branch_taken_0x2bc014 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bc014) {
            ctx->pc = 0x2BC018u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC014u;
            // 0x2bc018: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BC028u;
            goto label_2bc028;
        }
    }
    ctx->pc = 0x2BC01Cu;
label_2bc01c:
    // 0x2bc01c: 0xc0400a8  jal         func_1002A0
label_2bc020:
    if (ctx->pc == 0x2BC020u) {
        ctx->pc = 0x2BC020u;
            // 0x2bc020: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BC024u;
        goto label_2bc024;
    }
    ctx->pc = 0x2BC01Cu;
    SET_GPR_U32(ctx, 31, 0x2BC024u);
    ctx->pc = 0x2BC020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC01Cu;
            // 0x2bc020: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC024u; }
        if (ctx->pc != 0x2BC024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC024u; }
        if (ctx->pc != 0x2BC024u) { return; }
    }
    ctx->pc = 0x2BC024u;
label_2bc024:
    // 0x2bc024: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2bc024u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bc028:
    // 0x2bc028: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bc028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2bc02c:
    // 0x2bc02c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bc02cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bc030:
    // 0x2bc030: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bc030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2bc034:
    // 0x2bc034: 0x3e00008  jr          $ra
label_2bc038:
    if (ctx->pc == 0x2BC038u) {
        ctx->pc = 0x2BC038u;
            // 0x2bc038: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2BC03Cu;
        goto label_2bc03c;
    }
    ctx->pc = 0x2BC034u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC034u;
            // 0x2bc038: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BC03Cu;
label_2bc03c:
    // 0x2bc03c: 0x0  nop
    ctx->pc = 0x2bc03cu;
    // NOP
}
