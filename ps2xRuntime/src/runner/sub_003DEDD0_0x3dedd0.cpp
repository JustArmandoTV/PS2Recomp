#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003DEDD0
// Address: 0x3dedd0 - 0x3defe0
void sub_003DEDD0_0x3dedd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DEDD0_0x3dedd0");
#endif

    switch (ctx->pc) {
        case 0x3dedd0u: goto label_3dedd0;
        case 0x3dedd4u: goto label_3dedd4;
        case 0x3dedd8u: goto label_3dedd8;
        case 0x3deddcu: goto label_3deddc;
        case 0x3dede0u: goto label_3dede0;
        case 0x3dede4u: goto label_3dede4;
        case 0x3dede8u: goto label_3dede8;
        case 0x3dedecu: goto label_3dedec;
        case 0x3dedf0u: goto label_3dedf0;
        case 0x3dedf4u: goto label_3dedf4;
        case 0x3dedf8u: goto label_3dedf8;
        case 0x3dedfcu: goto label_3dedfc;
        case 0x3dee00u: goto label_3dee00;
        case 0x3dee04u: goto label_3dee04;
        case 0x3dee08u: goto label_3dee08;
        case 0x3dee0cu: goto label_3dee0c;
        case 0x3dee10u: goto label_3dee10;
        case 0x3dee14u: goto label_3dee14;
        case 0x3dee18u: goto label_3dee18;
        case 0x3dee1cu: goto label_3dee1c;
        case 0x3dee20u: goto label_3dee20;
        case 0x3dee24u: goto label_3dee24;
        case 0x3dee28u: goto label_3dee28;
        case 0x3dee2cu: goto label_3dee2c;
        case 0x3dee30u: goto label_3dee30;
        case 0x3dee34u: goto label_3dee34;
        case 0x3dee38u: goto label_3dee38;
        case 0x3dee3cu: goto label_3dee3c;
        case 0x3dee40u: goto label_3dee40;
        case 0x3dee44u: goto label_3dee44;
        case 0x3dee48u: goto label_3dee48;
        case 0x3dee4cu: goto label_3dee4c;
        case 0x3dee50u: goto label_3dee50;
        case 0x3dee54u: goto label_3dee54;
        case 0x3dee58u: goto label_3dee58;
        case 0x3dee5cu: goto label_3dee5c;
        case 0x3dee60u: goto label_3dee60;
        case 0x3dee64u: goto label_3dee64;
        case 0x3dee68u: goto label_3dee68;
        case 0x3dee6cu: goto label_3dee6c;
        case 0x3dee70u: goto label_3dee70;
        case 0x3dee74u: goto label_3dee74;
        case 0x3dee78u: goto label_3dee78;
        case 0x3dee7cu: goto label_3dee7c;
        case 0x3dee80u: goto label_3dee80;
        case 0x3dee84u: goto label_3dee84;
        case 0x3dee88u: goto label_3dee88;
        case 0x3dee8cu: goto label_3dee8c;
        case 0x3dee90u: goto label_3dee90;
        case 0x3dee94u: goto label_3dee94;
        case 0x3dee98u: goto label_3dee98;
        case 0x3dee9cu: goto label_3dee9c;
        case 0x3deea0u: goto label_3deea0;
        case 0x3deea4u: goto label_3deea4;
        case 0x3deea8u: goto label_3deea8;
        case 0x3deeacu: goto label_3deeac;
        case 0x3deeb0u: goto label_3deeb0;
        case 0x3deeb4u: goto label_3deeb4;
        case 0x3deeb8u: goto label_3deeb8;
        case 0x3deebcu: goto label_3deebc;
        case 0x3deec0u: goto label_3deec0;
        case 0x3deec4u: goto label_3deec4;
        case 0x3deec8u: goto label_3deec8;
        case 0x3deeccu: goto label_3deecc;
        case 0x3deed0u: goto label_3deed0;
        case 0x3deed4u: goto label_3deed4;
        case 0x3deed8u: goto label_3deed8;
        case 0x3deedcu: goto label_3deedc;
        case 0x3deee0u: goto label_3deee0;
        case 0x3deee4u: goto label_3deee4;
        case 0x3deee8u: goto label_3deee8;
        case 0x3deeecu: goto label_3deeec;
        case 0x3deef0u: goto label_3deef0;
        case 0x3deef4u: goto label_3deef4;
        case 0x3deef8u: goto label_3deef8;
        case 0x3deefcu: goto label_3deefc;
        case 0x3def00u: goto label_3def00;
        case 0x3def04u: goto label_3def04;
        case 0x3def08u: goto label_3def08;
        case 0x3def0cu: goto label_3def0c;
        case 0x3def10u: goto label_3def10;
        case 0x3def14u: goto label_3def14;
        case 0x3def18u: goto label_3def18;
        case 0x3def1cu: goto label_3def1c;
        case 0x3def20u: goto label_3def20;
        case 0x3def24u: goto label_3def24;
        case 0x3def28u: goto label_3def28;
        case 0x3def2cu: goto label_3def2c;
        case 0x3def30u: goto label_3def30;
        case 0x3def34u: goto label_3def34;
        case 0x3def38u: goto label_3def38;
        case 0x3def3cu: goto label_3def3c;
        case 0x3def40u: goto label_3def40;
        case 0x3def44u: goto label_3def44;
        case 0x3def48u: goto label_3def48;
        case 0x3def4cu: goto label_3def4c;
        case 0x3def50u: goto label_3def50;
        case 0x3def54u: goto label_3def54;
        case 0x3def58u: goto label_3def58;
        case 0x3def5cu: goto label_3def5c;
        case 0x3def60u: goto label_3def60;
        case 0x3def64u: goto label_3def64;
        case 0x3def68u: goto label_3def68;
        case 0x3def6cu: goto label_3def6c;
        case 0x3def70u: goto label_3def70;
        case 0x3def74u: goto label_3def74;
        case 0x3def78u: goto label_3def78;
        case 0x3def7cu: goto label_3def7c;
        case 0x3def80u: goto label_3def80;
        case 0x3def84u: goto label_3def84;
        case 0x3def88u: goto label_3def88;
        case 0x3def8cu: goto label_3def8c;
        case 0x3def90u: goto label_3def90;
        case 0x3def94u: goto label_3def94;
        case 0x3def98u: goto label_3def98;
        case 0x3def9cu: goto label_3def9c;
        case 0x3defa0u: goto label_3defa0;
        case 0x3defa4u: goto label_3defa4;
        case 0x3defa8u: goto label_3defa8;
        case 0x3defacu: goto label_3defac;
        case 0x3defb0u: goto label_3defb0;
        case 0x3defb4u: goto label_3defb4;
        case 0x3defb8u: goto label_3defb8;
        case 0x3defbcu: goto label_3defbc;
        case 0x3defc0u: goto label_3defc0;
        case 0x3defc4u: goto label_3defc4;
        case 0x3defc8u: goto label_3defc8;
        case 0x3defccu: goto label_3defcc;
        case 0x3defd0u: goto label_3defd0;
        case 0x3defd4u: goto label_3defd4;
        case 0x3defd8u: goto label_3defd8;
        case 0x3defdcu: goto label_3defdc;
        default: break;
    }

    ctx->pc = 0x3dedd0u;

