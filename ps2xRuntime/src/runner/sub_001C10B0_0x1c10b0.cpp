#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C10B0
// Address: 0x1c10b0 - 0x1c11b8
void sub_001C10B0_0x1c10b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C10B0_0x1c10b0");
#endif

    switch (ctx->pc) {
        case 0x1c1104u: goto label_1c1104;
        case 0x1c1118u: goto label_1c1118;
        case 0x1c112cu: goto label_1c112c;
        default: break;
    }

    ctx->pc = 0x1c10b0u;

    // 0x1c10b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c10b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c10b4: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C10B4u;
    {
        const bool branch_taken_0x1c10b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C10B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C10B4u;
            // 0x1c10b8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c10b4) {
            ctx->pc = 0x1C10D8u;
            goto label_1c10d8;
        }
    }
    ctx->pc = 0x1C10BCu;
    // 0x1c10bc: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c10bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c10c0: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c10c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c10c4: 0x2484b8c8  addiu       $a0, $a0, -0x4738
    ctx->pc = 0x1c10c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949064));
    // 0x1c10c8: 0x24c6b908  addiu       $a2, $a2, -0x46F8
    ctx->pc = 0x1c10c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949128));
    // 0x1c10cc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1C10CCu;
    {
        const bool branch_taken_0x1c10cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C10D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C10CCu;
            // 0x1c10d0: 0x240501cf  addiu       $a1, $zero, 0x1CF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 463));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c10cc) {
            ctx->pc = 0x1C10F8u;
            goto label_1c10f8;
        }
    }
    ctx->pc = 0x1C10D4u;
    // 0x1c10d4: 0x0  nop
    ctx->pc = 0x1c10d4u;
    // NOP
label_1c10d8:
    // 0x1c10d8: 0x84820034  lh          $v0, 0x34($a0)
    ctx->pc = 0x1c10d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1c10dc: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1C10DCu;
    {
        const bool branch_taken_0x1c10dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c10dc) {
            ctx->pc = 0x1C10E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C10DCu;
            // 0x1c10e0: 0x84820038  lh          $v0, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C1108u;
            goto label_1c1108;
        }
    }
    ctx->pc = 0x1C10E4u;
    // 0x1c10e4: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c10e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c10e8: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c10e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c10ec: 0x2484b8c8  addiu       $a0, $a0, -0x4738
    ctx->pc = 0x1c10ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949064));
    // 0x1c10f0: 0x24c6b908  addiu       $a2, $a2, -0x46F8
    ctx->pc = 0x1c10f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949128));
    // 0x1c10f4: 0x240501d3  addiu       $a1, $zero, 0x1D3
    ctx->pc = 0x1c10f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 467));
label_1c10f8:
    // 0x1c10f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c10f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c10fc: 0xc0711fe  jal         func_1C47F8
    ctx->pc = 0x1C10FCu;
    SET_GPR_U32(ctx, 31, 0x1C1104u);
    ctx->pc = 0x1C1100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C10FCu;
            // 0x1c1100: 0x2408ff9b  addiu       $t0, $zero, -0x65 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967195));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1104u; }
        if (ctx->pc != 0x1C1104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1104u; }
        if (ctx->pc != 0x1C1104u) { return; }
    }
    ctx->pc = 0x1C1104u;
label_1c1104:
    // 0x1c1104: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c1104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c1108:
    // 0x1c1108: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c1108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c110c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C110Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C110Cu;
            // 0x1c1110: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1114u;
    // 0x1c1114: 0x0  nop
    ctx->pc = 0x1c1114u;
    // NOP
label_1c1118:
    // 0x1c1118: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c1118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c111c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c111cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c1120: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c1120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c1124: 0xc071236  jal         func_1C48D8
    ctx->pc = 0x1C1124u;
    SET_GPR_U32(ctx, 31, 0x1C112Cu);
    ctx->pc = 0x1C1128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1124u;
            // 0x1c1128: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C48D8u;
    if (runtime->hasFunction(0x1C48D8u)) {
        auto targetFn = runtime->lookupFunction(0x1C48D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C112Cu; }
        if (ctx->pc != 0x1C112Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C48D8_0x1c48d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C112Cu; }
        if (ctx->pc != 0x1C112Cu) { return; }
    }
    ctx->pc = 0x1C112Cu;
label_1c112c:
    // 0x1c112c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c112cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c1130: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c1130u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c1134: 0x2484b8c8  addiu       $a0, $a0, -0x4738
    ctx->pc = 0x1c1134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949064));
    // 0x1c1138: 0x24c6b918  addiu       $a2, $a2, -0x46E8
    ctx->pc = 0x1c1138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949144));
    // 0x1c113c: 0x240501e5  addiu       $a1, $zero, 0x1E5
    ctx->pc = 0x1c113cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 485));
    // 0x1c1140: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c1140u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1144: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C1144u;
    {
        const bool branch_taken_0x1c1144 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1144u;
            // 0x1c1148: 0x2408ff9b  addiu       $t0, $zero, -0x65 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1144) {
            ctx->pc = 0x1C1160u;
            goto label_1c1160;
        }
    }
    ctx->pc = 0x1C114Cu;
    // 0x1c114c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c114cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1150: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c1150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c1154: 0x80711fe  j           func_1C47F8
    ctx->pc = 0x1C1154u;
    ctx->pc = 0x1C1158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1154u;
            // 0x1c1158: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C115Cu;
    // 0x1c115c: 0x0  nop
    ctx->pc = 0x1c115cu;
    // NOP
label_1c1160:
    // 0x1c1160: 0x86020034  lh          $v0, 0x34($s0)
    ctx->pc = 0x1c1160u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1c1164: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1C1164u;
    {
        const bool branch_taken_0x1c1164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1164) {
            ctx->pc = 0x1C1168u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1164u;
            // 0x1c1168: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C1198u;
            goto label_1c1198;
        }
    }
    ctx->pc = 0x1C116Cu;
    // 0x1c116c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c116cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c1170: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c1170u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c1174: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1178: 0x2484b8c8  addiu       $a0, $a0, -0x4738
    ctx->pc = 0x1c1178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949064));
    // 0x1c117c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c117cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c1180: 0x24c6b918  addiu       $a2, $a2, -0x46E8
    ctx->pc = 0x1c1180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949144));
    // 0x1c1184: 0x240501e8  addiu       $a1, $zero, 0x1E8
    ctx->pc = 0x1c1184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 488));
    // 0x1c1188: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c1188u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c118c: 0x2408ff9b  addiu       $t0, $zero, -0x65
    ctx->pc = 0x1c118cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967195));
    // 0x1c1190: 0x80711fe  j           func_1C47F8
    ctx->pc = 0x1C1190u;
    ctx->pc = 0x1C1194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1190u;
            // 0x1c1194: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C1198u;
label_1c1198:
    // 0x1c1198: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1c1198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1c119c: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x1c119cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x1c11a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c11a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c11a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c11a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c11a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c11a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c11ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1C11ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C11B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C11ACu;
            // 0x1c11b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C11B4u;
    // 0x1c11b4: 0x0  nop
    ctx->pc = 0x1c11b4u;
    // NOP
}
