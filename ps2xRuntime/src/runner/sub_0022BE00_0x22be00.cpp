#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022BE00
// Address: 0x22be00 - 0x22bf80
void sub_0022BE00_0x22be00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BE00_0x22be00");
#endif

    switch (ctx->pc) {
        case 0x22be00u: goto label_22be00;
        case 0x22be04u: goto label_22be04;
        case 0x22be08u: goto label_22be08;
        case 0x22be0cu: goto label_22be0c;
        case 0x22be10u: goto label_22be10;
        case 0x22be14u: goto label_22be14;
        case 0x22be18u: goto label_22be18;
        case 0x22be1cu: goto label_22be1c;
        case 0x22be20u: goto label_22be20;
        case 0x22be24u: goto label_22be24;
        case 0x22be28u: goto label_22be28;
        case 0x22be2cu: goto label_22be2c;
        case 0x22be30u: goto label_22be30;
        case 0x22be34u: goto label_22be34;
        case 0x22be38u: goto label_22be38;
        case 0x22be3cu: goto label_22be3c;
        case 0x22be40u: goto label_22be40;
        case 0x22be44u: goto label_22be44;
        case 0x22be48u: goto label_22be48;
        case 0x22be4cu: goto label_22be4c;
        case 0x22be50u: goto label_22be50;
        case 0x22be54u: goto label_22be54;
        case 0x22be58u: goto label_22be58;
        case 0x22be5cu: goto label_22be5c;
        case 0x22be60u: goto label_22be60;
        case 0x22be64u: goto label_22be64;
        case 0x22be68u: goto label_22be68;
        case 0x22be6cu: goto label_22be6c;
        case 0x22be70u: goto label_22be70;
        case 0x22be74u: goto label_22be74;
        case 0x22be78u: goto label_22be78;
        case 0x22be7cu: goto label_22be7c;
        case 0x22be80u: goto label_22be80;
        case 0x22be84u: goto label_22be84;
        case 0x22be88u: goto label_22be88;
        case 0x22be8cu: goto label_22be8c;
        case 0x22be90u: goto label_22be90;
        case 0x22be94u: goto label_22be94;
        case 0x22be98u: goto label_22be98;
        case 0x22be9cu: goto label_22be9c;
        case 0x22bea0u: goto label_22bea0;
        case 0x22bea4u: goto label_22bea4;
        case 0x22bea8u: goto label_22bea8;
        case 0x22beacu: goto label_22beac;
        case 0x22beb0u: goto label_22beb0;
        case 0x22beb4u: goto label_22beb4;
        case 0x22beb8u: goto label_22beb8;
        case 0x22bebcu: goto label_22bebc;
        case 0x22bec0u: goto label_22bec0;
        case 0x22bec4u: goto label_22bec4;
        case 0x22bec8u: goto label_22bec8;
        case 0x22beccu: goto label_22becc;
        case 0x22bed0u: goto label_22bed0;
        case 0x22bed4u: goto label_22bed4;
        case 0x22bed8u: goto label_22bed8;
        case 0x22bedcu: goto label_22bedc;
        case 0x22bee0u: goto label_22bee0;
        case 0x22bee4u: goto label_22bee4;
        case 0x22bee8u: goto label_22bee8;
        case 0x22beecu: goto label_22beec;
        case 0x22bef0u: goto label_22bef0;
        case 0x22bef4u: goto label_22bef4;
        case 0x22bef8u: goto label_22bef8;
        case 0x22befcu: goto label_22befc;
        case 0x22bf00u: goto label_22bf00;
        case 0x22bf04u: goto label_22bf04;
        case 0x22bf08u: goto label_22bf08;
        case 0x22bf0cu: goto label_22bf0c;
        case 0x22bf10u: goto label_22bf10;
        case 0x22bf14u: goto label_22bf14;
        case 0x22bf18u: goto label_22bf18;
        case 0x22bf1cu: goto label_22bf1c;
        case 0x22bf20u: goto label_22bf20;
        case 0x22bf24u: goto label_22bf24;
        case 0x22bf28u: goto label_22bf28;
        case 0x22bf2cu: goto label_22bf2c;
        case 0x22bf30u: goto label_22bf30;
        case 0x22bf34u: goto label_22bf34;
        case 0x22bf38u: goto label_22bf38;
        case 0x22bf3cu: goto label_22bf3c;
        case 0x22bf40u: goto label_22bf40;
        case 0x22bf44u: goto label_22bf44;
        case 0x22bf48u: goto label_22bf48;
        case 0x22bf4cu: goto label_22bf4c;
        case 0x22bf50u: goto label_22bf50;
        case 0x22bf54u: goto label_22bf54;
        case 0x22bf58u: goto label_22bf58;
        case 0x22bf5cu: goto label_22bf5c;
        case 0x22bf60u: goto label_22bf60;
        case 0x22bf64u: goto label_22bf64;
        case 0x22bf68u: goto label_22bf68;
        case 0x22bf6cu: goto label_22bf6c;
        case 0x22bf70u: goto label_22bf70;
        case 0x22bf74u: goto label_22bf74;
        case 0x22bf78u: goto label_22bf78;
        case 0x22bf7cu: goto label_22bf7c;
        default: break;
    }

    ctx->pc = 0x22be00u;

