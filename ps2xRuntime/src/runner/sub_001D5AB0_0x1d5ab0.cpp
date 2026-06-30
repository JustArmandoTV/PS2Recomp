#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D5AB0
// Address: 0x1d5ab0 - 0x1d5bd0
void sub_001D5AB0_0x1d5ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5AB0_0x1d5ab0");
#endif

    switch (ctx->pc) {
        case 0x1d5ab0u: goto label_1d5ab0;
        case 0x1d5ab4u: goto label_1d5ab4;
        case 0x1d5ab8u: goto label_1d5ab8;
        case 0x1d5abcu: goto label_1d5abc;
        case 0x1d5ac0u: goto label_1d5ac0;
        case 0x1d5ac4u: goto label_1d5ac4;
        case 0x1d5ac8u: goto label_1d5ac8;
        case 0x1d5accu: goto label_1d5acc;
        case 0x1d5ad0u: goto label_1d5ad0;
        case 0x1d5ad4u: goto label_1d5ad4;
        case 0x1d5ad8u: goto label_1d5ad8;
        case 0x1d5adcu: goto label_1d5adc;
        case 0x1d5ae0u: goto label_1d5ae0;
        case 0x1d5ae4u: goto label_1d5ae4;
        case 0x1d5ae8u: goto label_1d5ae8;
        case 0x1d5aecu: goto label_1d5aec;
        case 0x1d5af0u: goto label_1d5af0;
        case 0x1d5af4u: goto label_1d5af4;
        case 0x1d5af8u: goto label_1d5af8;
        case 0x1d5afcu: goto label_1d5afc;
        case 0x1d5b00u: goto label_1d5b00;
        case 0x1d5b04u: goto label_1d5b04;
        case 0x1d5b08u: goto label_1d5b08;
        case 0x1d5b0cu: goto label_1d5b0c;
        case 0x1d5b10u: goto label_1d5b10;
        case 0x1d5b14u: goto label_1d5b14;
        case 0x1d5b18u: goto label_1d5b18;
        case 0x1d5b1cu: goto label_1d5b1c;
        case 0x1d5b20u: goto label_1d5b20;
        case 0x1d5b24u: goto label_1d5b24;
        case 0x1d5b28u: goto label_1d5b28;
        case 0x1d5b2cu: goto label_1d5b2c;
        case 0x1d5b30u: goto label_1d5b30;
        case 0x1d5b34u: goto label_1d5b34;
        case 0x1d5b38u: goto label_1d5b38;
        case 0x1d5b3cu: goto label_1d5b3c;
        case 0x1d5b40u: goto label_1d5b40;
        case 0x1d5b44u: goto label_1d5b44;
        case 0x1d5b48u: goto label_1d5b48;
        case 0x1d5b4cu: goto label_1d5b4c;
        case 0x1d5b50u: goto label_1d5b50;
        case 0x1d5b54u: goto label_1d5b54;
        case 0x1d5b58u: goto label_1d5b58;
        case 0x1d5b5cu: goto label_1d5b5c;
        case 0x1d5b60u: goto label_1d5b60;
        case 0x1d5b64u: goto label_1d5b64;
        case 0x1d5b68u: goto label_1d5b68;
        case 0x1d5b6cu: goto label_1d5b6c;
        case 0x1d5b70u: goto label_1d5b70;
        case 0x1d5b74u: goto label_1d5b74;
        case 0x1d5b78u: goto label_1d5b78;
        case 0x1d5b7cu: goto label_1d5b7c;
        case 0x1d5b80u: goto label_1d5b80;
        case 0x1d5b84u: goto label_1d5b84;
        case 0x1d5b88u: goto label_1d5b88;
        case 0x1d5b8cu: goto label_1d5b8c;
        case 0x1d5b90u: goto label_1d5b90;
        case 0x1d5b94u: goto label_1d5b94;
        case 0x1d5b98u: goto label_1d5b98;
        case 0x1d5b9cu: goto label_1d5b9c;
        case 0x1d5ba0u: goto label_1d5ba0;
        case 0x1d5ba4u: goto label_1d5ba4;
        case 0x1d5ba8u: goto label_1d5ba8;
        case 0x1d5bacu: goto label_1d5bac;
        case 0x1d5bb0u: goto label_1d5bb0;
        case 0x1d5bb4u: goto label_1d5bb4;
        case 0x1d5bb8u: goto label_1d5bb8;
        case 0x1d5bbcu: goto label_1d5bbc;
        case 0x1d5bc0u: goto label_1d5bc0;
        case 0x1d5bc4u: goto label_1d5bc4;
        case 0x1d5bc8u: goto label_1d5bc8;
        case 0x1d5bccu: goto label_1d5bcc;
        default: break;
    }

    ctx->pc = 0x1d5ab0u;