label_3dedd0:
    // 0x3dedd0: 0x3e00008  jr          $ra
label_3dedd4:
    if (ctx->pc == 0x3DEDD4u) {
        ctx->pc = 0x3DEDD4u;
            // 0x3dedd4: 0x24820010  addiu       $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->pc = 0x3DEDD8u;
        goto label_3dedd8;
    }
    ctx->pc = 0x3DEDD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DEDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DEDD0u;
            // 0x3dedd4: 0x24820010  addiu       $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DEDD8u;
label_3dedd8:
    // 0x3dedd8: 0x0  nop
    ctx->pc = 0x3dedd8u;
    // NOP
label_3deddc:
    // 0x3deddc: 0x0  nop
    ctx->pc = 0x3deddcu;
    // NOP
label_3dede0:
    // 0x3dede0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3dede0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3dede4:
    // 0x3dede4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3dede4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3dede8:
    // 0x3dede8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3dede8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3dedec:
    // 0x3dedec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dedecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3dedf0:
    // 0x3dedf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3dedf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dedf4:
    // 0x3dedf4: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_3dedf8:
    if (ctx->pc == 0x3DEDF8u) {
        ctx->pc = 0x3DEDF8u;
            // 0x3dedf8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DEDFCu;
        goto label_3dedfc;
    }
    ctx->pc = 0x3DEDF4u;
    {
        const bool branch_taken_0x3dedf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DEDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DEDF4u;
            // 0x3dedf8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dedf4) {
            ctx->pc = 0x3DEE88u;
            goto label_3dee88;
        }
    }
    ctx->pc = 0x3DEDFCu;
