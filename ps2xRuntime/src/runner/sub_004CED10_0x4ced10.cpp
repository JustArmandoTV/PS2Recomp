#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004CED10
// Address: 0x4ced10 - 0x4cee90
void sub_004CED10_0x4ced10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CED10_0x4ced10");
#endif

    switch (ctx->pc) {
        case 0x4ced3cu: goto label_4ced3c;
        case 0x4ced98u: goto label_4ced98;
        case 0x4cedb8u: goto label_4cedb8;
        case 0x4cedd4u: goto label_4cedd4;
        case 0x4cee00u: goto label_4cee00;
        case 0x4cee58u: goto label_4cee58;
        case 0x4cee70u: goto label_4cee70;
        default: break;
    }

    ctx->pc = 0x4ced10u;

    // 0x4ced10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4ced10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4ced14: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x4ced14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
    // 0x4ced18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4ced18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4ced1c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x4ced1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4ced20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ced20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4ced24: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4ced24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4ced28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ced28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4ced2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ced2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ced30: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4ced30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ced34: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x4CED34u;
    SET_GPR_U32(ctx, 31, 0x4CED3Cu);
    ctx->pc = 0x4CED38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CED34u;
            // 0x4ced38: 0x3445d571  ori         $a1, $v0, 0xD571 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54641);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CED3Cu; }
        if (ctx->pc != 0x4CED3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CED3Cu; }
        if (ctx->pc != 0x4CED3Cu) { return; }
    }
    ctx->pc = 0x4CED3Cu;
label_4ced3c:
    // 0x4ced3c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4ced3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4ced40: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4ced40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4ced44: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x4ced44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
    // 0x4ced48: 0x103e3c  dsll32      $a3, $s0, 24
    ctx->pc = 0x4ced48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) << (32 + 24));
    // 0x4ced4c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4ced4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4ced50: 0x24631d60  addiu       $v1, $v1, 0x1D60
    ctx->pc = 0x4ced50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7520));
    // 0x4ced54: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ced54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4ced58: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4ced58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4ced5c: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x4ced5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
    // 0x4ced60: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x4ced60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x4ced64: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x4ced64u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
    // 0x4ced68: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4ced68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4ced6c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x4ced6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x4ced70: 0x24c67ad8  addiu       $a2, $a2, 0x7AD8
    ctx->pc = 0x4ced70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31448));
    // 0x4ced74: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x4ced74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4ced78: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x4ced78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4ced7c: 0x9043042c  lbu         $v1, 0x42C($v0)
    ctx->pc = 0x4ced7cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1068)));
    // 0x4ced80: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x4ced80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x4ced84: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4ced84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4ced88: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4ced88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4ced8c: 0xa222005c  sb          $v0, 0x5C($s1)
    ctx->pc = 0x4ced8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 92), (uint8_t)GPR_U32(ctx, 2));
    // 0x4ced90: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x4CED90u;
    SET_GPR_U32(ctx, 31, 0x4CED98u);
    ctx->pc = 0x4CED94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CED90u;
            // 0x4ced94: 0xa230005d  sb          $s0, 0x5D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 93), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CED98u; }
        if (ctx->pc != 0x4CED98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CED98u; }
        if (ctx->pc != 0x4CED98u) { return; }
    }
    ctx->pc = 0x4CED98u;
label_4ced98:
    // 0x4ced98: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ced98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4ced9c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x4ced9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4ceda0: 0x8c42a348  lw          $v0, -0x5CB8($v0)
    ctx->pc = 0x4ceda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943560)));
    // 0x4ceda4: 0x26260058  addiu       $a2, $s1, 0x58
    ctx->pc = 0x4ceda4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x4ceda8: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x4ceda8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x4cedac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4cedacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cedb0: 0xc0aa5d8  jal         func_2A9760
    ctx->pc = 0x4CEDB0u;
    SET_GPR_U32(ctx, 31, 0x4CEDB8u);
    ctx->pc = 0x4CEDB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CEDB0u;
            // 0x4cedb4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CEDB8u; }
        if (ctx->pc != 0x4CEDB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CEDB8u; }
        if (ctx->pc != 0x4CEDB8u) { return; }
    }
    ctx->pc = 0x4CEDB8u;
label_4cedb8:
    // 0x4cedb8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4cedb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4cedbc: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x4cedbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x4cedc0: 0x8c440e68  lw          $a0, 0xE68($v0)
    ctx->pc = 0x4cedc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
    // 0x4cedc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4cedc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cedc8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4cedc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cedcc: 0xc0fd020  jal         func_3F4080
    ctx->pc = 0x4CEDCCu;
    SET_GPR_U32(ctx, 31, 0x4CEDD4u);
    ctx->pc = 0x4CEDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CEDCCu;
            // 0x4cedd0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F4080u;
    if (runtime->hasFunction(0x3F4080u)) {
        auto targetFn = runtime->lookupFunction(0x3F4080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CEDD4u; }
        if (ctx->pc != 0x4CEDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F4080_0x3f4080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CEDD4u; }
        if (ctx->pc != 0x4CEDD4u) { return; }
    }
    ctx->pc = 0x4CEDD4u;
