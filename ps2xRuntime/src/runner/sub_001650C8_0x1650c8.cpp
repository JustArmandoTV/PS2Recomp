#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001650C8
// Address: 0x1650c8 - 0x1651c8
void sub_001650C8_0x1650c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001650C8_0x1650c8");
#endif

    switch (ctx->pc) {
        case 0x16511cu: goto label_16511c;
        case 0x165134u: goto label_165134;
        default: break;
    }

    ctx->pc = 0x1650c8u;

    // 0x1650c8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1650c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1650cc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1650ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1650d0: 0x2ca50004  sltiu       $a1, $a1, 0x4
    ctx->pc = 0x1650d0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1650d4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1650d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1650d8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1650d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1650dc: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x1650dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1650e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1650e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1650e4: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x1650e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1650e8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1650e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1650ec: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x1650ecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1650f0: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1650f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1650f4: 0x14a0002a  bnez        $a1, . + 4 + (0x2A << 2)
    ctx->pc = 0x1650F4u;
    {
        const bool branch_taken_0x1650f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1650F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1650F4u;
            // 0x1650f8: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1650f4) {
            ctx->pc = 0x1651A0u;
            goto label_1651a0;
        }
    }
    ctx->pc = 0x1650FCu;
    // 0x1650fc: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x1650fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x165100: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x165100u;
    {
        const bool branch_taken_0x165100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165100) {
            ctx->pc = 0x165104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x165100u;
            // 0x165104: 0x2cc20008  sltiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x165140u;
            goto label_165140;
        }
    }
    ctx->pc = 0x165108u;
    // 0x165108: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x165108u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x16510c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x16510cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165110: 0x24a532b0  addiu       $a1, $a1, 0x32B0
    ctx->pc = 0x165110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12976));
    // 0x165114: 0xc04ae62  jal         func_12B988
    ctx->pc = 0x165114u;
    SET_GPR_U32(ctx, 31, 0x16511Cu);
    ctx->pc = 0x165118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165114u;
            // 0x165118: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B988u;
    if (runtime->hasFunction(0x12B988u)) {
        auto targetFn = runtime->lookupFunction(0x12B988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16511Cu; }
        if (ctx->pc != 0x16511Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B988_0x12b988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16511Cu; }
        if (ctx->pc != 0x16511Cu) { return; }
    }
    ctx->pc = 0x16511Cu;
label_16511c:
    // 0x16511c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x16511cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x165120: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x165120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165124: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x165124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165128: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x165128u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16512c: 0xc059104  jal         func_164410
    ctx->pc = 0x16512Cu;
    SET_GPR_U32(ctx, 31, 0x165134u);
    ctx->pc = 0x165130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16512Cu;
            // 0x165130: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164410u;
    if (runtime->hasFunction(0x164410u)) {
        auto targetFn = runtime->lookupFunction(0x164410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165134u; }
        if (ctx->pc != 0x165134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164410_0x164410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165134u; }
        if (ctx->pc != 0x165134u) { return; }
    }
    ctx->pc = 0x165134u;
label_165134:
    // 0x165134: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x165134u;
    {
        const bool branch_taken_0x165134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165134u;
            // 0x165138: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165134) {
            ctx->pc = 0x1651B0u;
            goto label_1651b0;
        }
    }
    ctx->pc = 0x16513Cu;
    // 0x16513c: 0x0  nop
    ctx->pc = 0x16513cu;
    // NOP
label_165140:
    // 0x165140: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x165140u;
    {
        const bool branch_taken_0x165140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165140) {
            ctx->pc = 0x165144u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x165140u;
            // 0x165144: 0xa6000000  sh          $zero, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1651A4u;
            goto label_1651a4;
        }
    }
    ctx->pc = 0x165148u;
    // 0x165148: 0x8d6200a0  lw          $v0, 0xA0($t3)
    ctx->pc = 0x165148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 160)));
    // 0x16514c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x16514Cu;
    {
        const bool branch_taken_0x16514c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16514c) {
            ctx->pc = 0x165150u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16514Cu;
            // 0x165150: 0x956200a0  lhu         $v0, 0xA0($t3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x165188u;
            goto label_165188;
        }
    }
    ctx->pc = 0x165154u;
    // 0x165154: 0x856200a4  lh          $v0, 0xA4($t3)
    ctx->pc = 0x165154u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 164)));
    // 0x165158: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x165158u;
    {
        const bool branch_taken_0x165158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165158) {
            ctx->pc = 0x16515Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x165158u;
            // 0x16515c: 0x956200a0  lhu         $v0, 0xA0($t3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x165188u;
            goto label_165188;
        }
    }
    ctx->pc = 0x165160u;
    // 0x165160: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x165160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x165164: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x165164u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x165168: 0x944361f4  lhu         $v1, 0x61F4($v0)
    ctx->pc = 0x165168u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 25076)));
    // 0x16516c: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x16516cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
    // 0x165170: 0xa56300a0  sh          $v1, 0xA0($t3)
    ctx->pc = 0x165170u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 160), (uint16_t)GPR_U32(ctx, 3));
    // 0x165174: 0x948261f6  lhu         $v0, 0x61F6($a0)
    ctx->pc = 0x165174u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 25078)));
    // 0x165178: 0xa56200a2  sh          $v0, 0xA2($t3)
    ctx->pc = 0x165178u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 162), (uint16_t)GPR_U32(ctx, 2));
    // 0x16517c: 0x94a361f8  lhu         $v1, 0x61F8($a1)
    ctx->pc = 0x16517cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 25080)));
    // 0x165180: 0xa56300a4  sh          $v1, 0xA4($t3)
    ctx->pc = 0x165180u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 164), (uint16_t)GPR_U32(ctx, 3));
    // 0x165184: 0x956200a0  lhu         $v0, 0xA0($t3)
    ctx->pc = 0x165184u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 160)));
label_165188:
    // 0x165188: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x165188u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x16518c: 0x956300a2  lhu         $v1, 0xA2($t3)
    ctx->pc = 0x16518cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 162)));
    // 0x165190: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x165190u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x165194: 0x956200a4  lhu         $v0, 0xA4($t3)
    ctx->pc = 0x165194u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 164)));
    // 0x165198: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x165198u;
    {
        const bool branch_taken_0x165198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16519Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165198u;
            // 0x16519c: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165198) {
            ctx->pc = 0x1651ACu;
            goto label_1651ac;
        }
    }
    ctx->pc = 0x1651A0u;
label_1651a0:
    // 0x1651a0: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x1651a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
label_1651a4:
    // 0x1651a4: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x1651a4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1651a8: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x1651a8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
label_1651ac:
    // 0x1651ac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1651acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1651b0:
    // 0x1651b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1651b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1651b4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1651b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1651b8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1651b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1651bc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1651bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1651c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1651C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1651C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1651C0u;
            // 0x1651c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1651C8u;
}