label_3dedfc:
    // 0x3dedfc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3dedfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3dee00:
    // 0x3dee00: 0x24429a80  addiu       $v0, $v0, -0x6580
    ctx->pc = 0x3dee00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941312));
label_3dee04:
    // 0x3dee04: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3dee04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3dee08:
    // 0x3dee08: 0x8e0401f4  lw          $a0, 0x1F4($s0)
    ctx->pc = 0x3dee08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
label_3dee0c:
    // 0x3dee0c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3dee10:
    if (ctx->pc == 0x3DEE10u) {
        ctx->pc = 0x3DEE10u;
            // 0x3dee10: 0xae0001f4  sw          $zero, 0x1F4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 500), GPR_U32(ctx, 0));
        ctx->pc = 0x3DEE14u;
        goto label_3dee14;
    }
    ctx->pc = 0x3DEE0Cu;
    {
        const bool branch_taken_0x3dee0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dee0c) {
            ctx->pc = 0x3DEE10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DEE0Cu;
            // 0x3dee10: 0xae0001f4  sw          $zero, 0x1F4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 500), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DEE28u;
            goto label_3dee28;
        }
    }
    ctx->pc = 0x3DEE14u;
label_3dee14:
    // 0x3dee14: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3dee14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3dee18:
    // 0x3dee18: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3dee18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3dee1c:
    // 0x3dee1c: 0x320f809  jalr        $t9
label_3dee20:
    if (ctx->pc == 0x3DEE20u) {
        ctx->pc = 0x3DEE20u;
            // 0x3dee20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3DEE24u;
        goto label_3dee24;
    }
    ctx->pc = 0x3DEE1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DEE24u);
        ctx->pc = 0x3DEE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DEE1Cu;
            // 0x3dee20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3DEE24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3DEE24u; }
            if (ctx->pc != 0x3DEE24u) { return; }
        }
        }
    }
    ctx->pc = 0x3DEE24u;
label_3dee24:
    // 0x3dee24: 0xae0001f4  sw          $zero, 0x1F4($s0)
    ctx->pc = 0x3dee24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 500), GPR_U32(ctx, 0));
label_3dee28:
    // 0x3dee28: 0x8e0401f8  lw          $a0, 0x1F8($s0)
    ctx->pc = 0x3dee28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 504)));
label_3dee2c:
    // 0x3dee2c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3dee30:
    if (ctx->pc == 0x3DEE30u) {
        ctx->pc = 0x3DEE30u;
            // 0x3dee30: 0xae0001f8  sw          $zero, 0x1F8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 0));
        ctx->pc = 0x3DEE34u;
        goto label_3dee34;
    }
    ctx->pc = 0x3DEE2Cu;
    {
        const bool branch_taken_0x3dee2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dee2c) {
            ctx->pc = 0x3DEE30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DEE2Cu;
            // 0x3dee30: 0xae0001f8  sw          $zero, 0x1F8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DEE48u;
            goto label_3dee48;
        }
    }
    ctx->pc = 0x3DEE34u;
label_3dee34:
    // 0x3dee34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3dee34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3dee38:
    // 0x3dee38: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3dee38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3dee3c:
    // 0x3dee3c: 0x320f809  jalr        $t9
label_3dee40:
    if (ctx->pc == 0x3DEE40u) {
        ctx->pc = 0x3DEE40u;
            // 0x3dee40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3DEE44u;
        goto label_3dee44;
    }
    ctx->pc = 0x3DEE3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DEE44u);
        ctx->pc = 0x3DEE40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DEE3Cu;
            // 0x3dee40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3DEE44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3DEE44u; }
            if (ctx->pc != 0x3DEE44u) { return; }
        }
        }
    }
    ctx->pc = 0x3DEE44u;
label_3dee44:
    // 0x3dee44: 0xae0001f8  sw          $zero, 0x1F8($s0)
    ctx->pc = 0x3dee44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 0));
label_3dee48:
    // 0x3dee48: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_3dee4c:
    if (ctx->pc == 0x3DEE4Cu) {
        ctx->pc = 0x3DEE4Cu;
            // 0x3dee4c: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x3DEE50u;
        goto label_3dee50;
    }
    ctx->pc = 0x3DEE48u;
    {
        const bool branch_taken_0x3dee48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dee48) {
            ctx->pc = 0x3DEE4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DEE48u;
            // 0x3dee4c: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DEE74u;
            goto label_3dee74;
        }
    }
    ctx->pc = 0x3DEE50u;
