#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00167D38
// Address: 0x167d38 - 0x167db0
void sub_00167D38_0x167d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167D38_0x167d38");
#endif

    switch (ctx->pc) {
        case 0x167d38u: goto label_167d38;
        case 0x167d3cu: goto label_167d3c;
        case 0x167d40u: goto label_167d40;
        case 0x167d44u: goto label_167d44;
        case 0x167d48u: goto label_167d48;
        case 0x167d4cu: goto label_167d4c;
        case 0x167d50u: goto label_167d50;
        case 0x167d54u: goto label_167d54;
        case 0x167d58u: goto label_167d58;
        case 0x167d5cu: goto label_167d5c;
        case 0x167d60u: goto label_167d60;
        case 0x167d64u: goto label_167d64;
        case 0x167d68u: goto label_167d68;
        case 0x167d6cu: goto label_167d6c;
        case 0x167d70u: goto label_167d70;
        case 0x167d74u: goto label_167d74;
        case 0x167d78u: goto label_167d78;
        case 0x167d7cu: goto label_167d7c;
        case 0x167d80u: goto label_167d80;
        case 0x167d84u: goto label_167d84;
        case 0x167d88u: goto label_167d88;
        case 0x167d8cu: goto label_167d8c;
        case 0x167d90u: goto label_167d90;
        case 0x167d94u: goto label_167d94;
        case 0x167d98u: goto label_167d98;
        case 0x167d9cu: goto label_167d9c;
        case 0x167da0u: goto label_167da0;
        case 0x167da4u: goto label_167da4;
        case 0x167da8u: goto label_167da8;
        case 0x167dacu: goto label_167dac;
        default: break;
    }

    ctx->pc = 0x167d38u;

label_167d38:
    // 0x167d38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x167d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_167d3c:
    // 0x167d3c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x167d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_167d40:
    // 0x167d40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x167d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_167d44:
    // 0x167d44: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_167d48:
    if (ctx->pc == 0x167D48u) {
        ctx->pc = 0x167D48u;
            // 0x167d48: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->pc = 0x167D4Cu;
        goto label_167d4c;
    }
    ctx->pc = 0x167D44u;
    {
        const bool branch_taken_0x167d44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x167D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167D44u;
            // 0x167d48: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167d44) {
            ctx->pc = 0x167D68u;
            goto label_167d68;
        }
    }
    ctx->pc = 0x167D4Cu;
label_167d4c:
    // 0x167d4c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x167d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_167d50:
    // 0x167d50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x167d50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_167d54:
    // 0x167d54: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x167d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_167d58:
    // 0x167d58: 0x24843328  addiu       $a0, $a0, 0x3328
    ctx->pc = 0x167d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13096));
label_167d5c:
    // 0x167d5c: 0x8061fc0  j           func_187F00
label_167d60:
    if (ctx->pc == 0x167D60u) {
        ctx->pc = 0x167D60u;
            // 0x167d60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x167D64u;
        goto label_167d64;
    }
    ctx->pc = 0x167D5Cu;
    ctx->pc = 0x167D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167D5Cu;
            // 0x167d60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187F00u;
    if (runtime->hasFunction(0x187F00u)) {
        auto targetFn = runtime->lookupFunction(0x187F00u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00187F00_0x187f00(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x167D64u;
label_167d64:
    // 0x167d64: 0x0  nop
    ctx->pc = 0x167d64u;
    // NOP
label_167d68:
    // 0x167d68: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x167d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_167d6c:
    // 0x167d6c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x167d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_167d70:
    // 0x167d70: 0x24507268  addiu       $s0, $v0, 0x7268
    ctx->pc = 0x167d70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29288));
label_167d74:
    // 0x167d74: 0xc04b156  jal         func_12C558
label_167d78:
    if (ctx->pc == 0x167D78u) {
        ctx->pc = 0x167D78u;
            // 0x167d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x167D7Cu;
        goto label_167d7c;
    }
    ctx->pc = 0x167D74u;
    SET_GPR_U32(ctx, 31, 0x167D7Cu);
    ctx->pc = 0x167D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167D74u;
            // 0x167d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C558u;
    if (runtime->hasFunction(0x12C558u)) {
        auto targetFn = runtime->lookupFunction(0x12C558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167D7Cu; }
        if (ctx->pc != 0x167D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C558_0x12c558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167D7Cu; }
        if (ctx->pc != 0x167D7Cu) { return; }
    }
    ctx->pc = 0x167D7Cu;
label_167d7c:
    // 0x167d7c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x167d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_167d80:
    // 0x167d80: 0x8c637260  lw          $v1, 0x7260($v1)
    ctx->pc = 0x167d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29280)));
label_167d84:
    // 0x167d84: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_167d88:
    if (ctx->pc == 0x167D88u) {
        ctx->pc = 0x167D88u;
            // 0x167d88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x167D8Cu;
        goto label_167d8c;
    }
    ctx->pc = 0x167D84u;
    {
        const bool branch_taken_0x167d84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x167D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167D84u;
            // 0x167d88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167d84) {
            ctx->pc = 0x167D98u;
            goto label_167d98;
        }
    }
    ctx->pc = 0x167D8Cu;
label_167d8c:
    // 0x167d8c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x167d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_167d90:
    // 0x167d90: 0x60f809  jalr        $v1
label_167d94:
    if (ctx->pc == 0x167D94u) {
        ctx->pc = 0x167D94u;
            // 0x167d94: 0x8c447264  lw          $a0, 0x7264($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29284)));
        ctx->pc = 0x167D98u;
        goto label_167d98;
    }
    ctx->pc = 0x167D90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x167D98u);
        ctx->pc = 0x167D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167D90u;
            // 0x167d94: 0x8c447264  lw          $a0, 0x7264($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29284)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x167D98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x167D98u; }
            if (ctx->pc != 0x167D98u) { return; }
        }
        }
    }
    ctx->pc = 0x167D98u;
label_167d98:
    // 0x167d98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_167d9c:
    // 0x167d9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x167d9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_167da0:
    // 0x167da0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x167da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_167da4:
    // 0x167da4: 0x8061fc0  j           func_187F00
label_167da8:
    if (ctx->pc == 0x167DA8u) {
        ctx->pc = 0x167DA8u;
            // 0x167da8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x167DACu;
        goto label_167dac;
    }
    ctx->pc = 0x167DA4u;
    ctx->pc = 0x167DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167DA4u;
            // 0x167da8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187F00u;
    if (runtime->hasFunction(0x187F00u)) {
        auto targetFn = runtime->lookupFunction(0x187F00u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00187F00_0x187f00(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x167DACu;
label_167dac:
    // 0x167dac: 0x0  nop
    ctx->pc = 0x167dacu;
    // NOP
}
