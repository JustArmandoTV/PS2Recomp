#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001305E0
// Address: 0x1305e0 - 0x1306f0
void sub_001305E0_0x1305e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001305E0_0x1305e0");
#endif

    switch (ctx->pc) {
        case 0x130620u: goto label_130620;
        case 0x130664u: goto label_130664;
        case 0x1306a0u: goto label_1306a0;
        case 0x1306c8u: goto label_1306c8;
        default: break;
    }

    ctx->pc = 0x1305e0u;

    // 0x1305e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1305e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1305e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1305e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1305e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1305e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1305ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1305ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1305f0: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x1305f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x1305f4: 0x54800006  bnel        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1305F4u;
    {
        const bool branch_taken_0x1305f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1305f4) {
            ctx->pc = 0x1305F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1305F4u;
            // 0x1305f8: 0x8c8f0038  lw          $t7, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x130610u;
            goto label_130610;
        }
    }
    ctx->pc = 0x1305FCu;
    // 0x1305fc: 0x3c0f005d  lui         $t7, 0x5D
    ctx->pc = 0x1305fcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)93 << 16));
    // 0x130600: 0x8dee1ad8  lw          $t6, 0x1AD8($t7)
    ctx->pc = 0x130600u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 6872)));
    // 0x130604: 0xae0e0054  sw          $t6, 0x54($s0)
    ctx->pc = 0x130604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 14));
    // 0x130608: 0x1c0202d  daddu       $a0, $t6, $zero
    ctx->pc = 0x130608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13060c: 0x8c8f0038  lw          $t7, 0x38($a0)
    ctx->pc = 0x13060cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_130610:
    // 0x130610: 0x55e00004  bnel        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x130610u;
    {
        const bool branch_taken_0x130610 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x130610) {
            ctx->pc = 0x130614u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x130610u;
            // 0x130614: 0x960e000c  lhu         $t6, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x130624u;
            goto label_130624;
        }
    }
    ctx->pc = 0x130618u;
    // 0x130618: 0xc049e72  jal         func_1279C8
    ctx->pc = 0x130618u;
    SET_GPR_U32(ctx, 31, 0x130620u);
    ctx->pc = 0x1279C8u;
    if (runtime->hasFunction(0x1279C8u)) {
        auto targetFn = runtime->lookupFunction(0x1279C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130620u; }
        if (ctx->pc != 0x130620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001279C8_0x1279c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130620u; }
        if (ctx->pc != 0x130620u) { return; }
    }
    ctx->pc = 0x130620u;
label_130620:
    // 0x130620: 0x960e000c  lhu         $t6, 0xC($s0)
    ctx->pc = 0x130620u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_130624:
    // 0x130624: 0x31cf0008  andi        $t7, $t6, 0x8
    ctx->pc = 0x130624u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)8);
    // 0x130628: 0x55e00019  bnel        $t7, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x130628u;
    {
        const bool branch_taken_0x130628 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x130628) {
            ctx->pc = 0x13062Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x130628u;
            // 0x13062c: 0x8e0d0010  lw          $t5, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x130690u;
            goto label_130690;
        }
    }
    ctx->pc = 0x130630u;
    // 0x130630: 0x31cf0010  andi        $t7, $t6, 0x10
    ctx->pc = 0x130630u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)16);
    // 0x130634: 0x11e00025  beqz        $t7, . + 4 + (0x25 << 2)
    ctx->pc = 0x130634u;
    {
        const bool branch_taken_0x130634 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x130638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130634u;
            // 0x130638: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130634) {
            ctx->pc = 0x1306CCu;
            goto label_1306cc;
        }
    }
    ctx->pc = 0x13063Cu;
    // 0x13063c: 0x31cf0004  andi        $t7, $t6, 0x4
    ctx->pc = 0x13063cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)4);
    // 0x130640: 0x51e00011  beql        $t7, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x130640u;
    {
        const bool branch_taken_0x130640 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x130640) {
            ctx->pc = 0x130644u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x130640u;
            // 0x130644: 0x8e0d0010  lw          $t5, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x130688u;
            goto label_130688;
        }
    }
    ctx->pc = 0x130648u;
    // 0x130648: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x130648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x13064c: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13064Cu;
    {
        const bool branch_taken_0x13064c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x130650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13064Cu;
            // 0x130650: 0x260f0040  addiu       $t7, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13064c) {
            ctx->pc = 0x13066Cu;
            goto label_13066c;
        }
    }
    ctx->pc = 0x130654u;
    // 0x130654: 0x50af0005  beql        $a1, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x130654u;
    {
        const bool branch_taken_0x130654 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 15));
        if (branch_taken_0x130654) {
            ctx->pc = 0x130658u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x130654u;
            // 0x130658: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13066Cu;
            goto label_13066c;
        }
    }
    ctx->pc = 0x13065Cu;
    // 0x13065c: 0xc049ee4  jal         func_127B90
    ctx->pc = 0x13065Cu;
    SET_GPR_U32(ctx, 31, 0x130664u);
    ctx->pc = 0x130660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13065Cu;
            // 0x130660: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127B90u;
    if (runtime->hasFunction(0x127B90u)) {
        auto targetFn = runtime->lookupFunction(0x127B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130664u; }
        if (ctx->pc != 0x130664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127B90_0x127b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130664u; }
        if (ctx->pc != 0x130664u) { return; }
    }
    ctx->pc = 0x130664u;