label_1d5ab0:
    // 0x1d5ab0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d5ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1d5ab4:
    // 0x1d5ab4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x1d5ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_1d5ab8:
    // 0x1d5ab8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d5ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1d5abc:
    // 0x1d5abc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d5abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d5ac0:
    // 0x1d5ac0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d5ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d5ac4:
    // 0x1d5ac4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d5ac4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d5ac8:
    // 0x1d5ac8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d5ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d5acc:
    // 0x1d5acc: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x1d5accu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1d5ad0:
    // 0x1d5ad0: 0x8c640e80  lw          $a0, 0xE80($v1)
    ctx->pc = 0x1d5ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_1d5ad4:
    // 0x1d5ad4: 0x8e250d98  lw          $a1, 0xD98($s1)
    ctx->pc = 0x1d5ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3480)));
label_1d5ad8:
    // 0x1d5ad8: 0x8c830780  lw          $v1, 0x780($a0)
    ctx->pc = 0x1d5ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1920)));
label_1d5adc:
    // 0x1d5adc: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x1d5adcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1d5ae0:
    // 0x1d5ae0: 0x50200033  beql        $at, $zero, . + 4 + (0x33 << 2)
label_1d5ae4:
    if (ctx->pc == 0x1D5AE4u) {
        ctx->pc = 0x1D5AE4u;
            // 0x1d5ae4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x1D5AE8u;
        goto label_1d5ae8;
    }
    ctx->pc = 0x1D5AE0u;
    {
        const bool branch_taken_0x1d5ae0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5ae0) {
            ctx->pc = 0x1D5AE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5AE0u;
            // 0x1d5ae4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D5BB0u;
            goto label_1d5bb0;
        }
    }
    ctx->pc = 0x1D5AE8u;
label_1d5ae8:
    // 0x1d5ae8: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x1d5ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_1d5aec:
    // 0x1d5aec: 0x8c63d130  lw          $v1, -0x2ED0($v1)
    ctx->pc = 0x1d5aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_1d5af0:
    // 0x1d5af0: 0x8c700130  lw          $s0, 0x130($v1)
    ctx->pc = 0x1d5af0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_1d5af4:
    // 0x1d5af4: 0x50b00006  beql        $a1, $s0, . + 4 + (0x6 << 2)
label_1d5af8:
    if (ctx->pc == 0x1D5AF8u) {
        ctx->pc = 0x1D5AF8u;
            // 0x1d5af8: 0x8e240d70  lw          $a0, 0xD70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
        ctx->pc = 0x1D5AFCu;
        goto label_1d5afc;
    }
    ctx->pc = 0x1D5AF4u;
    {
        const bool branch_taken_0x1d5af4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        if (branch_taken_0x1d5af4) {
            ctx->pc = 0x1D5AF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5AF4u;
            // 0x1d5af8: 0x8e240d70  lw          $a0, 0xD70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D5B10u;
            goto label_1d5b10;
        }
    }
    ctx->pc = 0x1D5AFCu;
label_1d5afc:
    // 0x1d5afc: 0x8c840cb4  lw          $a0, 0xCB4($a0)
    ctx->pc = 0x1d5afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3252)));
label_1d5b00:
    // 0x1d5b00: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1d5b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d5b04:
    // 0x1d5b04: 0x14830029  bne         $a0, $v1, . + 4 + (0x29 << 2)
label_1d5b08:
    if (ctx->pc == 0x1D5B08u) {
        ctx->pc = 0x1D5B0Cu;
        goto label_1d5b0c;
    }
    ctx->pc = 0x1D5B04u;
    {
        const bool branch_taken_0x1d5b04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d5b04) {
            ctx->pc = 0x1D5BACu;
            goto label_1d5bac;
        }
    }
    ctx->pc = 0x1D5B0Cu;
label_1d5b0c:
    // 0x1d5b0c: 0x8e240d70  lw          $a0, 0xD70($s1)
    ctx->pc = 0x1d5b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
label_1d5b10:
    // 0x1d5b10: 0x8c8200cc  lw          $v0, 0xCC($a0)
    ctx->pc = 0x1d5b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
label_1d5b14:
    // 0x1d5b14: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_1d5b18:
    if (ctx->pc == 0x1D5B18u) {
        ctx->pc = 0x1D5B18u;
            // 0x1d5b18: 0x8e220d74  lw          $v0, 0xD74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
        ctx->pc = 0x1D5B1Cu;
        goto label_1d5b1c;
    }
    ctx->pc = 0x1D5B14u;
    {
        const bool branch_taken_0x1d5b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5b14) {
            ctx->pc = 0x1D5B18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5B14u;
            // 0x1d5b18: 0x8e220d74  lw          $v0, 0xD74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D5B34u;
            goto label_1d5b34;
        }
    }
    ctx->pc = 0x1D5B1Cu;
