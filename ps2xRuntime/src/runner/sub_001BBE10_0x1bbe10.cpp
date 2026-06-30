#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BBE10
// Address: 0x1bbe10 - 0x1bbea0
void sub_001BBE10_0x1bbe10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBE10_0x1bbe10");
#endif

    switch (ctx->pc) {
        case 0x1bbe28u: goto label_1bbe28;
        default: break;
    }

    ctx->pc = 0x1bbe10u;

    // 0x1bbe10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bbe10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bbe14: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1bbe14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bbe18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bbe18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bbe1c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bbe1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bbe20: 0xc06ef36  jal         func_1BBCD8
    ctx->pc = 0x1BBE20u;
    SET_GPR_U32(ctx, 31, 0x1BBE28u);
    ctx->pc = 0x1BBE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBE20u;
            // 0x1bbe24: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBCD8u;
    if (runtime->hasFunction(0x1BBCD8u)) {
        auto targetFn = runtime->lookupFunction(0x1BBCD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBE28u; }
        if (ctx->pc != 0x1BBE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBCD8_0x1bbcd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBE28u; }
        if (ctx->pc != 0x1BBE28u) { return; }
    }
    ctx->pc = 0x1BBE28u;
label_1bbe28:
    // 0x1bbe28: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bbe28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbe2c: 0x50600018  beql        $v1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BBE2Cu;
    {
        const bool branch_taken_0x1bbe2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbe2c) {
            ctx->pc = 0x1BBE30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBE2Cu;
            // 0x1bbe30: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BBE90u;
            goto label_1bbe90;
        }
    }
    ctx->pc = 0x1BBE34u;
    // 0x1bbe34: 0x90630019  lbu         $v1, 0x19($v1)
    ctx->pc = 0x1bbe34u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 25)));
    // 0x1bbe38: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1bbe38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1bbe3c: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BBE3Cu;
    {
        const bool branch_taken_0x1bbe3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbe3c) {
            ctx->pc = 0x1BBE40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBE3Cu;
            // 0x1bbe40: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BBE84u;
            goto label_1bbe84;
        }
    }
    ctx->pc = 0x1BBE44u;
    // 0x1bbe44: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1bbe44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bbe48: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1bbe48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x1bbe4c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bbe4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bbe50: 0x8c63b1a0  lw          $v1, -0x4E60($v1)
    ctx->pc = 0x1bbe50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947232)));
    // 0x1bbe54: 0x600008  jr          $v1
    ctx->pc = 0x1BBE54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BBE60u: goto label_1bbe60;
            case 0x1BBE68u: goto label_1bbe68;
            case 0x1BBE70u: goto label_1bbe70;
            case 0x1BBE78u: goto label_1bbe78;
            case 0x1BBE80u: goto label_1bbe80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BBE5Cu;
    // 0x1bbe5c: 0x0  nop
    ctx->pc = 0x1bbe5cu;
    // NOP
label_1bbe60:
    // 0x1bbe60: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BBE60u;
    {
        const bool branch_taken_0x1bbe60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBE60u;
            // 0x1bbe64: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbe60) {
            ctx->pc = 0x1BBE84u;
            goto label_1bbe84;
        }
    }
    ctx->pc = 0x1BBE68u;
label_1bbe68:
    // 0x1bbe68: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BBE68u;
    {
        const bool branch_taken_0x1bbe68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBE68u;
            // 0x1bbe6c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbe68) {
            ctx->pc = 0x1BBE84u;
            goto label_1bbe84;
        }
    }
    ctx->pc = 0x1BBE70u;
label_1bbe70:
    // 0x1bbe70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BBE70u;
    {
        const bool branch_taken_0x1bbe70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBE70u;
            // 0x1bbe74: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbe70) {
            ctx->pc = 0x1BBE84u;
            goto label_1bbe84;
        }
    }
    ctx->pc = 0x1BBE78u;
label_1bbe78:
    // 0x1bbe78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BBE78u;
    {
        const bool branch_taken_0x1bbe78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBE78u;
            // 0x1bbe7c: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbe78) {
            ctx->pc = 0x1BBE84u;
            goto label_1bbe84;
        }
    }
    ctx->pc = 0x1BBE80u;
label_1bbe80:
    // 0x1bbe80: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1bbe80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1bbe84:
    // 0x1bbe84: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1bbe84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1bbe88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bbe88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbe8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bbe8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bbe90:
    // 0x1bbe90: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bbe90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bbe94: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBE94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBE94u;
            // 0x1bbe98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BBE9Cu;
    // 0x1bbe9c: 0x0  nop
    ctx->pc = 0x1bbe9cu;
    // NOP
}