label_22be00:
    // 0x22be00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22be00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_22be04:
    // 0x22be04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22be04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22be08:
    // 0x22be08: 0xc08ae08  jal         func_22B820
label_22be0c:
    if (ctx->pc == 0x22BE0Cu) {
        ctx->pc = 0x22BE10u;
        goto label_22be10;
    }
    ctx->pc = 0x22BE08u;
    SET_GPR_U32(ctx, 31, 0x22BE10u);
    ctx->pc = 0x22B820u;
    if (runtime->hasFunction(0x22B820u)) {
        auto targetFn = runtime->lookupFunction(0x22B820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BE10u; }
        if (ctx->pc != 0x22BE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B820_0x22b820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BE10u; }
        if (ctx->pc != 0x22BE10u) { return; }
    }
    ctx->pc = 0x22BE10u;
label_22be10:
    // 0x22be10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22be10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22be14:
    // 0x22be14: 0x3e00008  jr          $ra
label_22be18:
    if (ctx->pc == 0x22BE18u) {
        ctx->pc = 0x22BE18u;
            // 0x22be18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x22BE1Cu;
        goto label_22be1c;
    }
    ctx->pc = 0x22BE14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BE14u;
            // 0x22be18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22BE1Cu;
label_22be1c:
    // 0x22be1c: 0x0  nop
    ctx->pc = 0x22be1cu;
    // NOP
label_22be20:
    // 0x22be20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22be20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_22be24:
    // 0x22be24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22be24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_22be28:
    // 0x22be28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22be28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22be2c:
    // 0x22be2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22be2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22be30:
    // 0x22be30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22be30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22be34:
    // 0x22be34: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x22be34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_22be38:
    // 0x22be38: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_22be3c:
    if (ctx->pc == 0x22BE3Cu) {
        ctx->pc = 0x22BE3Cu;
            // 0x22be3c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22BE40u;
        goto label_22be40;
    }
    ctx->pc = 0x22BE38u;
    {
        const bool branch_taken_0x22be38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BE38u;
            // 0x22be3c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22be38) {
            ctx->pc = 0x22BE6Cu;
            goto label_22be6c;
        }
    }
    ctx->pc = 0x22BE40u;
label_22be40:
    // 0x22be40: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x22be40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_22be44:
    // 0x22be44: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_22be48:
    if (ctx->pc == 0x22BE48u) {
        ctx->pc = 0x22BE4Cu;
        goto label_22be4c;
    }
    ctx->pc = 0x22BE44u;
    {
        const bool branch_taken_0x22be44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22be44) {
            ctx->pc = 0x22BE6Cu;
            goto label_22be6c;
        }
    }
    ctx->pc = 0x22BE4Cu;