label_3dee50:
    // 0x3dee50: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3dee50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3dee54:
    // 0x3dee54: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x3dee54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_3dee58:
    // 0x3dee58: 0x24632e00  addiu       $v1, $v1, 0x2E00
    ctx->pc = 0x3dee58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11776));
label_3dee5c:
    // 0x3dee5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3dee60:
    if (ctx->pc == 0x3DEE60u) {
        ctx->pc = 0x3DEE60u;
            // 0x3dee60: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x3DEE64u;
        goto label_3dee64;
    }
    ctx->pc = 0x3DEE5Cu;
    {
        const bool branch_taken_0x3dee5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DEE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DEE5Cu;
            // 0x3dee60: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dee5c) {
            ctx->pc = 0x3DEE70u;
            goto label_3dee70;
        }
    }
    ctx->pc = 0x3DEE64u;
label_3dee64:
    // 0x3dee64: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3dee64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3dee68:
    // 0x3dee68: 0x24422df0  addiu       $v0, $v0, 0x2DF0
    ctx->pc = 0x3dee68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
label_3dee6c:
    // 0x3dee6c: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x3dee6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_3dee70:
    // 0x3dee70: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x3dee70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_3dee74:
    // 0x3dee74: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3dee74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3dee78:
    // 0x3dee78: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3dee7c:
    if (ctx->pc == 0x3DEE7Cu) {
        ctx->pc = 0x3DEE7Cu;
            // 0x3dee7c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DEE80u;
        goto label_3dee80;
    }
    ctx->pc = 0x3DEE78u;
    {
        const bool branch_taken_0x3dee78 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3dee78) {
            ctx->pc = 0x3DEE7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DEE78u;
            // 0x3dee7c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DEE8Cu;
            goto label_3dee8c;
        }
    }
    ctx->pc = 0x3DEE80u;
label_3dee80:
    // 0x3dee80: 0xc0400a8  jal         func_1002A0
label_3dee84:
    if (ctx->pc == 0x3DEE84u) {
        ctx->pc = 0x3DEE84u;
            // 0x3dee84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DEE88u;
        goto label_3dee88;
    }
    ctx->pc = 0x3DEE80u;
    SET_GPR_U32(ctx, 31, 0x3DEE88u);
    ctx->pc = 0x3DEE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DEE80u;
            // 0x3dee84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEE88u; }
        if (ctx->pc != 0x3DEE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEE88u; }
        if (ctx->pc != 0x3DEE88u) { return; }
    }
    ctx->pc = 0x3DEE88u;
label_3dee88:
    // 0x3dee88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3dee88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dee8c:
    // 0x3dee8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3dee8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3dee90:
    // 0x3dee90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3dee90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3dee94:
    // 0x3dee94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dee94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3dee98:
    // 0x3dee98: 0x3e00008  jr          $ra
label_3dee9c:
    if (ctx->pc == 0x3DEE9Cu) {
        ctx->pc = 0x3DEE9Cu;
            // 0x3dee9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3DEEA0u;
        goto label_3deea0;
    }
    ctx->pc = 0x3DEE98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DEE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DEE98u;
            // 0x3dee9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DEEA0u;
label_3deea0:
    // 0x3deea0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3deea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3deea4:
    // 0x3deea4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3deea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3deea8:
    // 0x3deea8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3deea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3deeac:
    // 0x3deeac: 0x24422e00  addiu       $v0, $v0, 0x2E00
    ctx->pc = 0x3deeacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11776));
label_3deeb0:
    // 0x3deeb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3deeb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3deeb4:
    // 0x3deeb4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3deeb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3deeb8:
    // 0x3deeb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3deeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3deebc:
    // 0x3deebc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3deebcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_3deec0:
    // 0x3deec0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3deec0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3deec4:
    // 0x3deec4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3deec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3deec8:
    // 0x3deec8: 0x26110030  addiu       $s1, $s0, 0x30
    ctx->pc = 0x3deec8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_3deecc:
    // 0x3deecc: 0x24422df0  addiu       $v0, $v0, 0x2DF0
    ctx->pc = 0x3deeccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
