#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001100F0
// Address: 0x1100f0 - 0x110250
void sub_001100F0_0x1100f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001100F0_0x1100f0");
#endif

    switch (ctx->pc) {
        case 0x110100u: goto label_110100;
        case 0x110110u: goto label_110110;
        case 0x110168u: goto label_110168;
        case 0x1101a4u: goto label_1101a4;
        case 0x1101d0u: goto label_1101d0;
        case 0x11020cu: goto label_11020c;
        default: break;
    }

    ctx->pc = 0x1100f0u;

label_1100f0:
    // 0x1100f0: 0x8ca50028  lw          $a1, 0x28($a1)
    ctx->pc = 0x1100f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1100f4: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x1100F4u;
    {
        const bool branch_taken_0x1100f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1100f4) {
            ctx->pc = 0x110134u;
            goto label_110134;
        }
    }
    ctx->pc = 0x1100FCu;
    // 0x1100fc: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1100fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_110100:
    // 0x110100: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x110100u;
    {
        const bool branch_taken_0x110100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x110100) {
            ctx->pc = 0x110104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x110100u;
            // 0x110104: 0x8ca50014  lw          $a1, 0x14($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11012Cu;
            goto label_11012c;
        }
    }
    ctx->pc = 0x110108u;
    // 0x110108: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x110108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11010c: 0x0  nop
    ctx->pc = 0x11010cu;
    // NOP
label_110110:
    // 0x110110: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x110110u;
    {
        const bool branch_taken_0x110110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x110110) {
            ctx->pc = 0x110114u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x110110u;
            // 0x110114: 0x8c630038  lw          $v1, 0x38($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x110120u;
            goto label_110120;
        }
    }
    ctx->pc = 0x110118u;
    // 0x110118: 0x3e00008  jr          $ra
    ctx->pc = 0x110118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11011Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110118u;
            // 0x11011c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x110120u;
label_110120:
    // 0x110120: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x110120u;
    {
        const bool branch_taken_0x110120 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x110120) {
            ctx->pc = 0x110124u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x110120u;
            // 0x110124: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x110110u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_110110;
        }
    }
    ctx->pc = 0x110128u;
    // 0x110128: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x110128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_11012c:
    // 0x11012c: 0x54a0fff4  bnel        $a1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x11012Cu;
    {
        const bool branch_taken_0x11012c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x11012c) {
            ctx->pc = 0x110130u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11012Cu;
            // 0x110130: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x110100u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_110100;
        }
    }
    ctx->pc = 0x110134u;
label_110134:
    // 0x110134: 0x3e00008  jr          $ra
    ctx->pc = 0x110134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110134u;
            // 0x110138: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11013Cu;
    // 0x11013c: 0x0  nop
    ctx->pc = 0x11013cu;
    // NOP
    // 0x110140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x110144: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x110144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110148: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x110148u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x11014c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11014cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110150: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x110150u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x110154: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x110154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x110158: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x110158u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11015c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11015cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110160: 0xc043e1c  jal         func_10F870
    ctx->pc = 0x110160u;
    SET_GPR_U32(ctx, 31, 0x110168u);
    ctx->pc = 0x110164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x110160u;
            // 0x110164: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F870u;
    if (runtime->hasFunction(0x10F870u)) {
        auto targetFn = runtime->lookupFunction(0x10F870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110168u; }
        if (ctx->pc != 0x110168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F870_0x10f870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110168u; }
        if (ctx->pc != 0x110168u) { return; }
    }
    ctx->pc = 0x110168u;