label_1d5b1c:
    // 0x1d5b1c: 0xc0bd780  jal         func_2F5E00
label_1d5b20:
    if (ctx->pc == 0x1D5B20u) {
        ctx->pc = 0x1D5B24u;
        goto label_1d5b24;
    }
    ctx->pc = 0x1D5B1Cu;
    SET_GPR_U32(ctx, 31, 0x1D5B24u);
    ctx->pc = 0x2F5E00u;
    if (runtime->hasFunction(0x2F5E00u)) {
        auto targetFn = runtime->lookupFunction(0x2F5E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5B24u; }
        if (ctx->pc != 0x1D5B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5E00_0x2f5e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5B24u; }
        if (ctx->pc != 0x1D5B24u) { return; }
    }
    ctx->pc = 0x1D5B24u;
label_1d5b24:
    // 0x1d5b24: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d5b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d5b28:
    // 0x1d5b28: 0x54430019  bnel        $v0, $v1, . + 4 + (0x19 << 2)
label_1d5b2c:
    if (ctx->pc == 0x1D5B2Cu) {
        ctx->pc = 0x1D5B2Cu;
            // 0x1d5b2c: 0x92430010  lbu         $v1, 0x10($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->pc = 0x1D5B30u;
        goto label_1d5b30;
    }
    ctx->pc = 0x1D5B28u;
    {
        const bool branch_taken_0x1d5b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d5b28) {
            ctx->pc = 0x1D5B2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5B28u;
            // 0x1d5b2c: 0x92430010  lbu         $v1, 0x10($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D5B90u;
            goto label_1d5b90;
        }
    }
    ctx->pc = 0x1D5B30u;
label_1d5b30:
    // 0x1d5b30: 0x8e220d74  lw          $v0, 0xD74($s1)
    ctx->pc = 0x1d5b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
label_1d5b34:
    // 0x1d5b34: 0x904202c4  lbu         $v0, 0x2C4($v0)
    ctx->pc = 0x1d5b34u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 708)));
label_1d5b38:
    // 0x1d5b38: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_1d5b3c:
    if (ctx->pc == 0x1D5B3Cu) {
        ctx->pc = 0x1D5B40u;
        goto label_1d5b40;
    }
    ctx->pc = 0x1D5B38u;
    {
        const bool branch_taken_0x1d5b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5b38) {
            ctx->pc = 0x1D5B8Cu;
            goto label_1d5b8c;
        }
    }
    ctx->pc = 0x1D5B40u;
label_1d5b40:
    // 0x1d5b40: 0x92430010  lbu         $v1, 0x10($s2)
    ctx->pc = 0x1d5b40u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 16)));
label_1d5b44:
    // 0x1d5b44: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1d5b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1d5b48:
    // 0x1d5b48: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
label_1d5b4c:
    if (ctx->pc == 0x1D5B4Cu) {
        ctx->pc = 0x1D5B50u;
        goto label_1d5b50;
    }
    ctx->pc = 0x1D5B48u;
    {
        const bool branch_taken_0x1d5b48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d5b48) {
            ctx->pc = 0x1D5B8Cu;
            goto label_1d5b8c;
        }
    }
    ctx->pc = 0x1D5B50u;
label_1d5b50:
    // 0x1d5b50: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1d5b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1d5b54:
    // 0x1d5b54: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_1d5b58:
    if (ctx->pc == 0x1D5B58u) {
        ctx->pc = 0x1D5B5Cu;
        goto label_1d5b5c;
    }
    ctx->pc = 0x1D5B54u;
    {
        const bool branch_taken_0x1d5b54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d5b54) {
            ctx->pc = 0x1D5B8Cu;
            goto label_1d5b8c;
        }
    }
    ctx->pc = 0x1D5B5Cu;
label_1d5b5c:
    // 0x1d5b5c: 0x8e590054  lw          $t9, 0x54($s2)
    ctx->pc = 0x1d5b5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_1d5b60:
    // 0x1d5b60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d5b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d5b64:
    // 0x1d5b64: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1d5b64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1d5b68:
    // 0x1d5b68: 0x320f809  jalr        $t9