label_3deed0:
    // 0x3deed0: 0x26320010  addiu       $s2, $s1, 0x10
    ctx->pc = 0x3deed0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3deed4:
    // 0x3deed4: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x3deed4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
label_3deed8:
    // 0x3deed8: 0xac8000d0  sw          $zero, 0xD0($a0)
    ctx->pc = 0x3deed8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 0));
label_3deedc:
    // 0x3deedc: 0xac8000d4  sw          $zero, 0xD4($a0)
    ctx->pc = 0x3deedcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 0));
label_3deee0:
    // 0x3deee0: 0xa08000d8  sb          $zero, 0xD8($a0)
    ctx->pc = 0x3deee0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 216), (uint8_t)GPR_U32(ctx, 0));
label_3deee4:
    // 0x3deee4: 0xc04c968  jal         func_1325A0
label_3deee8:
    if (ctx->pc == 0x3DEEE8u) {
        ctx->pc = 0x3DEEE8u;
            // 0x3deee8: 0x26440060  addiu       $a0, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->pc = 0x3DEEECu;
        goto label_3deeec;
    }
    ctx->pc = 0x3DEEE4u;
    SET_GPR_U32(ctx, 31, 0x3DEEECu);
    ctx->pc = 0x3DEEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DEEE4u;
            // 0x3deee8: 0x26440060  addiu       $a0, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEEECu; }
        if (ctx->pc != 0x3DEEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEEECu; }
        if (ctx->pc != 0x3DEEECu) { return; }
    }
    ctx->pc = 0x3DEEECu;
label_3deeec:
    // 0x3deeec: 0xc04c968  jal         func_1325A0
label_3deef0:
    if (ctx->pc == 0x3DEEF0u) {
        ctx->pc = 0x3DEEF0u;
            // 0x3deef0: 0x26440070  addiu       $a0, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->pc = 0x3DEEF4u;
        goto label_3deef4;
    }
    ctx->pc = 0x3DEEECu;
    SET_GPR_U32(ctx, 31, 0x3DEEF4u);
    ctx->pc = 0x3DEEF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DEEECu;
            // 0x3deef0: 0x26440070  addiu       $a0, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEEF4u; }
        if (ctx->pc != 0x3DEEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEEF4u; }
        if (ctx->pc != 0x3DEEF4u) { return; }
    }
    ctx->pc = 0x3DEEF4u;
label_3deef4:
    // 0x3deef4: 0xc04c968  jal         func_1325A0
label_3deef8:
    if (ctx->pc == 0x3DEEF8u) {
        ctx->pc = 0x3DEEF8u;
            // 0x3deef8: 0x26440080  addiu       $a0, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->pc = 0x3DEEFCu;
        goto label_3deefc;
    }
    ctx->pc = 0x3DEEF4u;
    SET_GPR_U32(ctx, 31, 0x3DEEFCu);
    ctx->pc = 0x3DEEF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DEEF4u;
            // 0x3deef8: 0x26440080  addiu       $a0, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEEFCu; }
        if (ctx->pc != 0x3DEEFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEEFCu; }
        if (ctx->pc != 0x3DEEFCu) { return; }
    }
    ctx->pc = 0x3DEEFCu;
label_3deefc:
    // 0x3deefc: 0xae40009c  sw          $zero, 0x9C($s2)
    ctx->pc = 0x3deefcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 0));
label_3def00:
    // 0x3def00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3def00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3def04:
    // 0x3def04: 0xae4000a0  sw          $zero, 0xA0($s2)
    ctx->pc = 0x3def04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 0));
label_3def08:
    // 0x3def08: 0xae4000a4  sw          $zero, 0xA4($s2)
    ctx->pc = 0x3def08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 0));
label_3def0c:
    // 0x3def0c: 0xc04f26c  jal         func_13C9B0
label_3def10:
    if (ctx->pc == 0x3DEF10u) {
        ctx->pc = 0x3DEF10u;
            // 0x3def10: 0xae4000a8  sw          $zero, 0xA8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 0));
        ctx->pc = 0x3DEF14u;
        goto label_3def14;
    }
    ctx->pc = 0x3DEF0Cu;
    SET_GPR_U32(ctx, 31, 0x3DEF14u);
    ctx->pc = 0x3DEF10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DEF0Cu;
            // 0x3def10: 0xae4000a8  sw          $zero, 0xA8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEF14u; }
        if (ctx->pc != 0x3DEF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEF14u; }
        if (ctx->pc != 0x3DEF14u) { return; }
    }
    ctx->pc = 0x3DEF14u;