label_110168:
    // 0x110168: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x110168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x11016c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11016cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110170: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x110170u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x110174: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x110174u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110178: 0x3e00008  jr          $ra
    ctx->pc = 0x110178u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11017Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110178u;
            // 0x11017c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x110180u;
    // 0x110180: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x110180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x110184: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x110184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x110188: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x110188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11018c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11018cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110190: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x110190u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110194: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x110194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x110198: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x110198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11019c: 0xc043f4e  jal         func_10FD38
    ctx->pc = 0x11019Cu;
    SET_GPR_U32(ctx, 31, 0x1101A4u);
    ctx->pc = 0x1101A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11019Cu;
            // 0x1101a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FD38u;
    if (runtime->hasFunction(0x10FD38u)) {
        auto targetFn = runtime->lookupFunction(0x10FD38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1101A4u; }
        if (ctx->pc != 0x1101A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010FD38_0x10fd38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1101A4u; }
        if (ctx->pc != 0x1101A4u) { return; }
    }
    ctx->pc = 0x1101A4u;
label_1101a4:
    // 0x1101a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1101a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1101a8: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1101a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1101ac: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1101acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1101b0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1101b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1101b4: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x1101b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x1101b8: 0xae44001c  sw          $a0, 0x1C($s2)
    ctx->pc = 0x1101b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 4));
    // 0x1101bc: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x1101bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x1101c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1101c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1101c4: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x1101c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x1101c8: 0xc04403c  jal         func_1100F0
    ctx->pc = 0x1101C8u;
    SET_GPR_U32(ctx, 31, 0x1101D0u);
    ctx->pc = 0x1101CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1101C8u;
            // 0x1101cc: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1100F0u;
    goto label_1100f0;
    ctx->pc = 0x1101D0u;
label_1101d0:
    // 0x1101d0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1101D0u;
    {
        const bool branch_taken_0x1101d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1101d0) {
            ctx->pc = 0x1101D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1101D0u;
            // 0x1101d4: 0xae420024  sw          $v0, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1101E4u;
            goto label_1101e4;
        }
    }
    ctx->pc = 0x1101D8u;
    // 0x1101d8: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x1101d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
    // 0x1101dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1101DCu;
    {
        const bool branch_taken_0x1101dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1101E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1101DCu;
            // 0x1101e0: 0xae400028  sw          $zero, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1101dc) {
            ctx->pc = 0x1101ECu;
            goto label_1101ec;
        }
    }
    ctx->pc = 0x1101E4u;
label_1101e4:
    // 0x1101e4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1101e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1101e8: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x1101e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
label_1101ec:
    // 0x1101ec: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1101ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1101f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1101f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1101f4: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x1101f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x1101f8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1101f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1101fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1101fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110200: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x110200u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110204: 0xc043e1c  jal         func_10F870
    ctx->pc = 0x110204u;
    SET_GPR_U32(ctx, 31, 0x11020Cu);
    ctx->pc = 0x110208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x110204u;
            // 0x110208: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F870u;
    if (runtime->hasFunction(0x10F870u)) {
        auto targetFn = runtime->lookupFunction(0x10F870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11020Cu; }
        if (ctx->pc != 0x11020Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F870_0x10f870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11020Cu; }
        if (ctx->pc != 0x11020Cu) { return; }
    }
    ctx->pc = 0x11020Cu;
label_11020c:
    // 0x11020c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11020Cu;
    {
        const bool branch_taken_0x11020c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11020Cu;
            // 0x110210: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11020c) {
            ctx->pc = 0x110238u;
            goto label_110238;
        }
    }
    ctx->pc = 0x110214u;
    // 0x110214: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x110214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110218: 0x3c050011  lui         $a1, 0x11
    ctx->pc = 0x110218u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17 << 16));
    // 0x11021c: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x11021cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x110220: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x110220u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x110224: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x110224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x110228: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x110228u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11022c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11022cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110230: 0x80460f0  j           func_1183C0
    ctx->pc = 0x110230u;
    ctx->pc = 0x110234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x110230u;
            // 0x110234: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1183C0u;
    {
        auto targetFn = runtime->lookupFunction(0x1183C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x110238u;
label_110238:
    // 0x110238: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x110238u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11023c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11023cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110240: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x110240u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110244: 0x3e00008  jr          $ra
    ctx->pc = 0x110244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110244u;
            // 0x110248: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11024Cu;
    // 0x11024c: 0x0  nop
    ctx->pc = 0x11024cu;
    // NOP
}