label_1d5b6c:
    if (ctx->pc == 0x1D5B6Cu) {
        ctx->pc = 0x1D5B6Cu;
            // 0x1d5b6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D5B70u;
        goto label_1d5b70;
    }
    ctx->pc = 0x1D5B68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D5B70u);
        ctx->pc = 0x1D5B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5B68u;
            // 0x1d5b6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D5B70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D5B70u; }
            if (ctx->pc != 0x1D5B70u) { return; }
        }
        }
    }
    ctx->pc = 0x1D5B70u;
label_1d5b70:
    // 0x1d5b70: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x1d5b70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
label_1d5b74:
    // 0x1d5b74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d5b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d5b78:
    // 0x1d5b78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d5b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d5b7c:
    // 0x1d5b7c: 0xc075ec4  jal         func_1D7B10
label_1d5b80:
    if (ctx->pc == 0x1D5B80u) {
        ctx->pc = 0x1D5B80u;
            // 0x1d5b80: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
        ctx->pc = 0x1D5B84u;
        goto label_1d5b84;
    }
    ctx->pc = 0x1D5B7Cu;
    SET_GPR_U32(ctx, 31, 0x1D5B84u);
    ctx->pc = 0x1D5B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5B7Cu;
            // 0x1d5b80: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7B10u;
    if (runtime->hasFunction(0x1D7B10u)) {
        auto targetFn = runtime->lookupFunction(0x1D7B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5B84u; }
        if (ctx->pc != 0x1D5B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7B10_0x1d7b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5B84u; }
        if (ctx->pc != 0x1D5B84u) { return; }
    }
    ctx->pc = 0x1D5B84u;
label_1d5b84:
    // 0x1d5b84: 0x10000009  b           . + 4 + (0x9 << 2)
label_1d5b88:
    if (ctx->pc == 0x1D5B88u) {
        ctx->pc = 0x1D5B8Cu;
        goto label_1d5b8c;
    }
    ctx->pc = 0x1D5B84u;
    {
        const bool branch_taken_0x1d5b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5b84) {
            ctx->pc = 0x1D5BACu;
            goto label_1d5bac;
        }
    }
    ctx->pc = 0x1D5B8Cu;
label_1d5b8c:
    // 0x1d5b8c: 0x92430010  lbu         $v1, 0x10($s2)
    ctx->pc = 0x1d5b8cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 16)));
label_1d5b90:
    // 0x1d5b90: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x1d5b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_1d5b94:
    // 0x1d5b94: 0x24425910  addiu       $v0, $v0, 0x5910
    ctx->pc = 0x1d5b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22800));
label_1d5b98:
    // 0x1d5b98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d5b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d5b9c:
    // 0x1d5b9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d5b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d5ba0:
    // 0x1d5ba0: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x1d5ba0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1d5ba4:
    // 0x1d5ba4: 0xc075ec4  jal         func_1D7B10
label_1d5ba8:
    if (ctx->pc == 0x1D5BA8u) {
        ctx->pc = 0x1D5BA8u;
            // 0x1d5ba8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D5BACu;
        goto label_1d5bac;
    }
    ctx->pc = 0x1D5BA4u;
    SET_GPR_U32(ctx, 31, 0x1D5BACu);
    ctx->pc = 0x1D5BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5BA4u;
            // 0x1d5ba8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7B10u;
    if (runtime->hasFunction(0x1D7B10u)) {
        auto targetFn = runtime->lookupFunction(0x1D7B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5BACu; }
        if (ctx->pc != 0x1D5BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7B10_0x1d7b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5BACu; }
        if (ctx->pc != 0x1D5BACu) { return; }
    }
    ctx->pc = 0x1D5BACu;
label_1d5bac:
    // 0x1d5bac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d5bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1d5bb0:
    // 0x1d5bb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d5bb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d5bb4:
    // 0x1d5bb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d5bb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d5bb8:
    // 0x1d5bb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d5bb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d5bbc:
    // 0x1d5bbc: 0x3e00008  jr          $ra
label_1d5bc0:
    if (ctx->pc == 0x1D5BC0u) {
        ctx->pc = 0x1D5BC0u;
            // 0x1d5bc0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1D5BC4u;
        goto label_1d5bc4;
    }
    ctx->pc = 0x1D5BBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5BBCu;
            // 0x1d5bc0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D5BC4u;
label_1d5bc4:
    // 0x1d5bc4: 0x0  nop
    ctx->pc = 0x1d5bc4u;
    // NOP
label_1d5bc8:
    // 0x1d5bc8: 0x0  nop
    ctx->pc = 0x1d5bc8u;
    // NOP
label_1d5bcc:
    // 0x1d5bcc: 0x0  nop
    ctx->pc = 0x1d5bccu;
    // NOP
}
