#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021D2A0
// Address: 0x21d2a0 - 0x21d3b0
void sub_0021D2A0_0x21d2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D2A0_0x21d2a0");
#endif

    switch (ctx->pc) {
        case 0x21d2d8u: goto label_21d2d8;
        case 0x21d2e8u: goto label_21d2e8;
        case 0x21d2f0u: goto label_21d2f0;
        case 0x21d37cu: goto label_21d37c;
        default: break;
    }

    ctx->pc = 0x21d2a0u;

    // 0x21d2a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21d2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21d2a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21d2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21d2a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21d2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21d2ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21d2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21d2b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21d2b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d2b4: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x21d2b4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x21d2b8: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x21d2b8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x21d2bc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x21d2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x21d2c0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x21d2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x21d2c4: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x21d2c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21d2c8: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x21D2C8u;
    {
        const bool branch_taken_0x21d2c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D2C8u;
            // 0x21d2cc: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d2c8) {
            ctx->pc = 0x21D2F0u;
            goto label_21d2f0;
        }
    }
    ctx->pc = 0x21D2D0u;
    // 0x21d2d0: 0xc0873b4  jal         func_21CED0
    ctx->pc = 0x21D2D0u;
    SET_GPR_U32(ctx, 31, 0x21D2D8u);
    ctx->pc = 0x21D2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D2D0u;
            // 0x21d2d4: 0x32043  sra         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CED0u;
    if (runtime->hasFunction(0x21CED0u)) {
        auto targetFn = runtime->lookupFunction(0x21CED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D2D8u; }
        if (ctx->pc != 0x21D2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CED0_0x21ced0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D2D8u; }
        if (ctx->pc != 0x21D2D8u) { return; }
    }
    ctx->pc = 0x21D2D8u;
label_21d2d8:
    // 0x21d2d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21d2d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d2dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21d2dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d2e0: 0xc0873e8  jal         func_21CFA0
    ctx->pc = 0x21D2E0u;
    SET_GPR_U32(ctx, 31, 0x21D2E8u);
    ctx->pc = 0x21D2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D2E0u;
            // 0x21d2e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CFA0u;
    if (runtime->hasFunction(0x21CFA0u)) {
        auto targetFn = runtime->lookupFunction(0x21CFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D2E8u; }
        if (ctx->pc != 0x21D2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CFA0_0x21cfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D2E8u; }
        if (ctx->pc != 0x21D2E8u) { return; }
    }
    ctx->pc = 0x21D2E8u;
label_21d2e8:
    // 0x21d2e8: 0xc0873dc  jal         func_21CF70
    ctx->pc = 0x21D2E8u;
    SET_GPR_U32(ctx, 31, 0x21D2F0u);
    ctx->pc = 0x21D2ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D2E8u;
            // 0x21d2ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CF70u;
    if (runtime->hasFunction(0x21CF70u)) {
        auto targetFn = runtime->lookupFunction(0x21CF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D2F0u; }
        if (ctx->pc != 0x21D2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CF70_0x21cf70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D2F0u; }
        if (ctx->pc != 0x21D2F0u) { return; }
    }
    ctx->pc = 0x21D2F0u;
label_21d2f0:
    // 0x21d2f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21d2f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d2f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21d2f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21d2f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21d2f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d2fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21d2fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d300: 0x3e00008  jr          $ra
    ctx->pc = 0x21D300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D300u;
            // 0x21d304: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21D308u;
    // 0x21d308: 0x0  nop
    ctx->pc = 0x21d308u;
    // NOP
    // 0x21d30c: 0x0  nop
    ctx->pc = 0x21d30cu;
    // NOP
    // 0x21d310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21d310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21d314: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21d314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21d318: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21d318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21d31c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21d31cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d320: 0x52000017  beql        $s0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x21D320u;
    {
        const bool branch_taken_0x21d320 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d320) {
            ctx->pc = 0x21D324u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21D320u;
            // 0x21d324: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21D380u;
            goto label_21d380;
        }
    }
    ctx->pc = 0x21D328u;
    // 0x21d328: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21d328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21d32c: 0x2442e950  addiu       $v0, $v0, -0x16B0
    ctx->pc = 0x21d32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961488));
    // 0x21d330: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21D330u;
    {
        const bool branch_taken_0x21d330 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D330u;
            // 0x21d334: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d330) {
            ctx->pc = 0x21D354u;
            goto label_21d354;
        }
    }
    ctx->pc = 0x21D338u;
    // 0x21d338: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21d338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21d33c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x21d33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x21d340: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21D340u;
    {
        const bool branch_taken_0x21d340 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D340u;
            // 0x21d344: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d340) {
            ctx->pc = 0x21D354u;
            goto label_21d354;
        }
    }
    ctx->pc = 0x21D348u;
    // 0x21d348: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21d348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21d34c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x21d34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x21d350: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x21d350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_21d354:
    // 0x21d354: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x21d354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x21d358: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x21d358u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x21d35c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21D35Cu;
    {
        const bool branch_taken_0x21d35c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x21d35c) {
            ctx->pc = 0x21D37Cu;
            goto label_21d37c;
        }
    }
    ctx->pc = 0x21D364u;
    // 0x21d364: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x21d364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x21d368: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x21d368u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21d36c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x21d36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x21d370: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21d370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d374: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x21D374u;
    SET_GPR_U32(ctx, 31, 0x21D37Cu);
    ctx->pc = 0x21D378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D374u;
            // 0x21d378: 0x2407002a  addiu       $a3, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D37Cu; }
        if (ctx->pc != 0x21D37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D37Cu; }
        if (ctx->pc != 0x21D37Cu) { return; }
    }
    ctx->pc = 0x21D37Cu;
label_21d37c:
    // 0x21d37c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21d37cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21d380:
    // 0x21d380: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21d380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d384: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21d384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d388: 0x3e00008  jr          $ra
    ctx->pc = 0x21D388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D388u;
            // 0x21d38c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21D390u;
    // 0x21d390: 0x3e00008  jr          $ra
    ctx->pc = 0x21D390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D390u;
            // 0x21d394: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21D398u;
    // 0x21d398: 0x0  nop
    ctx->pc = 0x21d398u;
    // NOP
    // 0x21d39c: 0x0  nop
    ctx->pc = 0x21d39cu;
    // NOP
    // 0x21d3a0: 0x3e00008  jr          $ra
    ctx->pc = 0x21D3A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21D3A8u;
    // 0x21d3a8: 0x0  nop
    ctx->pc = 0x21d3a8u;
    // NOP
    // 0x21d3ac: 0x0  nop
    ctx->pc = 0x21d3acu;
    // NOP
}