label_22be4c:
    // 0x22be4c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x22be4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_22be50:
    // 0x22be50: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x22be50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_22be54:
    // 0x22be54: 0xa3a20030  sb          $v0, 0x30($sp)
    ctx->pc = 0x22be54u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
label_22be58:
    // 0x22be58: 0xafb10034  sw          $s1, 0x34($sp)
    ctx->pc = 0x22be58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 17));
label_22be5c:
    // 0x22be5c: 0xc08d1cc  jal         func_234730
label_22be60:
    if (ctx->pc == 0x22BE60u) {
        ctx->pc = 0x22BE60u;
            // 0x22be60: 0xafb00038  sw          $s0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 16));
        ctx->pc = 0x22BE64u;
        goto label_22be64;
    }
    ctx->pc = 0x22BE5Cu;
    SET_GPR_U32(ctx, 31, 0x22BE64u);
    ctx->pc = 0x22BE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BE5Cu;
            // 0x22be60: 0xafb00038  sw          $s0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234730u;
    if (runtime->hasFunction(0x234730u)) {
        auto targetFn = runtime->lookupFunction(0x234730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BE64u; }
        if (ctx->pc != 0x22BE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234730_0x234730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BE64u; }
        if (ctx->pc != 0x22BE64u) { return; }
    }
    ctx->pc = 0x22BE64u;
label_22be64:
    // 0x22be64: 0x1000003e  b           . + 4 + (0x3E << 2)
label_22be68:
    if (ctx->pc == 0x22BE68u) {
        ctx->pc = 0x22BE68u;
            // 0x22be68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22BE6Cu;
        goto label_22be6c;
    }
    ctx->pc = 0x22BE64u;
    {
        const bool branch_taken_0x22be64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BE64u;
            // 0x22be68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22be64) {
            ctx->pc = 0x22BF60u;
            goto label_22bf60;
        }
    }
    ctx->pc = 0x22BE6Cu;
label_22be6c:
    // 0x22be6c: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
label_22be70:
    if (ctx->pc == 0x22BE70u) {
        ctx->pc = 0x22BE70u;
            // 0x22be70: 0x96020004  lhu         $v0, 0x4($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x22BE74u;
        goto label_22be74;
    }
    ctx->pc = 0x22BE6Cu;
    {
        const bool branch_taken_0x22be6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22be6c) {
            ctx->pc = 0x22BE70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22BE6Cu;
            // 0x22be70: 0x96020004  lhu         $v0, 0x4($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22BE90u;
            goto label_22be90;
        }
    }
    ctx->pc = 0x22BE74u;
label_22be74:
    // 0x22be74: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x22be74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_22be78:
    // 0x22be78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22be78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_22be7c:
    // 0x22be7c: 0xac820084  sw          $v0, 0x84($a0)
    ctx->pc = 0x22be7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
label_22be80:
    // 0x22be80: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x22be80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_22be84:
    // 0x22be84: 0xc08f8c8  jal         func_23E320
label_22be88:
    if (ctx->pc == 0x22BE88u) {
        ctx->pc = 0x22BE88u;
            // 0x22be88: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22BE8Cu;
        goto label_22be8c;
    }
    ctx->pc = 0x22BE84u;
    SET_GPR_U32(ctx, 31, 0x22BE8Cu);
    ctx->pc = 0x22BE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BE84u;
            // 0x22be88: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E320u;
    if (runtime->hasFunction(0x23E320u)) {
        auto targetFn = runtime->lookupFunction(0x23E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BE8Cu; }
        if (ctx->pc != 0x22BE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023E320_0x23e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BE8Cu; }
        if (ctx->pc != 0x22BE8Cu) { return; }
    }
    ctx->pc = 0x22BE8Cu;
