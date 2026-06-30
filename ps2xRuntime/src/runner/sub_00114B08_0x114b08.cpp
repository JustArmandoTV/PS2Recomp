#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00114B08
// Address: 0x114b08 - 0x114ce8
void sub_00114B08_0x114b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114B08_0x114b08");
#endif

    switch (ctx->pc) {
        case 0x114b58u: goto label_114b58;
        case 0x114bc8u: goto label_114bc8;
        case 0x114c44u: goto label_114c44;
        case 0x114cc4u: goto label_114cc4;
        default: break;
    }

    ctx->pc = 0x114b08u;

    // 0x114b08: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x114b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x114b0c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x114b0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x114b10: 0x8c43e458  lw          $v1, -0x1BA8($v0)
    ctx->pc = 0x114b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960216)));
    // 0x114b14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x114b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x114b18: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x114B18u;
    {
        const bool branch_taken_0x114b18 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x114B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114B18u;
            // 0x114b1c: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114b18) {
            ctx->pc = 0x114B28u;
            goto label_114b28;
        }
    }
    ctx->pc = 0x114B20u;
    // 0x114b20: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x114B20u;
    {
        const bool branch_taken_0x114b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114B20u;
            // 0x114b24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114b20) {
            ctx->pc = 0x114B68u;
            goto label_114b68;
        }
    }
    ctx->pc = 0x114B28u;
label_114b28:
    // 0x114b28: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x114b28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x114b2c: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x114b2cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x114b30: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x114b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x114b34: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x114b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x114b38: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x114b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x114b3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x114b3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114b40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x114b40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114b44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x114b44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114b48: 0x2609cc80  addiu       $t1, $s0, -0x3380
    ctx->pc = 0x114b48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954112));
    // 0x114b4c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x114b4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x114b50: 0xc04410c  jal         func_110430
    ctx->pc = 0x114B50u;
    SET_GPR_U32(ctx, 31, 0x114B58u);
    ctx->pc = 0x114B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114B50u;
            // 0x114b54: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110430u;
    if (runtime->hasFunction(0x110430u)) {
        auto targetFn = runtime->lookupFunction(0x110430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114B58u; }
        if (ctx->pc != 0x114B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110430_0x110430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114B58u; }
        if (ctx->pc != 0x114B58u) { return; }
    }
    ctx->pc = 0x114B58u;
label_114b58:
    // 0x114b58: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x114B58u;
    {
        const bool branch_taken_0x114b58 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x114b58) {
            ctx->pc = 0x114B5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x114B58u;
            // 0x114b5c: 0x8e02cc80  lw          $v0, -0x3380($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x114B68u;
            goto label_114b68;
        }
    }
    ctx->pc = 0x114B60u;
    // 0x114b60: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x114b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x114b64: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x114b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_114b68:
    // 0x114b68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x114b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x114b6c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x114b6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114b70: 0x3e00008  jr          $ra
    ctx->pc = 0x114B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114B70u;
            // 0x114b74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114B78u;
    // 0x114b78: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x114b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x114b7c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x114b7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x114b80: 0x8c43e458  lw          $v1, -0x1BA8($v0)
    ctx->pc = 0x114b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960216)));
    // 0x114b84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x114b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x114b88: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x114B88u;
    {
        const bool branch_taken_0x114b88 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x114B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114B88u;
            // 0x114b8c: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114b88) {
            ctx->pc = 0x114B98u;
            goto label_114b98;
        }
    }
    ctx->pc = 0x114B90u;
    // 0x114b90: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x114B90u;
    {
        const bool branch_taken_0x114b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114B90u;
            // 0x114b94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114b90) {
            ctx->pc = 0x114BD8u;
            goto label_114bd8;
        }
    }
    ctx->pc = 0x114B98u;
label_114b98:
    // 0x114b98: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x114b98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x114b9c: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x114b9cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x114ba0: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x114ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x114ba4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x114ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x114ba8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x114ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x114bac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x114bacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114bb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x114bb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114bb4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x114bb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114bb8: 0x2609cc80  addiu       $t1, $s0, -0x3380
    ctx->pc = 0x114bb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954112));
    // 0x114bbc: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x114bbcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x114bc0: 0xc04410c  jal         func_110430
    ctx->pc = 0x114BC0u;
    SET_GPR_U32(ctx, 31, 0x114BC8u);
    ctx->pc = 0x114BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114BC0u;
            // 0x114bc4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110430u;
    if (runtime->hasFunction(0x110430u)) {
        auto targetFn = runtime->lookupFunction(0x110430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114BC8u; }
        if (ctx->pc != 0x114BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110430_0x110430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114BC8u; }
        if (ctx->pc != 0x114BC8u) { return; }
    }
    ctx->pc = 0x114BC8u;
label_114bc8:
    // 0x114bc8: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x114BC8u;
    {
        const bool branch_taken_0x114bc8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x114bc8) {
            ctx->pc = 0x114BCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x114BC8u;
            // 0x114bcc: 0x8e02cc80  lw          $v0, -0x3380($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x114BD8u;
            goto label_114bd8;
        }
    }
    ctx->pc = 0x114BD0u;
    // 0x114bd0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x114bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x114bd4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x114bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_114bd8:
    // 0x114bd8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x114bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x114bdc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x114bdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114be0: 0x3e00008  jr          $ra
    ctx->pc = 0x114BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114BE0u;
            // 0x114be4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114BE8u;
    // 0x114be8: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x114be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x114bec: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x114becu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x114bf0: 0x8c62e458  lw          $v0, -0x1BA8($v1)
    ctx->pc = 0x114bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960216)));
    // 0x114bf4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x114bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114bf8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x114bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x114bfc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x114BFCu;
    {
        const bool branch_taken_0x114bfc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x114C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114BFCu;
            // 0x114c00: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114bfc) {
            ctx->pc = 0x114C0Cu;
            goto label_114c0c;
        }
    }
    ctx->pc = 0x114C04u;
    // 0x114c04: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x114C04u;
    {
        const bool branch_taken_0x114c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114C04u;
            // 0x114c08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114c04) {
            ctx->pc = 0x114C54u;
            goto label_114c54;
        }
    }
    ctx->pc = 0x114C0Cu;