label_3def14:
    // 0x3def14: 0xc04c968  jal         func_1325A0
label_3def18:
    if (ctx->pc == 0x3DEF18u) {
        ctx->pc = 0x3DEF18u;
            // 0x3def18: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->pc = 0x3DEF1Cu;
        goto label_3def1c;
    }
    ctx->pc = 0x3DEF14u;
    SET_GPR_U32(ctx, 31, 0x3DEF1Cu);
    ctx->pc = 0x3DEF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DEF14u;
            // 0x3def18: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEF1Cu; }
        if (ctx->pc != 0x3DEF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEF1Cu; }
        if (ctx->pc != 0x3DEF1Cu) { return; }
    }
    ctx->pc = 0x3DEF1Cu;
label_3def1c:
    // 0x3def1c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3def1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_3def20:
    // 0x3def20: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x3def20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_3def24:
    // 0x3def24: 0xc04cc04  jal         func_133010
label_3def28:
    if (ctx->pc == 0x3DEF28u) {
        ctx->pc = 0x3DEF28u;
            // 0x3def28: 0x24a59cb0  addiu       $a1, $a1, -0x6350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941872));
        ctx->pc = 0x3DEF2Cu;
        goto label_3def2c;
    }
    ctx->pc = 0x3DEF24u;
    SET_GPR_U32(ctx, 31, 0x3DEF2Cu);
    ctx->pc = 0x3DEF28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DEF24u;
            // 0x3def28: 0x24a59cb0  addiu       $a1, $a1, -0x6350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEF2Cu; }
        if (ctx->pc != 0x3DEF2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEF2Cu; }
        if (ctx->pc != 0x3DEF2Cu) { return; }
    }
    ctx->pc = 0x3DEF2Cu;
label_3def2c:
    // 0x3def2c: 0xae200100  sw          $zero, 0x100($s1)
    ctx->pc = 0x3def2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
label_3def30:
    // 0x3def30: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3def30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3def34:
    // 0x3def34: 0xae200104  sw          $zero, 0x104($s1)
    ctx->pc = 0x3def34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 0));
label_3def38:
    // 0x3def38: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3def38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3def3c:
    // 0x3def3c: 0xae200108  sw          $zero, 0x108($s1)
    ctx->pc = 0x3def3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 0));
label_3def40:
    // 0x3def40: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x3def40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
label_3def44:
    // 0x3def44: 0xa6200110  sh          $zero, 0x110($s1)
    ctx->pc = 0x3def44u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 272), (uint16_t)GPR_U32(ctx, 0));
label_3def48:
    // 0x3def48: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3def48u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3def4c:
    // 0x3def4c: 0xa6200112  sh          $zero, 0x112($s1)
    ctx->pc = 0x3def4cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 274), (uint16_t)GPR_U32(ctx, 0));
label_3def50:
    // 0x3def50: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x3def50u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_3def54:
    // 0x3def54: 0xa6220114  sh          $v0, 0x114($s1)
    ctx->pc = 0x3def54u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 276), (uint16_t)GPR_U32(ctx, 2));
label_3def58:
    // 0x3def58: 0xc04cbd8  jal         func_132F60
label_3def5c:
    if (ctx->pc == 0x3DEF5Cu) {
        ctx->pc = 0x3DEF5Cu;
            // 0x3def5c: 0xa6200116  sh          $zero, 0x116($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 278), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3DEF60u;
        goto label_3def60;
    }
    ctx->pc = 0x3DEF58u;
    SET_GPR_U32(ctx, 31, 0x3DEF60u);
    ctx->pc = 0x3DEF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DEF58u;
            // 0x3def5c: 0xa6200116  sh          $zero, 0x116($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 278), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEF60u; }
        if (ctx->pc != 0x3DEF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEF60u; }
        if (ctx->pc != 0x3DEF60u) { return; }
    }
    ctx->pc = 0x3DEF60u;
label_3def60:
    // 0x3def60: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3def60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3def64:
    // 0x3def64: 0x262400d0  addiu       $a0, $s1, 0xD0
    ctx->pc = 0x3def64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
label_3def68:
    // 0x3def68: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3def68u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3def6c:
    // 0x3def6c: 0xc04cbd8  jal         func_132F60