label_22be8c:
    // 0x22be8c: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x22be8cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_22be90:
    // 0x22be90: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_22be94:
    if (ctx->pc == 0x22BE94u) {
        ctx->pc = 0x22BE94u;
            // 0x22be94: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->pc = 0x22BE98u;
        goto label_22be98;
    }
    ctx->pc = 0x22BE90u;
    {
        const bool branch_taken_0x22be90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22be90) {
            ctx->pc = 0x22BE94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22BE90u;
            // 0x22be94: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22BEA8u;
            goto label_22bea8;
        }
    }
    ctx->pc = 0x22BE98u;
label_22be98:
    // 0x22be98: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x22be98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_22be9c:
    // 0x22be9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22be9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_22bea0:
    // 0x22bea0: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x22bea0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
label_22bea4:
    // 0x22bea4: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x22bea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_22bea8:
    // 0x22bea8: 0x50800012  beql        $a0, $zero, . + 4 + (0x12 << 2)
label_22beac:
    if (ctx->pc == 0x22BEACu) {
        ctx->pc = 0x22BEACu;
            // 0x22beac: 0xae300010  sw          $s0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
        ctx->pc = 0x22BEB0u;
        goto label_22beb0;
    }
    ctx->pc = 0x22BEA8u;
    {
        const bool branch_taken_0x22bea8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bea8) {
            ctx->pc = 0x22BEACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22BEA8u;
            // 0x22beac: 0xae300010  sw          $s0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22BEF4u;
            goto label_22bef4;
        }
    }
    ctx->pc = 0x22BEB0u;
label_22beb0:
    // 0x22beb0: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x22beb0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_22beb4:
    // 0x22beb4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_22beb8:
    if (ctx->pc == 0x22BEB8u) {
        ctx->pc = 0x22BEBCu;
        goto label_22bebc;
    }
    ctx->pc = 0x22BEB4u;
    {
        const bool branch_taken_0x22beb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22beb4) {
            ctx->pc = 0x22BEF0u;
            goto label_22bef0;
        }
    }
    ctx->pc = 0x22BEBCu;
label_22bebc:
    // 0x22bebc: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x22bebcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_22bec0:
    // 0x22bec0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22bec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_22bec4:
    // 0x22bec4: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x22bec4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_22bec8:
    // 0x22bec8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x22bec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_22becc:
    // 0x22becc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x22beccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_22bed0:
    // 0x22bed0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_22bed4:
    if (ctx->pc == 0x22BED4u) {
        ctx->pc = 0x22BED8u;
        goto label_22bed8;
    }
    ctx->pc = 0x22BED0u;
    {
        const bool branch_taken_0x22bed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22bed0) {
            ctx->pc = 0x22BEF0u;
            goto label_22bef0;
        }
    }
    ctx->pc = 0x22BED8u;
label_22bed8:
    // 0x22bed8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_22bedc:
    if (ctx->pc == 0x22BEDCu) {
        ctx->pc = 0x22BEE0u;
        goto label_22bee0;
    }
    ctx->pc = 0x22BED8u;
    {
        const bool branch_taken_0x22bed8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bed8) {
            ctx->pc = 0x22BEF0u;
            goto label_22bef0;
        }
    }
    ctx->pc = 0x22BEE0u;
label_22bee0:
    // 0x22bee0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22bee0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22bee4:
    // 0x22bee4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x22bee4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_22bee8:
    // 0x22bee8: 0x320f809  jalr        $t9
label_22beec:
    if (ctx->pc == 0x22BEECu) {
        ctx->pc = 0x22BEECu;
            // 0x22beec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x22BEF0u;
        goto label_22bef0;
    }
    ctx->pc = 0x22BEE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22BEF0u);
        ctx->pc = 0x22BEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BEE8u;
            // 0x22beec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22BEF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22BEF0u; }
            if (ctx->pc != 0x22BEF0u) { return; }
        }
        }
    }
    ctx->pc = 0x22BEF0u;