label_130664:
    // 0x130664: 0x960e000c  lhu         $t6, 0xC($s0)
    ctx->pc = 0x130664u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x130668: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x130668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_13066c:
    // 0x13066c: 0x8e0d0010  lw          $t5, 0x10($s0)
    ctx->pc = 0x13066cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x130670: 0x240fffdb  addiu       $t7, $zero, -0x25
    ctx->pc = 0x130670u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967259));
    // 0x130674: 0x1cf7824  and         $t7, $t6, $t7
    ctx->pc = 0x130674u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & GPR_U64(ctx, 15));
    // 0x130678: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x130678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x13067c: 0xa60f000c  sh          $t7, 0xC($s0)
    ctx->pc = 0x13067cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
    // 0x130680: 0x1e0702d  daddu       $t6, $t7, $zero
    ctx->pc = 0x130680u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130684: 0xae0d0000  sw          $t5, 0x0($s0)
    ctx->pc = 0x130684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 13));
label_130688:
    // 0x130688: 0x35cf0008  ori         $t7, $t6, 0x8
    ctx->pc = 0x130688u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)8);
    // 0x13068c: 0xa60f000c  sh          $t7, 0xC($s0)
    ctx->pc = 0x13068cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
label_130690:
    // 0x130690: 0x55a00004  bnel        $t5, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x130690u;
    {
        const bool branch_taken_0x130690 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x130690) {
            ctx->pc = 0x130694u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x130690u;
            // 0x130694: 0x960e000c  lhu         $t6, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1306A4u;
            goto label_1306a4;
        }
    }
    ctx->pc = 0x130698u;
    // 0x130698: 0xc04a16e  jal         func_1285B8
    ctx->pc = 0x130698u;
    SET_GPR_U32(ctx, 31, 0x1306A0u);
    ctx->pc = 0x13069Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130698u;
            // 0x13069c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1285B8u;
    if (runtime->hasFunction(0x1285B8u)) {
        auto targetFn = runtime->lookupFunction(0x1285B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1306A0u; }
        if (ctx->pc != 0x1306A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001285B8_0x1285b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1306A0u; }
        if (ctx->pc != 0x1306A0u) { return; }
    }
    ctx->pc = 0x1306A0u;
label_1306a0:
    // 0x1306a0: 0x960e000c  lhu         $t6, 0xC($s0)
    ctx->pc = 0x1306a0u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_1306a4:
    // 0x1306a4: 0x31cf0001  andi        $t7, $t6, 0x1
    ctx->pc = 0x1306a4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
    // 0x1306a8: 0xf7c00  sll         $t7, $t7, 16
    ctx->pc = 0x1306a8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 16));
    // 0x1306ac: 0xf7c03  sra         $t7, $t7, 16
    ctx->pc = 0x1306acu;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 16));
    // 0x1306b0: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1306B0u;
    {
        const bool branch_taken_0x1306b0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1306B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1306B0u;
            // 0x1306b4: 0x31cf0002  andi        $t7, $t6, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1306b0) {
            ctx->pc = 0x1306DCu;
            goto label_1306dc;
        }
    }
    ctx->pc = 0x1306B8u;
    // 0x1306b8: 0x8e0f0014  lw          $t7, 0x14($s0)
    ctx->pc = 0x1306b8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1306bc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1306bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1306c0: 0xf7823  negu        $t7, $t7
    ctx->pc = 0x1306c0u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 15)));
    // 0x1306c4: 0xae0f0018  sw          $t7, 0x18($s0)
    ctx->pc = 0x1306c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
label_1306c8:
    // 0x1306c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1306c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1306cc:
    // 0x1306cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1306ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1306d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1306d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1306d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1306D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1306D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1306D4u;
            // 0x1306d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1306DCu;
label_1306dc:
    // 0x1306dc: 0x15e00002  bnez        $t7, . + 4 + (0x2 << 2)
    ctx->pc = 0x1306DCu;
    {
        const bool branch_taken_0x1306dc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1306E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1306DCu;
            // 0x1306e0: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1306dc) {
            ctx->pc = 0x1306E8u;
            goto label_1306e8;
        }
    }
    ctx->pc = 0x1306E4u;
    // 0x1306e4: 0x8e0e0014  lw          $t6, 0x14($s0)
    ctx->pc = 0x1306e4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1306e8:
    // 0x1306e8: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x1306E8u;
    {
        const bool branch_taken_0x1306e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1306ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1306E8u;
            // 0x1306ec: 0xae0e0008  sw          $t6, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1306e8) {
            ctx->pc = 0x1306C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1306c8;
        }
    }
    ctx->pc = 0x1306F0u;
}