label_4cedd4:
    // 0x4cedd4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4cedd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cedd8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4cedd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ceddc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ceddcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cede0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4cede0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cede4: 0x3e00008  jr          $ra
    ctx->pc = 0x4CEDE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CEDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CEDE4u;
            // 0x4cede8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CEDECu;
    // 0x4cedec: 0x0  nop
    ctx->pc = 0x4cedecu;
    // NOP
    // 0x4cedf0: 0x24030898  addiu       $v1, $zero, 0x898
    ctx->pc = 0x4cedf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
    // 0x4cedf4: 0x3e00008  jr          $ra
    ctx->pc = 0x4CEDF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CEDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CEDF4u;
            // 0x4cedf8: 0xac830054  sw          $v1, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CEDFCu;
    // 0x4cedfc: 0x0  nop
    ctx->pc = 0x4cedfcu;
    // NOP
label_4cee00:
    // 0x4cee00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4cee00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4cee04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4cee04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4cee08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4cee08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4cee0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4cee0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4cee10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4cee10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cee14: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x4CEE14u;
    {
        const bool branch_taken_0x4cee14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CEE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CEE14u;
            // 0x4cee18: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cee14) {
            ctx->pc = 0x4CEE70u;
            goto label_4cee70;
        }
    }
    ctx->pc = 0x4CEE1Cu;
    // 0x4cee1c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4cee1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4cee20: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4cee20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4cee24: 0x24631d90  addiu       $v1, $v1, 0x1D90
    ctx->pc = 0x4cee24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7568));
    // 0x4cee28: 0x24421dc8  addiu       $v0, $v0, 0x1DC8
    ctx->pc = 0x4cee28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7624));
    // 0x4cee2c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4cee2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4cee30: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4CEE30u;
    {
        const bool branch_taken_0x4cee30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CEE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CEE30u;
            // 0x4cee34: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cee30) {
            ctx->pc = 0x4CEE58u;
            goto label_4cee58;
        }
    }
    ctx->pc = 0x4CEE38u;
    // 0x4cee38: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4cee38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4cee3c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4cee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4cee40: 0x24631e40  addiu       $v1, $v1, 0x1E40
    ctx->pc = 0x4cee40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7744));
    // 0x4cee44: 0x24421e78  addiu       $v0, $v0, 0x1E78
    ctx->pc = 0x4cee44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7800));
    // 0x4cee48: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4cee48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4cee4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4cee4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cee50: 0xc133ba4  jal         func_4CEE90
    ctx->pc = 0x4CEE50u;
    SET_GPR_U32(ctx, 31, 0x4CEE58u);
    ctx->pc = 0x4CEE54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CEE50u;
            // 0x4cee54: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CEE90u;
    if (runtime->hasFunction(0x4CEE90u)) {
        auto targetFn = runtime->lookupFunction(0x4CEE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CEE58u; }
        if (ctx->pc != 0x4CEE58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CEE90_0x4cee90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CEE58u; }
        if (ctx->pc != 0x4CEE58u) { return; }
    }
    ctx->pc = 0x4CEE58u;
label_4cee58:
    // 0x4cee58: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4cee58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x4cee5c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4cee5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4cee60: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4CEE60u;
    {
        const bool branch_taken_0x4cee60 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4cee60) {
            ctx->pc = 0x4CEE64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CEE60u;
            // 0x4cee64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CEE74u;
            goto label_4cee74;
        }
    }
    ctx->pc = 0x4CEE68u;
    // 0x4cee68: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4CEE68u;
    SET_GPR_U32(ctx, 31, 0x4CEE70u);
    ctx->pc = 0x4CEE6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CEE68u;
            // 0x4cee6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CEE70u; }
        if (ctx->pc != 0x4CEE70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CEE70u; }
        if (ctx->pc != 0x4CEE70u) { return; }
    }
    ctx->pc = 0x4CEE70u;
label_4cee70:
    // 0x4cee70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4cee70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4cee74:
    // 0x4cee74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4cee74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4cee78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4cee78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cee7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4cee7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cee80: 0x3e00008  jr          $ra
    ctx->pc = 0x4CEE80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CEE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CEE80u;
            // 0x4cee84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CEE88u;
    // 0x4cee88: 0x0  nop
    ctx->pc = 0x4cee88u;
    // NOP
    // 0x4cee8c: 0x0  nop
    ctx->pc = 0x4cee8cu;
    // NOP
}