label_22bef0:
    // 0x22bef0: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x22bef0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
label_22bef4:
    // 0x22bef4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x22bef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_22bef8:
    // 0x22bef8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_22befc:
    if (ctx->pc == 0x22BEFCu) {
        ctx->pc = 0x22BEFCu;
            // 0x22befc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22BF00u;
        goto label_22bf00;
    }
    ctx->pc = 0x22BEF8u;
    {
        const bool branch_taken_0x22bef8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bef8) {
            ctx->pc = 0x22BEFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22BEF8u;
            // 0x22befc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22BF0Cu;
            goto label_22bf0c;
        }
    }
    ctx->pc = 0x22BF00u;
label_22bf00:
    // 0x22bf00: 0xc08e568  jal         func_2395A0
label_22bf04:
    if (ctx->pc == 0x22BF04u) {
        ctx->pc = 0x22BF04u;
            // 0x22bf04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22BF08u;
        goto label_22bf08;
    }
    ctx->pc = 0x22BF00u;
    SET_GPR_U32(ctx, 31, 0x22BF08u);
    ctx->pc = 0x22BF04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BF00u;
            // 0x22bf04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2395A0u;
    if (runtime->hasFunction(0x2395A0u)) {
        auto targetFn = runtime->lookupFunction(0x2395A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BF08u; }
        if (ctx->pc != 0x22BF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002395A0_0x2395a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BF08u; }
        if (ctx->pc != 0x22BF08u) { return; }
    }
    ctx->pc = 0x22BF08u;
label_22bf08:
    // 0x22bf08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22bf08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22bf0c:
    // 0x22bf0c: 0xc08ab98  jal         func_22AE60
label_22bf10:
    if (ctx->pc == 0x22BF10u) {
        ctx->pc = 0x22BF14u;
        goto label_22bf14;
    }
    ctx->pc = 0x22BF0Cu;
    SET_GPR_U32(ctx, 31, 0x22BF14u);
    ctx->pc = 0x22AE60u;
    if (runtime->hasFunction(0x22AE60u)) {
        auto targetFn = runtime->lookupFunction(0x22AE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BF14u; }
        if (ctx->pc != 0x22BF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022AE60_0x22ae60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BF14u; }
        if (ctx->pc != 0x22BF14u) { return; }
    }
    ctx->pc = 0x22BF14u;
label_22bf14:
    // 0x22bf14: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x22bf14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_22bf18:
    // 0x22bf18: 0x50800011  beql        $a0, $zero, . + 4 + (0x11 << 2)
label_22bf1c:
    if (ctx->pc == 0x22BF1Cu) {
        ctx->pc = 0x22BF1Cu;
            // 0x22bf1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x22BF20u;
        goto label_22bf20;
    }
    ctx->pc = 0x22BF18u;
    {
        const bool branch_taken_0x22bf18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bf18) {
            ctx->pc = 0x22BF1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22BF18u;
            // 0x22bf1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22BF60u;
            goto label_22bf60;
        }
    }
    ctx->pc = 0x22BF20u;
label_22bf20:
    // 0x22bf20: 0xc08f788  jal         func_23DE20
label_22bf24:
    if (ctx->pc == 0x22BF24u) {
        ctx->pc = 0x22BF24u;
            // 0x22bf24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22BF28u;
        goto label_22bf28;
    }
    ctx->pc = 0x22BF20u;
    SET_GPR_U32(ctx, 31, 0x22BF28u);
    ctx->pc = 0x22BF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BF20u;
            // 0x22bf24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23DE20u;
    if (runtime->hasFunction(0x23DE20u)) {
        auto targetFn = runtime->lookupFunction(0x23DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BF28u; }
        if (ctx->pc != 0x22BF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023DE20_0x23de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BF28u; }
        if (ctx->pc != 0x22BF28u) { return; }
    }
    ctx->pc = 0x22BF28u;
