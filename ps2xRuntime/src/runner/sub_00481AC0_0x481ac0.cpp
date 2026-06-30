#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00481AC0
// Address: 0x481ac0 - 0x481b70
void sub_00481AC0_0x481ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481AC0_0x481ac0");
#endif

    switch (ctx->pc) {
        case 0x481ac0u: goto label_481ac0;
        case 0x481ac4u: goto label_481ac4;
        case 0x481ac8u: goto label_481ac8;
        case 0x481accu: goto label_481acc;
        case 0x481ad0u: goto label_481ad0;
        case 0x481ad4u: goto label_481ad4;
        case 0x481ad8u: goto label_481ad8;
        case 0x481adcu: goto label_481adc;
        case 0x481ae0u: goto label_481ae0;
        case 0x481ae4u: goto label_481ae4;
        case 0x481ae8u: goto label_481ae8;
        case 0x481aecu: goto label_481aec;
        case 0x481af0u: goto label_481af0;
        case 0x481af4u: goto label_481af4;
        case 0x481af8u: goto label_481af8;
        case 0x481afcu: goto label_481afc;
        case 0x481b00u: goto label_481b00;
        case 0x481b04u: goto label_481b04;
        case 0x481b08u: goto label_481b08;
        case 0x481b0cu: goto label_481b0c;
        case 0x481b10u: goto label_481b10;
        case 0x481b14u: goto label_481b14;
        case 0x481b18u: goto label_481b18;
        case 0x481b1cu: goto label_481b1c;
        case 0x481b20u: goto label_481b20;
        case 0x481b24u: goto label_481b24;
        case 0x481b28u: goto label_481b28;
        case 0x481b2cu: goto label_481b2c;
        case 0x481b30u: goto label_481b30;
        case 0x481b34u: goto label_481b34;
        case 0x481b38u: goto label_481b38;
        case 0x481b3cu: goto label_481b3c;
        case 0x481b40u: goto label_481b40;
        case 0x481b44u: goto label_481b44;
        case 0x481b48u: goto label_481b48;
        case 0x481b4cu: goto label_481b4c;
        case 0x481b50u: goto label_481b50;
        case 0x481b54u: goto label_481b54;
        case 0x481b58u: goto label_481b58;
        case 0x481b5cu: goto label_481b5c;
        case 0x481b60u: goto label_481b60;
        case 0x481b64u: goto label_481b64;
        case 0x481b68u: goto label_481b68;
        case 0x481b6cu: goto label_481b6c;
        default: break;
    }

    ctx->pc = 0x481ac0u;

label_481ac0:
    // 0x481ac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x481ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_481ac4:
    // 0x481ac4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x481ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_481ac8:
    // 0x481ac8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x481ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_481acc:
    // 0x481acc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x481accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_481ad0:
    // 0x481ad0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x481ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_481ad4:
    // 0x481ad4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x481ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_481ad8:
    // 0x481ad8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x481ad8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_481adc:
    // 0x481adc: 0x8c458a08  lw          $a1, -0x75F8($v0)
    ctx->pc = 0x481adcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_481ae0:
    // 0x481ae0: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x481ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_481ae4:
    // 0x481ae4: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x481ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_481ae8:
    // 0x481ae8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x481ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_481aec:
    // 0x481aec: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x481aecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_481af0:
    // 0x481af0: 0xa0c50428  sb          $a1, 0x428($a2)
    ctx->pc = 0x481af0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1064), (uint8_t)GPR_U32(ctx, 5));
label_481af4:
    // 0x481af4: 0x8c848a08  lw          $a0, -0x75F8($a0)
    ctx->pc = 0x481af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294937096)));
label_481af8:
    // 0x481af8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x481af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_481afc:
    // 0x481afc: 0xa0c40429  sb          $a0, 0x429($a2)
    ctx->pc = 0x481afcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1065), (uint8_t)GPR_U32(ctx, 4));
label_481b00:
    // 0x481b00: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x481b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_481b04:
    // 0x481b04: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x481b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_481b08:
    // 0x481b08: 0xa0c3042a  sb          $v1, 0x42A($a2)
    ctx->pc = 0x481b08u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1066), (uint8_t)GPR_U32(ctx, 3));
label_481b0c:
    // 0x481b0c: 0x8c44a140  lw          $a0, -0x5EC0($v0)
    ctx->pc = 0x481b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943040)));