label_114c0c:
    // 0x114c0c: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x114c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
    // 0x114c10: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x114c10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x114c14: 0xace5ccc0  sw          $a1, -0x3340($a3)
    ctx->pc = 0x114c14u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294954176), GPR_U32(ctx, 5));
    // 0x114c18: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x114c18u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x114c1c: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x114c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x114c20: 0x24e7ccc0  addiu       $a3, $a3, -0x3340
    ctx->pc = 0x114c20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954176));
    // 0x114c24: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x114c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x114c28: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x114c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x114c2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x114c2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114c30: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x114c30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x114c34: 0x2609cc80  addiu       $t1, $s0, -0x3380
    ctx->pc = 0x114c34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954112));
    // 0x114c38: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x114c38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x114c3c: 0xc04410c  jal         func_110430
    ctx->pc = 0x114C3Cu;
    SET_GPR_U32(ctx, 31, 0x114C44u);
    ctx->pc = 0x114C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114C3Cu;
            // 0x114c40: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110430u;
    if (runtime->hasFunction(0x110430u)) {
        auto targetFn = runtime->lookupFunction(0x110430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114C44u; }
        if (ctx->pc != 0x114C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110430_0x110430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114C44u; }
        if (ctx->pc != 0x114C44u) { return; }
    }
    ctx->pc = 0x114C44u;
label_114c44:
    // 0x114c44: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x114C44u;
    {
        const bool branch_taken_0x114c44 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x114c44) {
            ctx->pc = 0x114C48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x114C44u;
            // 0x114c48: 0x8e02cc80  lw          $v0, -0x3380($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x114C54u;
            goto label_114c54;
        }
    }
    ctx->pc = 0x114C4Cu;
    // 0x114c4c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x114c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x114c50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x114c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_114c54:
    // 0x114c54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x114c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x114c58: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x114c58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x114C5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114C5Cu;
            // 0x114c60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114C64u;
    // 0x114c64: 0x0  nop
    ctx->pc = 0x114c64u;
    // NOP
    // 0x114c68: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x114c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x114c6c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x114c6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x114c70: 0x8c62e458  lw          $v0, -0x1BA8($v1)
    ctx->pc = 0x114c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960216)));
    // 0x114c74: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x114c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114c78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x114c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x114c7c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x114C7Cu;
    {
        const bool branch_taken_0x114c7c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x114C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114C7Cu;
            // 0x114c80: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114c7c) {
            ctx->pc = 0x114C8Cu;
            goto label_114c8c;
        }
    }
    ctx->pc = 0x114C84u;
    // 0x114c84: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x114C84u;
    {
        const bool branch_taken_0x114c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114C84u;
            // 0x114c88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114c84) {
            ctx->pc = 0x114CD4u;
            goto label_114cd4;
        }
    }
    ctx->pc = 0x114C8Cu;
label_114c8c:
    // 0x114c8c: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x114c8cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
    // 0x114c90: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x114c90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x114c94: 0xace5ccc0  sw          $a1, -0x3340($a3)
    ctx->pc = 0x114c94u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294954176), GPR_U32(ctx, 5));
    // 0x114c98: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x114c98u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x114c9c: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x114c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x114ca0: 0x24e7ccc0  addiu       $a3, $a3, -0x3340
    ctx->pc = 0x114ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954176));
    // 0x114ca4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x114ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x114ca8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x114ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x114cac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x114cacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114cb0: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x114cb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x114cb4: 0x2609cc80  addiu       $t1, $s0, -0x3380
    ctx->pc = 0x114cb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954112));
    // 0x114cb8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x114cb8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x114cbc: 0xc04410c  jal         func_110430
    ctx->pc = 0x114CBCu;
    SET_GPR_U32(ctx, 31, 0x114CC4u);
    ctx->pc = 0x114CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114CBCu;
            // 0x114cc0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110430u;
    if (runtime->hasFunction(0x110430u)) {
        auto targetFn = runtime->lookupFunction(0x110430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114CC4u; }
        if (ctx->pc != 0x114CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110430_0x110430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114CC4u; }
        if (ctx->pc != 0x114CC4u) { return; }
    }
    ctx->pc = 0x114CC4u;
label_114cc4:
    // 0x114cc4: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x114CC4u;
    {
        const bool branch_taken_0x114cc4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x114cc4) {
            ctx->pc = 0x114CC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x114CC4u;
            // 0x114cc8: 0x8e02cc80  lw          $v0, -0x3380($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x114CD4u;
            goto label_114cd4;
        }
    }
    ctx->pc = 0x114CCCu;
    // 0x114ccc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x114cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x114cd0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x114cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_114cd4:
    // 0x114cd4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x114cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x114cd8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x114cd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x114CDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114CDCu;
            // 0x114ce0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114CE4u;
    // 0x114ce4: 0x0  nop
    ctx->pc = 0x114ce4u;
    // NOP
}