label_22bf28:
    // 0x22bf28: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x22bf28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_22bf2c:
    // 0x22bf2c: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x22bf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_22bf30:
    // 0x22bf30: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22bf30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_22bf34:
    // 0x22bf34: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_22bf38:
    if (ctx->pc == 0x22BF38u) {
        ctx->pc = 0x22BF38u;
            // 0x22bf38: 0xac820084  sw          $v0, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
        ctx->pc = 0x22BF3Cu;
        goto label_22bf3c;
    }
    ctx->pc = 0x22BF34u;
    {
        const bool branch_taken_0x22bf34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22BF38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BF34u;
            // 0x22bf38: 0xac820084  sw          $v0, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf34) {
            ctx->pc = 0x22BF5Cu;
            goto label_22bf5c;
        }
    }
    ctx->pc = 0x22BF3Cu;
label_22bf3c:
    // 0x22bf3c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x22bf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_22bf40:
    // 0x22bf40: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_22bf44:
    if (ctx->pc == 0x22BF44u) {
        ctx->pc = 0x22BF48u;
        goto label_22bf48;
    }
    ctx->pc = 0x22BF40u;
    {
        const bool branch_taken_0x22bf40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bf40) {
            ctx->pc = 0x22BF5Cu;
            goto label_22bf5c;
        }
    }
    ctx->pc = 0x22BF48u;
label_22bf48:
    // 0x22bf48: 0x8082008c  lb          $v0, 0x8C($a0)
    ctx->pc = 0x22bf48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 140)));
label_22bf4c:
    // 0x22bf4c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_22bf50:
    if (ctx->pc == 0x22BF50u) {
        ctx->pc = 0x22BF54u;
        goto label_22bf54;
    }
    ctx->pc = 0x22BF4Cu;
    {
        const bool branch_taken_0x22bf4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22bf4c) {
            ctx->pc = 0x22BF5Cu;
            goto label_22bf5c;
        }
    }
    ctx->pc = 0x22BF54u;
label_22bf54:
    // 0x22bf54: 0xc08d1c4  jal         func_234710
label_22bf58:
    if (ctx->pc == 0x22BF58u) {
        ctx->pc = 0x22BF5Cu;
        goto label_22bf5c;
    }
    ctx->pc = 0x22BF54u;
    SET_GPR_U32(ctx, 31, 0x22BF5Cu);
    ctx->pc = 0x234710u;
    if (runtime->hasFunction(0x234710u)) {
        auto targetFn = runtime->lookupFunction(0x234710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BF5Cu; }
        if (ctx->pc != 0x22BF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234710_0x234710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BF5Cu; }
        if (ctx->pc != 0x22BF5Cu) { return; }
    }
    ctx->pc = 0x22BF5Cu;
label_22bf5c:
    // 0x22bf5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22bf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22bf60:
    // 0x22bf60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22bf60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22bf64:
    // 0x22bf64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22bf64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22bf68:
    // 0x22bf68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22bf68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22bf6c:
    // 0x22bf6c: 0x3e00008  jr          $ra
label_22bf70:
    if (ctx->pc == 0x22BF70u) {
        ctx->pc = 0x22BF70u;
            // 0x22bf70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x22BF74u;
        goto label_22bf74;
    }
    ctx->pc = 0x22BF6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BF6Cu;
            // 0x22bf70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22BF74u;
label_22bf74:
    // 0x22bf74: 0x0  nop
    ctx->pc = 0x22bf74u;
    // NOP
label_22bf78:
    // 0x22bf78: 0x0  nop
    ctx->pc = 0x22bf78u;
    // NOP
label_22bf7c:
    // 0x22bf7c: 0x0  nop
    ctx->pc = 0x22bf7cu;
    // NOP
}