label_3def70:
    if (ctx->pc == 0x3DEF70u) {
        ctx->pc = 0x3DEF70u;
            // 0x3def70: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3DEF74u;
        goto label_3def74;
    }
    ctx->pc = 0x3DEF6Cu;
    SET_GPR_U32(ctx, 31, 0x3DEF74u);
    ctx->pc = 0x3DEF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DEF6Cu;
            // 0x3def70: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEF74u; }
        if (ctx->pc != 0x3DEF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEF74u; }
        if (ctx->pc != 0x3DEF74u) { return; }
    }
    ctx->pc = 0x3DEF74u;
label_3def74:
    // 0x3def74: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3def74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3def78:
    // 0x3def78: 0x262400e0  addiu       $a0, $s1, 0xE0
    ctx->pc = 0x3def78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_3def7c:
    // 0x3def7c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3def7cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3def80:
    // 0x3def80: 0xc04cbd8  jal         func_132F60
label_3def84:
    if (ctx->pc == 0x3DEF84u) {
        ctx->pc = 0x3DEF84u;
            // 0x3def84: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3DEF88u;
        goto label_3def88;
    }
    ctx->pc = 0x3DEF80u;
    SET_GPR_U32(ctx, 31, 0x3DEF88u);
    ctx->pc = 0x3DEF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DEF80u;
            // 0x3def84: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEF88u; }
        if (ctx->pc != 0x3DEF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEF88u; }
        if (ctx->pc != 0x3DEF88u) { return; }
    }
    ctx->pc = 0x3DEF88u;
label_3def88:
    // 0x3def88: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3def88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3def8c:
    // 0x3def8c: 0x262400f0  addiu       $a0, $s1, 0xF0
    ctx->pc = 0x3def8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
label_3def90:
    // 0x3def90: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3def90u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3def94:
    // 0x3def94: 0xc04cbd8  jal         func_132F60
label_3def98:
    if (ctx->pc == 0x3DEF98u) {
        ctx->pc = 0x3DEF98u;
            // 0x3def98: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3DEF9Cu;
        goto label_3def9c;
    }
    ctx->pc = 0x3DEF94u;
    SET_GPR_U32(ctx, 31, 0x3DEF9Cu);
    ctx->pc = 0x3DEF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DEF94u;
            // 0x3def98: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEF9Cu; }
        if (ctx->pc != 0x3DEF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEF9Cu; }
        if (ctx->pc != 0x3DEF9Cu) { return; }
    }
    ctx->pc = 0x3DEF9Cu;
label_3def9c:
    // 0x3def9c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3def9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3defa0:
    // 0x3defa0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3defa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3defa4:
    // 0x3defa4: 0x24639a80  addiu       $v1, $v1, -0x6580
    ctx->pc = 0x3defa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941312));
label_3defa8:
    // 0x3defa8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3defa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3defac:
    // 0x3defac: 0xae0001e0  sw          $zero, 0x1E0($s0)
    ctx->pc = 0x3defacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 0));
label_3defb0:
    // 0x3defb0: 0xae0001ec  sw          $zero, 0x1EC($s0)
    ctx->pc = 0x3defb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 492), GPR_U32(ctx, 0));
label_3defb4:
    // 0x3defb4: 0xae0001f4  sw          $zero, 0x1F4($s0)
    ctx->pc = 0x3defb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 500), GPR_U32(ctx, 0));
label_3defb8:
    // 0x3defb8: 0xae0001f8  sw          $zero, 0x1F8($s0)
    ctx->pc = 0x3defb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 0));
label_3defbc:
    // 0x3defbc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3defbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3defc0:
    // 0x3defc0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3defc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3defc4:
    // 0x3defc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3defc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3defc8:
    // 0x3defc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3defc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3defcc:
    // 0x3defcc: 0x3e00008  jr          $ra
label_3defd0:
    if (ctx->pc == 0x3DEFD0u) {
        ctx->pc = 0x3DEFD0u;
            // 0x3defd0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3DEFD4u;
        goto label_3defd4;
    }
    ctx->pc = 0x3DEFCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DEFD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DEFCCu;
            // 0x3defd0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DEFD4u;
label_3defd4:
    // 0x3defd4: 0x0  nop
    ctx->pc = 0x3defd4u;
    // NOP
label_3defd8:
    // 0x3defd8: 0x0  nop
    ctx->pc = 0x3defd8u;
    // NOP
label_3defdc:
    // 0x3defdc: 0x0  nop
    ctx->pc = 0x3defdcu;
    // NOP
}
