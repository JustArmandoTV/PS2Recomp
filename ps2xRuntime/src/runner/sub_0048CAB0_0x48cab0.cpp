#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0048CAB0
// Address: 0x48cab0 - 0x48cb40
void sub_0048CAB0_0x48cab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048CAB0_0x48cab0");
#endif

    switch (ctx->pc) {
        case 0x48cab0u: goto label_48cab0;
        case 0x48cab4u: goto label_48cab4;
        case 0x48cab8u: goto label_48cab8;
        case 0x48cabcu: goto label_48cabc;
        case 0x48cac0u: goto label_48cac0;
        case 0x48cac4u: goto label_48cac4;
        case 0x48cac8u: goto label_48cac8;
        case 0x48caccu: goto label_48cacc;
        case 0x48cad0u: goto label_48cad0;
        case 0x48cad4u: goto label_48cad4;
        case 0x48cad8u: goto label_48cad8;
        case 0x48cadcu: goto label_48cadc;
        case 0x48cae0u: goto label_48cae0;
        case 0x48cae4u: goto label_48cae4;
        case 0x48cae8u: goto label_48cae8;
        case 0x48caecu: goto label_48caec;
        case 0x48caf0u: goto label_48caf0;
        case 0x48caf4u: goto label_48caf4;
        case 0x48caf8u: goto label_48caf8;
        case 0x48cafcu: goto label_48cafc;
        case 0x48cb00u: goto label_48cb00;
        case 0x48cb04u: goto label_48cb04;
        case 0x48cb08u: goto label_48cb08;
        case 0x48cb0cu: goto label_48cb0c;
        case 0x48cb10u: goto label_48cb10;
        case 0x48cb14u: goto label_48cb14;
        case 0x48cb18u: goto label_48cb18;
        case 0x48cb1cu: goto label_48cb1c;
        case 0x48cb20u: goto label_48cb20;
        case 0x48cb24u: goto label_48cb24;
        case 0x48cb28u: goto label_48cb28;
        case 0x48cb2cu: goto label_48cb2c;
        case 0x48cb30u: goto label_48cb30;
        case 0x48cb34u: goto label_48cb34;
        case 0x48cb38u: goto label_48cb38;
        case 0x48cb3cu: goto label_48cb3c;
        default: break;
    }

    ctx->pc = 0x48cab0u;

label_48cab0:
    // 0x48cab0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48cab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_48cab4:
    // 0x48cab4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x48cab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_48cab8:
    // 0x48cab8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48cab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48cabc:
    // 0x48cabc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48cabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48cac0:
    // 0x48cac0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x48cac0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_48cac4:
    // 0x48cac4: 0x9082007c  lbu         $v0, 0x7C($a0)
    ctx->pc = 0x48cac4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 124)));
label_48cac8:
    // 0x48cac8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_48cacc:
    if (ctx->pc == 0x48CACCu) {
        ctx->pc = 0x48CACCu;
            // 0x48cacc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48CAD0u;
        goto label_48cad0;
    }
    ctx->pc = 0x48CAC8u;
    {
        const bool branch_taken_0x48cac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48CACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48CAC8u;
            // 0x48cacc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48cac8) {
            ctx->pc = 0x48CAF8u;
            goto label_48caf8;
        }
    }
    ctx->pc = 0x48CAD0u;
label_48cad0:
    // 0x48cad0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x48cad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_48cad4:
    // 0x48cad4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x48cad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_48cad8:
    // 0x48cad8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48cad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_48cadc:
    // 0x48cadc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x48cadcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48cae0:
    // 0x48cae0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x48cae0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48cae4:
    // 0x48cae4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x48cae4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_48cae8:
    // 0x48cae8: 0x320f809  jalr        $t9
label_48caec:
    if (ctx->pc == 0x48CAECu) {
        ctx->pc = 0x48CAECu;
            // 0x48caec: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48CAF0u;
        goto label_48caf0;
    }
    ctx->pc = 0x48CAE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48CAF0u);
        ctx->pc = 0x48CAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48CAE8u;
            // 0x48caec: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48CAF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48CAF0u; }
            if (ctx->pc != 0x48CAF0u) { return; }
        }
        }
    }
    ctx->pc = 0x48CAF0u;
label_48caf0:
    // 0x48caf0: 0x10000003  b           . + 4 + (0x3 << 2)
label_48caf4:
    if (ctx->pc == 0x48CAF4u) {
        ctx->pc = 0x48CAF4u;
            // 0x48caf4: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x48CAF8u;
        goto label_48caf8;
    }
    ctx->pc = 0x48CAF0u;
    {
        const bool branch_taken_0x48caf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48CAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48CAF0u;
            // 0x48caf4: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48caf0) {
            ctx->pc = 0x48CB00u;
            goto label_48cb00;
        }
    }
    ctx->pc = 0x48CAF8u;
label_48caf8:
    // 0x48caf8: 0xa200007c  sb          $zero, 0x7C($s0)
    ctx->pc = 0x48caf8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 124), (uint8_t)GPR_U32(ctx, 0));
label_48cafc:
    // 0x48cafc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x48cafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_48cb00:
    // 0x48cb00: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x48cb00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_48cb04:
    // 0x48cb04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x48cb04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48cb08:
    // 0x48cb08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48cb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_48cb0c:
    // 0x48cb0c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x48cb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48cb10:
    // 0x48cb10: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x48cb10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48cb14:
    // 0x48cb14: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x48cb14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_48cb18:
    // 0x48cb18: 0x320f809  jalr        $t9
label_48cb1c:
    if (ctx->pc == 0x48CB1Cu) {
        ctx->pc = 0x48CB1Cu;
            // 0x48cb1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48CB20u;
        goto label_48cb20;
    }
    ctx->pc = 0x48CB18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48CB20u);
        ctx->pc = 0x48CB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48CB18u;
            // 0x48cb1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48CB20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48CB20u; }
            if (ctx->pc != 0x48CB20u) { return; }
        }
        }
    }
    ctx->pc = 0x48CB20u;
label_48cb20:
    // 0x48cb20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x48cb20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_48cb24:
    // 0x48cb24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48cb24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48cb28:
    // 0x48cb28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48cb28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48cb2c:
    // 0x48cb2c: 0x3e00008  jr          $ra
label_48cb30:
    if (ctx->pc == 0x48CB30u) {
        ctx->pc = 0x48CB30u;
            // 0x48cb30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x48CB34u;
        goto label_48cb34;
    }
    ctx->pc = 0x48CB2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48CB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48CB2Cu;
            // 0x48cb30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48CB34u;
label_48cb34:
    // 0x48cb34: 0x0  nop
    ctx->pc = 0x48cb34u;
    // NOP
label_48cb38:
    // 0x48cb38: 0x0  nop
    ctx->pc = 0x48cb38u;
    // NOP
label_48cb3c:
    // 0x48cb3c: 0x0  nop
    ctx->pc = 0x48cb3cu;
    // NOP
}