label_481b10:
    // 0x481b10: 0xc073e80  jal         func_1CFA00
label_481b14:
    if (ctx->pc == 0x481B14u) {
        ctx->pc = 0x481B14u;
            // 0x481b14: 0x24d00428  addiu       $s0, $a2, 0x428 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 1064));
        ctx->pc = 0x481B18u;
        goto label_481b18;
    }
    ctx->pc = 0x481B10u;
    SET_GPR_U32(ctx, 31, 0x481B18u);
    ctx->pc = 0x481B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x481B10u;
            // 0x481b14: 0x24d00428  addiu       $s0, $a2, 0x428 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 1064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA00u;
    if (runtime->hasFunction(0x1CFA00u)) {
        auto targetFn = runtime->lookupFunction(0x1CFA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481B18u; }
        if (ctx->pc != 0x481B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CFA00_0x1cfa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481B18u; }
        if (ctx->pc != 0x481B18u) { return; }
    }
    ctx->pc = 0x481B18u;
label_481b18:
    // 0x481b18: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x481b18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
label_481b1c:
    // 0x481b1c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x481b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_481b20:
    // 0x481b20: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x481b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_481b24:
    // 0x481b24: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x481b24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_481b28:
    // 0x481b28: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x481b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_481b2c:
    // 0x481b2c: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x481b2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_481b30:
    // 0x481b30: 0x320f809  jalr        $t9
label_481b34:
    if (ctx->pc == 0x481B34u) {
        ctx->pc = 0x481B34u;
            // 0x481b34: 0x2445044c  addiu       $a1, $v0, 0x44C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1100));
        ctx->pc = 0x481B38u;
        goto label_481b38;
    }
    ctx->pc = 0x481B30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x481B38u);
        ctx->pc = 0x481B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x481B30u;
            // 0x481b34: 0x2445044c  addiu       $a1, $v0, 0x44C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1100));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x481B38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x481B38u; }
            if (ctx->pc != 0x481B38u) { return; }
        }
        }
    }
    ctx->pc = 0x481B38u;
label_481b38:
    // 0x481b38: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x481b38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_481b3c:
    // 0x481b3c: 0x3c0700af  lui         $a3, 0xAF
    ctx->pc = 0x481b3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)175 << 16));
label_481b40:
    // 0x481b40: 0x24053ffc  addiu       $a1, $zero, 0x3FFC
    ctx->pc = 0x481b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16380));
label_481b44:
    // 0x481b44: 0x24e77790  addiu       $a3, $a3, 0x7790
    ctx->pc = 0x481b44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 30608));
label_481b48:
    // 0x481b48: 0xc155a20  jal         func_556880
label_481b4c:
    if (ctx->pc == 0x481B4Cu) {
        ctx->pc = 0x481B4Cu;
            // 0x481b4c: 0x24c40004  addiu       $a0, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x481B50u;
        goto label_481b50;
    }
    ctx->pc = 0x481B48u;
    SET_GPR_U32(ctx, 31, 0x481B50u);
    ctx->pc = 0x481B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x481B48u;
            // 0x481b4c: 0x24c40004  addiu       $a0, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x556880u;
    if (runtime->hasFunction(0x556880u)) {
        auto targetFn = runtime->lookupFunction(0x556880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481B50u; }
        if (ctx->pc != 0x481B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00556880_0x556880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481B50u; }
        if (ctx->pc != 0x481B50u) { return; }
    }
    ctx->pc = 0x481B50u;
label_481b50:
    // 0x481b50: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x481b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_481b54:
    // 0x481b54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x481b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_481b58:
    // 0x481b58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x481b58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_481b5c:
    // 0x481b5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x481b5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_481b60:
    // 0x481b60: 0x3e00008  jr          $ra
label_481b64:
    if (ctx->pc == 0x481B64u) {
        ctx->pc = 0x481B64u;
            // 0x481b64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x481B68u;
        goto label_481b68;
    }
    ctx->pc = 0x481B60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x481B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x481B60u;
            // 0x481b64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x481B68u;
label_481b68:
    // 0x481b68: 0x0  nop
    ctx->pc = 0x481b68u;
    // NOP
label_481b6c:
    // 0x481b6c: 0x0  nop
    ctx->pc = 0x481b6cu;
    // NOP
}
