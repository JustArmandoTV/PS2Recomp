#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0040EB60
// Address: 0x40eb60 - 0x40ec50
void sub_0040EB60_0x40eb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040EB60_0x40eb60");
#endif

    switch (ctx->pc) {
        case 0x40eba4u: goto label_40eba4;
        case 0x40ebc0u: goto label_40ebc0;
        case 0x40ebe4u: goto label_40ebe4;
        default: break;
    }

    ctx->pc = 0x40eb60u;

    // 0x40eb60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x40eb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x40eb64: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x40eb64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40eb68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x40eb68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x40eb6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40eb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x40eb70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40eb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x40eb74: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x40eb74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40eb78: 0x8ca30e38  lw          $v1, 0xE38($a1)
    ctx->pc = 0x40eb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3640)));
    // 0x40eb7c: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x40EB7Cu;
    {
        const bool branch_taken_0x40eb7c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x40EB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40EB7Cu;
            // 0x40eb80: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40eb7c) {
            ctx->pc = 0x40EB94u;
            goto label_40eb94;
        }
    }
    ctx->pc = 0x40EB84u;
    // 0x40eb84: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x40eb84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x40eb88: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x40EB88u;
    {
        const bool branch_taken_0x40eb88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x40eb88) {
            ctx->pc = 0x40EB94u;
            goto label_40eb94;
        }
    }
    ctx->pc = 0x40EB90u;
    // 0x40eb90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40eb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40eb94:
    // 0x40eb94: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x40EB94u;
    {
        const bool branch_taken_0x40eb94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x40eb94) {
            ctx->pc = 0x40EBB0u;
            goto label_40ebb0;
        }
    }
    ctx->pc = 0x40EB9Cu;
    // 0x40eb9c: 0xc075eb4  jal         func_1D7AD0
    ctx->pc = 0x40EB9Cu;
    SET_GPR_U32(ctx, 31, 0x40EBA4u);
    ctx->pc = 0x40EBA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40EB9Cu;
            // 0x40eba0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EBA4u; }
        if (ctx->pc != 0x40EBA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EBA4u; }
        if (ctx->pc != 0x40EBA4u) { return; }
    }
    ctx->pc = 0x40EBA4u;
label_40eba4:
    // 0x40eba4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x40EBA4u;
    {
        const bool branch_taken_0x40eba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x40eba4) {
            ctx->pc = 0x40EBB0u;
            goto label_40ebb0;
        }
    }
    ctx->pc = 0x40EBACu;
    // 0x40ebac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x40ebacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40ebb0:
    // 0x40ebb0: 0x52000023  beql        $s0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x40EBB0u;
    {
        const bool branch_taken_0x40ebb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x40ebb0) {
            ctx->pc = 0x40EBB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40EBB0u;
            // 0x40ebb4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40EC40u;
            goto label_40ec40;
        }
    }
    ctx->pc = 0x40EBB8u;
    // 0x40ebb8: 0xc040180  jal         func_100600
    ctx->pc = 0x40EBB8u;
    SET_GPR_U32(ctx, 31, 0x40EBC0u);
    ctx->pc = 0x40EBBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40EBB8u;
            // 0x40ebbc: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EBC0u; }
        if (ctx->pc != 0x40EBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EBC0u; }
        if (ctx->pc != 0x40EBC0u) { return; }
    }
    ctx->pc = 0x40EBC0u;
label_40ebc0:
    // 0x40ebc0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x40EBC0u;
    {
        const bool branch_taken_0x40ebc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40EBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40EBC0u;
            // 0x40ebc4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ebc0) {
            ctx->pc = 0x40EC3Cu;
            goto label_40ec3c;
        }
    }
    ctx->pc = 0x40EBC8u;
    // 0x40ebc8: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x40ebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
    // 0x40ebcc: 0x8e310d98  lw          $s1, 0xD98($s1)
    ctx->pc = 0x40ebccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3480)));
    // 0x40ebd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40ebd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ebd4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x40ebd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x40ebd8: 0x3445aec3  ori         $a1, $v0, 0xAEC3
    ctx->pc = 0x40ebd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44739);
    // 0x40ebdc: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x40EBDCu;
    SET_GPR_U32(ctx, 31, 0x40EBE4u);
    ctx->pc = 0x40EBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40EBDCu;
            // 0x40ebe0: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EBE4u; }
        if (ctx->pc != 0x40EBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EBE4u; }
        if (ctx->pc != 0x40EBE4u) { return; }
    }
    ctx->pc = 0x40EBE4u;
label_40ebe4:
    // 0x40ebe4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x40ebe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x40ebe8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x40ebe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x40ebec: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x40ebecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x40ebf0: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x40ebf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x40ebf4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x40ebf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x40ebf8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x40ebf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x40ebfc: 0x24634f60  addiu       $v1, $v1, 0x4F60
    ctx->pc = 0x40ebfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20320));
    // 0x40ec00: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x40ec00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x40ec04: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x40ec04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x40ec08: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x40ec08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x40ec0c: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x40ec0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x40ec10: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x40ec10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x40ec14: 0xae05005c  sw          $a1, 0x5C($s0)
    ctx->pc = 0x40ec14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 5));
    // 0x40ec18: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x40ec18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x40ec1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x40ec1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40ec20: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x40ec20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x40ec24: 0xae050064  sw          $a1, 0x64($s0)
    ctx->pc = 0x40ec24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 5));
    // 0x40ec28: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x40ec28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x40ec2c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x40ec2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x40ec30: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x40ec30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x40ec34: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x40ec34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x40ec38: 0xa200006c  sb          $zero, 0x6C($s0)
    ctx->pc = 0x40ec38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 0));
label_40ec3c:
    // 0x40ec3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x40ec3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_40ec40:
    // 0x40ec40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40ec40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40ec44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40ec44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40ec48: 0x3e00008  jr          $ra
    ctx->pc = 0x40EC48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40EC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40EC48u;
            // 0x40ec4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40EC50u;
}
